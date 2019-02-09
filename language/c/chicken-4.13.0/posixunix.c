/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: posixunix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixunix.c
   unit: posix
*/

#include "chicken.h"


#include <signal.h>
#include <errno.h>

#include <sys/stat.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#define C_curdir(buf)       (getcwd(C_c_string(buf), 1024) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

static C_TLS struct stat C_statbuf;

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

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
#define C_a_mktime(ptr, c, v, tm)  C_flonum(ptr, mktime(C_tm_set((v), C_data_pointer(tm))))
#define C_asctime(v, tm)    (asctime(C_tm_set((v), (tm))))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_opendir(x,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b,l)    (C_strlcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name, l), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#ifdef HAVE_SETENV
# define C_unsetenv(s)      (unsetenv((char *)C_data_pointer(s)), C_SCHEME_TRUE)
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
# if defined(_WIN32) && !defined(__CYGWIN__)
#  define C_unsetenv(s)      C_setenv(s, C_SCHEME_FALSE)
# else
#  define C_unsetenv(s)      C_fix(putenv((char *)C_data_pointer(s)))
# endif
static C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_c_string(x),
       *sy = (y == C_SCHEME_FALSE ? "" : C_c_string(y));
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  int buf_len = n1 + n2 + 2;
  char *buf = (char *)C_malloc(buf_len);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strlcpy(buf, sx, buf_len);
    C_strlcat(buf, "=", buf_len);
    C_strlcat(buf, sy, buf_len);
    return(C_fix(putenv(buf)));
  }
}
#endif

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
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun) && defined(__SVR4)
# include <sys/tty.h>
# include <termios.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <sys/poll.h>

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

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
static C_TLS struct {
  char *gr_name, gr_passwd;
  int gr_gid;
  char *gr_mem[ 1 ];
} C_group = { "", "", 0, { "" } };
#endif

/* Android doesn't provide pw_gecos in the passwd struct */
#ifdef __ANDROID__
# define C_PW_GECOS ("")
#else
# define C_PW_GECOS (C_user->pw_gecos)
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

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
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_do_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#if !defined(__ANDROID__) && defined(HAVE_GRP_H)
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_uname             C_fix(uname(&C_utsname))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))

#define C_u_i_execvp(f,a)   C_fix(execvp(C_data_pointer(f), (char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_data_pointer(f), (char *const *)C_c_pointer_vector_or_null(a), (char *const *)C_c_pointer_vector_or_null(e)))

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
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
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

#define C_a_timegm(ptr, c, v, tm)  C_flonum(ptr, C_timegm(C_tm_set((v), C_data_pointer(tm))))

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

static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))

#if !defined(__ANDROID__) && defined(TIOCGWINSZ)
static int get_tty_size(int p, int *rows, int *cols)
{
 struct winsize tty_size;
 int r;

 memset(&tty_size, 0, sizeof tty_size);

 r = ioctl(p, TIOCGWINSZ, &tty_size);
 if (r == 0) {
    *rows = tty_size.ws_row;
    *cols = tty_size.ws_col;
 }
 return r;
}
#else
static int get_tty_size(int p, int *rows, int *cols)
{
 *rows = *cols = 0;
 return -1;
}
#endif

static int set_file_mtime(char *filename, C_word tm)
{
  struct utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return utime(filename, &tb);
}

static C_word C_i_fifo_p(C_word name) 
{
  struct stat buf;
  int res;

  res = stat(C_c_string(name), &buf);

  if(res != 0) {
#ifdef __CYGWIN__
    return C_SCHEME_FALSE;
#else
    if(errno == ENOENT) return C_fix(0);
    else return C_fix(res);
#endif
  }

  if((buf.st_mode & S_IFMT) == S_IFIFO) return C_SCHEME_TRUE;
  else return C_SCHEME_FALSE;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[471];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,55,49,32,108,111,99,55,50,32,109,115,103,55,51,32,46,32,97,114,103,115,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,54,32,108,105,110,107,56,55,32,101,114,114,56,56,32,108,111,99,56,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,115,116,97,116,32,102,49,48,49,32,46,32,116,109,112,49,48,48,49,48,50,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,49,50,55,41,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,49,51,48,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,49,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,49,51,54,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,102,105,108,101,45,115,105,122,101,32,102,49,51,57,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,116,121,112,101,32,102,105,108,101,49,52,54,32,46,32,116,109,112,49,52,53,49,52,55,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,23),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,49,54,53,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,24),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,49,54,55,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,49,54,57,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,27),40,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,49,55,49,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,57,54,55,32,102,105,108,101,49,55,51,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,115,111,99,107,101,116,63,32,102,105,108,101,49,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,55,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,56,50,32,112,111,115,49,56,51,32,46,32,119,104,101,110,99,101,49,56,52,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,50,48,54,32,109,50,48,55,32,108,111,99,50,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,50,50,48,32,102,100,50,50,49,32,105,110,112,50,50,50,32,114,50,50,51,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,50,50,54,32,46,32,109,50,50,55,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,50,50,57,32,46,32,109,50,51,48,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,50,51,54,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,50,52,53,32,46,32,110,101,119,50,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,53,54,50,53,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,56,51,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,50,56,57,32,102,50,57,56,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,56,32,103,50,57,53,51,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,55,53,32,46,32,116,109,112,50,55,52,50,55,54,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,51,50,57,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,51,51,57,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,97,51,52,48,52,32,100,105,114,51,51,55,51,51,56,51,52,51,32,102,105,108,101,51,51,57,51,52,48,51,52,52,32,101,120,116,51,52,49,51,52,50,51,52,53,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,49,56,32,46,32,116,109,112,51,49,55,51,49,57,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,53,57,51,54,48,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,51,54,48,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,52,50,50,32,109,52,50,52,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,52,49,53,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,46),40,97,51,54,49,49,32,100,105,114,51,57,56,51,57,57,52,48,52,32,102,105,108,52,48,48,52,48,49,52,48,53,32,101,120,116,52,48,50,52,48,51,52,48,54,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,51,57,54,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,51,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,51,55,55,56,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,51,55,56,51,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,51,56,48,51,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,100,105,114,52,53,49,32,102,115,52,53,50,32,114,52,53,51,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,51,56,52,57,32,120,52,52,57,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,54,53,32,46,32,95,52,52,54,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,53,55,32,46,32,95,52,52,53,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,56,57,52,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,56,57,55,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,48,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,51,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,102,95,51,57,48,57,32,120,52,56,56,32,121,52,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,54,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,102,95,51,57,49,55,32,46,32,95,52,56,54,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,51,57,49,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,31),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,52,56,51,32,46,32,116,109,112,52,56,50,52,56,52,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,53,49,52,32,116,109,53,49,53,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,53,50,49,53,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,53,51,51,53,51,52,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,53,53,49,53,53,50,41,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,53,54,51,41,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,53,57,53,32,46,32,116,109,112,53,57,52,53,57,54,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,22),40,115,101,116,101,110,118,32,118,97,114,54,48,57,32,118,97,108,54,49,48,41,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,17),40,117,110,115,101,116,101,110,118,32,118,97,114,54,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,50,57,41,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,54,50,54,41,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,54,51,51,32,112,114,111,99,54,51,52,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,52,50,56,57,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,33),40,97,52,50,57,53,32,101,112,105,100,54,53,56,32,101,110,111,114,109,54,53,57,32,101,99,111,100,101,54,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,54,52,51,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,52,51,54,52,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,14),40,97,52,51,53,56,32,101,120,110,54,56,49,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,100,111,108,111,111,112,54,56,51,32,115,108,54,56,53,32,105,54,56,54,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,54,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,52,52,51,56,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,21),40,116,109,112,50,50,54,49,49,32,97,114,103,115,54,55,53,54,57,55,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,51,55,51,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,15),40,97,52,51,53,50,32,107,54,55,52,54,56,48,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,56),40,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,54,54,57,32,99,111,110,118,101,114,116,54,55,48,32,108,111,99,54,55,49,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,48,50,32,105,55,48,52,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,38),40,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,55,48,48,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,10),40,110,111,112,32,120,55,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,7),40,97,52,53,50,49,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,14),40,97,52,53,49,53,32,101,120,110,55,50,57,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,53,52,50,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,7),40,97,52,53,54,53,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,97,52,53,53,57,32,46,32,97,114,103,115,55,50,51,55,51,51,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,53,51,54,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,97,52,53,48,57,32,107,55,50,50,55,50,56,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,81),40,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,55,49,50,32,102,105,108,101,110,97,109,101,55,49,51,32,97,114,103,99,111,110,118,55,49,52,32,97,114,103,108,105,115,116,55,49,53,32,101,110,118,108,105,115,116,55,49,54,32,112,114,111,99,55,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,102,100,55,56,55,55,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,105,110,116,55,57,50,55,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,39),40,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,56,52,54,32,99,109,100,56,52,55,32,46,32,116,109,112,56,52,53,56,52,56,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,56,53,57,32,102,108,97,103,115,56,54,48,32,46,32,109,111,100,101,56,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,56,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,56,55,56,32,115,105,122,101,56,55,57,32,46,32,98,117,102,102,101,114,56,56,48,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,56,56,57,32,98,117,102,102,101,114,56,57,48,32,46,32,115,105,122,101,56,57,49,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,57,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,57,50,56,32,102,100,115,114,108,57,51,49,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,20),40,100,111,108,111,111,112,57,52,54,32,102,100,115,119,108,57,52,57,41,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,26),40,108,112,32,105,49,48,48,51,32,114,101,115,49,48,48,52,32,102,100,115,49,48,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,23),40,108,112,32,105,57,56,52,32,114,101,115,57,56,53,32,102,100,115,57,56,54,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,57,48,55,32,102,100,115,119,57,48,56,32,46,32,116,105,109,101,111,117,116,57,48,57,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,27),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,49,48,50,57,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,49,48,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,37),40,99,104,101,99,107,32,108,111,99,49,48,52,50,32,99,109,100,49,48,52,51,32,105,110,112,49,48,52,52,32,114,49,48,52,53,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,33),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,49,48,52,56,32,46,32,109,49,48,52,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,34),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,49,48,53,56,32,46,32,109,49,48,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,27),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,49,48,54,56,41,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,28),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,49,48,55,50,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,7),40,97,53,52,48,57,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,21),40,97,53,52,49,53,32,46,32,114,101,115,117,108,116,115,49,48,56,55,41,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,50),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,49,48,56,51,32,112,114,111,99,49,48,56,52,32,46,32,109,111,100,101,49,48,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,7),40,97,53,52,51,51,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,21),40,97,53,52,51,57,32,46,32,114,101,115,117,108,116,115,49,48,57,52,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,51),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,49,48,57,48,32,112,114,111,99,49,48,57,49,32,46,32,109,111,100,101,49,48,57,50,41,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,7),40,97,53,52,53,55,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,21),40,97,53,52,54,56,32,46,32,114,101,115,117,108,116,115,49,49,48,57,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,7),40,97,53,52,54,50,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,7),40,97,53,52,55,55,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,51),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,49,48,57,55,32,116,104,117,110,107,49,48,57,56,32,46,32,109,111,100,101,49,48,57,57,41,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,7),40,97,53,52,57,49,41,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,21),40,97,53,53,48,50,32,46,32,114,101,115,117,108,116,115,49,49,50,54,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,53,52,57,54,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,7),40,97,53,53,49,49,41,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,50),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,49,49,49,52,32,116,104,117,110,107,49,49,49,53,32,46,32,109,111,100,101,49,49,49,54,41,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,13),40,99,114,101,97,116,101,45,112,105,112,101,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,54,52,41,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,49,49,54,49,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,49,49,57,50,41};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,22),40,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,49,49,57,54,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,24),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,49,50,48,49,41};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,41),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,49,50,51,51,32,46,32,116,109,112,49,50,51,50,49,50,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,50,55,49,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,43),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,103,114,111,117,112,49,50,53,56,32,46,32,116,109,112,49,50,53,55,49,50,53,57,41,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,50,57,48,41,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,12),40,103,101,116,45,103,114,111,117,112,115,41,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,50,57,55,32,108,115,116,49,50,57,57,32,105,49,51,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,103,114,111,117,112,115,33,32,108,115,116,48,49,50,57,54,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,35),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,117,115,101,114,49,51,49,55,32,105,100,49,51,49,56,41,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,34),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,49,51,54,50,32,109,49,51,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,42),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,102,110,49,51,54,55,32,117,105,100,49,51,54,56,32,103,105,100,49,51,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,51,55,52,32,97,99,99,49,51,55,53,32,108,111,99,49,51,55,54,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,56,48,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,56,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,51,56,50,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,16),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,49,52,48,50,32,110,101,119,49,52,48,51,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,49),40,35,35,115,121,115,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,49,52,48,56,32,108,111,99,97,116,105,111,110,49,52,48,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,7),40,97,54,50,53,50,41,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,99,111,109,112,111,110,101,110,116,115,49,52,50,55,32,114,101,115,117,108,116,49,52,50,56,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,67),40,97,54,50,53,56,32,98,97,115,101,45,111,114,105,103,105,110,49,52,50,51,32,98,97,115,101,45,100,105,114,101,99,116,111,114,121,49,52,50,52,32,100,105,114,101,99,116,111,114,121,45,99,111,109,112,111,110,101,110,116,115,49,52,50,53,41,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,44),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,49,52,49,54,32,46,32,116,109,112,49,52,49,53,49,52,49,55,41,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,108,105,110,107,32,111,108,100,49,52,53,49,32,110,101,119,49,52,53,50,41,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,7),40,97,54,53,53,52,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,7),40,97,54,53,55,57,41,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,7),40,97,54,53,57,49,41,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,7),40,97,54,54,49,51,41,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,53,51,48,32,109,49,53,51,49,32,115,116,97,114,116,49,53,51,50,41,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,41),40,97,54,54,50,56,32,112,111,114,116,49,53,50,53,32,110,49,53,50,54,32,100,101,115,116,49,53,50,55,32,115,116,97,114,116,49,53,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,15),40,97,54,55,51,50,32,112,111,115,49,53,53,50,41,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,7),40,97,54,55,50,50,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,40),40,97,54,55,55,56,32,110,101,120,116,49,53,54,48,32,108,105,110,101,49,53,54,49,32,102,117,108,108,45,108,105,110,101,63,49,53,54,50,41};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,23),40,97,54,55,48,52,32,112,49,53,52,54,32,108,105,109,105,116,49,53,52,55,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,16),40,97,54,56,50,55,32,112,111,114,116,49,53,54,55,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,49,52,54,48,32,110,97,109,49,52,54,49,32,102,100,49,52,54,50,32,46,32,116,109,112,49,52,53,57,49,52,54,51,41,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,26),40,112,111,107,101,49,53,57,52,32,115,116,114,49,54,48,48,32,108,101,110,49,54,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,15),40,97,55,48,48,51,32,115,116,114,49,54,51,56,41,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,7),40,97,55,48,48,57,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,7),40,97,55,48,51,49,41,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,16),40,102,95,55,48,52,48,32,115,116,114,49,54,49,56,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,54,50,51,32,115,116,97,114,116,49,54,50,52,32,108,101,110,49,54,50,53,41};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,16),40,102,95,55,48,53,53,32,115,116,114,49,54,50,49,41};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,63),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,49,53,55,56,32,110,97,109,49,53,55,57,32,102,100,49,53,56,48,32,46,32,116,109,112,49,53,55,55,49,53,56,49,41,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,49,54,52,54,32,111,102,102,49,54,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,54,53,53,32,97,114,103,115,49,54,53,54,32,108,111,99,49,54,53,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,54,55,50,32,108,111,99,107,49,54,55,51,32,108,111,99,49,54,55,52,41,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,108,111,99,107,32,112,111,114,116,49,54,55,53,32,46,32,97,114,103,115,49,54,55,54,41,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,40),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,49,54,56,52,32,46,32,97,114,103,115,49,54,56,53,41};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,36),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,49,54,57,51,32,46,32,97,114,103,115,49,54,57,52,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,7),40,97,55,51,57,57,41,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,22),40,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,49,55,49,49,41,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,49,55,49,57,32,46,32,109,111,100,101,49,55,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,20),40,102,105,102,111,63,32,102,105,108,101,110,97,109,101,49,55,50,53,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,55,54,49,32,108,101,110,49,55,54,50,32,112,114,111,116,49,55,54,51,32,102,108,97,103,49,55,54,52,32,102,100,49,55,54,53,32,46,32,111,102,102,49,55,54,54,41};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,55,56,51,32,46,32,108,101,110,49,55,56,52,41,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,55,56,56,41,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,55,57,49,41,0,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,36),40,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,49,56,49,50,32,46,32,116,109,112,49,56,49,49,49,56,49,51,41,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,26),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,56,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,56,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,105,110,116,49,56,51,57,49,56,52,50,41};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,56,52,52,32,109,111,100,101,49,56,52,53,32,46,32,115,105,122,101,49,56,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,56,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,56,54,51,32,112,111,114,116,49,56,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,49,56,55,52,41};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,56,56,54,41};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,18),40,102,95,55,57,56,50,32,116,104,117,110,107,49,57,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,7),40,97,55,57,55,51,41,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,7),40,97,55,57,54,55,41,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,116,109,112,49,57,49,50,49,57,49,51,41,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,13),40,97,56,48,51,57,32,120,49,57,53,55,41,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,37),40,97,56,48,52,50,32,112,114,103,49,57,53,56,32,97,114,103,98,117,102,49,57,53,57,32,101,110,118,98,117,102,49,57,54,48,41,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,57,52,53,32,46,32,116,109,112,49,57,52,52,49,57,52,54,41,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,7),40,97,56,48,57,55,41,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,57,54,51,32,110,111,104,97,110,103,49,57,54,52,41,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,19),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,19),40,115,108,101,101,112,32,105,110,116,49,57,55,54,49,57,55,57,41,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,49,57,56,49,32,46,32,115,105,103,49,57,56,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,57,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,57,57,52,32,46,32,97,114,103,115,49,57,57,53,41,0,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,7),40,97,56,50,52,48,41,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,29),40,97,56,50,52,54,32,95,50,48,49,57,32,102,108,103,50,48,50,48,32,99,111,100,50,48,50,49,41,0,0,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,8),40,102,95,56,50,50,54,41};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,68),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,50,48,49,50,32,112,105,100,50,48,49,51,32,99,108,115,118,101,99,50,48,49,52,32,105,100,120,50,48,49,53,32,105,100,120,97,50,48,49,54,32,105,100,120,98,50,48,49,55,41,0,0,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,7),40,97,56,50,54,57,41,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,19),40,97,56,50,55,53,32,105,50,48,50,54,32,111,50,48,50,55,41,0,0,0,0,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,22),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,50,48,50,52,41,0,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,34),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,50,48,50,57,32,112,111,114,116,50,48,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,43),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,50,48,51,55,32,112,111,114,116,50,48,51,56,32,115,116,100,102,100,50,48,51,57,41,0,0,0,0,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,14),40,115,119,97,112,112,101,100,45,101,110,100,115,41,0,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,7),40,97,56,51,52,52,41,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,67),40,115,112,97,119,110,32,99,109,100,50,48,53,48,32,97,114,103,115,50,48,53,49,32,101,110,118,50,48,53,50,32,115,116,100,111,117,116,102,50,48,53,51,32,115,116,100,105,110,102,50,48,53,52,32,115,116,100,101,114,114,102,50,48,53,53,41,0,0,0,0,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,59),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,50,48,54,50,32,99,109,100,50,48,54,52,32,112,105,112,101,50,48,54,53,32,115,116,100,102,50,48,54,54,32,111,110,45,99,108,111,115,101,50,48,54,56,41,0,0,0,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,60),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,50,48,55,48,32,99,109,100,50,48,55,50,32,112,105,112,101,50,48,55,51,32,115,116,100,102,50,48,55,52,32,111,110,45,99,108,111,115,101,50,48,55,54,41,0,0,0,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,7),40,97,56,51,57,52,41,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,50),40,97,56,52,48,48,32,105,110,112,105,112,101,50,48,56,53,32,111,117,116,112,105,112,101,50,48,56,54,32,101,114,114,112,105,112,101,50,48,56,55,32,112,105,100,50,48,56,56,41,0,0,0,0,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,83),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,50,48,55,56,32,99,109,100,50,48,55,57,32,97,114,103,115,50,48,56,48,32,101,110,118,50,48,56,49,32,115,116,100,111,117,116,102,50,48,56,50,32,115,116,100,105,110,102,50,48,56,51,32,115,116,100,101,114,114,102,50,48,56,52,41,0,0,0,0,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,7),40,103,50,49,48,52,41,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,48,51,41,0,0,0,0,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,50,49,48,48,41,0,0,0,0,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,7),40,97,56,52,57,53,41,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,58),40,37,112,114,111,99,101,115,115,32,108,111,99,50,48,57,51,32,101,114,114,63,50,48,57,52,32,99,109,100,50,48,57,53,32,97,114,103,115,50,48,57,54,32,101,110,118,50,48,57,55,32,107,50,48,57,56,41,0,0,0,0,0,0};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,31),40,97,56,53,51,51,32,105,50,49,52,55,32,111,50,49,52,56,32,112,50,49,52,57,32,101,50,49,53,48,41,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,50,49,51,53,32,46,32,116,109,112,50,49,51,52,50,49,51,54,41,0};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,50,49,53,53,32,46,32,116,109,112,50,49,53,52,50,49,53,54,41};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,50,49,55,54,41,0,0,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,15),40,97,56,54,52,49,32,112,105,100,49,51,57,49,41,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,24),40,97,56,54,53,57,32,112,105,100,49,51,57,54,32,112,103,105,100,49,51,57,55,41};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,7),40,97,56,54,56,49,41,0};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,14),40,97,56,54,56,52,32,105,100,49,50,50,54,41,0,0};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,7),40,97,56,55,48,48,41,0};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,14),40,97,56,55,48,51,32,105,100,49,50,50,49,41,0,0};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,7),40,97,56,55,49,57,41,0};
static C_char C_TLS li259[] C_aligned={C_lihdr(0,0,14),40,97,56,55,50,50,32,105,100,49,50,49,54,41,0,0};
static C_char C_TLS li260[] C_aligned={C_lihdr(0,0,7),40,97,56,55,51,56,41,0};
static C_char C_TLS li261[] C_aligned={C_lihdr(0,0,14),40,97,56,55,52,49,32,105,100,49,50,49,49,41,0,0};
static C_char C_TLS li262[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,115,105,103,115,49,49,56,54,32,109,97,115,107,49,49,56,55,41};
static C_char C_TLS li263[] C_aligned={C_lihdr(0,0,7),40,97,56,55,53,55,41,0};
static C_char C_TLS li264[] C_aligned={C_lihdr(0,0,14),40,97,56,55,57,49,32,115,105,103,54,51,57,41,0,0};
static C_char C_TLS li265[] C_aligned={C_lihdr(0,0,19),40,97,56,56,48,48,32,46,32,116,109,112,52,57,56,52,57,57,41,0,0,0,0,0};
static C_char C_TLS li266[] C_aligned={C_lihdr(0,0,13),40,97,56,56,50,53,32,117,109,53,49,49,41,0,0,0};
static C_char C_TLS li267[] C_aligned={C_lihdr(0,0,15),40,97,56,56,51,49,32,112,111,114,116,49,57,52,41,0};
static C_char C_TLS li268[] C_aligned={C_lihdr(0,0,12),40,97,56,56,54,56,32,102,49,49,48,41,0,0,0,0};
static C_char C_TLS li269[] C_aligned={C_lihdr(0,0,17),40,97,56,56,55,52,32,102,49,49,50,32,116,49,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li270[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8609 in set-root-directory! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub2171(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k8126 */
C_regparm static C_word C_fcall stub1977(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1973(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from k7940 */
C_regparm static C_word C_fcall stub1927(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_fix((C_word)C_fflush(t0));
return C_r;}

/* from fork */
C_regparm static C_word C_fcall stub1907(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1900(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) C_return(NULL);else C_return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7869 */
C_regparm static C_word C_fcall stub1881(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k7845 */
C_regparm static C_word C_fcall stub1870(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k7732 */
C_regparm static C_word C_fcall stub1840(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k7712 */
C_regparm static C_word C_fcall stub1834(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1828(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__) && !defined(_AIX)
time_t clock = time(NULL);struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
C_return(z);
C_ret:
#undef return

return C_r;}

/* from k7640 */
C_regparm static C_word C_fcall stub1799(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
void * t3=(void * )C_data_pointer_or_null(C_a3);
C_r=((C_word)C_strptime(t0,t1,t2,t3));
return C_r;}

/* from k7583 */
C_regparm static C_word C_fcall stub1777(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k7523 */
C_regparm static C_word C_fcall stub1750(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6342 in k6338 in file-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1443(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k6009 */
C_regparm static C_word C_fcall stub1311(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1281(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) C_return(0);else C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1276(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
C_return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1249(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
C_return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from a8681 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1224(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8700 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1219(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8719 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1214(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8738 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub1209(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1014(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;C_return(fds[i].revents & (POLLOUT|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub995(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;C_return(fds[i].revents & (POLLIN|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

/* from k4881 */
C_regparm static C_word C_fcall stub970(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)poll(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub955(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;fds[i].fd = fd; fds[i].events = POLLOUT;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub937(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;fds[i].fd = fd; fds[i].events = POLLIN;
C_ret:
#undef return

return C_r;}

/* from k4633 */
C_regparm static C_word C_fcall stub837(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k4582 */
C_regparm static C_word C_fcall stub793(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub788(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) C_return(0);C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub665(C_word C_buf,C_word C_a0){
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

/* from k4174 */
C_regparm static C_word C_fcall stub621(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k4072 */
C_regparm static C_word C_fcall stub582(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k4059 */
C_regparm static C_word C_fcall stub572(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3992 */
C_regparm static C_word C_fcall stub544(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k8883 in a8874 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
C_regparm static C_word C_fcall stub119(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2717 */
C_regparm static C_word C_fcall stub67(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_5953)
static void C_fcall f_5953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_8159)
static void C_ccall f_8159(C_word c,C_word *av) C_noret;
C_noret_decl(f_8155)
static void C_ccall f_8155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241(C_word c,C_word *av) C_noret;
C_noret_decl(f_8247)
static void C_ccall f_8247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word *av) C_noret;
C_noret_decl(f_8224)
static void C_fcall f_8224(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8226)
static void C_ccall f_8226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word *av) C_noret;
C_noret_decl(f_8164)
static void C_ccall f_8164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word *av) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word *av) C_noret;
C_noret_decl(f_6416)
static void C_fcall f_6416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word *av) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_6927)
static void C_ccall f_6927(C_word c,C_word *av) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word *av) C_noret;
C_noret_decl(f_8293)
static void C_fcall f_8293(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word *av) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_fcall f_3249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_fcall f_3273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word *av) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_8701)
static void C_ccall f_8701(C_word c,C_word *av) C_noret;
C_noret_decl(f_8704)
static void C_ccall f_8704(C_word c,C_word *av) C_noret;
C_noret_decl(f_7667)
static void C_ccall f_7667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_7663)
static void C_ccall f_7663(C_word c,C_word *av) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word *av) C_noret;
C_noret_decl(f_4547)
static void C_fcall f_4547(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7675)
static void C_ccall f_7675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word *av) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word *av) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869(C_word c,C_word *av) C_noret;
C_noret_decl(f_7631)
static void C_ccall f_7631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word *av) C_noret;
C_noret_decl(f_6409)
static void C_ccall f_6409(C_word c,C_word *av) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word *av) C_noret;
C_noret_decl(f_8848)
static void C_ccall f_8848(C_word c,C_word *av) C_noret;
C_noret_decl(f_5434)
static void C_ccall f_5434(C_word c,C_word *av) C_noret;
C_noret_decl(f_8836)
static void C_ccall f_8836(C_word c,C_word *av) C_noret;
C_noret_decl(f_8832)
static void C_ccall f_8832(C_word c,C_word *av) C_noret;
C_noret_decl(f_5444)
static void C_ccall f_5444(C_word c,C_word *av) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word *av) C_noret;
C_noret_decl(f_8839)
static void C_ccall f_8839(C_word c,C_word *av) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word *av) C_noret;
C_noret_decl(f_5410)
static void C_ccall f_5410(C_word c,C_word *av) C_noret;
C_noret_decl(f_6453)
static void C_fcall f_6453(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7400)
static void C_ccall f_7400(C_word c,C_word *av) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word *av) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word *av) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5425)
static void C_ccall f_5425(C_word c,C_word *av) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6445)
static C_word C_fcall f_6445(C_word t0);
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word *av) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word *av) C_noret;
C_noret_decl(f_6637)
static void C_fcall f_6637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6639)
static void C_fcall f_6639(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5483)
static void C_ccall f_5483(C_word c,C_word *av) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word *av) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word *av) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word *av) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word *av) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word *av) C_noret;
C_noret_decl(f_4673)
static void C_fcall f_4673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_fcall f_3711(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word *av) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word *av) C_noret;
C_noret_decl(f_3702)
static void C_fcall f_3702(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word *av) C_noret;
C_noret_decl(f_8281)
static void C_fcall f_8281(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8742)
static void C_ccall f_8742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word *av) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word *av) C_noret;
C_noret_decl(f_8270)
static void C_ccall f_8270(C_word c,C_word *av) C_noret;
C_noret_decl(f_8739)
static void C_ccall f_8739(C_word c,C_word *av) C_noret;
C_noret_decl(f_8733)
static void C_ccall f_8733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word *av) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word *av) C_noret;
C_noret_decl(f_8261)
static void C_fcall f_8261(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word *av) C_noret;
C_noret_decl(f_8723)
static void C_ccall f_8723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_8714)
static void C_ccall f_8714(C_word c,C_word *av) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8826)
static void C_ccall f_8826(C_word c,C_word *av) C_noret;
C_noret_decl(f_4382)
static void C_fcall f_4382(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word *av) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word *av) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word *av) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word *av) C_noret;
C_noret_decl(f_8764)
static void C_fcall f_8764(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word *av) C_noret;
C_noret_decl(f_7344)
static void C_ccall f_7344(C_word c,C_word *av) C_noret;
C_noret_decl(f_7348)
static void C_ccall f_7348(C_word c,C_word *av) C_noret;
C_noret_decl(f_8801)
static void C_ccall f_8801(C_word c,C_word *av) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word *av) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_fcall f_7421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4376)
static void C_fcall f_4376(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word *av) C_noret;
C_noret_decl(f_8510)
static void C_ccall f_8510(C_word c,C_word *av) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word *av) C_noret;
C_noret_decl(f_8516)
static void C_ccall f_8516(C_word c,C_word *av) C_noret;
C_noret_decl(f_8514)
static void C_ccall f_8514(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_7459)
static void C_ccall f_7459(C_word c,C_word *av) C_noret;
C_noret_decl(f_7451)
static void C_ccall f_7451(C_word c,C_word *av) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word *av) C_noret;
C_noret_decl(f_7319)
static void C_ccall f_7319(C_word c,C_word *av) C_noret;
C_noret_decl(f_8564)
static void C_ccall f_8564(C_word c,C_word *av) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3004)
static void C_fcall f_3004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_fcall f_4337(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word *av) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8895)
static void C_ccall f_8895(C_word c,C_word *av) C_noret;
C_noret_decl(f_8534)
static void C_ccall f_8534(C_word c,C_word *av) C_noret;
C_noret_decl(f_8885)
static void C_ccall f_8885(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word *av) C_noret;
C_noret_decl(f_8875)
static void C_ccall f_8875(C_word c,C_word *av) C_noret;
C_noret_decl(f_8873)
static void C_ccall f_8873(C_word c,C_word *av) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6838)
static void C_ccall f_6838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3118)
static void C_ccall f_3118(C_word c,C_word *av) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word *av) C_noret;
C_noret_decl(f_7055)
static void C_ccall f_7055(C_word c,C_word *av) C_noret;
C_noret_decl(f_7054)
static void C_ccall f_7054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word *av) C_noret;
C_noret_decl(f_3489)
static void C_fcall f_3489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_fcall f_5276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word *av) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word *av) C_noret;
C_noret_decl(f_3189)
static void C_fcall f_3189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word *av) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_fcall f_3054(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word *av) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word *av) C_noret;
C_noret_decl(f_7799)
static void C_ccall f_7799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6007)
static void C_ccall f_6007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word *av) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word *av) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5714)
static void C_fcall f_5714(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7743)
static void C_fcall f_7743(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word *av) C_noret;
C_noret_decl(f_7848)
static void C_ccall f_7848(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_7755)
static void C_fcall f_7755(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7852)
static void C_ccall f_7852(C_word c,C_word *av) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word *av) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word *av) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_fcall f_2738(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3297)
static void C_fcall f_3297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_3357)
static void C_fcall f_3357(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_4433)
static void C_fcall f_4433(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7805)
static void C_ccall f_7805(C_word c,C_word *av) C_noret;
C_noret_decl(f_7817)
static void C_fcall f_7817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word *av) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_7072)
static void C_fcall f_7072(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word *av) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611(C_word c,C_word *av) C_noret;
C_noret_decl(f_8619)
static void C_ccall f_8619(C_word c,C_word *av) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_fcall f_4456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static C_word C_fcall f_5097(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4465)
static void C_fcall f_4465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word *av) C_noret;
C_noret_decl(f_7876)
static void C_ccall f_7876(C_word c,C_word *av) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word *av) C_noret;
C_noret_decl(f_5084)
static void C_fcall f_5084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word *av) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word *av) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7897)
static void C_ccall f_7897(C_word c,C_word *av) C_noret;
C_noret_decl(f_7729)
static void C_ccall f_7729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4492)
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_7736)
static void C_ccall f_7736(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4183)
static void C_fcall f_4183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5588)
static C_word C_fcall f_5588(C_word t0);
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6132)
static void C_fcall f_6132(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word *av) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word *av) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word *av) C_noret;
C_noret_decl(f_8685)
static void C_ccall f_8685(C_word c,C_word *av) C_noret;
C_noret_decl(f_8682)
static void C_ccall f_8682(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word *av) C_noret;
C_noret_decl(f_5052)
static void C_fcall f_5052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_fcall f_4964(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_fcall f_5023(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4993)
static void C_fcall f_4993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word *av) C_noret;
C_noret_decl(f_8655)
static void C_ccall f_8655(C_word c,C_word *av) C_noret;
C_noret_decl(f_7954)
static void C_ccall f_7954(C_word c,C_word *av) C_noret;
C_noret_decl(f_7968)
static void C_ccall f_7968(C_word c,C_word *av) C_noret;
C_noret_decl(f_7292)
static void C_ccall f_7292(C_word c,C_word *av) C_noret;
C_noret_decl(f_8636)
static void C_ccall f_8636(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word *av) C_noret;
C_noret_decl(f_5887)
static void C_ccall f_5887(C_word c,C_word *av) C_noret;
C_noret_decl(f_8660)
static void C_ccall f_8660(C_word c,C_word *av) C_noret;
C_noret_decl(f_8488)
static void C_ccall f_8488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5895)
static void C_fcall f_5895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7002)
static void C_ccall f_7002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5890)
static void C_ccall f_5890(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_8695)
static void C_ccall f_8695(C_word c,C_word *av) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word *av) C_noret;
C_noret_decl(f_8308)
static C_word C_fcall f_8308(C_word *a,C_word t0);
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_8642)
static void C_ccall f_8642(C_word c,C_word *av) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word *av) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word *av) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_7020)
static void C_ccall f_7020(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_ccall f_8676(C_word c,C_word *av) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word *av) C_noret;
C_noret_decl(f_8445)
static void C_fcall f_8445(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8447)
static void C_fcall f_8447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_8343)
static void C_ccall f_8343(C_word c,C_word *av) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8345)
static void C_ccall f_8345(C_word c,C_word *av) C_noret;
C_noret_decl(f_8349)
static void C_ccall f_8349(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word *av) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_5830)
static void C_fcall f_5830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_8322)
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word *av) C_noret;
C_noret_decl(f_8496)
static void C_ccall f_8496(C_word c,C_word *av) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word *av) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word *av) C_noret;
C_noret_decl(f_6210)
static void C_ccall f_6210(C_word c,C_word *av) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word *av) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word *av) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_fcall f_7536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7533)
static void C_ccall f_7533(C_word c,C_word *av) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word *av) C_noret;
C_noret_decl(f_7558)
static void C_ccall f_7558(C_word c,C_word *av) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_fcall f_4934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3699)
static void C_fcall f_3699(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7529)
static void C_ccall f_7529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_7545)
static void C_ccall f_7545(C_word c,C_word *av) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word *av) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word *av) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_fcall f_7596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7264)
static void C_fcall f_7264(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word *av) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6285)
static void C_ccall f_6285(C_word c,C_word *av) C_noret;
C_noret_decl(f_7901)
static void C_ccall f_7901(C_word c,C_word *av) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_fcall f_3646(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7288)
static void C_ccall f_7288(C_word c,C_word *av) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3625)
static void C_fcall f_3625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6592)
static void C_ccall f_6592(C_word c,C_word *av) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word *av) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_6189)
static void C_ccall f_6189(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word *av) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word *av) C_noret;
C_noret_decl(f_7974)
static void C_ccall f_7974(C_word c,C_word *av) C_noret;
C_noret_decl(f_5807)
static void C_fcall f_5807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word *av) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word *av) C_noret;
C_noret_decl(f_8401)
static void C_ccall f_8401(C_word c,C_word *av) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_fcall f_3924(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7913)
static void C_ccall f_7913(C_word c,C_word *av) C_noret;
C_noret_decl(f_7916)
static void C_ccall f_7916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word *av) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word *av) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word *av) C_noret;
C_noret_decl(f_8461)
static C_word C_fcall f_8461(C_word t0,C_word t1);
C_noret_decl(f_7923)
static void C_ccall f_7923(C_word c,C_word *av) C_noret;
C_noret_decl(f_8452)
static C_word C_fcall f_8452(C_word t0,C_word t1);
C_noret_decl(f_6520)
static void C_ccall f_6520(C_word c,C_word *av) C_noret;
C_noret_decl(f_6514)
static void C_ccall f_6514(C_word c,C_word *av) C_noret;
C_noret_decl(f_6511)
static void C_ccall f_6511(C_word c,C_word *av) C_noret;
C_noret_decl(f_6779)
static void C_ccall f_6779(C_word c,C_word *av) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_6549)
static void C_ccall f_6549(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_ccall f_6340(C_word c,C_word *av) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word *av) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word *av) C_noret;
C_noret_decl(f_8420)
static void C_ccall f_8420(C_word c,C_word *av) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word *av) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word *av) C_noret;
C_noret_decl(f_6718)
static void C_fcall f_6718(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word *av) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word *av) C_noret;
C_noret_decl(f_8416)
static void C_ccall f_8416(C_word c,C_word *av) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word *av) C_noret;
C_noret_decl(f_6705)
static void C_ccall f_6705(C_word c,C_word *av) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word *av) C_noret;
C_noret_decl(f_6555)
static void C_ccall f_6555(C_word c,C_word *av) C_noret;
C_noret_decl(f_6559)
static void C_ccall f_6559(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word *av) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word *av) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word *av) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6379)
static void C_ccall f_6379(C_word c,C_word *av) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word *av) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word *av) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word *av) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3591)
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4783)
static void C_fcall f_4783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6279)
static void C_ccall f_6279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word *av) C_noret;
C_noret_decl(f_8130)
static void C_ccall f_8130(C_word c,C_word *av) C_noret;
C_noret_decl(f_8134)
static void C_fcall f_8134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6269)
static void C_fcall f_6269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_8389)
static void C_ccall f_8389(C_word c,C_word *av) C_noret;
C_noret_decl(f_8382)
static void C_ccall f_8382(C_word c,C_word *av) C_noret;
C_noret_decl(f_4742)
static void C_ccall f_4742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word *av) C_noret;
C_noret_decl(f_8378)
static void C_fcall f_8378(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8371)
static void C_ccall f_8371(C_word c,C_word *av) C_noret;
C_noret_decl(f_7200)
static void C_fcall f_7200(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8367)
static void C_fcall f_8367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word *av) C_noret;
C_noret_decl(f_8355)
static void C_ccall f_8355(C_word c,C_word *av) C_noret;
C_noret_decl(f_8352)
static void C_ccall f_8352(C_word c,C_word *av) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word *av) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word *av) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_7175)
static void C_fcall f_7175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_7189)
static void C_ccall f_7189(C_word c,C_word *av) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word *av) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word *av) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word *av) C_noret;
C_noret_decl(f_8177)
static void C_ccall f_8177(C_word c,C_word *av) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word *av) C_noret;
C_noret_decl(f_8174)
static void C_fcall f_8174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8170)
static void C_ccall f_8170(C_word c,C_word *av) C_noret;
C_noret_decl(f_7221)
static void C_fcall f_7221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word *av) C_noret;
C_noret_decl(f_6993)
static void C_fcall f_6993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6998)
static void C_ccall f_6998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word *av) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word *av) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word *av) C_noret;
C_noret_decl(f_3884)
static void C_ccall f_3884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word *av) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3515)
static void C_fcall f_3515(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_5139)
static C_word C_fcall f_5139(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_4852)
static void C_fcall f_4852(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word *av) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7683)
static void C_ccall f_7683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word *av) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word *av) C_noret;
C_noret_decl(f_7697)
static void C_ccall f_7697(C_word c,C_word *av) C_noret;
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word *av) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_fcall f_4846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_fcall f_4849(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3857)
static void C_ccall f_3857(C_word c,C_word *av) C_noret;

C_noret_decl(trf_5953)
static void C_ccall trf_5953(C_word c,C_word *av) C_noret;
static void C_ccall trf_5953(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5953(t0,t1,t2,t3);}

C_noret_decl(trf_8224)
static void C_ccall trf_8224(C_word c,C_word *av) C_noret;
static void C_ccall trf_8224(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_8224(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6416)
static void C_ccall trf_6416(C_word c,C_word *av) C_noret;
static void C_ccall trf_6416(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6416(t0,t1);}

C_noret_decl(trf_8293)
static void C_ccall trf_8293(C_word c,C_word *av) C_noret;
static void C_ccall trf_8293(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8293(t0,t1,t2,t3);}

C_noret_decl(trf_3249)
static void C_ccall trf_3249(C_word c,C_word *av) C_noret;
static void C_ccall trf_3249(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3249(t0,t1);}

C_noret_decl(trf_3273)
static void C_ccall trf_3273(C_word c,C_word *av) C_noret;
static void C_ccall trf_3273(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3273(t0,t1,t2);}

C_noret_decl(trf_4547)
static void C_ccall trf_4547(C_word c,C_word *av) C_noret;
static void C_ccall trf_4547(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4547(t0,t1);}

C_noret_decl(trf_6453)
static void C_ccall trf_6453(C_word c,C_word *av) C_noret;
static void C_ccall trf_6453(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6453(t0,t1);}

C_noret_decl(trf_6637)
static void C_ccall trf_6637(C_word c,C_word *av) C_noret;
static void C_ccall trf_6637(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6637(t0,t1);}

C_noret_decl(trf_6639)
static void C_ccall trf_6639(C_word c,C_word *av) C_noret;
static void C_ccall trf_6639(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6639(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4673)
static void C_ccall trf_4673(C_word c,C_word *av) C_noret;
static void C_ccall trf_4673(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4673(t0,t1);}

C_noret_decl(trf_3711)
static void C_ccall trf_3711(C_word c,C_word *av) C_noret;
static void C_ccall trf_3711(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3711(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3702)
static void C_ccall trf_3702(C_word c,C_word *av) C_noret;
static void C_ccall trf_3702(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3702(t0,t1);}

C_noret_decl(trf_8281)
static void C_ccall trf_8281(C_word c,C_word *av) C_noret;
static void C_ccall trf_8281(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8281(t0,t1,t2);}

C_noret_decl(trf_8261)
static void C_ccall trf_8261(C_word c,C_word *av) C_noret;
static void C_ccall trf_8261(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8261(t0,t1);}

C_noret_decl(trf_4382)
static void C_ccall trf_4382(C_word c,C_word *av) C_noret;
static void C_ccall trf_4382(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4382(t0,t1,t2,t3);}

C_noret_decl(trf_8764)
static void C_ccall trf_8764(C_word c,C_word *av) C_noret;
static void C_ccall trf_8764(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8764(t0,t1,t2,t3);}

C_noret_decl(trf_7421)
static void C_ccall trf_7421(C_word c,C_word *av) C_noret;
static void C_ccall trf_7421(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7421(t0,t1);}

C_noret_decl(trf_4376)
static void C_ccall trf_4376(C_word c,C_word *av) C_noret;
static void C_ccall trf_4376(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4376(t0,t1);}

C_noret_decl(trf_3004)
static void C_ccall trf_3004(C_word c,C_word *av) C_noret;
static void C_ccall trf_3004(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3004(t0,t1);}

C_noret_decl(trf_4337)
static void C_ccall trf_4337(C_word c,C_word *av) C_noret;
static void C_ccall trf_4337(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4337(t0,t1,t2,t3);}

C_noret_decl(trf_3489)
static void C_ccall trf_3489(C_word c,C_word *av) C_noret;
static void C_ccall trf_3489(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3489(t0,t1);}

C_noret_decl(trf_5276)
static void C_ccall trf_5276(C_word c,C_word *av) C_noret;
static void C_ccall trf_5276(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5276(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3189)
static void C_ccall trf_3189(C_word c,C_word *av) C_noret;
static void C_ccall trf_3189(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3189(t0,t1);}

C_noret_decl(trf_3054)
static void C_ccall trf_3054(C_word c,C_word *av) C_noret;
static void C_ccall trf_3054(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3054(t0,t1,t2,t3);}

C_noret_decl(trf_5714)
static void C_ccall trf_5714(C_word c,C_word *av) C_noret;
static void C_ccall trf_5714(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5714(t0,t1);}

C_noret_decl(trf_7743)
static void C_ccall trf_7743(C_word c,C_word *av) C_noret;
static void C_ccall trf_7743(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7743(t0,t1);}

C_noret_decl(trf_7755)
static void C_ccall trf_7755(C_word c,C_word *av) C_noret;
static void C_ccall trf_7755(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7755(t0,t1);}

C_noret_decl(trf_2738)
static void C_ccall trf_2738(C_word c,C_word *av) C_noret;
static void C_ccall trf_2738(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2738(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3297)
static void C_ccall trf_3297(C_word c,C_word *av) C_noret;
static void C_ccall trf_3297(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3297(t0,t1,t2);}

C_noret_decl(trf_3357)
static void C_ccall trf_3357(C_word c,C_word *av) C_noret;
static void C_ccall trf_3357(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3357(t0,t1,t2);}

C_noret_decl(trf_4433)
static void C_ccall trf_4433(C_word c,C_word *av) C_noret;
static void C_ccall trf_4433(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4433(t0,t1,t2);}

C_noret_decl(trf_7817)
static void C_ccall trf_7817(C_word c,C_word *av) C_noret;
static void C_ccall trf_7817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7817(t0,t1,t2);}

C_noret_decl(trf_7072)
static void C_ccall trf_7072(C_word c,C_word *av) C_noret;
static void C_ccall trf_7072(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7072(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3364)
static void C_ccall trf_3364(C_word c,C_word *av) C_noret;
static void C_ccall trf_3364(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3364(t0,t1);}

C_noret_decl(trf_4456)
static void C_ccall trf_4456(C_word c,C_word *av) C_noret;
static void C_ccall trf_4456(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4456(t0,t1);}

C_noret_decl(trf_4465)
static void C_ccall trf_4465(C_word c,C_word *av) C_noret;
static void C_ccall trf_4465(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4465(t0,t1,t2);}

C_noret_decl(trf_5084)
static void C_ccall trf_5084(C_word c,C_word *av) C_noret;
static void C_ccall trf_5084(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5084(t0,t1);}

C_noret_decl(trf_4492)
static void C_ccall trf_4492(C_word c,C_word *av) C_noret;
static void C_ccall trf_4492(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4492(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4183)
static void C_ccall trf_4183(C_word c,C_word *av) C_noret;
static void C_ccall trf_4183(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4183(t0,t1,t2);}

C_noret_decl(trf_4195)
static void C_ccall trf_4195(C_word c,C_word *av) C_noret;
static void C_ccall trf_4195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4195(t0,t1,t2);}

C_noret_decl(trf_6132)
static void C_ccall trf_6132(C_word c,C_word *av) C_noret;
static void C_ccall trf_6132(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6132(t0,t1,t2,t3);}

C_noret_decl(trf_5052)
static void C_ccall trf_5052(C_word c,C_word *av) C_noret;
static void C_ccall trf_5052(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5052(t0,t1);}

C_noret_decl(trf_4964)
static void C_ccall trf_4964(C_word c,C_word *av) C_noret;
static void C_ccall trf_4964(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4964(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5023)
static void C_ccall trf_5023(C_word c,C_word *av) C_noret;
static void C_ccall trf_5023(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5023(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4993)
static void C_ccall trf_4993(C_word c,C_word *av) C_noret;
static void C_ccall trf_4993(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4993(t0,t1);}

C_noret_decl(trf_5895)
static void C_ccall trf_5895(C_word c,C_word *av) C_noret;
static void C_ccall trf_5895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5895(t0,t1,t2);}

C_noret_decl(trf_8445)
static void C_ccall trf_8445(C_word c,C_word *av) C_noret;
static void C_ccall trf_8445(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_8445(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8447)
static void C_ccall trf_8447(C_word c,C_word *av) C_noret;
static void C_ccall trf_8447(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8447(t0,t1,t2);}

C_noret_decl(trf_5830)
static void C_ccall trf_5830(C_word c,C_word *av) C_noret;
static void C_ccall trf_5830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5830(t0,t1,t2);}

C_noret_decl(trf_8322)
static void C_ccall trf_8322(C_word c,C_word *av) C_noret;
static void C_ccall trf_8322(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_8322(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7536)
static void C_ccall trf_7536(C_word c,C_word *av) C_noret;
static void C_ccall trf_7536(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7536(t0,t1);}

C_noret_decl(trf_4934)
static void C_ccall trf_4934(C_word c,C_word *av) C_noret;
static void C_ccall trf_4934(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4934(t0,t1);}

C_noret_decl(trf_3699)
static void C_ccall trf_3699(C_word c,C_word *av) C_noret;
static void C_ccall trf_3699(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3699(t0,t1);}

C_noret_decl(trf_7596)
static void C_ccall trf_7596(C_word c,C_word *av) C_noret;
static void C_ccall trf_7596(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7596(t0,t1);}

C_noret_decl(trf_7264)
static void C_ccall trf_7264(C_word c,C_word *av) C_noret;
static void C_ccall trf_7264(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7264(t0,t1,t2,t3);}

C_noret_decl(trf_3646)
static void C_ccall trf_3646(C_word c,C_word *av) C_noret;
static void C_ccall trf_3646(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3646(t0,t1,t2);}

C_noret_decl(trf_3625)
static void C_ccall trf_3625(C_word c,C_word *av) C_noret;
static void C_ccall trf_3625(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3625(t0,t1,t2);}

C_noret_decl(trf_5807)
static void C_ccall trf_5807(C_word c,C_word *av) C_noret;
static void C_ccall trf_5807(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5807(t0,t1);}

C_noret_decl(trf_3924)
static void C_ccall trf_3924(C_word c,C_word *av) C_noret;
static void C_ccall trf_3924(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3924(t0,t1,t2);}

C_noret_decl(trf_6718)
static void C_ccall trf_6718(C_word c,C_word *av) C_noret;
static void C_ccall trf_6718(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6718(t0,t1);}

C_noret_decl(trf_3591)
static void C_ccall trf_3591(C_word c,C_word *av) C_noret;
static void C_ccall trf_3591(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3591(t0,t1,t2);}

C_noret_decl(trf_4783)
static void C_ccall trf_4783(C_word c,C_word *av) C_noret;
static void C_ccall trf_4783(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4783(t0,t1);}

C_noret_decl(trf_8134)
static void C_ccall trf_8134(C_word c,C_word *av) C_noret;
static void C_ccall trf_8134(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8134(t0,t1);}

C_noret_decl(trf_6269)
static void C_ccall trf_6269(C_word c,C_word *av) C_noret;
static void C_ccall trf_6269(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6269(t0,t1,t2,t3);}

C_noret_decl(trf_8378)
static void C_ccall trf_8378(C_word c,C_word *av) C_noret;
static void C_ccall trf_8378(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_8378(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7200)
static void C_ccall trf_7200(C_word c,C_word *av) C_noret;
static void C_ccall trf_7200(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7200(t0,t1,t2,t3);}

C_noret_decl(trf_8367)
static void C_ccall trf_8367(C_word c,C_word *av) C_noret;
static void C_ccall trf_8367(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_8367(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7175)
static void C_ccall trf_7175(C_word c,C_word *av) C_noret;
static void C_ccall trf_7175(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7175(t0,t1);}

C_noret_decl(trf_8174)
static void C_ccall trf_8174(C_word c,C_word *av) C_noret;
static void C_ccall trf_8174(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8174(t0,t1);}

C_noret_decl(trf_7221)
static void C_ccall trf_7221(C_word c,C_word *av) C_noret;
static void C_ccall trf_7221(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7221(t0,t1);}

C_noret_decl(trf_6993)
static void C_ccall trf_6993(C_word c,C_word *av) C_noret;
static void C_ccall trf_6993(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6993(t0,t1);}

C_noret_decl(trf_3515)
static void C_ccall trf_3515(C_word c,C_word *av) C_noret;
static void C_ccall trf_3515(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3515(t0,t1);}

C_noret_decl(trf_4852)
static void C_ccall trf_4852(C_word c,C_word *av) C_noret;
static void C_ccall trf_4852(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4852(t0,t1);}

C_noret_decl(trf_4846)
static void C_ccall trf_4846(C_word c,C_word *av) C_noret;
static void C_ccall trf_4846(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4846(t0,t1);}

C_noret_decl(trf_4849)
static void C_ccall trf_4849(C_word c,C_word *av) C_noret;
static void C_ccall trf_4849(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4849(t0,t1);}

C_noret_decl(trf_3091)
static void C_ccall trf_3091(C_word c,C_word *av) C_noret;
static void C_ccall trf_3091(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3091(t0,t1,t2,t3,t4);}

/* doloop1297 in k5946 in set-groups! in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5953(C_word t0,C_word t1,C_word t2,C_word t3){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5953,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t4=C_set_groups(t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5969,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:951: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_i_check_exact_2(t4,lf[276]);
t6=C_set_gid(t3,t4);
t7=C_slot(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t10=t1;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* file-size in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2834,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:269: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);}

/* k2836 in file-size in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2838,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_double_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8157 in shell-command in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8159,2,av);}
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
av2[1]=lf[435];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#shell-command in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8155,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8159,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1613: get-environment-variable */
t3=*((C_word*)lf[436]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[437];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2830 in file-permissions in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2832,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8240 */
static void C_ccall f_8241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8241,2,av);}
/* posixunix.scm:1659: ##sys#process-wait */
t2=*((C_word*)lf[126]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a8246 */
static void C_ccall f_8247(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8247,5,av);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixunix.scm:1661: ##sys#signal-hook */
t5=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[441];
av2[5]=((C_word*)t0)[3];
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* file-type in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2840,c,av);}
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:272: ##sys#stat */
f_2738(t12,t2,t5,t9,lf[23]);}

/* k2857 in file-type in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2859,2,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[25];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[26];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[27];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[29];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[30]:lf[24]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8218 in k8302 in connect-child in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8220,2,av);}
/* posixunix.scm:1652: file-close */
t2=*((C_word*)lf[185]+1);{
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

/* make-on-close in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8224(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8224,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8226,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=t7,a[6]=t3,a[7]=t2,a[8]=((C_word)li228),tmp=(C_word)a,a+=9,tmp);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* f_8226 in make-on-close in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8226(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8226,2,av);}
a=C_alloc(9);
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8241,a[2]=((C_word*)t0)[6],a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8247,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word)li227),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1659: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4003 in k3997 in seconds->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4005,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:597: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:598: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[109];
av2[3]=lf[110];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k6685 in loop in k6635 in a6628 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6687,2,av);}
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posixunix.scm:1206: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6639(t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* ##sys#shell-command-arguments in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8164,3,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list2(&a,2,lf[439],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5613(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_5613,2,av);}
a=C_alloc(21);
t2=C_mutate2((C_word*)lf[253]+1 /* (set! signal-mask ...) */,t1);
t3=C_mutate2((C_word*)lf[254]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5615,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[255]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5621,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[257]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5637,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[259]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5653,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8739,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8742,a[2]=((C_word)li261),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:826: getter-with-setter */
t10=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=lf[463];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k5908 in loop in k5888 in k5885 in k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5910,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* signal-masked? in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5615,3,av);}
t3=C_i_check_exact_2(t2,lf[254]);
t4=C_sigprocmask_get(C_fix(0));
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_sigismember(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5918 in k5885 in k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5920,2,av);}
/* posixunix.scm:938: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[272];
av2[3]=lf[273];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4035 in local-time->seconds in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4037,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:604: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k4815 in file-mkstemp in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4817,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_mkstemp(t2);
t4=C_block_size(t2);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(C_fix(-1),t3);
if(C_truep(t7)){
/* posixunix.scm:524: posix-error */
t8=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[8];
av2[3]=lf[194];
av2[4]=lf[195];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t8=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_4823(2,av2);}}}

/* k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6415(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(81,c,8)))){
C_save_and_reclaim((void *)f_6415,2,av);}
a=C_alloc(81);
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6416,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li160),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6445,a[2]=t6,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6453,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t6,a[10]=((C_word)li162),tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6549,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6555,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li163),tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6580,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=((C_word)li164),tmp=(C_word)a,a+=6,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6592,a[2]=t11,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word)li165),tmp=(C_word)a,a+=8,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6614,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word)li166),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6629,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li168),tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6705,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t9,a[6]=((C_word)li172),tmp=(C_word)a,a+=7,tmp);
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6828,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li173),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1173: make-input-port */
t20=*((C_word*)lf[358]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
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

/* ready? in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_6416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6416,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6420,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1129: ##sys#file-select-one */
t3=*((C_word*)lf[144]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* file-mkstemp in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4810(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4810,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[194]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:520: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[194];
tp(4,av2);}}

/* local-time->seconds in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4033,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4037,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:603: check-time-vector */
f_3924(t3,lf[111],t2);}

/* k4045 in k4039 in k4035 in local-time->seconds in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4047,2,av);}
if(C_truep(t1)){
/* posix-common.scm:606: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=lf[112];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4039 in k4035 in local-time->seconds in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4041,2,av);}
a=C_alloc(9);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:605: fp= */
t4=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[114];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6981 in loop in poke1594 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6983,2,av);}
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
/* posixunix.scm:1266: poke */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k4092 in k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4094,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:619: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=lf[116];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* a3778 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3779,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3775 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3777,2,av);}
/* posix-common.scm:542: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_3767(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_3767,2,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3779,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3804,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:544: ##sys#dynamic-wind */
t11=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:548: pproc */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* poke1594 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6927(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6927,4,av);}
a=C_alloc(12);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6933,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word)li175),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_6933(2,av2);}}

/* k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6926(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6926,2,av);}
a=C_alloc(26);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6927,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li176),tmp=(C_word)a,a+=7,tmp);
t7=C_fixnump(((C_word*)t0)[5]);
t8=(C_truep(t7)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t9=t8;
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6993,a[2]=t3,a[3]=t6,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=t10;
f_6993(t12,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7040,a[2]=t3,a[3]=((C_word)li180),tmp=(C_word)a,a+=4,tmp));}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7054,a[2]=t10,a[3]=t9,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:1273: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t13=t12;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t13;
av2[1]=((C_word*)t0)[5];
f_7054(2,av2);}}}}

/* time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4078,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4085,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:614: check-time-vector */
f_3924(t7,lf[115],t2);}

/* k3251 in rmdir in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3253,2,av);}
t2=C_rmdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posix-common.scm:432: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[73];
av2[4]=lf[74];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}}

/* k3794 in k3790 in a3783 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in ... */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3796,2,av);}
/* posix-common.scm:545: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3790 in a3783 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in ... */
static void C_ccall f_3792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3792,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:547: pproc */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3797 in k3790 in a3783 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in ... */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3799,2,av);}
if(C_truep(t1)){
/* posix-common.scm:547: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:545: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3711(t3,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],t2);}}

/* k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4085,2,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[115]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4104,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[115];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:620: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3281 in g289 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3283,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[75]+1);
t3=*((C_word*)lf[75]+1);
/* posix-common.scm:440: g299 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:442: directory? */
t3=*((C_word*)lf[37]+1);{
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

/* a3783 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3784,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3792,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:546: directory */
t3=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3287 in k3281 in g289 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3289,2,av);}
if(C_truep(t1)){
/* posix-common.scm:440: g299 */
f_3249(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[75]+1);
t3=*((C_word*)lf[75]+1);
/* posix-common.scm:440: g299 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[75]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* connect-child in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8293(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8293,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t3)){
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8304,a[2]=t1,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1677: file-close */
t10=*((C_word*)lf[185]+1);{
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

/* k8290 in connect-parent in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8292,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3733,2,av);}
a=C_alloc(14);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[93]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[94]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:538: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3711(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* posix-common.scm:539: symbolic-link? */
t3=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:549: pproc */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* a4559 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4560,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4566,a[2]=t2,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:726: k722 */
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

/* a4565 in a4559 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4566,2,av);}{
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

/* k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3724,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* posix-common.scm:537: directory? */
t6=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a3803 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3804,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-nonblocking! in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4572,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub788(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-select-one in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4579,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub793(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3753 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3755,2,av);}
/* posix-common.scm:540: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3756 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3758,2,av);}
if(C_truep(t1)){
/* posix-common.scm:540: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:540: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3711(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* file-unlock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7371(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7371,3,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,lf[366],lf[373]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
t9=C_fix((C_word)errno);
if(C_truep(C_i_eqvp(t9,C_fix((C_word)EINTR)))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7400,a[2]=t2,a[3]=((C_word)li192),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1366: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t1;
av2[2]=t10;
tp(3,av2);}}
else{
/* posixunix.scm:1367: posix-error */
t10=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=lf[373];
av2[4]=lf[374];
av2[5]=t2;
f_2720(6,av2);}}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,6)))){
C_save_and_reclaim((void*)f_3243,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[73]);
if(C_truep(t5)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3272,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:435: find-files */
t9=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[77];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[78];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(7,av2);}}
else{
/* posix-common.scm:447: rmdir */
f_3249(t1,t2);}}

/* rmdir in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3249(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3249,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3253,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:430: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k6479 in k6476 in loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6481,2,av);}
/* posixunix.scm:1150: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6459(2,av2);}}

/* g289 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3273(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3273,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3283,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:441: symbolic-link? */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3272(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3272,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3297,a[2]=t5,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3297(t7,t3,t1);}

/* a4521 in a4515 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4522,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4526,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:736: free-c-string-buffer */
f_4456(t2,((C_word*)t0)[4]);}

/* k4524 in a4521 in a4515 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4526,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:737: free-c-string-buffer */
f_4456(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:738: signal */
t3=*((C_word*)lf[130]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4527 in k4524 in a4521 in a4515 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4529,2,av);}
/* posix-common.scm:738: signal */
t2=*((C_word*)lf[130]+1);{
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

/* k3223 in k3220 in current-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3225,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:422: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
/* posix-common.scm:423: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[68];
av2[4]=lf[71];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3220 in current-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3222,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_curdir(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3225,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:420: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}

/* a8700 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8701,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1219(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8703 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8704,3,av);}
a=C_alloc(4);
t3=C_setgid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8714,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:849: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7665 in k7661 in string->time in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7667(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7667,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1454: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4537,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li86),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[9],a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:726: ##sys#call-with-values */{
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

/* k7661 in string->time in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7663,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7667,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1454: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* a4542 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4543,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4547,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4558,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:742: list->c-string-buffer */
f_4337(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=t2;
f_4547(t3,C_SCHEME_UNDEFINED);}}

/* k4545 in a4542 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4547(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4547,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:744: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k7673 in k7665 in k7661 in string->time in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7675,2,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub1799(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub1799(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5967 in doloop1297 in k5946 in set-groups! in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5969,2,av);}
/* posixunix.scm:952: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[276];
av2[3]=lf[277];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* current-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_3209,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
if(C_truep(t4)){
/* posix-common.scm:416: change-directory */
t5=*((C_word*)lf[69]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t5;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}}

/* set-groups! in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5944(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5944,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5948,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(t2);
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub1281(C_SCHEME_UNDEFINED,t5))){
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5948(2,av2);}}
else{
/* posixunix.scm:946: ##sys#error */
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[276];
av2[3]=lf[278];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k4552 in k4545 in a4542 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4554,2,av);}
/* posix-common.scm:744: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k4556 in a4542 in a4536 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4558,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4547(t3,t2);}

/* k5937 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5939,2,av);}
/* posixunix.scm:933: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[272];
av2[3]=lf[275];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* call-with-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5401,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5405,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[206]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5946 in set-groups! in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5948,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5953,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li143),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5953(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k5403 in call-with-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5405,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5410,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5416,a[2]=t2,a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:653: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* memory-mapped-file-pointer in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7622,3,av);}
t3=C_i_check_structure_2(t2,lf[389],lf[396]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2808(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(48,c,4)))){
C_save_and_reclaim((void *)f_2808,2,av);}
a=C_alloc(48);
t2=C_mutate2((C_word*)lf[17]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate2((C_word*)lf[18]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2810,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[19]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[20]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2822,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[21]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[22]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2834,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[23]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[31]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[32]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[33]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[34]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[35]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[36]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2977,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[37]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2987,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[38]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t17=C_mutate2((C_word*)lf[39]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t18=C_mutate2((C_word*)lf[40]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t19=C_mutate2((C_word*)lf[41]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8832,a[2]=((C_word)li267),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:330: getter-with-setter */
t22=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t22;
av2[1]=t20;
av2[2]=t21;
av2[3]=*((C_word*)lf[41]+1);
av2[4]=lf[467];
((C_proc)(void*)(*((C_word*)t22+1)))(5,av2);}}

/* a8868 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_8869,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8873,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:254: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[17]);}

/* memory-mapped-file? in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7631,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[389]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* file-change-time in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2816,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:266: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[19]);}

/* k2812 in file-access-time in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2814,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-access-time in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2810,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:265: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[18]);}

/* k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6409(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6409,2,av);}
a=C_alloc(9);
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6415,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:1124: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_6415(2,av2);}}}

/* k6418 in ready? in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6420,2,av);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t4=(C_truep(t3)?t3:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:1134: posix-error */
t5=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[347];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2720(7,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_eqp(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8846 in a8831 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8848,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[43]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_8836(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_fix(-1);
f_8836(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_8836(2,av2);}}
else{
/* posix-common.scm:339: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[13];
av2[3]=lf[45];
av2[4]=lf[466];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a5433 in k5427 in call-with-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5434,2,av);}
/* posixunix.scm:663: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k8834 in a8831 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_8836,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8839,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:341: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[8];
av2[3]=lf[45];
av2[4]=lf[465];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a8831 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8832(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8832,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8836,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8848,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:332: port? */
t5=*((C_word*)lf[15]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5442 in a5439 in k5427 in call-with-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5444,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* a5439 in k5427 in call-with-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5440,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5444,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:665: close-output-pipe */
t4=*((C_word*)lf[213]+1);{
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

/* with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5449,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5453,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[206]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k8837 in k8834 in a8831 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8839,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5415 in k5403 in call-with-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5416,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5420,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:656: close-input-pipe */
t4=*((C_word*)lf[211]+1);{
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

/* a5409 in k5403 in call-with-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5410,2,av);}
/* posixunix.scm:654: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_6453(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6453,2,t0,t1);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li161),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=t1;
f_6459(2,av2);}}

/* a7399 in file-unlock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7400,2,av);}
/* posixunix.scm:1366: file-unlock */
t2=*((C_word*)lf[373]+1);{
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

/* loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6459(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_6459,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1148: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[349]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[349]+1);
av2[1]=t7;
av2[2]=*((C_word*)lf[350]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[351];
tp(5,av2);}}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1152: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1153: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[352];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[7];
f_2720(7,av2);}}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6511,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1157: more? */
t6=((C_word*)t0)[8];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t5=C_mutate2(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k6616 in a6613 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6618,2,av);}
/* posixunix.scm:1192: peek */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(
  /* posixunix.scm:1192: peek */
  f_6445(((C_word*)t0)[3])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6613 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6614,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6618,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:1191: fetch */
t3=((C_word*)t0)[5];
f_6453(t3,t2);}
else{
/* posixunix.scm:1192: peek */
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  /* posixunix.scm:1192: peek */
  f_6445(((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* call-with-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5425,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5429,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[210]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5418 in a5415 in k5403 in call-with-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5420,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* create-fifo in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_7414,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_string_2(t2,lf[375]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7421,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_7421(t7,C_u_i_car(t6));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_7421(t7,C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* peek in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_6445(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=C_subchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
return(t1);}}

/* k5427 in call-with-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5429,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5434,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5440,a[2]=t2,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:662: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k5471 in a5468 in a5462 in k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5473,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k6600 in a6591 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6602,2,av);}
/* posixunix.scm:1188: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5477 in k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5478,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[218]+1));
t3=C_mutate2((C_word*)lf[218]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6476 in loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_6478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6478,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1149: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[348]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[348]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6635 in a6628 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_fcall f_6637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,5)))){
C_save_and_reclaim_args((void *)trf_6637,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word)li167),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_6639(t5,((C_word*)t0)[7],t1,C_fix(0),((C_word*)t0)[8]);}

/* loop in k6635 in a6628 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_fcall f_6639(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_6639,5,t0,t1,t2,t3,t4);}
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
/* posixunix.scm:1201: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6687,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1203: fetch */
t7=((C_word*)t0)[7];
f_6453(t7,t6);}}}

/* with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5483,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5487,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[210]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5487(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5487,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5492,a[2]=t6,a[3]=t4,a[4]=((C_word)li124),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5497,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5512,a[2]=t4,a[3]=t6,a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:677: ##sys#dynamic-wind */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[3];
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a6628 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6629(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6629,6,av);}
a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_6637(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_6637(t8,C_fixnum_difference(t7,t5));}}

/* k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5453(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5453,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5458,a[2]=t6,a[3]=t4,a[4]=((C_word)li119),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5463,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5478,a[2]=t4,a[3]=t6,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:669: ##sys#dynamic-wind */
t10=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[3];
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a5457 in k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5458,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[218]+1));
t3=C_mutate2((C_word*)lf[218]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5462 in k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5463,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[2],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:672: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a5468 in a5462 in k5451 in with-input-from-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5469,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5473,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:674: close-input-pipe */
t4=*((C_word*)lf[211]+1);{
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

/* a8791 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8792,3,av);}
t3=C_i_check_exact_2(t2,lf[123]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(*((C_word*)lf[122]+1),t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-open in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4669,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4673,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4673(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4673(t6,((C_word*)t0)[2]);}}

/* k4671 in file-open in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4673,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[183]);
t4=C_i_check_exact_2(((C_word*)t0)[3],lf[183]);
t5=C_i_check_exact_2(t2,lf[183]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4686,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:478: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[183];
tp(4,av2);}}

/* loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3711(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3711,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t3))){
t5=t4;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_slot(t3,C_fix(0));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3724,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* posix-common.scm:535: make-pathname */
t8=*((C_word*)lf[83]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* open-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_5291,c,av);}
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
t4=C_i_check_string_2(t2,lf[206]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[207]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5305,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[207]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5312,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:621: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[206];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[208]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5322,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:622: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[206];
tp(4,av2);}}
else{
/* posixunix.scm:606: ##sys#error */
t10=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[209];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3709,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3711,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li43),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3711(t5,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10]);}

/* k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3702(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_3702,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:530: directory */
t4=*((C_word*)lf[26]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5391 in close-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5393,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* connect-parent in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8281(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8281,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(t3)){
t4=C_i_car(t2);
t5=t4;
t6=t2;
t7=C_u_i_cdr(t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8292,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1671: file-close */
t9=*((C_word*)lf[185]+1);{
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

/* a8741 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8742,3,av);}
a=C_alloc(4);
t3=C_setuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8752,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:830: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* file-control in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,6)))){
C_save_and_reclaim((void*)f_4636,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
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
t6=(C_truep(t5)?C_fix(0):C_i_car(t4));
t7=C_i_check_exact_2(t2,lf[181]);
t8=C_i_check_exact_2(t3,lf[181]);
t9=t2;
t10=t3;
t11=C_i_foreign_fixnum_argumentp(t9);
t12=C_i_foreign_fixnum_argumentp(t10);
t13=C_i_foreign_integer_argumentp(t6);
t14=stub837(C_SCHEME_UNDEFINED,t11,t12,t13);
t15=C_eqp(t14,C_fix(-1));
if(C_truep(t15)){
/* posixunix.scm:468: posix-error */
t16=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t16;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=lf[181];
av2[4]=lf[182];
av2[5]=t2;
av2[6]=t3;
f_2720(7,av2);}}
else{
t16=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}

/* a8275 in needed-pipe in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8276,4,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8269 in needed-pipe in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8270,2,av);}
/* posixunix.scm:1666: create-pipe */
t2=*((C_word*)lf[221]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8738 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8739,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1209(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8731 in a8722 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8733,2,av);}
/* posixunix.scm:840: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[459];
av2[3]=lf[460];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4503 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4505,2,av);}
/* posix-common.scm:726: g726 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4502(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4502,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4510,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li90),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:726: call-with-current-continuation */
t7=*((C_word*)lf[136]+1);{
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

/* k4687 in k4684 in k4671 in file-open in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4689,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4684 in k4671 in file-open in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4686,2,av);}
a=C_alloc(4);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:480: posix-error */
t5=lf[0];{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[8];
av2[3]=lf[183];
av2[4]=lf[184];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[3];
f_2720(8,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* needed-pipe in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8261(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_8261,2,t1,t2);}
a=C_alloc(6);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8270,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8276,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1664: ##sys#call-with-values */{
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

/* a8719 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8720,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1214(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8722 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8723(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8723,3,av);}
a=C_alloc(4);
t3=C_seteuid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8733,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:839: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a4515 in a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4516,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4522,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:726: k722 */
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4509 in k4500 in k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4510(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4510,3,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li89),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:726: with-exception-handler */
t5=*((C_word*)lf[135]+1);{
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

/* a4364 in a4358 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4365,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4369,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:702: free-c-string-buffer */
f_4456(t2,((C_word*)t0)[3]);}

/* k4367 in a4364 in a4358 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4369,2,av);}
/* posix-common.scm:702: signal */
t2=*((C_word*)lf[130]+1);{
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

/* k8712 in a8703 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8714,2,av);}
/* posixunix.scm:850: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[456];
av2[3]=lf[457];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8039 in process-execute in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8040,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a8042 in process-execute in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8043(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8043,5,av);}
t5=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t6=C_eqp(t5,C_fix(-1));
if(C_truep(t6)){
/* posixunix.scm:1581: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=lf[428];
av2[4]=lf[429];
av2[5]=((C_word*)t0)[2];
f_2720(6,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a8825 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8826,3,av);}
t3=C_i_check_exact_2(t2,lf[102]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_umask(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop683 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4382(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4382,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4398,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* posix-common.scm:711: convert */
t12=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}}

/* k5771 in current-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5773,2,av);}
/* posixunix.scm:888: user-information */
t2=*((C_word*)lf[266]+1);{
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

/* k4378 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4380,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* current-effective-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5775,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5783,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5787,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:891: current-effective-user-id */
t4=*((C_word*)lf[263]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5785 in current-effective-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5787,2,av);}
/* posixunix.scm:891: user-information */
t2=*((C_word*)lf[266]+1);{
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

/* k5781 in current-effective-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5783,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4353(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4353,3,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li78),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:696: with-exception-handler */
t5=*((C_word*)lf[135]+1);{
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

/* a4358 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4359,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4365,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:696: k674 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* loop in a8757 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8764(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_8764,4,t0,t1,t2,t3);}
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
/* posixunix.scm:781: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t7=t3;
/* posixunix.scm:781: loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* process-execute in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,7)))){
C_save_and_reclaim((void*)f_8022,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8040,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8043,a[2]=t2,a[3]=((C_word)li216),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1574: call-with-exec-args */
t14=lf[142];
f_4492(t14,t1,lf[428],t2,t12,t5,t9,t13);}

/* file-test-lock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_7344,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7348,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1356: setup */
f_7200(t4,t2,t3,lf[371]);}

/* k7346 in file-test-lock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7348,2,av);}
t2=C_flock_test(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_eqp(t2,C_fix(0));
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?C_SCHEME_FALSE:t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:1358: err */
f_7264(((C_word*)t0)[3],lf[372],t1,lf[371]);}}

/* a8800 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_8801,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[102]):C_SCHEME_UNDEFINED);
if(C_truep(t4)){
t6=C_umask(t4);
if(C_truep(t4)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_umask(t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t6=C_umask(C_fix(0));
if(C_truep(t4)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_umask(t6);
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k8750 in a8741 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8752,2,av);}
/* posixunix.scm:831: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[456];
av2[3]=lf[462];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8757 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8758(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8758,2,av);}
a=C_alloc(6);
t2=C_sigprocmask_get(C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8764,a[2]=t4,a[3]=((C_word)li262),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8764(t6,t1,*((C_word*)lf[250]+1),C_SCHEME_END_OF_LIST);}

/* k7419 in create-fifo in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7421,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=C_i_check_exact_2(t2,lf[375]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7438,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1377: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[375];
tp(4,av2);}}

/* tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4376(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_4376,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4380,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4382(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4374(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4374,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li75),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4433,a[2]=((C_word*)t0)[7],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4450,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12610 */
t5=t2;
f_4376(t5,t4);}

/* k8508 in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8510,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8514,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1737: ##sys#shell-command */
t4=*((C_word*)lf[434]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7436 in k7419 in create-fifo in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7438,2,av);}
t2=C_mkfifo(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1378: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[375];
av2[4]=lf[376];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_2720(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,7)))){
C_save_and_reclaim((void*)f_8516,c,av);}
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
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_i_cdr(t7));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8534,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1744: %process */
f_8445(t1,lf[443],C_SCHEME_FALSE,t2,t5,t9,t12);}

/* k8512 in k8508 in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8514,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_8488(2,av2);}}

/* k4346 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4348,2,av);}
/* posix-common.scm:696: g678 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4345,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4353,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li79),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:696: call-with-current-continuation */
t5=*((C_word*)lf[136]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* set-file-position! in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3000,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3004,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_3004(t7,C_u_i_car(t6));}
else{
t6=t5;
f_3004(t6,C_fix((C_word)SEEK_SET));}}

/* k7457 in fifo? in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7459,2,av);}
t2=C_i_fifo_p(t1);
switch(t2){
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_SCHEME_FALSE:
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(0):
/* posixunix.scm:1388: ##sys#signal-hook */
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[35];
av2[4]=lf[377];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}
default:
/* posixunix.scm:1390: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[35];
av2[4]=lf[378];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}}

/* fifo? in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7451(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7451,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[35]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7459,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1385: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[35];
tp(4,av2);}}

/* k3014 in k3002 in set-file-position! in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3016,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:327: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[41];
av2[4]=lf[42];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2720(7,av2);}}}

/* loop in file-lock/blocking in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7319,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1348: setup */
f_7200(t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[369]);}

/* process* in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_8564,c,av);}
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
if(C_truep(C_i_nullp(t7))){
/* posixunix.scm:1749: %process */
f_8445(t1,lf[444],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[445]+1));}
else{
t10=C_i_cdr(t7);
/* posixunix.scm:1749: %process */
f_8445(t1,lf[444],C_SCHEME_TRUE,t2,t5,t9,*((C_word*)lf[445]+1));}}

/* file-lock/blocking in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_7313,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7319,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word)li189),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_7319(2,av2);}}

/* k3002 in set-file-position! in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3004(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_3004,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[41]);
t4=C_i_check_exact_2(t2,lf[41]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:320: port? */
t7=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5725 in k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5727,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_passwd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4337(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4337,4,t1,t2,t3,t4);}
a=C_alloc(11);
t5=C_i_check_list_2(t2,t4);
t6=t2;
t7=C_u_i_length(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4345,a[2]=t1,a[3]=t7,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_plus(&a,2,t7,C_fix(1));
/* posix-common.scm:698: make-pointer-vector */
t10=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k7321 in loop in file-lock/blocking in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7323,2,av);}
t2=C_flock_lockw(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_fix((C_word)errno);
if(C_truep(C_i_eqvp(t3,C_fix((C_word)EINTR)))){
/* posixunix.scm:1351: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1352: err */
f_7264(((C_word*)t0)[3],lf[370],t1,lf[369]);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* open-input-file* in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_3106,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[60]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3118,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:377: mode */
f_3054(t5,C_SCHEME_TRUE,t3,lf[60]);}

/* k3102 in check in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3104,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3060 in mode in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3062,2,av);}
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8893 in a8874 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8895,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:260: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[468];
av2[4]=lf[469];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2720(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a8533 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8534(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8534,6,av);}
/* posixunix.scm:1746: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}

/* k8883 in a8874 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8885,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub119(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5751 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5753,2,av);}
t2=((C_word*)t0)[2];
f_5714(t2,C_getpwnam(t1));}

/* k5767 in current-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5769,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* open-output-file* in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_3120,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[61]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3132,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:381: mode */
f_3054(t5,C_SCHEME_FALSE,t3,lf[61]);}

/* k5287 in check in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5289,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8874 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8875(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8875,4,av);}
a=C_alloc(9);
t4=C_i_check_number_2(t3,lf[468]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8895,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8885,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* posix-common.scm:257: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}
else{
t10=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub119(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t8);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k8871 in a8868 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_8873,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* current-user-name in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5761,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5769,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5773,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:888: current-user-id */
t4=*((C_word*)lf[262]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5737 in k5733 in k5729 in k5725 in k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_5739,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_shell);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6836 in a6827 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6838,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3116 in open-input-file* in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3118,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:377: check */
f_3091(((C_word*)t0)[4],lf[60],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* a8097 in process-wait in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8098,2,av);}
/* posixunix.scm:1591: ##sys#process-wait */
t2=*((C_word*)lf[126]+1);{
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

/* k5729 in k5725 in k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5731,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_PW_GECOS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5733 in k5729 in k5725 in k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5735,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_dir);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3020 in k3002 in set-file-position! in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3022,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[43]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_3016(2,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3016(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_3016(2,av2);}}
else{
/* posix-common.scm:326: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[13];
av2[3]=lf[41];
av2[4]=lf[44];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* ##sys#process-wait in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8082(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8082,4,av);}
a=C_alloc(5);
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8098,a[2]=t2,a[3]=t3,a[4]=((C_word)li218),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1590: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t1;
av2[2]=t9;
tp(3,av2);}}
else{
if(C_truep(t6)){
t9=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm:1592: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t9=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1592: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}
else{
t9=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm:1592: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=t9;
C_values(5,av2);}}}}}

/* k5741 in k5737 in k5733 in k5729 in k5725 in k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_5743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5743,2,av);}
/* posixunix.scm:871: g1243 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
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

/* f_7055 in k7052 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7055(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7055,3,av);}
a=C_alloc(11);
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7072,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word)li181),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7072(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1289: poke */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k7052 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7054,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[2];
f_6993(t5,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7055,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li182),tmp=(C_word)a,a+=7,tmp));}

/* port->fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3134,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[10]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[30],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:391: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[62]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[62]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3176,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:392: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3130 in open-output-file* in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3132,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:381: check */
f_3091(((C_word*)t0)[4],lf[61],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* loop in k3473 in k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3489,2,t0,t1);}
a=C_alloc(6);
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3503,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:485: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* check in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5276(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_5276,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm:609: posix-error */
t6=lf[0];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=t2;
av2[4]=lf[204];
av2[5]=t3;
f_2720(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5289,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:610: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=*((C_word*)lf[58]+1);
av2[4]=lf[205];
av2[5]=lf[43];
tp(6,av2);}}}

/* k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3471,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:475: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[26];
tp(4,av2);}}

/* k3473 in k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3475,2,av);}
a=C_alloc(10);
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:477: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[26];
av2[4]=lf[85];
av2[5]=((C_word*)t0)[4];
f_2720(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3489(t6,((C_word*)t0)[3]);}}

/* change-directory* in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5242(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5242,3,av);}
a=C_alloc(4);
t3=C_i_check_exact_2(t2,lf[202]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_fchdir(t2);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* posixunix.scm:598: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t4;
av2[2]=lf[8];
av2[3]=lf[202];
av2[4]=lf[203];
av2[5]=t2;
f_2720(6,av2);}}}

/* k5247 in change-directory* in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5249,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3148 in port->fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3150,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3465,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:471: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[86]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3468,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3471,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:472: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[86]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[86]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3157 in k3174 in port->fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3159,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4295 in process-wait in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4296,5,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:681: posix-error */
t6=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=lf[125];
av2[4]=lf[128];
av2[5]=((C_word*)t0)[2];
f_2720(6,av2);}}
else{
/* posix-common.scm:682: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* a4289 in process-wait in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4290,2,av);}
/* posix-common.scm:679: ##sys#process-wait */
t2=*((C_word*)lf[126]+1);{
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

/* k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3450(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3450,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_check_string_2(t2,lf[26]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t11;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* duplicate-fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3182,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_exact_2(t2,*((C_word*)lf[66]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3189,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_3189(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[66]);
t8=t5;
f_3189(t8,C_dup2(t2,t6));}}

/* change-directory in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5223(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5223,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:590: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[69];
tp(4,av2);}}

/* k3187 in duplicate-fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3189,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:408: posix-error */
t4=lf[0];{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[8];
av2[3]=lf[66];
av2[4]=lf[67];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3446,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3450,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:468: current-directory */
t5=*((C_word*)lf[68]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3450(2,av2);}}}

/* k5231 in k5228 in change-directory in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5233,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3174 in port->fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3176,2,av);}
a=C_alloc(4);
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:397: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[13];
av2[3]=lf[10];
av2[4]=lf[63];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3159,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:395: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[8];
av2[3]=lf[10];
av2[4]=lf[64];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k5228 in change-directory in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5230,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posixunix.scm:592: posix-error */
t5=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[8];
av2[3]=lf[69];
av2[4]=lf[201];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}}

/* mode in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3054(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3054,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3062,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[49]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:363: ##sys#error */
t10=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t5;
av2[2]=lf[51];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t1;
av2[2]=lf[52];
av2[3]=t4;
tp(4,av2);}}}
else{
/* posix-common.scm:364: ##sys#error */
t9=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[53];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t1;
av2[2]=lf[54];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t1;
av2[2]=lf[55];
av2[3]=t4;
tp(4,av2);}}}}

/* file-stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2788,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2795,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:244: ##sys#stat */
f_2738(t6,t2,t5,C_SCHEME_TRUE,lf[16]);}

/* k2781 in k2761 in stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2783,2,av);}
/* posix-common.scm:227: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3049(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,6)))){
C_save_and_reclaim((void *)f_3049,2,av);}
a=C_alloc(53);
t2=C_mutate2((C_word*)lf[45]+1 /* (set! file-position ...) */,t1);
t3=C_mutate2((C_word*)lf[46]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t4=C_mutate2((C_word*)lf[47]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t5=C_mutate2((C_word*)lf[48]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[60]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3106,a[2]=t9,a[3]=t7,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[61]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=t9,a[3]=t7,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate2((C_word*)lf[10]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3134,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[66]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3182,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[68]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3209,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[73]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[79]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3329,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[26]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3446,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[87]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[76]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8801,a[2]=((C_word)li265),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8826,a[2]=((C_word)li266),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:564: getter-with-setter */
t25=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t25;
av2[1]=t22;
av2[2]=t23;
av2[3]=t24;
av2[4]=lf[464];
((C_proc)(void*)(*((C_word*)t25+1)))(5,av2);}}

/* terminal-port? in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7799(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7799,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[412]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7805,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1509: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k2793 in file-stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_2795,2,av);}
a=C_alloc(30);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6005 in initialize-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6007,2,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub1311(C_SCHEME_UNDEFINED,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3426 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3428,2,av);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posix-common.scm:451: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[79];
av2[4]=lf[80];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}}

/* k2765 in k2761 in stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2767,2,av);}
t2=C_fstat(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2742(2,av2);}}

/* k2761 in stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2763,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:225: port->fileno */
t3=*((C_word*)lf[10]+1);{
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
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2783,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:228: ##sys#platform-fixup-pathname */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
/* posix-common.scm:235: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[13];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[14];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2774 in k2761 in stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2776,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_lstat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2742(2,av2);}}
else{
t2=C_stat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2742(2,av2);}}}

/* a3404 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3405(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3405,5,av);}
if(C_truep(t3)){
/* posix-common.scm:460: make-pathname */
t5=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k5712 in user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5714(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5714,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[267]+1):*((C_word*)lf[268]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5727,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[260]+1);{
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

/* k7744 in k7741 in k7738 in set-buffering-mode! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7746,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[405]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(((C_word*)t0)[4],C_fix(7));
t6=C_eqp(lf[43],t5);
if(C_truep(t6)){
t7=C_setvbuf(((C_word*)t0)[4],t2,((C_word*)t0)[2]);
t8=t4;
f_7755(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
t7=t4;
f_7755(t7,C_SCHEME_TRUE);}}

/* initialize-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6019(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6019,4,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[279]);
t5=C_i_check_exact_2(t3,lf[279]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6042,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6007,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t8)){
t11=C_i_foreign_string_argumentp(t8);
/* posixunix.scm:958: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}
else{
t11=C_i_foreign_fixnum_argumentp(t9);
t12=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=stub1311(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k7738 in set-buffering-mode! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7740,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_7743(t4,C_u_i_car(t3));}
else{
t3=t2;
f_7743(t3,C_fix((C_word)BUFSIZ));}}

/* k7741 in k7738 in set-buffering-mode! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7743(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_7743,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7746,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[407]);
if(C_truep(t5)){
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_fix((C_word)_IOFBF);
f_7746(2,av2);}}
else{
t6=C_eqp(t3,lf[408]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
f_7746(2,av2);}}
else{
t7=C_eqp(t3,lf[409]);
if(C_truep(t7)){
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_fix((C_word)_IONBF);
f_7746(2,av2);}}
else{
/* posixunix.scm:1499: ##sys#error */
t8=*((C_word*)lf[50]+1);{
C_word av2[6];
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[405];
av2[3]=lf[410];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}}

/* k2740 in stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2742,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:239: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[9];
av2[5]=((C_word*)t0)[5];
f_2720(6,av2);}}
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
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* terminal-name in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7848,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7852,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1521: ##sys#terminal-check */
f_7817(t3,lf[415],t2);}

/* k6040 in initialize-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6042,2,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:963: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7753 in k7744 in k7741 in k7738 in set-buffering-mode! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_fcall f_7755(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7755,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm:1505: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[405];
av2[3]=lf[406];
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

/* k7850 in terminal-name in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7852(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7852,2,av);}
a=C_alloc(5);
t2=C_C_fileno(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t2);
t6=stub1870(t4,t5);
/* posixunix.scm:1519: ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[260]+1);{
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

/* k6033 in k6040 in initialize-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6035,2,av);}
/* posixunix.scm:964: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[279];
av2[3]=lf[280];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2722 in posix-error in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2724,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2735,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub67(t4,t5);
/* posix-common.scm:181: ##sys#peek-c-string */
t7=*((C_word*)lf[4]+1);{
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

/* user-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_5707,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5714,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5714(t8,C_getpwuid(t2));}
else{
t8=C_i_check_string_2(t2,lf[266]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5753,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:876: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[266];
tp(4,av2);}}}

/* k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5705(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(54,c,5)))){
C_save_and_reclaim((void *)f_5705,2,av);}
a=C_alloc(54);
t2=C_mutate2((C_word*)lf[265]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate2((C_word*)lf[266]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5707,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[269]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5761,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[270]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5775,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[271]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5800,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[272]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5880,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[276]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5944,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[279]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6019,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[281]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t11=C_mutate2((C_word*)lf[282]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t12=C_mutate2((C_word*)lf[283]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t13=C_mutate2((C_word*)lf[284]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t14=C_mutate2((C_word*)lf[285]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t15=C_mutate2((C_word*)lf[286]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t16=C_mutate2((C_word*)lf[287]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t17=C_mutate2((C_word*)lf[288]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t18=C_mutate2((C_word*)lf[289]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t19=C_mutate2((C_word*)lf[290]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t20=C_mutate2((C_word*)lf[291]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t21=C_mutate2((C_word*)lf[292]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t22=C_mutate2((C_word*)lf[293]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t23=C_mutate2((C_word*)lf[294]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t24=C_mutate2((C_word*)lf[295]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t25=C_mutate2((C_word*)lf[296]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t26=C_mutate2((C_word*)lf[297]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t27=C_mutate2((C_word*)lf[298]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t28=C_mutate2((C_word*)lf[299]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t29=C_mutate2((C_word*)lf[300]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t30=C_mutate2((C_word*)lf[301]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t31=C_mutate2((C_word*)lf[302]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t32=C_mutate2((C_word*)lf[303]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t33=C_set_block_item(lf[304] /* errno/2big */,0,C_fix(0));
t34=C_set_block_item(lf[305] /* errno/deadlk */,0,C_fix(0));
t35=C_set_block_item(lf[306] /* errno/dom */,0,C_fix(0));
t36=C_set_block_item(lf[307] /* errno/fbig */,0,C_fix(0));
t37=C_set_block_item(lf[308] /* errno/ilseq */,0,C_fix(0));
t38=C_set_block_item(lf[309] /* errno/mlink */,0,C_fix(0));
t39=C_set_block_item(lf[310] /* errno/nametoolong */,0,C_fix(0));
t40=C_set_block_item(lf[311] /* errno/nfile */,0,C_fix(0));
t41=C_set_block_item(lf[312] /* errno/nodev */,0,C_fix(0));
t42=C_set_block_item(lf[313] /* errno/nolck */,0,C_fix(0));
t43=C_set_block_item(lf[314] /* errno/nosys */,0,C_fix(0));
t44=C_set_block_item(lf[315] /* errno/notempty */,0,C_fix(0));
t45=C_set_block_item(lf[316] /* errno/notty */,0,C_fix(0));
t46=C_set_block_item(lf[317] /* errno/nxio */,0,C_fix(0));
t47=C_set_block_item(lf[318] /* errno/range */,0,C_fix(0));
t48=C_set_block_item(lf[319] /* errno/xdev */,0,C_fix(0));
t49=C_mutate2((C_word*)lf[320]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6083,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[322]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6106,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6132,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate2((C_word*)lf[324]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6152,a[2]=t51,a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate2((C_word*)lf[325]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6158,a[2]=t51,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate2((C_word*)lf[326]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6164,a[2]=t51,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate2((C_word*)lf[327]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6170,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8642,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8660,a[2]=((C_word)li253),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1049: getter-with-setter */
t59=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t59;
av2[1]=t56;
av2[2]=t57;
av2[3]=t58;
av2[4]=lf[452];
((C_proc)(void*)(*((C_word*)t59+1)))(5,av2);}}

/* posix-error in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2720(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_2720,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2724,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:184: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
tp(2,av2);}}

/* k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5701(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5701,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[264]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8682,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8685,a[2]=((C_word)li255),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:854: getter-with-setter */
t6=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[455];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2733 in k2722 in posix-error in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2735,2,av);}
/* posix-common.scm:185: string-append */
t2=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#stat in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_2738(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2738,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2742,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_fstat(t2);
f_2742(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2763,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:225: port? */
t8=*((C_word*)lf[15]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2729 in k2722 in posix-error in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2731,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[1]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* a5496 in k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5497,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:680: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a5491 in k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5492,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[220]+1));
t3=C_mutate2((C_word*)lf[220]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* for-each-loop288 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3297,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3307,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:435: g289 */
t5=((C_word*)t0)[3];
f_3273(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3290 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3292,2,av);}
/* posix-common.scm:446: rmdir */
f_3249(((C_word*)t0)[3],((C_word*)t0)[4]);}

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
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2426))){
C_save(t1);
C_rereclaim2(2426*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,471);
lf[1]=C_h_intern(&lf[1],15,"\003syssignal-hook");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[4]=C_h_intern(&lf[4],17,"\003syspeek-c-string");
lf[5]=C_h_intern(&lf[5],16,"\003sysupdate-errno");
lf[6]=C_h_intern(&lf[6],15,"\003sysposix-error");
lf[8]=C_h_intern(&lf[8],11,"\000file-error");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[10]=C_h_intern(&lf[10],12,"port->fileno");
lf[11]=C_h_intern(&lf[11],17,"\003sysmake-c-string");
lf[12]=C_h_intern(&lf[12],27,"\003sysplatform-fixup-pathname");
lf[13]=C_h_intern(&lf[13],11,"\000type-error");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[15]=C_h_intern(&lf[15],5,"port\077");
lf[16]=C_h_intern(&lf[16],9,"file-stat");
lf[17]=C_h_intern(&lf[17],22,"file-modification-time");
lf[18]=C_h_intern(&lf[18],16,"file-access-time");
lf[19]=C_h_intern(&lf[19],16,"file-change-time");
lf[20]=C_h_intern(&lf[20],10,"file-owner");
lf[21]=C_h_intern(&lf[21],16,"file-permissions");
lf[22]=C_h_intern(&lf[22],9,"file-size");
lf[23]=C_h_intern(&lf[23],9,"file-type");
lf[24]=C_h_intern(&lf[24],12,"regular-file");
lf[25]=C_h_intern(&lf[25],13,"symbolic-link");
lf[26]=C_h_intern(&lf[26],9,"directory");
lf[27]=C_h_intern(&lf[27],16,"character-device");
lf[28]=C_h_intern(&lf[28],12,"block-device");
lf[29]=C_h_intern(&lf[29],4,"fifo");
lf[30]=C_h_intern(&lf[30],6,"socket");
lf[31]=C_h_intern(&lf[31],13,"regular-file\077");
lf[32]=C_h_intern(&lf[32],14,"symbolic-link\077");
lf[33]=C_h_intern(&lf[33],13,"block-device\077");
lf[34]=C_h_intern(&lf[34],17,"character-device\077");
lf[35]=C_h_intern(&lf[35],5,"fifo\077");
lf[36]=C_h_intern(&lf[36],7,"socket\077");
lf[37]=C_h_intern(&lf[37],10,"directory\077");
lf[38]=C_h_intern(&lf[38],8,"seek/set");
lf[39]=C_h_intern(&lf[39],8,"seek/end");
lf[40]=C_h_intern(&lf[40],8,"seek/cur");
lf[41]=C_h_intern(&lf[41],18,"set-file-position!");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[43]=C_h_intern(&lf[43],6,"stream");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[45]=C_h_intern(&lf[45],13,"file-position");
lf[46]=C_h_intern(&lf[46],12,"fileno/stdin");
lf[47]=C_h_intern(&lf[47],13,"fileno/stdout");
lf[48]=C_h_intern(&lf[48],13,"fileno/stderr");
lf[49]=C_h_intern(&lf[49],7,"\000append");
lf[50]=C_h_intern(&lf[50],9,"\003syserror");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[57]=C_h_intern(&lf[57],13,"\003sysmake-port");
lf[58]=C_h_intern(&lf[58],21,"\003sysstream-port-class");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[60]=C_h_intern(&lf[60],16,"open-input-file\052");
lf[61]=C_h_intern(&lf[61],17,"open-output-file\052");
lf[62]=C_h_intern(&lf[62],13,"\003sysport-data");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[65]=C_h_intern(&lf[65],25,"\003syspeek-unsigned-integer");
lf[66]=C_h_intern(&lf[66],16,"duplicate-fileno");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[68]=C_h_intern(&lf[68],17,"current-directory");
lf[69]=C_h_intern(&lf[69],16,"change-directory");
lf[70]=C_h_intern(&lf[70],13,"\003syssubstring");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[72]=C_h_intern(&lf[72],15,"\003sysmake-string");
lf[73]=C_h_intern(&lf[73],16,"delete-directory");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[75]=C_h_intern(&lf[75],11,"delete-file");
lf[76]=C_h_intern(&lf[76],10,"find-files");
lf[77]=C_h_intern(&lf[77],9,"\000dotfiles");
lf[78]=C_h_intern(&lf[78],16,"\000follow-symlinks");
lf[79]=C_h_intern(&lf[79],16,"create-directory");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[81]=C_h_intern(&lf[81],18,"pathname-directory");
lf[82]=C_h_intern(&lf[82],18,"decompose-pathname");
lf[83]=C_h_intern(&lf[83],13,"make-pathname");
lf[84]=C_h_intern(&lf[84],12,"file-exists\077");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[86]=C_h_intern(&lf[86],16,"\003sysmake-pointer");
lf[87]=C_h_intern(&lf[87],4,"glob");
lf[88]=C_h_intern(&lf[88],23,"irregex-match-substring");
lf[89]=C_h_intern(&lf[89],13,"irregex-match");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[91]=C_h_intern(&lf[91],16,"\003sysglob->regexp");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[95]=C_h_intern(&lf[95],16,"\003sysdynamic-wind");
lf[96]=C_h_intern(&lf[96],7,"irregex");
lf[97]=C_h_intern(&lf[97],15,"\003sysget-keyword");
lf[98]=C_h_intern(&lf[98],6,"\000limit");
lf[99]=C_h_intern(&lf[99],5,"\000seed");
lf[100]=C_h_intern(&lf[100],7,"\000action");
lf[101]=C_h_intern(&lf[101],5,"\000test");
lf[102]=C_h_intern(&lf[102],18,"file-creation-mode");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[105]=C_h_intern(&lf[105],19,"seconds->local-time");
lf[106]=C_h_intern(&lf[106],18,"\003sysdecode-seconds");
lf[107]=C_h_intern(&lf[107],15,"current-seconds");
lf[108]=C_h_intern(&lf[108],17,"seconds->utc-time");
lf[109]=C_h_intern(&lf[109],15,"seconds->string");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[111]=C_h_intern(&lf[111],19,"local-time->seconds");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[113]=C_h_intern(&lf[113],3,"fp=");
lf[114]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[115]=C_h_intern(&lf[115],12,"time->string");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[118]=C_h_intern(&lf[118],6,"setenv");
lf[119]=C_h_intern(&lf[119],8,"unsetenv");
lf[120]=C_h_intern(&lf[120],25,"get-environment-variables");
lf[121]=C_h_intern(&lf[121],19,"set-signal-handler!");
lf[122]=C_h_intern(&lf[122],17,"\003syssignal-vector");
lf[123]=C_h_intern(&lf[123],14,"signal-handler");
lf[124]=C_h_intern(&lf[124],18,"current-process-id");
lf[125]=C_h_intern(&lf[125],12,"process-wait");
lf[126]=C_h_intern(&lf[126],16,"\003sysprocess-wait");
lf[127]=C_h_intern(&lf[127],14,"\000process-error");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[130]=C_h_intern(&lf[130],6,"signal");
lf[132]=C_h_intern(&lf[132],19,"pointer-vector-set!");
lf[133]=C_h_intern(&lf[133],5,"error");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\015Out of memory");
lf[135]=C_h_intern(&lf[135],22,"with-exception-handler");
lf[136]=C_h_intern(&lf[136],30,"call-with-current-continuation");
lf[137]=C_h_intern(&lf[137],19,"make-pointer-vector");
lf[138]=C_h_intern(&lf[138],4,"free");
lf[139]=C_h_intern(&lf[139],18,"pointer-vector-ref");
lf[140]=C_h_intern(&lf[140],21,"pointer-vector-length");
lf[141]=C_h_intern(&lf[141],24,"pathname-strip-directory");
lf[143]=C_h_intern(&lf[143],21,"\003sysfile-nonblocking!");
lf[144]=C_h_intern(&lf[144],19,"\003sysfile-select-one");
lf[145]=C_h_intern(&lf[145],8,"pipe/buf");
lf[146]=C_h_intern(&lf[146],11,"fcntl/dupfd");
lf[147]=C_h_intern(&lf[147],11,"fcntl/getfd");
lf[148]=C_h_intern(&lf[148],11,"fcntl/setfd");
lf[149]=C_h_intern(&lf[149],11,"fcntl/getfl");
lf[150]=C_h_intern(&lf[150],11,"fcntl/setfl");
lf[151]=C_h_intern(&lf[151],11,"open/rdonly");
lf[152]=C_h_intern(&lf[152],11,"open/wronly");
lf[153]=C_h_intern(&lf[153],9,"open/rdwr");
lf[154]=C_h_intern(&lf[154],9,"open/read");
lf[155]=C_h_intern(&lf[155],10,"open/write");
lf[156]=C_h_intern(&lf[156],10,"open/creat");
lf[157]=C_h_intern(&lf[157],11,"open/append");
lf[158]=C_h_intern(&lf[158],9,"open/excl");
lf[159]=C_h_intern(&lf[159],11,"open/noctty");
lf[160]=C_h_intern(&lf[160],13,"open/nonblock");
lf[161]=C_h_intern(&lf[161],10,"open/trunc");
lf[162]=C_h_intern(&lf[162],9,"open/sync");
lf[163]=C_h_intern(&lf[163],10,"open/fsync");
lf[164]=C_h_intern(&lf[164],11,"open/binary");
lf[165]=C_h_intern(&lf[165],9,"open/text");
lf[166]=C_h_intern(&lf[166],10,"perm/irusr");
lf[167]=C_h_intern(&lf[167],10,"perm/iwusr");
lf[168]=C_h_intern(&lf[168],10,"perm/ixusr");
lf[169]=C_h_intern(&lf[169],10,"perm/irgrp");
lf[170]=C_h_intern(&lf[170],10,"perm/iwgrp");
lf[171]=C_h_intern(&lf[171],10,"perm/ixgrp");
lf[172]=C_h_intern(&lf[172],10,"perm/iroth");
lf[173]=C_h_intern(&lf[173],10,"perm/iwoth");
lf[174]=C_h_intern(&lf[174],10,"perm/ixoth");
lf[175]=C_h_intern(&lf[175],10,"perm/irwxu");
lf[176]=C_h_intern(&lf[176],10,"perm/irwxg");
lf[177]=C_h_intern(&lf[177],10,"perm/irwxo");
lf[178]=C_h_intern(&lf[178],10,"perm/isvtx");
lf[179]=C_h_intern(&lf[179],10,"perm/isuid");
lf[180]=C_h_intern(&lf[180],10,"perm/isgid");
lf[181]=C_h_intern(&lf[181],12,"file-control");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot control file");
lf[183]=C_h_intern(&lf[183],9,"file-open");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[185]=C_h_intern(&lf[185],10,"file-close");
lf[186]=C_h_intern(&lf[186],22,"\003sysdispatch-interrupt");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[188]=C_h_intern(&lf[188],9,"file-read");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[191]=C_h_intern(&lf[191],10,"file-write");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[194]=C_h_intern(&lf[194],12,"file-mkstemp");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[196]=C_h_intern(&lf[196],11,"file-select");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\006failed");
lf[198]=C_h_intern(&lf[198],16,"\003sysfast-reverse");
lf[199]=C_h_intern(&lf[199],3,"max");
lf[200]=C_h_intern(&lf[200],13,"\003sysmake-blob");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[202]=C_h_intern(&lf[202],17,"change-directory\052");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[206]=C_h_intern(&lf[206],15,"open-input-pipe");
lf[207]=C_h_intern(&lf[207],5,"\000text");
lf[208]=C_h_intern(&lf[208],7,"\000binary");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[210]=C_h_intern(&lf[210],16,"open-output-pipe");
lf[211]=C_h_intern(&lf[211],16,"close-input-pipe");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[213]=C_h_intern(&lf[213],17,"close-output-pipe");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[215]=C_h_intern(&lf[215],20,"call-with-input-pipe");
lf[216]=C_h_intern(&lf[216],21,"call-with-output-pipe");
lf[217]=C_h_intern(&lf[217],20,"with-input-from-pipe");
lf[218]=C_h_intern(&lf[218],18,"\003sysstandard-input");
lf[219]=C_h_intern(&lf[219],19,"with-output-to-pipe");
lf[220]=C_h_intern(&lf[220],19,"\003sysstandard-output");
lf[221]=C_h_intern(&lf[221],11,"create-pipe");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[223]=C_h_intern(&lf[223],11,"signal/term");
lf[224]=C_h_intern(&lf[224],11,"signal/kill");
lf[225]=C_h_intern(&lf[225],10,"signal/int");
lf[226]=C_h_intern(&lf[226],10,"signal/hup");
lf[227]=C_h_intern(&lf[227],10,"signal/fpe");
lf[228]=C_h_intern(&lf[228],10,"signal/ill");
lf[229]=C_h_intern(&lf[229],11,"signal/segv");
lf[230]=C_h_intern(&lf[230],11,"signal/abrt");
lf[231]=C_h_intern(&lf[231],11,"signal/trap");
lf[232]=C_h_intern(&lf[232],11,"signal/quit");
lf[233]=C_h_intern(&lf[233],11,"signal/alrm");
lf[234]=C_h_intern(&lf[234],13,"signal/vtalrm");
lf[235]=C_h_intern(&lf[235],11,"signal/prof");
lf[236]=C_h_intern(&lf[236],9,"signal/io");
lf[237]=C_h_intern(&lf[237],10,"signal/urg");
lf[238]=C_h_intern(&lf[238],11,"signal/chld");
lf[239]=C_h_intern(&lf[239],11,"signal/cont");
lf[240]=C_h_intern(&lf[240],11,"signal/stop");
lf[241]=C_h_intern(&lf[241],11,"signal/tstp");
lf[242]=C_h_intern(&lf[242],11,"signal/pipe");
lf[243]=C_h_intern(&lf[243],11,"signal/xcpu");
lf[244]=C_h_intern(&lf[244],11,"signal/xfsz");
lf[245]=C_h_intern(&lf[245],11,"signal/usr1");
lf[246]=C_h_intern(&lf[246],11,"signal/usr2");
lf[247]=C_h_intern(&lf[247],12,"signal/winch");
lf[248]=C_h_intern(&lf[248],10,"signal/bus");
lf[249]=C_h_intern(&lf[249],12,"signal/break");
lf[250]=C_h_intern(&lf[250],12,"signals-list");
lf[251]=C_h_intern(&lf[251],16,"set-signal-mask!");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[253]=C_h_intern(&lf[253],11,"signal-mask");
lf[254]=C_h_intern(&lf[254],14,"signal-masked\077");
lf[255]=C_h_intern(&lf[255],12,"signal-mask!");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[257]=C_h_intern(&lf[257],14,"signal-unmask!");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[259]=C_h_intern(&lf[259],18,"system-information");
lf[260]=C_h_intern(&lf[260],25,"\003syspeek-nonnull-c-string");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[262]=C_h_intern(&lf[262],15,"current-user-id");
lf[263]=C_h_intern(&lf[263],25,"current-effective-user-id");
lf[264]=C_h_intern(&lf[264],16,"current-group-id");
lf[265]=C_h_intern(&lf[265],26,"current-effective-group-id");
lf[266]=C_h_intern(&lf[266],16,"user-information");
lf[267]=C_h_intern(&lf[267],6,"vector");
lf[268]=C_h_intern(&lf[268],4,"list");
lf[269]=C_h_intern(&lf[269],17,"current-user-name");
lf[270]=C_h_intern(&lf[270],27,"current-effective-user-name");
lf[271]=C_h_intern(&lf[271],17,"group-information");
lf[272]=C_h_intern(&lf[272],10,"get-groups");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[276]=C_h_intern(&lf[276],11,"set-groups!");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[279]=C_h_intern(&lf[279],17,"initialize-groups");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[281]=C_h_intern(&lf[281],10,"errno/perm");
lf[282]=C_h_intern(&lf[282],11,"errno/noent");
lf[283]=C_h_intern(&lf[283],10,"errno/srch");
lf[284]=C_h_intern(&lf[284],10,"errno/intr");
lf[285]=C_h_intern(&lf[285],8,"errno/io");
lf[286]=C_h_intern(&lf[286],12,"errno/noexec");
lf[287]=C_h_intern(&lf[287],10,"errno/badf");
lf[288]=C_h_intern(&lf[288],11,"errno/child");
lf[289]=C_h_intern(&lf[289],11,"errno/nomem");
lf[290]=C_h_intern(&lf[290],11,"errno/acces");
lf[291]=C_h_intern(&lf[291],11,"errno/fault");
lf[292]=C_h_intern(&lf[292],10,"errno/busy");
lf[293]=C_h_intern(&lf[293],12,"errno/notdir");
lf[294]=C_h_intern(&lf[294],11,"errno/isdir");
lf[295]=C_h_intern(&lf[295],11,"errno/inval");
lf[296]=C_h_intern(&lf[296],11,"errno/mfile");
lf[297]=C_h_intern(&lf[297],11,"errno/nospc");
lf[298]=C_h_intern(&lf[298],11,"errno/spipe");
lf[299]=C_h_intern(&lf[299],10,"errno/pipe");
lf[300]=C_h_intern(&lf[300],11,"errno/again");
lf[301]=C_h_intern(&lf[301],10,"errno/rofs");
lf[302]=C_h_intern(&lf[302],11,"errno/exist");
lf[303]=C_h_intern(&lf[303],16,"errno/wouldblock");
lf[304]=C_h_intern(&lf[304],10,"errno/2big");
lf[305]=C_h_intern(&lf[305],12,"errno/deadlk");
lf[306]=C_h_intern(&lf[306],9,"errno/dom");
lf[307]=C_h_intern(&lf[307],10,"errno/fbig");
lf[308]=C_h_intern(&lf[308],11,"errno/ilseq");
lf[309]=C_h_intern(&lf[309],11,"errno/mlink");
lf[310]=C_h_intern(&lf[310],17,"errno/nametoolong");
lf[311]=C_h_intern(&lf[311],11,"errno/nfile");
lf[312]=C_h_intern(&lf[312],11,"errno/nodev");
lf[313]=C_h_intern(&lf[313],11,"errno/nolck");
lf[314]=C_h_intern(&lf[314],11,"errno/nosys");
lf[315]=C_h_intern(&lf[315],14,"errno/notempty");
lf[316]=C_h_intern(&lf[316],11,"errno/notty");
lf[317]=C_h_intern(&lf[317],10,"errno/nxio");
lf[318]=C_h_intern(&lf[318],11,"errno/range");
lf[319]=C_h_intern(&lf[319],10,"errno/xdev");
lf[320]=C_h_intern(&lf[320],16,"change-file-mode");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[322]=C_h_intern(&lf[322],17,"change-file-owner");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[324]=C_h_intern(&lf[324],17,"file-read-access\077");
lf[325]=C_h_intern(&lf[325],18,"file-write-access\077");
lf[326]=C_h_intern(&lf[326],20,"file-execute-access\077");
lf[327]=C_h_intern(&lf[327],14,"create-session");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[329]=C_h_intern(&lf[329],16,"process-group-id");
lf[330]=C_h_intern(&lf[330],20,"create-symbolic-link");
lf[331]=C_h_intern(&lf[331],18,"create-symbol-link");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[333]=C_h_intern(&lf[333],22,"\003sysread-symbolic-link");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[335]=C_h_intern(&lf[335],9,"substring");
lf[336]=C_h_intern(&lf[336],18,"read-symbolic-link");
lf[337]=C_h_intern(&lf[337],19,"decompose-directory");
lf[338]=C_h_intern(&lf[338],18,"absolute-pathname\077");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000Icould not canonicalize path with symbolic links, component does not exist");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[342]=C_h_intern(&lf[342],9,"file-link");
lf[343]=C_h_intern(&lf[343],9,"hard-link");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[345]=C_h_intern(&lf[345],21,"\003syscustom-input-port");
lf[346]=C_h_intern(&lf[346],4,"void");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[348]=C_h_intern(&lf[348],17,"\003systhread-yield!");
lf[349]=C_h_intern(&lf[349],25,"\003systhread-block-for-i/o!");
lf[350]=C_h_intern(&lf[350],18,"\003syscurrent-thread");
lf[351]=C_h_intern(&lf[351],6,"\000input");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[354]=C_h_intern(&lf[354],14,"set-port-name!");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[356]=C_h_intern(&lf[356],20,"\003sysscan-buffer-line");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[358]=C_h_intern(&lf[358],15,"make-input-port");
lf[359]=C_h_intern(&lf[359],22,"\003syscustom-output-port");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[362]=C_h_intern(&lf[362],16,"make-output-port");
lf[363]=C_h_intern(&lf[363],13,"file-truncate");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[366]=C_h_intern(&lf[366],4,"lock");
lf[367]=C_h_intern(&lf[367],9,"file-lock");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[369]=C_h_intern(&lf[369],18,"file-lock/blocking");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[371]=C_h_intern(&lf[371],14,"file-test-lock");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[373]=C_h_intern(&lf[373],11,"file-unlock");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[375]=C_h_intern(&lf[375],11,"create-fifo");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000(system error while trying to access file");
lf[379]=C_h_intern(&lf[379],9,"prot/read");
lf[380]=C_h_intern(&lf[380],10,"prot/write");
lf[381]=C_h_intern(&lf[381],9,"prot/exec");
lf[382]=C_h_intern(&lf[382],9,"prot/none");
lf[383]=C_h_intern(&lf[383],9,"map/fixed");
lf[384]=C_h_intern(&lf[384],10,"map/shared");
lf[385]=C_h_intern(&lf[385],11,"map/private");
lf[386]=C_h_intern(&lf[386],13,"map/anonymous");
lf[387]=C_h_intern(&lf[387],8,"map/file");
lf[388]=C_h_intern(&lf[388],18,"map-file-to-memory");
lf[389]=C_h_intern(&lf[389],4,"mmap");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[391]=C_h_intern(&lf[391],20,"\003syspointer->address");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[393]=C_h_intern(&lf[393],16,"\003sysnull-pointer");
lf[394]=C_h_intern(&lf[394],22,"unmap-file-from-memory");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[396]=C_h_intern(&lf[396],26,"memory-mapped-file-pointer");
lf[397]=C_h_intern(&lf[397],19,"memory-mapped-file\077");
lf[398]=C_h_intern(&lf[398],12,"string->time");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[400]=C_h_intern(&lf[400],17,"utc-time->seconds");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[402]=C_h_intern(&lf[402],27,"local-timezone-abbreviation");
lf[403]=C_h_intern(&lf[403],5,"_exit");
lf[404]=C_h_intern(&lf[404],10,"set-alarm!");
lf[405]=C_h_intern(&lf[405],19,"set-buffering-mode!");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[407]=C_h_intern(&lf[407],5,"\000full");
lf[408]=C_h_intern(&lf[408],5,"\000line");
lf[409]=C_h_intern(&lf[409],5,"\000none");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[411]=C_h_intern(&lf[411],14,"\003syscheck-port");
lf[412]=C_h_intern(&lf[412],14,"terminal-port\077");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[415]=C_h_intern(&lf[415],13,"terminal-name");
lf[416]=C_h_intern(&lf[416],13,"terminal-size");
lf[417]=C_h_intern(&lf[417],6,"\000error");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[419]=C_h_intern(&lf[419],17,"\003sysmake-locative");
lf[420]=C_h_intern(&lf[420],8,"location");
lf[421]=C_h_intern(&lf[421],13,"get-host-name");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[423]=C_h_intern(&lf[423],12,"process-fork");
lf[424]=C_h_intern(&lf[424],22,"\003syskill-other-threads");
lf[425]=C_h_intern(&lf[425],4,"exit");
lf[426]=C_h_intern(&lf[426],21,"\003syscall-with-cthulhu");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[428]=C_h_intern(&lf[428],15,"process-execute");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[430]=C_h_intern(&lf[430],17,"parent-process-id");
lf[431]=C_h_intern(&lf[431],5,"sleep");
lf[432]=C_h_intern(&lf[432],14,"process-signal");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[434]=C_h_intern(&lf[434],17,"\003sysshell-command");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[436]=C_h_intern(&lf[436],24,"get-environment-variable");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[438]=C_h_intern(&lf[438],27,"\003sysshell-command-arguments");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[440]=C_h_intern(&lf[440],11,"process-run");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[442]=C_h_intern(&lf[442],11,"\003sysprocess");
lf[443]=C_h_intern(&lf[443],7,"process");
lf[444]=C_h_intern(&lf[444],8,"process\052");
lf[445]=C_h_intern(&lf[445],6,"values");
lf[446]=C_h_intern(&lf[446],19,"set-root-directory!");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[449]=C_h_intern(&lf[449],21,"set-process-group-id!");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[451]=C_h_intern(&lf[451],18,"getter-with-setter");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\026(process-group-id pid)");
lf[453]=C_h_intern(&lf[453],26,"effective-group-id!-setter");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\034(current-effective-group-id)");
lf[456]=C_h_intern(&lf[456],12,"set-user-id!");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\022(current-group-id)");
lf[459]=C_h_intern(&lf[459],25,"effective-user-id!-setter");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\033(current-effective-used-id)");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\021(current-user-id)");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[468]=C_h_intern(&lf[468],26,"set-file-modification-time");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,471,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* k4402 in k4396 in doloop683 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4404,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:714: pointer-vector-set! */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4405 in k4402 in k4396 in doloop683 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4407,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4382(t5,((C_word*)t0)[5],t3,t4);}

/* a6827 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6828,3,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[357];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1242: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
tp(5,av2);}}}

/* loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3357(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3357,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3364,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:461: directory? */
t5=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_3364(t4,C_SCHEME_FALSE);}}

/* k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3355,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3357,a[2]=t3,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3357(t5,((C_word*)t0)[2],t1);}

/* k3381 in k3365 in k3362 in loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3383,2,av);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* posix-common.scm:451: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[79];
av2[4]=lf[80];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}}

/* a4438 in tmp22611 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4439,2,av);}{
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

/* tmp22611 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4433(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4433,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4439,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:696: k674 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7803 in terminal-port? in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7805,2,av);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_tty_portp(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#terminal-check in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7817(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7817,3,t1,t2,t3);}
t4=t3;
t5=t2;
t6=C_i_check_port_2(t4,C_fix(0),C_SCHEME_TRUE,t5);
t7=C_slot(t3,C_fix(7));
t8=C_eqp(lf[43],t7);
t9=(C_truep(t8)?C_tty_portp(t3):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_SCHEME_UNDEFINED;
t11=t1;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* posixunix.scm:1516: ##sys#error */
t10=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[414];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}

/* k4421 in doloop683 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4423,2,av);}
/* posix-common.scm:711: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3345,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3405,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:459: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3428,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[79];
tp(4,av2);}}}}

/* k4473 in doloop702 in k4458 in free-c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4475,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* posix-common.scm:723: free */
t3=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
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
f_4465(t4,((C_word*)t0)[4],t3);}}

/* k4476 in k4473 in doloop702 in k4458 in free-c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4478,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4465(t3,((C_word*)t0)[4],t2);}

/* k3337 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3339,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop */
static void C_fcall f_7072(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_7072,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1279: poke */
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
/* posixunix.scm:1284: loop */
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

/* k3365 in k3362 in loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3367,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3383,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[79];
tp(4,av2);}}

/* k3362 in loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3364,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3390,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:462: pathname-directory */
t4=*((C_word*)lf[81]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8609 in set-root-directory! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8611,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub2171(C_SCHEME_UNDEFINED,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* set-root-directory! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8619(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8619,3,av);}
a=C_alloc(7);
t3=C_i_check_string_2(t2,lf[446]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8636,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=t2;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8611,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=C_i_foreign_string_argumentp(t6);
/* posixunix.scm:1757: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=stub2171(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4448 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4450,2,av);}
a=C_alloc(3);
/* tmp22611 */
t2=((C_word*)t0)[2];
f_4433(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* free-c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4456(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4456,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4460,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:719: pointer-vector-length */
t4=*((C_word*)lf[140]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7080 in loop */
static void C_ccall f_7082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7082,2,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:1281: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7072(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* k4458 in free-c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4460(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4460,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4465,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4465(t6,((C_word*)t0)[3],C_fix(0));}

/* k5093 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_5095,2,av);}
a=C_alloc(4);
t2=C_a_i_times(&a,2,t1,C_fix(1000));
t3=((C_word*)t0)[2];
f_5084(t3,C_i_inexact_to_exact(t2));}

/* doloop946 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_5097(C_word t0,C_word t1,C_word t2){
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
t8=stub955(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t13=t9;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t7=stub955(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}}}

/* doloop702 in k4458 in free-c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4465,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4475,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:722: pointer-vector-ref */
t5=*((C_word*)lf[139]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3305 in for-each-loop288 in k3270 in delete-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3307,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3297(t3,((C_word*)t0)[4],t2);}

/* k7874 in terminal-size in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7876(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7876,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_C_fileno(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7897,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1534: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[419]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[419]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[420];
tp(6,av2);}}

/* terminal-size in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7872,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7876,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1529: ##sys#terminal-check */
f_7817(t3,lf[416],t2);}

/* k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5084(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5084,2,t0,t1);}
a=C_alloc(15);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub970(C_SCHEME_UNDEFINED,t2,t3,t4);
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:561: posix-error */
t6=lf[0];{
C_word av2[7];
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[8];
av2[3]=lf[196];
av2[4]=lf[197];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
f_2720(7,av2);}}
else{
t6=C_eqp(t5,C_fix(0));
if(C_truep(t6)){
t7=C_i_pairp(((C_word*)t0)[5]);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* posixunix.scm:562: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_END_OF_LIST;
C_values(4,av2);}}
else{
/* posixunix.scm:562: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5023,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5023(t11,t7,C_fix(0),C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);}}}

/* local-timezone-abbreviation in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7702,2,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1828(t2);
/* posixunix.scm:1466: ##sys#peek-c-string */
t4=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2705,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2708(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,6)))){
C_save_and_reclaim((void *)f_2708,2,av);}
a=C_alloc(18);
t2=C_mutate2(&lf[0] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[6]+1 /* (set! ##sys#posix-error ...) */,lf[0]);
t4=C_mutate2(&lf[7] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[16]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2788,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8869,a[2]=((C_word)li268),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8875,a[2]=((C_word)li269),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: getter-with-setter */
t9=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=lf[470];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2702,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* _exit in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_7715,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=t1;
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=stub1834(C_SCHEME_UNDEFINED,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=stub1834(C_SCHEME_UNDEFINED,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4163 in unsetenv in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4165,2,av);}
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_3329,c,av);}
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
C_word t12;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=t5;
t7=C_i_check_string_2(t2,lf[79]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3339,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_block_size(t2);
t10=C_eqp(C_fix(0),t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3345,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t10;
f_3345(2,av2);}}
else{
/* posix-common.scm:457: file-exists? */
t12=*((C_word*)lf[84]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}

/* k7895 in k7874 in terminal-size in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_7897,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7901,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1535: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[419]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[419]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[420];
tp(6,av2);}}

/* set-alarm! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7729,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub1840(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4494 in call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4496,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:731: list->c-string-buffer */
f_4337(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* call-with-exec-args in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4492,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4496,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:729: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* nop in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4490,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4177,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4183,a[2]=t3,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4183(t5,t1,C_fix(0));}

/* change-file-owner in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6106(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6106,5,av);}
a=C_alloc(6);
t5=C_i_check_string_2(t2,lf[322]);
t6=C_i_check_exact_2(t3,lf[322]);
t7=C_i_check_exact_2(t4,lf[322]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6130,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1024: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[322];
tp(4,av2);}}

/* k6102 in change-file-mode in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6104,2,av);}
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1017: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[320];
av2[4]=lf[321];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_2720(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* set-buffering-mode! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_7736,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7740,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1493: ##sys#check-port */
t6=*((C_word*)lf[411]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[405];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a5502 in a5496 in k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5503,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5507,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:682: close-output-pipe */
t4=*((C_word*)lf[213]+1);{
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

/* loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4183(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4183,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4187,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub621(t5,t6);
/* posix-common.scm:641: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k4185 in loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4187,2,av);}
a=C_alloc(9);
t2=t1;
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4195,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4195(t6,((C_word*)t0)[4],C_fix(0));}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* scan in k4185 in loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_4195,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4221,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:648: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posix-common.scm:651: scan */
t6=t1;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* for-each-loop1164 in set-signal-mask! in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_5588(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_exact_2(t2,lf[251]);
t4=C_sigaddset(t2);
t5=C_slot(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* set-signal-mask! in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5564,3,av);}
a=C_alloc(3);
t3=C_i_check_list_2(t2,lf[251]);
t4=C_sigemptyset(C_fix(0));
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5588,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
t7=(
  f_5588(t5)
);
t8=C_sigprocmask_set(C_fix(0));
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm:771: posix-error */
t9=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=lf[251];
av2[4]=lf[252];
f_2720(5,av2);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k4130 in k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4132,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub572(t3,t2,t4);
/* posix-common.scm:610: ##sys#peek-c-string */
t6=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=stub572(t3,t2,C_SCHEME_FALSE);
/* posix-common.scm:610: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6140 in k6148 in check in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6142,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* setenv in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4140(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4140,4,av);}
a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[118]);
t5=C_i_check_string_2(t3,lf[118]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[118];
tp(4,av2);}}

/* check in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_6132(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_6132,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6150,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1034: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k6128 in change-file-owner in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6130,2,av);}
t2=C_chown(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1025: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[8];
av2[3]=lf[322];
av2[4]=lf[323];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[3];
f_2720(8,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4149 in setenv in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4151,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[118];
tp(4,av2);}}

/* unsetenv in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4157,3,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[119]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4165,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:637: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[119];
tp(4,av2);}}

/* k4153 in k4149 in setenv in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4155,2,av);}
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5519 in create-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5521,2,av);}
/* posixunix.scm:692: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}

/* a8684 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8685,3,av);}
a=C_alloc(4);
t3=C_setegid(t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8695,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:858: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a8681 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8682,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1224(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4102 in k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4104,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4108,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k4106 in k4102 in k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4108(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4108,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub582(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:611: ##sys#peek-c-string */
t6=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=t5;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=stub582(t3,t2,((C_word*)t0)[3],C_SCHEME_FALSE);
/* posix-common.scm:611: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5050 in lp in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5052,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:570: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5023(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:571: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5023(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* lp in k4922 in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4964(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4964,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:573: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[198]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[198]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4993,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_4993(t9,stub1014(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_4993(t8,stub1014(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* k4109 in k4083 in time->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4111,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:622: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:623: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=lf[117];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* lp in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5023(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5023,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:565: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[198]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[198]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5052,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=t2;
t7=C_i_foreign_fixnum_argumentp(t6);
if(C_truep(((C_word*)t0)[3])){
t8=C_i_foreign_block_argumentp(((C_word*)t0)[3]);
t9=t5;
f_5052(t9,stub995(C_SCHEME_UNDEFINED,t7,t8));}
else{
t8=t5;
f_5052(t8,stub995(C_SCHEME_UNDEFINED,t7,C_SCHEME_FALSE));}}}

/* k4991 in lp in k4922 in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4993(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4993,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=((C_word*)t0)[3];
t6=C_u_i_cdr(t5);
/* posixunix.scm:578: lp */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4964(t7,((C_word*)t0)[6],t2,t4,t6);}
else{
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm:579: lp */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4964(t4,((C_word*)t0)[6],t2,((C_word*)t0)[4],t3);}}

/* k4922 in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4924(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4924,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4964,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4964(t7,t3,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}

/* k4925 in k4922 in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4927,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t4=C_i_memq(((C_word*)t0)[4],((C_word*)t0)[5]);
t5=t3;
f_4934(t5,(C_truep(t4)?((C_word*)t0)[4]:C_SCHEME_FALSE));}
else{
t4=t3;
f_4934(t4,((C_word*)t0)[5]);}}
else{
t4=t3;
f_4934(t4,C_SCHEME_FALSE);}}

/* k2983 in socket? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2985,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[30],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* directory? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2987,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:302: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* change-file-mode in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6083(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6083,4,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[320]);
t5=C_i_check_exact_2(t3,lf[320]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6104,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1016: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[320];
tp(4,av2);}}

/* k8653 in a8641 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8655,2,av);}
/* posixunix.scm:1055: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[329];
av2[3]=lf[448];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7952 in process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7954,2,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_eqp(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[424]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7982,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7968,a[2]=((C_word*)t0)[2],a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1562: g1934 */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7967 in k7952 in process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7968,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7974,a[2]=((C_word*)t0)[2],a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1567: ##sys#call-with-cthulhu */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[426]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[426]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* k7290 in loop in file-lock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7292,2,av);}
t2=C_flock_lock(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_fix((C_word)errno);
if(C_truep(C_i_eqvp(t3,C_fix((C_word)EINTR)))){
/* posixunix.scm:1342: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1343: err */
f_7264(((C_word*)t0)[3],lf[368],t1,lf[367]);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8634 in set-root-directory! in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8636,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1761: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[446];
av2[4]=lf[447];
av2[5]=((C_word*)t0)[3];
f_2720(6,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5884,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
if(C_truep(stub1281(C_SCHEME_UNDEFINED,t3))){
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5887(2,av2);}}
else{
/* posixunix.scm:935: ##sys#error */
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[272];
av2[3]=lf[274];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5880(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5880,2,av);}
a=C_alloc(7);
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5884,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5939,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:932: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5884(2,av2);}}}

/* k2943 in symbolic-link? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2945,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[25],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* block-device? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2947,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2955,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:290: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5885 in k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5887,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=stub1276(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5920,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:937: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5890(2,av2);}}}

/* a8659 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8660(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8660,4,av);}
a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[449]);
t5=C_i_check_exact_2(t3,lf[449]);
t6=C_setpgid(t2,t3);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8676,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1061: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k8486 in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8488,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm:1738: chkstrlst */
t3=((C_word*)t0)[9];
f_8447(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8491(2,av2);}}}

/* loop in k5888 in k5885 in k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5895,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_gid(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5910,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm:942: loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k7000 in k6996 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_7002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7002,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5888 in k5885 in k5882 in get-groups in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5890,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5895,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li141),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5895(t5,((C_word*)t0)[3],C_fix(0));}

/* k2993 in directory? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2995,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8693 in a8684 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8695,2,av);}
/* posixunix.scm:859: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[453];
av2[3]=lf[454];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8302 in connect-child in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8304(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8304,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=C_eqp(t4,t3);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8220,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1651: duplicate-fileno */
t7=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* swapped-ends in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_8308(C_word *a,C_word t1){
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

/* k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4258(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(181,c,8)))){
C_save_and_reclaim((void *)f_4258,2,av);}
a=C_alloc(181);
t2=C_mutate2((C_word*)lf[123]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate2((C_word*)lf[124]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[125]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4266,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[129] /* (set! list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4337,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2(&lf[131] /* (set! free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[141]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t9=C_mutate2(&lf[142] /* (set! call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4492,a[2]=t8,a[3]=t7,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate2((C_word*)lf[143]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4572,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[144]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[145]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t13=C_mutate2((C_word*)lf[146]+1 /* (set! fcntl/dupfd ...) */,C_fix((C_word)F_DUPFD));
t14=C_mutate2((C_word*)lf[147]+1 /* (set! fcntl/getfd ...) */,C_fix((C_word)F_GETFD));
t15=C_mutate2((C_word*)lf[148]+1 /* (set! fcntl/setfd ...) */,C_fix((C_word)F_SETFD));
t16=C_mutate2((C_word*)lf[149]+1 /* (set! fcntl/getfl ...) */,C_fix((C_word)F_GETFL));
t17=C_mutate2((C_word*)lf[150]+1 /* (set! fcntl/setfl ...) */,C_fix((C_word)F_SETFL));
t18=C_mutate2((C_word*)lf[151]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t19=C_mutate2((C_word*)lf[152]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t20=C_mutate2((C_word*)lf[153]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t21=C_mutate2((C_word*)lf[154]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDONLY));
t22=C_mutate2((C_word*)lf[155]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t23=C_mutate2((C_word*)lf[156]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t24=C_mutate2((C_word*)lf[157]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t25=C_mutate2((C_word*)lf[158]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t26=C_mutate2((C_word*)lf[159]+1 /* (set! open/noctty ...) */,C_fix((C_word)O_NOCTTY));
t27=C_mutate2((C_word*)lf[160]+1 /* (set! open/nonblock ...) */,C_fix((C_word)O_NONBLOCK));
t28=C_mutate2((C_word*)lf[161]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t29=C_mutate2((C_word*)lf[162]+1 /* (set! open/sync ...) */,C_fix((C_word)O_FSYNC));
t30=C_mutate2((C_word*)lf[163]+1 /* (set! open/fsync ...) */,C_fix((C_word)O_FSYNC));
t31=C_mutate2((C_word*)lf[164]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t32=C_mutate2((C_word*)lf[165]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t33=C_mutate2((C_word*)lf[166]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IRUSR));
t34=C_mutate2((C_word*)lf[167]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWUSR));
t35=C_mutate2((C_word*)lf[168]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IXUSR));
t36=C_mutate2((C_word*)lf[169]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IRGRP));
t37=C_mutate2((C_word*)lf[170]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWGRP));
t38=C_mutate2((C_word*)lf[171]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IXGRP));
t39=C_mutate2((C_word*)lf[172]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IROTH));
t40=C_mutate2((C_word*)lf[173]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWOTH));
t41=C_mutate2((C_word*)lf[174]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IXOTH));
t42=C_mutate2((C_word*)lf[175]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IRWXU));
t43=C_mutate2((C_word*)lf[176]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IRWXG));
t44=C_mutate2((C_word*)lf[177]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IRWXO));
t45=C_mutate2((C_word*)lf[178]+1 /* (set! perm/isvtx ...) */,C_fix((C_word)S_ISVTX));
t46=C_mutate2((C_word*)lf[179]+1 /* (set! perm/isuid ...) */,C_fix((C_word)S_ISUID));
t47=C_mutate2((C_word*)lf[180]+1 /* (set! perm/isgid ...) */,C_fix((C_word)S_ISGID));
t48=C_mutate2((C_word*)lf[181]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t49=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t50=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t49);
t51=t50;
t52=C_mutate2((C_word*)lf[183]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4669,a[2]=t51,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate2((C_word*)lf[185]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[188]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[191]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4773,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate2((C_word*)lf[194]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate2((C_word*)lf[196]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4842,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate2((C_word*)lf[69]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5223,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate2((C_word*)lf[202]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5242,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5276,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp);
t61=C_mutate2((C_word*)lf[206]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5291,a[2]=t60,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp));
t62=C_mutate2((C_word*)lf[210]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5331,a[2]=t60,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t63=C_mutate2((C_word*)lf[211]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5371,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate2((C_word*)lf[213]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5386,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate2((C_word*)lf[215]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5401,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate2((C_word*)lf[216]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5425,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate2((C_word*)lf[217]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5449,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate2((C_word*)lf[219]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5483,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate2((C_word*)lf[221]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5517,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate2((C_word*)lf[223]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t71=C_mutate2((C_word*)lf[224]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t72=C_mutate2((C_word*)lf[225]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t73=C_mutate2((C_word*)lf[226]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t74=C_mutate2((C_word*)lf[227]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t75=C_mutate2((C_word*)lf[228]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t76=C_mutate2((C_word*)lf[229]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t77=C_mutate2((C_word*)lf[230]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t78=C_mutate2((C_word*)lf[231]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t79=C_mutate2((C_word*)lf[232]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t80=C_mutate2((C_word*)lf[233]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t81=C_mutate2((C_word*)lf[234]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t82=C_mutate2((C_word*)lf[235]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t83=C_mutate2((C_word*)lf[236]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t84=C_mutate2((C_word*)lf[237]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t85=C_mutate2((C_word*)lf[238]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t86=C_mutate2((C_word*)lf[239]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t87=C_mutate2((C_word*)lf[240]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t88=C_mutate2((C_word*)lf[241]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t89=C_mutate2((C_word*)lf[242]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t90=C_mutate2((C_word*)lf[243]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t91=C_mutate2((C_word*)lf[244]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t92=C_mutate2((C_word*)lf[245]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t93=C_mutate2((C_word*)lf[246]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t94=C_mutate2((C_word*)lf[247]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t95=C_mutate2((C_word*)lf[248]+1 /* (set! signal/bus ...) */,C_fix((C_word)SIGBUS));
t96=C_set_block_item(lf[249] /* signal/break */,0,C_fix(0));
t97=C_a_i_list(&a,26,*((C_word*)lf[223]+1),*((C_word*)lf[224]+1),*((C_word*)lf[225]+1),*((C_word*)lf[226]+1),*((C_word*)lf[227]+1),*((C_word*)lf[228]+1),*((C_word*)lf[229]+1),*((C_word*)lf[230]+1),*((C_word*)lf[231]+1),*((C_word*)lf[232]+1),*((C_word*)lf[233]+1),*((C_word*)lf[234]+1),*((C_word*)lf[235]+1),*((C_word*)lf[236]+1),*((C_word*)lf[237]+1),*((C_word*)lf[238]+1),*((C_word*)lf[239]+1),*((C_word*)lf[240]+1),*((C_word*)lf[241]+1),*((C_word*)lf[242]+1),*((C_word*)lf[243]+1),*((C_word*)lf[244]+1),*((C_word*)lf[245]+1),*((C_word*)lf[246]+1),*((C_word*)lf[247]+1),*((C_word*)lf[248]+1));
t98=C_mutate2((C_word*)lf[250]+1 /* (set! signals-list ...) */,t97);
t99=C_mutate2((C_word*)lf[251]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5564,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t100=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t101=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8758,a[2]=((C_word)li263),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:774: getter-with-setter */
t102=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t102;
av2[1]=t100;
av2[2]=t101;
av2[3]=*((C_word*)lf[251]+1);
((C_proc)(void*)(*((C_word*)t102+1)))(4,av2);}}

/* a8641 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8642(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8642,3,av);}
a=C_alloc(8);
t3=C_i_check_exact_2(t2,lf[329]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8649,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8655,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1054: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8647 in a8641 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8649,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* unmap-file-from-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_7589,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_structure_2(t2,lf[389],lf[394]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7596,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_7596(t7,C_u_i_car(t6));}
else{
t6=t5;
f_7596(t6,C_slot(t2,C_fix(2)));}}

/* a7003 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7004,3,av);}
/* posixunix.scm:1293: store */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* current-process-id in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4260,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fudge(C_fix(33));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* process-wait in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,5)))){
C_save_and_reclaim((void*)f_4266,c,av);}
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
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
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
t14=C_i_check_exact_2(t13,lf[125]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4290,a[2]=t13,a[3]=t9,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4296,a[2]=t13,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:679: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t15;
av2[3]=t16;
C_call_with_values(4,av2);}}

/* k7018 in a7009 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_7020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7020,2,av);}
/* posixunix.scm:1298: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k2973 */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2975,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[29],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* socket? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2977,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2985,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:299: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8674 in a8659 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8676,2,av);}
/* posixunix.scm:1062: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[449];
av2[3]=lf[450];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a7031 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7032,2,av);}
/* posixunix.scm:1300: store */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8445(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_8445,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(23);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8447,a[2]=t2,a[3]=((C_word)li245),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8488,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t1,a[8]=t7,a[9]=t10,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1734: chkstrlst */
t13=t10;
f_8447(t13,t12,((C_word*)t9)[1]);}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8510,a[2]=t9,a[3]=t8,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1736: ##sys#shell-command-arguments */
t14=*((C_word*)lf[438]+1);{
C_word av2[3];
av2[0]=t14;
av2[1]=t13;
av2[2]=((C_word*)t8)[1];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}

/* chkstrlst in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8447,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8452,a[2]=((C_word*)t0)[2],a[3]=((C_word)li243),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8461,a[2]=t4,a[3]=((C_word)li244),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_8461(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* set-signal-handler! in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4243(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4243,4,av);}
t4=C_i_check_exact_2(t2,lf[121]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_vector_set(*((C_word*)lf[122]+1),t2,t3);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_vector_set(*((C_word*)lf[122]+1),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8341 in k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_8343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8343,2,av);}
/* posixunix.scm:1689: values */{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* f_7040 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7040,3,av);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm:1272: poke */
t4=((C_word*)((C_word*)t0)[2])[1];{
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
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a8344 in k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_8345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8345,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8349,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1693: connect-child */
f_8293(t2,((C_word*)t0)[11],((C_word*)t0)[12],*((C_word*)lf[46]+1));}

/* k8347 in a8344 in k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_8349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_8349,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(
  /* posixunix.scm:1694: swapped-ends */
  f_8308(C_a_i(&a,3),((C_word*)t0)[10])
);
/* posixunix.scm:1694: connect-child */
f_8293(t2,t3,((C_word*)t0)[11],*((C_word*)lf[47]+1));}

/* k4211 in k4223 in k4219 in scan in k4185 in loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4213,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8332(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8332,2,av);}
a=C_alloc(23);
t2=t1;
t3=(
  /* posixunix.scm:1690: swapped-ends */
  f_8308(C_a_i(&a,3),((C_word*)t0)[3])
);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8343,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8345,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word)li236),tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm:1691: process-fork */
t7=*((C_word*)lf[423]+1);{
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

/* k4219 in scan in k4185 in loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4221(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4221,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_block_size(((C_word*)t0)[6]);
/* posix-common.scm:649: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* loop in k5822 in k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_5830,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5834,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1249(t5,t6);
/* posixunix.scm:898: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k5832 in loop in k5822 in k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5834,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm:915: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5830(t5,t3,t4);}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4223 in k4219 in scan in k4185 in loop in get-environment-variables in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4225,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posix-common.scm:650: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4183(t6,t4,t5);}

/* spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_8322,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(12);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=t7,a[9]=t5,a[10]=t6,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1686: needed-pipe */
f_8261(t8,t6);}

/* k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8326,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1687: needed-pipe */
f_8261(t3,((C_word*)t0)[9]);}

/* k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8329,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1688: needed-pipe */
f_8261(t3,((C_word*)t0)[9]);}

/* a8495 in k8489 in k8486 in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_8496,2,av);}
/* posixunix.scm:1740: ##sys#process */
t2=*((C_word*)lf[442]+1);{
C_word *av2;
if(c >= 9) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
av2[5]=((C_word*)t0)[5];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}

/* k8489 in k8486 in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8491,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li246),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1739: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=((C_word*)t0)[8];
C_call_with_values(4,av2);}}

/* a5511 in k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5512,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[220]+1));
t3=C_mutate2((C_word*)lf[220]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6208 in create-symbolic-link in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6210,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6214,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1075: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[330];
tp(4,av2);}}

/* k6212 in k6208 in create-symbolic-link in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6214,2,av);}
t2=C_symlink(((C_word*)t0)[2],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1077: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[331];
av2[4]=lf[332];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
f_2720(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6219(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6219,4,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6224,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1086: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6218(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(177,c,9)))){
C_save_and_reclaim((void *)f_6218,2,av);}
a=C_alloc(177);
t2=t1;
t3=C_mutate2((C_word*)lf[333]+1 /* (set! ##sys#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6219,a[2]=t2,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate2((C_word*)lf[336]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6238,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[342]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6359,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[345]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6381,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[359]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6904,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[363]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7165,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7200,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7264,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[367]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7282,a[2]=t12,a[3]=t10,a[4]=((C_word)li188),tmp=(C_word)a,a+=5,tmp));
t16=C_mutate2((C_word*)lf[369]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7313,a[2]=t12,a[3]=t10,a[4]=((C_word)li190),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate2((C_word*)lf[371]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7344,a[2]=t12,a[3]=t10,a[4]=((C_word)li191),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate2((C_word*)lf[373]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7371,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[375]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7414,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[35]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7451,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[379]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t22=C_mutate2((C_word*)lf[380]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t23=C_mutate2((C_word*)lf[381]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t24=C_mutate2((C_word*)lf[382]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t25=C_mutate2((C_word*)lf[383]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t26=C_mutate2((C_word*)lf[384]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t27=C_mutate2((C_word*)lf[385]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t28=C_mutate2((C_word*)lf[386]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t29=C_mutate2((C_word*)lf[387]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t30=C_mutate2((C_word*)lf[388]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7529,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate2((C_word*)lf[394]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7589,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate2((C_word*)lf[396]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7622,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate2((C_word*)lf[397]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7631,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t34=C_fix((C_word)sizeof(struct tm));
t35=C_mutate2((C_word*)lf[398]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7646,a[2]=t34,a[3]=((C_word)li200),tmp=(C_word)a,a+=4,tmp));
t36=C_fix((C_word)sizeof(struct tm));
t37=C_mutate2((C_word*)lf[400]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7683,a[2]=t36,a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp));
t38=C_mutate2((C_word*)lf[402]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7702,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate2((C_word*)lf[403]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7715,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[404]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7729,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[405]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7736,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[412]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7799,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2(&lf[413] /* (set! ##sys#terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7817,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate2((C_word*)lf[415]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7848,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate2((C_word*)lf[416]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7872,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate2((C_word*)lf[421]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7909,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate2((C_word*)lf[423]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7923,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[428]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8022,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[126]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8082,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[430]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8120,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[431]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8123,a[2]=((C_word)li221),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[432]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8130,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[434]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8155,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[438]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8164,a[2]=((C_word)li224),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate2((C_word*)lf[440]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8170,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8224,a[2]=((C_word)li229),tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8261,a[2]=((C_word)li232),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8281,a[2]=((C_word)li233),tmp=(C_word)a,a+=3,tmp);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8293,a[2]=((C_word)li234),tmp=(C_word)a,a+=3,tmp);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8308,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8322,a[2]=t60,a[3]=t59,a[4]=t57,a[5]=((C_word)li237),tmp=(C_word)a,a+=6,tmp);
t62=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8367,a[2]=t58,a[3]=((C_word)li238),tmp=(C_word)a,a+=4,tmp);
t63=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8378,a[2]=t58,a[3]=((C_word)li239),tmp=(C_word)a,a+=4,tmp);
t64=C_mutate2((C_word*)lf[442]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8389,a[2]=t61,a[3]=t62,a[4]=t56,a[5]=t63,a[6]=((C_word)li242),tmp=(C_word)a,a+=7,tmp));
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8445,a[2]=((C_word)li247),tmp=(C_word)a,a+=3,tmp);
t66=C_mutate2((C_word*)lf[443]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8516,a[2]=t65,a[3]=((C_word)li249),tmp=(C_word)a,a+=4,tmp));
t67=C_mutate2((C_word*)lf[444]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8564,a[2]=t65,a[3]=((C_word)li250),tmp=(C_word)a,a+=4,tmp));
t68=C_mutate2((C_word*)lf[446]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8619,a[2]=((C_word)li251),tmp=(C_word)a,a+=3,tmp));
t69=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t69;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t69+1)))(2,av2);}}

/* k5505 in a5502 in a5496 in k5485 in with-output-to-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5507,2,av);}{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* create-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5517,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5521,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_pipe(C_SCHEME_FALSE);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:691: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[8];
av2[3]=lf[221];
av2[4]=lf[222];
f_2720(5,av2);}}
else{
/* posixunix.scm:692: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k7534 in k7531 in map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7536(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7536,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(((C_word*)t0)[6]))){
if(C_truep(C_specialp(((C_word*)t0)[6]))){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7539(2,av2);}}
else{
/* posixunix.scm:1425: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[13];
av2[3]=lf[388];
av2[4]=lf[392];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixunix.scm:1425: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[13];
av2[3]=lf[388];
av2[4]=lf[392];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k7531 in map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7533,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t4=((C_word*)t0)[7];
t5=t3;
f_7536(t5,C_u_i_car(t4));}
else{
t4=t3;
f_7536(t4,C_fix(0));}}

/* k7537 in k7534 in k7531 in map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7539(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_7539,2,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=C_a_i_bytevector(&a,1,C_fix(3));
t7=(C_truep(((C_word*)t0)[6])?C_i_foreign_pointer_argumentp(((C_word*)t0)[6]):C_SCHEME_FALSE);
t8=C_i_foreign_integer_argumentp(t2);
t9=C_i_foreign_fixnum_argumentp(t3);
t10=C_i_foreign_fixnum_argumentp(t4);
t11=C_i_foreign_fixnum_argumentp(t5);
t12=C_i_foreign_integer_argumentp(((C_word*)t0)[7]);
t13=stub1750(t6,t7,t8,t9,t10,t11,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7545,a[2]=((C_word*)t0)[8],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7558,a[2]=t15,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t14,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1427: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[391]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[391]+1);
av2[1]=t16;
av2[2]=t14;
tp(3,av2);}}

/* regular-file? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2927,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2935,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:284: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,5)))){
C_save_and_reclaim((void*)f_6238,c,av);}
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
t6=C_i_check_string_2(t2,lf[336]);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6253,a[2]=t2,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6259,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1094: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
C_call_with_values(4,av2);}}
else{
/* posixunix.scm:1109: ##sys#read-symbolic-link */
t7=*((C_word*)lf[333]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[336];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* a7009 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_7010,2,av);}
a=C_alloc(4);
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7020,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1297: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[8];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[361];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[6];
f_2720(7,av2);}}
else{
/* posixunix.scm:1298: on-close */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* k6222 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6224,2,av);}
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:1088: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[334];
av2[5]=((C_word*)t0)[5];
f_2720(6,av2);}}
else{
/* posixunix.scm:1089: substring */
t3=*((C_word*)lf[335]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6751 in a6732 in a6722 in k6716 in k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in ... */
static void C_ccall f_6753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6753,2,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
/* posixunix.scm:1226: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
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
/* posixunix.scm:1229: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* k7556 in k7537 in k7534 in k7531 in map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_7558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,10)))){
C_save_and_reclaim((void *)f_7558,2,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm:1428: posix-error */
t3=lf[0];{
C_word *av2;
if(c >= 11) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(11);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[388];
av2[4]=lf[390];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[8];
f_2720(11,av2);}}
else{
t3=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_record3(&a,3,lf[389],((C_word*)t0)[10],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5842 in k5832 in loop in k5822 in k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_5844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5844,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4932 in k4925 in k4922 in k5082 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4934(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4934,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
/* posixunix.scm:580: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
C_values(4,av2);}}
else{
/* posixunix.scm:580: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* posixunix.scm:580: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}}
else{
/* posixunix.scm:580: values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3699(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_3699,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t4=t3;
f_3702(t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3848,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:527: irregex */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word *a;
if(c<7) C_bad_min_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-7)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_7529,c,av);}
a=C_alloc((c-7)*C_SIZEOF_PAIR+8);
t7=C_build_rest(&a,c,7,av);
C_word t8;
C_word t9;
C_word t10;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7533,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t2;
f_7533(2,av2);}}
else{
/* posixunix.scm:1422: ##sys#null-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[393]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[393]+1);
av2[1]=t8;
tp(2,av2);}}}

/* k5856 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5858,2,av);}
t2=((C_word*)t0)[2];
f_5807(t2,C_getgrnam(t1));}

/* k3684 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3686,2,av);}
/* posix-common.scm:504: ##sys#glob->regexp */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[91]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5820,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_group->gr_passwd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5822 in k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5824(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5824,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5830,a[2]=t5,a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5830(t7,t3,C_fix(0));}

/* k5826 in k5822 in k5818 in k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5828,2,av);}
/* posixunix.scm:901: g1268 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix((C_word)C_group->gr_gid);
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k7543 in k7537 in k7534 in k7531 in map-file-to-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_7545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_7545,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record3(&a,3,lf[389],((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3664 in g422 in k3640 in loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3666,2,av);}
/* posix-common.scm:510: make-pathname */
t2=*((C_word*)lf[83]+1);{
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

/* k6292 in k6283 in k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6294,2,av);}
/* posixunix.scm:1101: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6269(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6295 in k6283 in k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6297,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1103: ##sys#read-symbolic-link */
t3=*((C_word*)lf[333]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[336];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* posixunix.scm:1101: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6269(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k7594 in unmap-file-from-memory in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7596,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=C_i_foreign_integer_argumentp(t1);
t5=stub1777(C_SCHEME_UNDEFINED,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* posixunix.scm:1437: posix-error */
t7=lf[0];{
C_word av2[7];
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[8];
av2[3]=lf[394];
av2[4]=lf[395];
av2[5]=((C_word*)t0)[2];
av2[6]=t1;
f_2720(7,av2);}}}

/* err in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7264(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7264,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm:1335: posix-error */
t8=lf[0];{
C_word av2[8];
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=t4;
av2[4]=t2;
av2[5]=t5;
av2[6]=t6;
av2[7]=t7;
f_2720(8,av2);}}

/* a8394 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8395,2,av);}
/* posixunix.scm:1707: spawn */
t2=((C_word*)t0)[2];
f_8322(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k3652 in g422 in k3640 in loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3654,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:511: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3625(t5,t3,t4);}

/* k3656 in k3652 in g422 in k3640 in loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3658,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6283 in k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_6285(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6285,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1102: symbolic-link? */
t6=*((C_word*)lf[32]+1);{
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
/* posixunix.scm:1108: ##sys#signal-hook */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[8];
av2[3]=lf[336];
av2[4]=lf[339];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k7899 in k7895 in k7874 in terminal-size in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7901(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7901,2,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=C_i_foreign_pointer_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_pointer_argumentp(t1);
t5=stub1881(C_SCHEME_UNDEFINED,t2,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
/* posixunix.scm:1536: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[3]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
C_values(4,av2);}}
else{
/* posixunix.scm:1537: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[417];
av2[3]=lf[416];
av2[4]=lf[418];
av2[5]=((C_word*)t0)[7];
f_2720(6,av2);}}}

/* get-host-name in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7909,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7913,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=stub1900(t3);
/* posixunix.scm:1542: ##sys#peek-c-string */
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3640 in loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3642,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:502: g422 */
t3=t2;
f_3646(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:512: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3625(t4,((C_word*)t0)[5],t3);}}

/* g422 in k3640 in loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3646(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3646,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3654,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3666,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:510: irregex-match-substring */
t5=*((C_word*)lf[88]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* loop in file-lock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7288,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7292,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1339: setup */
f_7200(t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[367]);}

/* file-lock in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_7282,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7288,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word)li187),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_7288(2,av2);}}

/* k6304 in k6298 in k6295 in k6283 in k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in ... */
static void C_ccall f_6306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6306,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1101: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6269(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* posixunix.scm:1106: make-pathname */
t2=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k6298 in k6295 in k6283 in k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in ... */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6300,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1104: absolute-pathname? */
t4=*((C_word*)lf[338]+1);{
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

/* k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3623,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3625(t5,((C_word*)t0)[6],t1);}

/* loop in k3621 in k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3625(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3625,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:506: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3591(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3642,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:507: irregex-match */
t5=*((C_word*)lf[89]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* a6591 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_6592,2,av);}
a=C_alloc(4);
if(C_truep(C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6602,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_close(((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm:1187: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[8];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[355];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[6];
f_2720(7,av2);}}
else{
/* posixunix.scm:1188: on-close */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* file-execute-access? in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6164,3,av);}
/* posixunix.scm:1039: check */
f_6132(t1,t2,C_fix((C_word)X_OK),lf[326]);}

/* character-device? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2957,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2965,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:293: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2953 in block-device? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2955,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[28],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-write-access? in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6158,3,av);}
/* posixunix.scm:1038: check */
f_6132(t1,t2,C_fix((C_word)W_OK),lf[325]);}

/* file-read-access? in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6152,3,av);}
/* posixunix.scm:1037: check */
f_6132(t1,t2,C_fix((C_word)R_OK),lf[324]);}

/* k3190 in k3187 in duplicate-fileno in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3192,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6148 in check in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6150,2,av);}
a=C_alloc(4);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixunix.scm:1035: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t5;
tp(2,av2);}}}

/* f_2967 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2967,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:296: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2963 in character-device? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2965,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[27],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* create-symbolic-link in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6189(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6189,4,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[330]);
t5=C_i_check_string_2(t3,lf[330]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6210,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1074: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[330];
tp(4,av2);}}

/* k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6187,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[329]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate2((C_word*)lf[330]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6189,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k6178 in create-session in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6180,2,av);}
/* posixunix.scm:1045: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[327];
av2[3]=lf[328];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2933 in regular-file? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2935,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[24],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* symbolic-link? in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2937,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2945,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:287: file-type */
t4=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6172 in create-session in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6174,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* create-session in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6170(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6170,2,av);}
a=C_alloc(7);
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6174,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6180,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1044: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_5800,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5807,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5807(t8,C_getgrgid(t2));}
else{
t8=C_i_check_string_2(t2,lf[271]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5858,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:906: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[271];
tp(4,av2);}}}

/* k7976 in a7973 in a7967 in k7952 in process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_7978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7978,2,av);}
/* posixunix.scm:1570: exit */
t2=*((C_word*)lf[425]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a7973 in a7967 in k7952 in process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7974,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7978,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1569: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5805 in group-information in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_5807(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5807,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[267]+1):*((C_word*)lf[268]+1));
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5820,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[260]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_group->gr_name);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2697 in k2694 in k2691 */
static void C_ccall f_2699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2699,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k2694 in k2691 */
static void C_ccall f_2696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2696,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2691 */
static void C_ccall f_2693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2693,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8401(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8401,6,av);}
a=C_alloc(26);
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=t9;
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8412,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=t10,a[11]=((C_word*)t0)[9],a[12]=t3,a[13]=((C_word*)t0)[3],tmp=(C_word)a,a+=14,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8432,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1714: make-on-close */
f_8224(t12,((C_word*)t0)[6],t5,t10,C_fix(0),C_fix(1),C_fix(2));}

/* f_7982 in k7952 in process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7982,3,av);}
/* posixunix.scm:1565: thunk */
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3922(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,4)))){
C_save_and_reclaim((void *)f_3922,2,av);}
a=C_alloc(38);
t2=C_mutate2((C_word*)lf[102]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate2(&lf[103] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3924,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[105]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[108]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3964,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[109]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3995,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=C_fix((C_word)sizeof(struct tm));
t8=C_mutate2((C_word*)lf[111]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4033,a[2]=t7,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t9=C_fix((C_word)sizeof(struct tm));
t10=C_mutate2((C_word*)lf[115]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4078,a[2]=t9,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate2((C_word*)lf[118]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[119]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4157,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[120]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[121]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8792,a[2]=((C_word)li264),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:663: getter-with-setter */
t17=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[121]+1);
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}

/* check-time-vector in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3924(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3924,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:581: ##sys#error */
t6=*((C_word*)lf[50]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[104];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7911 in get-host-name in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7913,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7916,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posixunix.scm:1548: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[417];
av2[3]=lf[421];
av2[4]=lf[422];
f_2720(5,av2);}}}

/* k7914 in k7911 in get-host-name in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7916,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5303 in open-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5305,2,av);}
/* posixunix.scm:617: check */
f_5276(((C_word*)t0)[3],lf[206],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* f_3917 in a3914 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3917,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3914 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3915,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3917,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2103 in chkstrlst in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_8461(C_word t0,C_word t1){
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
  /* posixunix.scm:1731: g2104 */
  f_8452(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* process-fork in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_7923,c,av);}
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
t13=stub1927(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t14=stub1907(C_SCHEME_UNDEFINED);
t15=t14;
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7954,a[2]=t5,a[3]=t15,a[4]=t10,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t17=C_eqp(C_fix(-1),t15);
if(C_truep(t17)){
/* posixunix.scm:1561: posix-error */
t18=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t18;
av2[1]=t16;
av2[2]=lf[127];
av2[3]=lf[423];
av2[4]=lf[427];
f_2720(5,av2);}}
else{
t18=t16;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_SCHEME_UNDEFINED;
f_7954(2,av2);}}}

/* g2104 in chkstrlst in %process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_8452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* k6518 in k6509 in loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6520,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6512 in k6509 in loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6514,2,av);}
/* posixunix.scm:1160: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6459(2,av2);}}

/* k6509 in loop in fetch in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_6511(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6511,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1159: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[348]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[348]+1);
av2[1]=t2;
tp(2,av2);}}
else{
t2=C_read(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6520,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
t7=(C_truep(t6)?t6:C_eqp(C_fix((C_word)errno),C_fix((C_word)EAGAIN)));
if(C_truep(t7)){
t8=C_set_block_item(t3,0,C_fix(0));
t9=C_mutate2(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t10=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t11=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
/* posixunix.scm:1166: posix-error */
t8=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[8];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[353];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[10];
f_2720(7,av2);}}}
else{
t6=C_mutate2(((C_word *)((C_word*)t0)[7])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* a6778 in k6716 in k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6779(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6779,5,av);}
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

/* open-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_5331,c,av);}
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
t4=C_i_check_string_2(t2,lf[210]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[207]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[207]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:632: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[210];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[208]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:633: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[210];
tp(4,av2);}}
else{
/* posixunix.scm:606: ##sys#error */
t10=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[209];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k3966 in seconds->utc-time in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3968,2,av);}
t2=C_i_check_number_2(t1,lf[108]);
/* posix-common.scm:589: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* a3398 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3399,2,av);}
/* posix-common.scm:459: decompose-pathname */
t2=*((C_word*)lf[82]+1);{
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

/* k3395 in loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3397,2,av);}
t2=((C_word*)t0)[2];
f_3364(t2,C_i_not(t1));}

/* k6547 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6549,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1246: set-port-name! */
t4=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* seconds->utc-time in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_3964,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3968,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:587: current-seconds */
t4=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[108]);
/* posix-common.scm:589: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}}

/* k8430 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8432,2,av);}
/* posixunix.scm:1713: input-port */
t2=((C_word*)t0)[2];
f_8367(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k3388 in k3362 in loop in k3353 in k3343 in create-directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3390,2,av);}
/* posix-common.scm:462: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3357(t2,((C_word*)t0)[3],t1);}

/* k6338 in file-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6340,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6344,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
/* posixunix.scm:1112: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub1443(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6342 in k6338 in file-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6344,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1443(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5343 in open-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5345,2,av);}
/* posixunix.scm:628: check */
f_5276(((C_word*)t0)[3],lf[210],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k8418 in k8414 in k8410 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_8420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8420,2,av);}
/* posixunix.scm:1712: values */{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k8426 in k8410 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8428,2,av);}
/* posixunix.scm:1715: output-port */
t2=((C_word*)t0)[2];
f_8378(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k8422 in k8414 in k8410 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_8424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8424,2,av);}
/* posixunix.scm:1718: input-port */
t2=((C_word*)t0)[2];
f_8367(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* k6716 in k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_fcall f_6718(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_6718,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6723,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li170),tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6779,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word)li171),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1212: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* k5310 in open-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5312,2,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posixunix.scm:617: check */
f_5276(((C_word*)t0)[3],lf[206],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k8410 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,7)))){
C_save_and_reclaim((void *)f_8412,2,av);}
a=C_alloc(20);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8416,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8428,a[2]=((C_word*)t0)[11],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1716: make-on-close */
f_8224(t4,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[10],C_fix(1),C_fix(0),C_fix(2));}

/* k8414 in k8410 in a8400 in process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_8416,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8424,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1719: make-on-close */
f_8224(t4,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6709,2,av);}
a=C_alloc(8);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6718(t4,t2);}
else{
t4=C_fudge(C_fix(21));
t5=t3;
f_6718(t5,C_fixnum_difference(t4,((C_word*)((C_word*)t0)[2])[1]));}}}

/* a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6705(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6705,4,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1209: fetch */
t5=((C_word*)t0)[5];
f_6453(t5,t4);}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6709(2,av2);}}}

/* k5320 in open-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5322,2,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posixunix.scm:617: check */
f_5276(((C_word*)t0)[3],lf[206],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k6551 in k6547 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6553,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5376 in close-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5378,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6554 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6555,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6559,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:1176: fetch */
t3=((C_word*)t0)[5];
f_6453(t3,t2);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6559(2,av2);}}}

/* k6557 in a6554 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6559,2,av);}
t2=(
  /* posixunix.scm:1177: peek */
  f_6445(((C_word*)t0)[2])
);
if(C_truep(C_eofp(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[4],0,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a6732 in a6722 in k6716 in k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in ... */
static void C_ccall f_6733(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6733,3,av);}
a=C_alloc(7);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:1221: values */{
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
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_set_block_item(((C_word*)t0)[3],0,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1224: fetch */
t7=((C_word*)t0)[6];
f_6453(t7,t6);}}

/* close-input-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5371(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5371,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[211]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5378,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:640: posix-error */
t8=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[8];
av2[3]=lf[211];
av2[4]=lf[212];
av2[5]=t2;
f_2720(6,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a6579 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6580,2,av);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:1182: ready? */
t3=((C_word*)t0)[4];
f_6416(t3,t1);}}

/* glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3585,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=t4,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3591(t6,t1,t2);}

/* a6722 in k6716 in k6707 in a6704 in k6413 in k6407 in custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_6723(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6723,2,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li169),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:1214: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[356]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[356]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
tp(6,av2);}}

/* close-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5386(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5386,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[213]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5393,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:647: posix-error */
t8=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[8];
av2[3]=lf[213];
av2[4]=lf[214];
av2[5]=t2;
f_2720(6,av2);}}
else{
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3997 in seconds->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3999(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3999,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_check_number_2(t2,lf[109]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t2);
t7=stub544(t5,t6);
/* posix-common.scm:592: ##sys#peek-c-string */
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* seconds->string in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3995,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3999,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:593: current-seconds */
t4=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3999(2,av2);}}}

/* k5350 in open-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5352,2,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posixunix.scm:628: check */
f_5276(((C_word*)t0)[3],lf[210],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k6377 in file-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6379,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:1117: posix-error */
t2=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[343];
av2[4]=lf[344];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2720(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3945 in seconds->local-time in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3947,2,av);}
t2=C_i_check_number_2(t1,lf[105]);
/* posix-common.scm:585: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* seconds->local-time in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_3943,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:583: current-seconds */
t4=*((C_word*)lf[107]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[105]);
/* posix-common.scm:585: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[106]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* a6252 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6253,2,av);}
/* posixunix.scm:1094: decompose-directory */
t2=*((C_word*)lf[337]+1);{
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

/* k5360 in open-output-pipe in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5362,2,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posixunix.scm:628: check */
f_5276(((C_word*)t0)[3],lf[210],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k3614 in a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3616,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:505: directory */
t4=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* posix-common.scm:505: directory */
t4=*((C_word*)lf[26]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[90];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* a3611 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3612(C_word c,C_word *av){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3612,5,av);}
a=C_alloc(9);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3686,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t8=t3;
/* posix-common.scm:504: make-pathname */
t9=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
av2[3]=t8;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* posix-common.scm:504: make-pathname */
t8=*((C_word*)lf[83]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[92];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6259(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6259,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6267,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(t2)?t2:lf[340]);
if(C_truep(t3)){
/* posixunix.scm:1096: string-append */
t7=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* posixunix.scm:1096: string-append */
t7=*((C_word*)lf[2]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[341];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_3591,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3606,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3612,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:502: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* file-write in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,5)))){
C_save_and_reclaim((void*)f_4773,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_i_check_exact_2(t2,lf[191]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4780,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4780(2,av2);}}
else{
/* posixunix.scm:509: ##sys#signal-hook */
t7=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[13];
av2[3]=lf[191];
av2[4]=lf[193];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}
else{
/* posixunix.scm:509: ##sys#signal-hook */
t7=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[13];
av2[3]=lf[191];
av2[4]=lf[193];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* a3605 in conc-loop in glob in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3606,2,av);}
/* posix-common.scm:503: decompose-pathname */
t2=*((C_word*)lf[82]+1);{
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

/* k4778 in file-write in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4780,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4783(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4783(t3,C_block_size(((C_word*)t0)[3]));}}

/* k4787 in k4781 in k4778 in file-write in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4789,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4781 in k4778 in file-write in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4783(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,6)))){
C_save_and_reclaim_args((void *)trf_4783,2,t0,t1);}
a=C_alloc(4);
t2=C_i_check_exact_2(t1,lf[191]);
t3=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
/* posixunix.scm:514: posix-error */
t6=lf[0];{
C_word av2[7];
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[8];
av2[3]=lf[191];
av2[4]=lf[192];
av2[5]=((C_word*)t0)[2];
av2[6]=t1;
f_2720(7,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6277 in loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6279,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1100: file-exists? */
t4=*((C_word*)lf[84]+1);{
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

/* k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6267,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6269,a[2]=t3,a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6269(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* process-signal in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_8130,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8134,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_8134(t6,C_u_i_car(t5));}
else{
t5=t4;
f_8134(t5,C_fix((C_word)SIGTERM));}}

/* k8132 in process-signal in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8134(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_8134,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[2],lf[432]);
t3=C_i_check_exact_2(t1,lf[432]);
t4=C_kill(((C_word*)t0)[2],t1);
t5=C_eqp(t4,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm:1610: posix-error */
t6=lf[0];{
C_word av2[7];
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[127];
av2[3]=lf[432];
av2[4]=lf[433];
av2[5]=((C_word*)t0)[2];
av2[6]=t1;
f_2720(7,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* loop in k6265 in a6258 in read-symbolic-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_6269(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6269,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6279,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
/* posixunix.scm:1099: make-pathname */
t6=*((C_word*)lf[83]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=t3;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* file-read in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_4732,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_check_exact_2(t2,lf[188]);
t6=C_i_check_exact_2(t3,lf[188]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4742,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_u_i_car(t8);
f_4742(2,av2);}}
else{
t8=t3;
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t7;
av2[2]=t8;
av2[3]=C_make_character(32);
tp(4,av2);}}}

/* ##sys#process in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=9) C_bad_argc_2(c,9,t0);
if(C_unlikely(!C_demand(C_calculate_demand(21,c,6)))){
C_save_and_reclaim((void *)f_8389,9,av);}
a=C_alloc(21);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word)li240),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8401,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li241),tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1647: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
C_call_with_values(4,av2);}}

/* k8380 in output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8382,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1704: ##sys#custom-output-port */
t2=*((C_word*)lf[359]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4740 in file-read in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4742,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4745,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4745(2,av2);}}
else{
/* posixunix.scm:499: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[13];
av2[3]=lf[188];
av2[4]=lf[190];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixunix.scm:499: ##sys#signal-hook */
t4=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[13];
av2[3]=lf[188];
av2[4]=lf[190];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k4743 in k4740 in file-read in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_4745,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:502: posix-error */
t5=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[8];
av2[3]=lf[188];
av2[4]=lf[189];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[4];
f_2720(7,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4746 in k4743 in k4740 in file-read in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4748,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8378(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8378,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8382,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1703: connect-parent */
f_8281(t7,t4,t5);}

/* k8369 in input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8371,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1700: ##sys#custom-input-port */
t2=*((C_word*)lf[345]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
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
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* setup in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7200(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7200,4,t1,t2,t3,t4);}
a=C_alloc(8);
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
t19=C_i_check_number_2(t7,t4);
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7221,a[2]=t2,a[3]=t7,a[4]=t13,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t21=C_eqp(C_SCHEME_TRUE,((C_word*)t13)[1]);
if(C_truep(t21)){
t22=C_set_block_item(t13,0,C_fix(0));
t23=t20;
f_7221(t23,t22);}
else{
t22=t20;
f_7221(t22,C_i_check_number_2(((C_word*)t13)[1],t4));}}

/* input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8367,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(6);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8371,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1699: connect-parent */
f_8281(t7,t4,t5);}

/* k3523 in k3513 in k3501 in loop in k3473 in k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3525,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8353 in k8350 in k8347 in a8344 in k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in ... */
static void C_ccall f_8355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8355,2,av);}
/* posixunix.scm:1696: process-execute */
t2=*((C_word*)lf[428]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8350 in k8347 in a8344 in k8330 in k8327 in k8324 in spawn in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_8352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8352,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(
  /* posixunix.scm:1695: swapped-ends */
  f_8308(C_a_i(&a,3),((C_word*)t0)[7])
);
/* posixunix.scm:1695: connect-child */
f_8293(t2,t3,((C_word*)t0)[9],*((C_word*)lf[48]+1));}

/* sleep in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8123,3,av);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=stub1977(C_SCHEME_UNDEFINED,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* parent-process-id in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8120,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub1973(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-truncate in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7165(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_7165,4,av);}
a=C_alloc(12);
t4=C_i_check_number_2(t3,lf[363]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7175,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7182,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7189,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1310: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[363];
tp(4,av2);}}
else{
if(C_truep(C_fixnump(t2))){
t7=C_ftruncate(t2,t3);
t8=t5;
f_7175(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm:1312: ##sys#error */
t7=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[363];
av2[3]=lf[365];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}

/* a3900 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3901,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7173 in file-truncate in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7175,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm:1314: posix-error */
t2=lf[0];{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[8];
av2[3]=lf[363];
av2[4]=lf[364];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2720(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3903 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3904,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3906 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3907,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3909,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3909 in a3906 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3909,4,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5684 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5686,2,av);}
/* posixunix.scm:818: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[259];
av2[3]=lf[261];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5678 in k5674 in k5670 in k5666 in k5662 in k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_5680,2,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7187 in file-truncate in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7189,2,av);}
t2=C_truncate(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_7175(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k7180 in file-truncate in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7182,2,av);}
t2=((C_word*)t0)[2];
f_7175(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5693,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[262]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8720,a[2]=((C_word)li258),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8723,a[2]=((C_word)li259),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:835: getter-with-setter */
t6=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[461];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5697(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5697,2,av);}
a=C_alloc(9);
t2=C_mutate2((C_word*)lf[263]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8701,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8704,a[2]=((C_word)li257),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:845: getter-with-setter */
t6=*((C_word*)lf[451]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[458];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8194 in k8175 in k8172 in process-run in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8196,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8200,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1625: ##sys#shell-command-arguments */
t4=*((C_word*)lf[438]+1);{
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

/* k5662 in k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5664,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_utsname.nodename);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5666 in k5662 in k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5668,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_utsname.release);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5674 in k5670 in k5666 in k5662 in k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5676,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_utsname.machine);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5670 in k5666 in k5662 in k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5672,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_utsname.version);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k8175 in k8172 in process-run in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8177,2,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm:1623: process-execute */
t3=*((C_word*)lf[428]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8196,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1625: ##sys#shell-command */
t4=*((C_word*)lf[434]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6950 in loop in poke1594 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_6952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6952,2,av);}
/* posixunix.scm:1260: poke */
t2=((C_word*)((C_word*)t0)[2])[1];{
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k8172 in process-run in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_8174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8174,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8177,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1621: process-fork */
t4=*((C_word*)lf[423]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* process-run in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_8170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_8170,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8174,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_8174(t6,C_u_i_car(t5));}
else{
t5=t4;
f_8174(t5,C_SCHEME_FALSE);}}

/* k7219 in setup in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_7221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trf_7221,2,t0,t1);}
a=C_alloc(5);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_record4(&a,4,lf[366],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5653,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5657,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:817: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[5]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5657(2,av2);}}}

/* k5655 in system-information in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5657,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[260]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_utsname.sysname);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* signal-mask! in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5621,3,av);}
t3=C_i_check_exact_2(t2,lf[255]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
t6=C_sigprocmask_block(C_fix(0));
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* posixunix.scm:795: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=lf[255];
av2[4]=lf[256];
f_2720(5,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* signal-unmask! in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_5637(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5637,3,av);}
t3=C_i_check_exact_2(t2,lf[257]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
t6=C_sigprocmask_unblock(C_fix(0));
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* posixunix.scm:802: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[127];
av2[3]=lf[257];
av2[4]=lf[258];
f_2720(5,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_6993(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_6993,2,t0,t1);}
a=C_alloc(23);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6998,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7004,a[2]=((C_word*)t0)[4],a[3]=((C_word)li177),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7010,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word)li178),tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7032,a[2]=((C_word*)t0)[4],a[3]=((C_word)li179),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1291: make-output-port */
t10=*((C_word*)lf[362]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k6996 in k6991 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6998,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1301: set-port-name! */
t4=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3815 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3817,2,av);}
if(C_truep(t1)){
/* posix-common.scm:548: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* posix-common.scm:548: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3711(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* k3812 in k3765 in k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in ... */
static void C_ccall f_3814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3814,2,av);}
/* posix-common.scm:548: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* file-link in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6359,4,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[342]);
t5=C_i_check_string_2(t3,lf[342]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6379,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=t6;
t8=t2;
t9=t3;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6340,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t8)){
t11=C_i_foreign_string_argumentp(t8);
/* posixunix.scm:1112: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}
else{
t11=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_6340(2,av2);}}}

/* loop in poke1594 in k6924 in custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6933(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6933,2,av);}
a=C_alloc(6);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_i_eqvp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_i_eqvp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6952,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1259: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[348]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[348]+1);
av2[1]=t7;
tp(2,av2);}}
else{
if(C_truep(C_i_eqvp(t4,C_fix((C_word)EINTR)))){
/* posixunix.scm:1262: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
tp(3,av2);}}
else{
/* posixunix.scm:1264: posix-error */
t7=lf[0];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[8];
av2[4]=lf[360];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[8];
f_2720(7,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6983,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1266: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3884,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=lf[77];
av2[3]=((C_word*)t0)[7];
av2[4]=t4;
tp(5,av2);}}

/* k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3881,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=lf[98];
av2[3]=((C_word*)t0)[6];
av2[4]=t4;
tp(5,av2);}}

/* k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3887,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=lf[78];
av2[3]=((C_word*)t0)[8];
av2[4]=t4;
tp(5,av2);}}

/* k3501 in loop in k3473 in k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3503(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3503,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_string_ref(t2,C_fix(0));
t4=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t5=(C_truep(t4)?C_i_string_ref(t2,C_fix(1)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_make_character(46),t3);
if(C_truep(t7)){
t8=C_i_not(t5);
if(C_truep(t8)){
t9=t6;
f_3515(t9,t8);}
else{
t9=C_eqp(C_make_character(46),t5);
if(C_truep(t9)){
t10=C_eqp(C_fix(2),((C_word*)t0)[2]);
t11=t6;
f_3515(t11,(C_truep(t10)?t10:C_i_not(((C_word*)t0)[5])));}
else{
t10=t6;
f_3515(t10,C_i_not(((C_word*)t0)[5]));}}}
else{
t8=t6;
f_3515(t8,C_SCHEME_FALSE);}}

/* ##sys#custom-input-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6381(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_6381,c,av);}
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
t16=(C_truep(t15)?*((C_word*)lf[346]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=C_i_nullp(t19);
t21=(C_truep(t20)?C_SCHEME_FALSE:C_i_car(t19));
t22=t21;
t23=C_i_nullp(t19);
t24=(C_truep(t23)?C_SCHEME_END_OF_LIST:C_i_cdr(t19));
t25=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6409,a[2]=t12,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t22,a[7]=t1,a[8]=t17,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t7)){
/* posixunix.scm:1122: ##sys#file-nonblocking! */
t26=*((C_word*)lf[143]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t26;
av2[1]=t25;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t26+1)))(3,av2);}}
else{
t26=t25;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t26;
av2[1]=C_SCHEME_UNDEFINED;
f_6409(2,av2);}}}

/* k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3875,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=lf[100];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
tp(5,av2);}}

/* find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_3871,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3875,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3915,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=lf[101];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3878,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[97]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t3;
av2[2]=lf[99];
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
tp(5,av2);}}

/* f_3865 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3865,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4821 in k4815 in file-mkstemp in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4823,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixunix.scm:525: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[70]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}

/* k3513 in k3501 in loop in k3473 in k3469 in k3466 in k3463 in k3448 in directory in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3515(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3515,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* posix-common.scm:492: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3489(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:493: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3489(t3,t2);}}

/* f_3849 in k3846 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3849,3,av);}
/* posix-common.scm:528: irregex-match */
t3=*((C_word*)lf[89]+1);{
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

/* k3846 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3848,2,av);}
a=C_alloc(4);
t2=t1;
t3=((C_word*)t0)[2];
f_3702(t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3849,a[2]=t2,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));}

/* file-close in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4701,3,av);}
a=C_alloc(7);
t3=C_i_check_exact_2(t2,lf[185]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4710,a[2]=t2,a[3]=t5,a[4]=((C_word)li96),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_4710(2,av2);}}

/* doloop928 in k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static C_word C_fcall f_5139(C_word t0,C_word t1,C_word t2){
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
t8=stub937(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=C_fixnum_plus(t1,C_fix(1));
t10=t2;
t11=C_u_i_cdr(t10);
t13=t9;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t7=stub937(C_SCHEME_UNDEFINED,t5,t6,C_SCHEME_FALSE);
t8=C_fixnum_plus(t1,C_fix(1));
t9=t2;
t10=C_u_i_cdr(t9);
t13=t8;
t14=t10;
t1=t13;
t2=t14;
goto loop;}}}

/* k4396 in doloop683 in tmp12610 in a4373 in a4352 in k4343 in list->c-string-buffer in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4398(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4398,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub665(t2,t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4404(2,av2);}}
else{
/* posix-common.scm:713: error */
t6=*((C_word*)lf[133]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[134];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3830 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3832,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:549: action */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
/* posix-common.scm:550: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4852(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4852,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=C_u_i_length(((C_word*)t0)[2]);
t4=C_u_i_length(t2);
t5=C_fixnum_plus(t3,t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t8=C_fix((C_word)sizeof(struct pollfd));
t9=C_fixnum_times(t6,t8);
/* posixunix.scm:543: ##sys#make-blob */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[200]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[200]+1);
av2[1]=t7;
av2[2]=t9;
tp(3,av2);}}

/* k3837 in k3830 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in ... */
static void C_ccall f_3839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3839,2,av);}
/* posix-common.scm:549: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3711(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in file-close in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4710,2,av);}
t2=C_close(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_fix((C_word)errno);
if(C_truep(C_i_eqvp(t3,C_fix((C_word)EINTR)))){
/* posixunix.scm:489: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[186]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixunix.scm:491: posix-error */
t4=lf[0];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=lf[185];
av2[4]=lf[187];
av2[5]=((C_word*)t0)[2];
f_2720(6,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3821 in k3731 in k3722 in loop in k3707 in k3700 in k3697 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3823,2,av);}
a=C_alloc(16);
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:540: pproc */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3767,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* posix-common.scm:541: lproc */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k4858 in k4850 in k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_4860,2,av);}
a=C_alloc(21);
t2=t1;
t3=(C_truep(((C_word*)t0)[2])?C_i_check_number(((C_word*)t0)[2]):C_SCHEME_UNDEFINED);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5139,a[2]=t2,a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_5139(t4,C_fix(0),((C_word*)t0)[3])
);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5097,a[2]=t2,a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
t7=(
  f_5097(t6,((C_word*)t0)[4],((C_word*)t0)[5])
);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5084,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5095,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:559: max */
t10=*((C_word*)lf[199]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_fix(0);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_5084(t9,C_fix(-1));}}

/* k7685 in utc-time->seconds in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7687,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1460: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[72]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* utc-time->seconds in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7683,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7687,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1459: check-time-vector */
f_3924(t3,lf[400],t2);}

/* a3894 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3895,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3890(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_3890,2,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=t1;
t9=((C_word*)t0)[8];
t10=C_i_check_string_2(t3,lf[76]);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3699,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t9,a[6]=t2,a[7]=t3,a[8]=t6,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3865,a[2]=t12,a[3]=t7,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t15=t13;
f_3699(t15,t14);}
else{
t14=t13;
f_3699(t14,t7);}}
else{
t14=t13;
f_3699(t14,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3857,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));}}

/* k4828 in k4821 in k4815 in file-mkstemp in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4830,2,av);}
/* posixunix.scm:525: values */{
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

/* a3897 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3898,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7695 in k7689 in k7685 in utc-time->seconds in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7697,2,av);}
if(C_truep(t1)){
/* posixunix.scm:1462: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[400];
av2[3]=lf[401];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7689 in k7685 in utc-time->seconds in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7691,2,av);}
a=C_alloc(9);
t2=C_a_timegm(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7697,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1461: fp= */
t4=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[114];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_4842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4842,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4846,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4846(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4846(t6,C_SCHEME_FALSE);}}

/* k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4846,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4849,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=t3;
f_4849(t5,C_a_i_list1(&a,1,((C_word*)t0)[3]));}
else{
t5=C_i_check_list_2(((C_word*)t0)[3],lf[196]);
t6=((C_word*)t0)[3];
t7=t3;
f_4849(t7,t6);}}
else{
t5=t3;
f_4849(t5,C_SCHEME_END_OF_LIST);}}

/* k4847 in k4844 in file-select in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_4849(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4849,2,t0,t1);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4852,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];
if(C_truep(t4)){
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t5=t3;
f_4852(t5,C_a_i_list1(&a,1,((C_word*)t0)[5]));}
else{
t5=C_i_check_list_2(((C_word*)t0)[5],lf[196]);
t6=((C_word*)t0)[5];
t7=t3;
f_4852(t7,t6);}}
else{
t5=t3;
f_4852(t5,C_SCHEME_END_OF_LIST);}}

/* k8198 in k8194 in k8175 in k8172 in process-run in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 in ... */
static void C_ccall f_8200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8200,2,av);}
/* posixunix.scm:1625: process-execute */
t2=*((C_word*)lf[428]+1);{
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

/* check in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_fcall f_3091(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3091,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:370: posix-error */
t6=lf[0];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[8];
av2[3]=t2;
av2[4]=lf[56];
av2[5]=t3;
f_2720(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3104,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:371: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=*((C_word*)lf[58]+1);
av2[4]=lf[59];
av2[5]=lf[43];
tp(6,av2);}}}

/* string->time in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_7646,c,av);}
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
t5=(C_truep(t4)?lf[399]:C_i_car(t3));
t6=t5;
t7=C_i_check_string_2(t2,lf[398]);
t8=C_i_check_string_2(t6,lf[398]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7663,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1454: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[398];
tp(4,av2);}}

/* k2824 in file-owner in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2826,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-permissions in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2828,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:268: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* ##sys#custom-output-port in k6216 in k6185 in k5703 in k5699 in k5695 in k5691 in k5611 in k4256 in k3920 in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_6904(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_6904,c,av);}
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
t16=(C_truep(t15)?*((C_word*)lf[346]+1):C_i_car(t14));
t17=t16;
t18=C_i_nullp(t14);
t19=(C_truep(t18)?C_SCHEME_END_OF_LIST:C_i_cdr(t14));
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6926,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t12,a[6]=t1,a[7]=t17,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
/* posixunix.scm:1251: ##sys#file-nonblocking! */
t21=*((C_word*)lf[143]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=t20;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}
else{
t21=t20;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t21;
av2[1]=C_SCHEME_UNDEFINED;
f_6926(2,av2);}}}

/* file-owner in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2822,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2826,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:267: ##sys#stat */
f_2738(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[20]);}

/* k2818 in file-change-time in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2820,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3857 in k3888 in k3885 in k3882 in k3879 in k3876 in k3873 in find-files in k3047 in k2806 in k2706 in k2703 in k2700 in k2697 in k2694 in k2691 */
static void C_ccall f_3857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3857,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[625] = {
{"f_5953:posixunix_2escm",(void*)f_5953},
{"f_2834:posixunix_2escm",(void*)f_2834},
{"f_2838:posixunix_2escm",(void*)f_2838},
{"f_8159:posixunix_2escm",(void*)f_8159},
{"f_8155:posixunix_2escm",(void*)f_8155},
{"f_2832:posixunix_2escm",(void*)f_2832},
{"f_8241:posixunix_2escm",(void*)f_8241},
{"f_8247:posixunix_2escm",(void*)f_8247},
{"f_2840:posixunix_2escm",(void*)f_2840},
{"f_2859:posixunix_2escm",(void*)f_2859},
{"f_8220:posixunix_2escm",(void*)f_8220},
{"f_8224:posixunix_2escm",(void*)f_8224},
{"f_8226:posixunix_2escm",(void*)f_8226},
{"f_4005:posixunix_2escm",(void*)f_4005},
{"f_6687:posixunix_2escm",(void*)f_6687},
{"f_8164:posixunix_2escm",(void*)f_8164},
{"f_5613:posixunix_2escm",(void*)f_5613},
{"f_5910:posixunix_2escm",(void*)f_5910},
{"f_5615:posixunix_2escm",(void*)f_5615},
{"f_5920:posixunix_2escm",(void*)f_5920},
{"f_4037:posixunix_2escm",(void*)f_4037},
{"f_4817:posixunix_2escm",(void*)f_4817},
{"f_6415:posixunix_2escm",(void*)f_6415},
{"f_6416:posixunix_2escm",(void*)f_6416},
{"f_4810:posixunix_2escm",(void*)f_4810},
{"f_4033:posixunix_2escm",(void*)f_4033},
{"f_4047:posixunix_2escm",(void*)f_4047},
{"f_4041:posixunix_2escm",(void*)f_4041},
{"f_6983:posixunix_2escm",(void*)f_6983},
{"f_4094:posixunix_2escm",(void*)f_4094},
{"f_3779:posixunix_2escm",(void*)f_3779},
{"f_3777:posixunix_2escm",(void*)f_3777},
{"f_3767:posixunix_2escm",(void*)f_3767},
{"f_6927:posixunix_2escm",(void*)f_6927},
{"f_6926:posixunix_2escm",(void*)f_6926},
{"f_4078:posixunix_2escm",(void*)f_4078},
{"f_3253:posixunix_2escm",(void*)f_3253},
{"f_3796:posixunix_2escm",(void*)f_3796},
{"f_3792:posixunix_2escm",(void*)f_3792},
{"f_3799:posixunix_2escm",(void*)f_3799},
{"f_4085:posixunix_2escm",(void*)f_4085},
{"f_3283:posixunix_2escm",(void*)f_3283},
{"f_3784:posixunix_2escm",(void*)f_3784},
{"f_3289:posixunix_2escm",(void*)f_3289},
{"f_8293:posixunix_2escm",(void*)f_8293},
{"f_8292:posixunix_2escm",(void*)f_8292},
{"f_3733:posixunix_2escm",(void*)f_3733},
{"f_4560:posixunix_2escm",(void*)f_4560},
{"f_4566:posixunix_2escm",(void*)f_4566},
{"f_3724:posixunix_2escm",(void*)f_3724},
{"f_3804:posixunix_2escm",(void*)f_3804},
{"f_4572:posixunix_2escm",(void*)f_4572},
{"f_4579:posixunix_2escm",(void*)f_4579},
{"f_3755:posixunix_2escm",(void*)f_3755},
{"f_3758:posixunix_2escm",(void*)f_3758},
{"f_7371:posixunix_2escm",(void*)f_7371},
{"f_3243:posixunix_2escm",(void*)f_3243},
{"f_3249:posixunix_2escm",(void*)f_3249},
{"f_6481:posixunix_2escm",(void*)f_6481},
{"f_3273:posixunix_2escm",(void*)f_3273},
{"f_3272:posixunix_2escm",(void*)f_3272},
{"f_4522:posixunix_2escm",(void*)f_4522},
{"f_4526:posixunix_2escm",(void*)f_4526},
{"f_4529:posixunix_2escm",(void*)f_4529},
{"f_3225:posixunix_2escm",(void*)f_3225},
{"f_3222:posixunix_2escm",(void*)f_3222},
{"f_8701:posixunix_2escm",(void*)f_8701},
{"f_8704:posixunix_2escm",(void*)f_8704},
{"f_7667:posixunix_2escm",(void*)f_7667},
{"f_4537:posixunix_2escm",(void*)f_4537},
{"f_7663:posixunix_2escm",(void*)f_7663},
{"f_4543:posixunix_2escm",(void*)f_4543},
{"f_4547:posixunix_2escm",(void*)f_4547},
{"f_7675:posixunix_2escm",(void*)f_7675},
{"f_5969:posixunix_2escm",(void*)f_5969},
{"f_3209:posixunix_2escm",(void*)f_3209},
{"f_5944:posixunix_2escm",(void*)f_5944},
{"f_4554:posixunix_2escm",(void*)f_4554},
{"f_4558:posixunix_2escm",(void*)f_4558},
{"f_5939:posixunix_2escm",(void*)f_5939},
{"f_5401:posixunix_2escm",(void*)f_5401},
{"f_5948:posixunix_2escm",(void*)f_5948},
{"f_5405:posixunix_2escm",(void*)f_5405},
{"f_7622:posixunix_2escm",(void*)f_7622},
{"f_2808:posixunix_2escm",(void*)f_2808},
{"f_8869:posixunix_2escm",(void*)f_8869},
{"f_7631:posixunix_2escm",(void*)f_7631},
{"f_2816:posixunix_2escm",(void*)f_2816},
{"f_2814:posixunix_2escm",(void*)f_2814},
{"f_2810:posixunix_2escm",(void*)f_2810},
{"f_6409:posixunix_2escm",(void*)f_6409},
{"f_6420:posixunix_2escm",(void*)f_6420},
{"f_8848:posixunix_2escm",(void*)f_8848},
{"f_5434:posixunix_2escm",(void*)f_5434},
{"f_8836:posixunix_2escm",(void*)f_8836},
{"f_8832:posixunix_2escm",(void*)f_8832},
{"f_5444:posixunix_2escm",(void*)f_5444},
{"f_5440:posixunix_2escm",(void*)f_5440},
{"f_5449:posixunix_2escm",(void*)f_5449},
{"f_8839:posixunix_2escm",(void*)f_8839},
{"f_5416:posixunix_2escm",(void*)f_5416},
{"f_5410:posixunix_2escm",(void*)f_5410},
{"f_6453:posixunix_2escm",(void*)f_6453},
{"f_7400:posixunix_2escm",(void*)f_7400},
{"f_6459:posixunix_2escm",(void*)f_6459},
{"f_6618:posixunix_2escm",(void*)f_6618},
{"f_6614:posixunix_2escm",(void*)f_6614},
{"f_5425:posixunix_2escm",(void*)f_5425},
{"f_5420:posixunix_2escm",(void*)f_5420},
{"f_7414:posixunix_2escm",(void*)f_7414},
{"f_6445:posixunix_2escm",(void*)f_6445},
{"f_5429:posixunix_2escm",(void*)f_5429},
{"f_5473:posixunix_2escm",(void*)f_5473},
{"f_6602:posixunix_2escm",(void*)f_6602},
{"f_5478:posixunix_2escm",(void*)f_5478},
{"f_6478:posixunix_2escm",(void*)f_6478},
{"f_6637:posixunix_2escm",(void*)f_6637},
{"f_6639:posixunix_2escm",(void*)f_6639},
{"f_5483:posixunix_2escm",(void*)f_5483},
{"f_5487:posixunix_2escm",(void*)f_5487},
{"f_6629:posixunix_2escm",(void*)f_6629},
{"f_5453:posixunix_2escm",(void*)f_5453},
{"f_5458:posixunix_2escm",(void*)f_5458},
{"f_5463:posixunix_2escm",(void*)f_5463},
{"f_5469:posixunix_2escm",(void*)f_5469},
{"f_8792:posixunix_2escm",(void*)f_8792},
{"f_4669:posixunix_2escm",(void*)f_4669},
{"f_4673:posixunix_2escm",(void*)f_4673},
{"f_3711:posixunix_2escm",(void*)f_3711},
{"f_5291:posixunix_2escm",(void*)f_5291},
{"f_3709:posixunix_2escm",(void*)f_3709},
{"f_3702:posixunix_2escm",(void*)f_3702},
{"f_5393:posixunix_2escm",(void*)f_5393},
{"f_8281:posixunix_2escm",(void*)f_8281},
{"f_8742:posixunix_2escm",(void*)f_8742},
{"f_4636:posixunix_2escm",(void*)f_4636},
{"f_8276:posixunix_2escm",(void*)f_8276},
{"f_8270:posixunix_2escm",(void*)f_8270},
{"f_8739:posixunix_2escm",(void*)f_8739},
{"f_8733:posixunix_2escm",(void*)f_8733},
{"f_4505:posixunix_2escm",(void*)f_4505},
{"f_4502:posixunix_2escm",(void*)f_4502},
{"f_4689:posixunix_2escm",(void*)f_4689},
{"f_4686:posixunix_2escm",(void*)f_4686},
{"f_8261:posixunix_2escm",(void*)f_8261},
{"f_8720:posixunix_2escm",(void*)f_8720},
{"f_8723:posixunix_2escm",(void*)f_8723},
{"f_4516:posixunix_2escm",(void*)f_4516},
{"f_4510:posixunix_2escm",(void*)f_4510},
{"f_4365:posixunix_2escm",(void*)f_4365},
{"f_4369:posixunix_2escm",(void*)f_4369},
{"f_8714:posixunix_2escm",(void*)f_8714},
{"f_8040:posixunix_2escm",(void*)f_8040},
{"f_8043:posixunix_2escm",(void*)f_8043},
{"f_8826:posixunix_2escm",(void*)f_8826},
{"f_4382:posixunix_2escm",(void*)f_4382},
{"f_5773:posixunix_2escm",(void*)f_5773},
{"f_4380:posixunix_2escm",(void*)f_4380},
{"f_5775:posixunix_2escm",(void*)f_5775},
{"f_5787:posixunix_2escm",(void*)f_5787},
{"f_5783:posixunix_2escm",(void*)f_5783},
{"f_4353:posixunix_2escm",(void*)f_4353},
{"f_4359:posixunix_2escm",(void*)f_4359},
{"f_8764:posixunix_2escm",(void*)f_8764},
{"f_8022:posixunix_2escm",(void*)f_8022},
{"f_7344:posixunix_2escm",(void*)f_7344},
{"f_7348:posixunix_2escm",(void*)f_7348},
{"f_8801:posixunix_2escm",(void*)f_8801},
{"f_8752:posixunix_2escm",(void*)f_8752},
{"f_8758:posixunix_2escm",(void*)f_8758},
{"f_7421:posixunix_2escm",(void*)f_7421},
{"f_4376:posixunix_2escm",(void*)f_4376},
{"f_4374:posixunix_2escm",(void*)f_4374},
{"f_8510:posixunix_2escm",(void*)f_8510},
{"f_7438:posixunix_2escm",(void*)f_7438},
{"f_8516:posixunix_2escm",(void*)f_8516},
{"f_8514:posixunix_2escm",(void*)f_8514},
{"f_4348:posixunix_2escm",(void*)f_4348},
{"f_4345:posixunix_2escm",(void*)f_4345},
{"f_3000:posixunix_2escm",(void*)f_3000},
{"f_7459:posixunix_2escm",(void*)f_7459},
{"f_7451:posixunix_2escm",(void*)f_7451},
{"f_3016:posixunix_2escm",(void*)f_3016},
{"f_7319:posixunix_2escm",(void*)f_7319},
{"f_8564:posixunix_2escm",(void*)f_8564},
{"f_7313:posixunix_2escm",(void*)f_7313},
{"f_3004:posixunix_2escm",(void*)f_3004},
{"f_5727:posixunix_2escm",(void*)f_5727},
{"f_4337:posixunix_2escm",(void*)f_4337},
{"f_7323:posixunix_2escm",(void*)f_7323},
{"f_3106:posixunix_2escm",(void*)f_3106},
{"f_3104:posixunix_2escm",(void*)f_3104},
{"f_3062:posixunix_2escm",(void*)f_3062},
{"f_8895:posixunix_2escm",(void*)f_8895},
{"f_8534:posixunix_2escm",(void*)f_8534},
{"f_8885:posixunix_2escm",(void*)f_8885},
{"f_5753:posixunix_2escm",(void*)f_5753},
{"f_5769:posixunix_2escm",(void*)f_5769},
{"f_3120:posixunix_2escm",(void*)f_3120},
{"f_5289:posixunix_2escm",(void*)f_5289},
{"f_8875:posixunix_2escm",(void*)f_8875},
{"f_8873:posixunix_2escm",(void*)f_8873},
{"f_5761:posixunix_2escm",(void*)f_5761},
{"f_5739:posixunix_2escm",(void*)f_5739},
{"f_6838:posixunix_2escm",(void*)f_6838},
{"f_3118:posixunix_2escm",(void*)f_3118},
{"f_8098:posixunix_2escm",(void*)f_8098},
{"f_5731:posixunix_2escm",(void*)f_5731},
{"f_5735:posixunix_2escm",(void*)f_5735},
{"f_3022:posixunix_2escm",(void*)f_3022},
{"f_8082:posixunix_2escm",(void*)f_8082},
{"f_5743:posixunix_2escm",(void*)f_5743},
{"f_7055:posixunix_2escm",(void*)f_7055},
{"f_7054:posixunix_2escm",(void*)f_7054},
{"f_3134:posixunix_2escm",(void*)f_3134},
{"f_3132:posixunix_2escm",(void*)f_3132},
{"f_3489:posixunix_2escm",(void*)f_3489},
{"f_5276:posixunix_2escm",(void*)f_5276},
{"f_3471:posixunix_2escm",(void*)f_3471},
{"f_3475:posixunix_2escm",(void*)f_3475},
{"f_5242:posixunix_2escm",(void*)f_5242},
{"f_5249:posixunix_2escm",(void*)f_5249},
{"f_3150:posixunix_2escm",(void*)f_3150},
{"f_3465:posixunix_2escm",(void*)f_3465},
{"f_3468:posixunix_2escm",(void*)f_3468},
{"f_3159:posixunix_2escm",(void*)f_3159},
{"f_4296:posixunix_2escm",(void*)f_4296},
{"f_4290:posixunix_2escm",(void*)f_4290},
{"f_3450:posixunix_2escm",(void*)f_3450},
{"f_3182:posixunix_2escm",(void*)f_3182},
{"f_5223:posixunix_2escm",(void*)f_5223},
{"f_3189:posixunix_2escm",(void*)f_3189},
{"f_3446:posixunix_2escm",(void*)f_3446},
{"f_5233:posixunix_2escm",(void*)f_5233},
{"f_3176:posixunix_2escm",(void*)f_3176},
{"f_5230:posixunix_2escm",(void*)f_5230},
{"f_3054:posixunix_2escm",(void*)f_3054},
{"f_2788:posixunix_2escm",(void*)f_2788},
{"f_2783:posixunix_2escm",(void*)f_2783},
{"f_3049:posixunix_2escm",(void*)f_3049},
{"f_7799:posixunix_2escm",(void*)f_7799},
{"f_2795:posixunix_2escm",(void*)f_2795},
{"f_6007:posixunix_2escm",(void*)f_6007},
{"f_3428:posixunix_2escm",(void*)f_3428},
{"f_2767:posixunix_2escm",(void*)f_2767},
{"f_2763:posixunix_2escm",(void*)f_2763},
{"f_2776:posixunix_2escm",(void*)f_2776},
{"f_3405:posixunix_2escm",(void*)f_3405},
{"f_5714:posixunix_2escm",(void*)f_5714},
{"f_7746:posixunix_2escm",(void*)f_7746},
{"f_6019:posixunix_2escm",(void*)f_6019},
{"f_7740:posixunix_2escm",(void*)f_7740},
{"f_7743:posixunix_2escm",(void*)f_7743},
{"f_2742:posixunix_2escm",(void*)f_2742},
{"f_7848:posixunix_2escm",(void*)f_7848},
{"f_6042:posixunix_2escm",(void*)f_6042},
{"f_7755:posixunix_2escm",(void*)f_7755},
{"f_7852:posixunix_2escm",(void*)f_7852},
{"f_6035:posixunix_2escm",(void*)f_6035},
{"f_2724:posixunix_2escm",(void*)f_2724},
{"f_5707:posixunix_2escm",(void*)f_5707},
{"f_5705:posixunix_2escm",(void*)f_5705},
{"f_2720:posixunix_2escm",(void*)f_2720},
{"f_5701:posixunix_2escm",(void*)f_5701},
{"f_2735:posixunix_2escm",(void*)f_2735},
{"f_2738:posixunix_2escm",(void*)f_2738},
{"f_2731:posixunix_2escm",(void*)f_2731},
{"f_5497:posixunix_2escm",(void*)f_5497},
{"f_5492:posixunix_2escm",(void*)f_5492},
{"f_3297:posixunix_2escm",(void*)f_3297},
{"f_3292:posixunix_2escm",(void*)f_3292},
{"toplevel:posixunix_2escm",(void*)C_posix_toplevel},
{"f_4404:posixunix_2escm",(void*)f_4404},
{"f_4407:posixunix_2escm",(void*)f_4407},
{"f_6828:posixunix_2escm",(void*)f_6828},
{"f_3357:posixunix_2escm",(void*)f_3357},
{"f_3355:posixunix_2escm",(void*)f_3355},
{"f_3383:posixunix_2escm",(void*)f_3383},
{"f_4439:posixunix_2escm",(void*)f_4439},
{"f_4433:posixunix_2escm",(void*)f_4433},
{"f_7805:posixunix_2escm",(void*)f_7805},
{"f_7817:posixunix_2escm",(void*)f_7817},
{"f_4423:posixunix_2escm",(void*)f_4423},
{"f_3345:posixunix_2escm",(void*)f_3345},
{"f_4475:posixunix_2escm",(void*)f_4475},
{"f_4478:posixunix_2escm",(void*)f_4478},
{"f_3339:posixunix_2escm",(void*)f_3339},
{"f_7072:posixunix_2escm",(void*)f_7072},
{"f_3367:posixunix_2escm",(void*)f_3367},
{"f_3364:posixunix_2escm",(void*)f_3364},
{"f_8611:posixunix_2escm",(void*)f_8611},
{"f_8619:posixunix_2escm",(void*)f_8619},
{"f_4450:posixunix_2escm",(void*)f_4450},
{"f_4456:posixunix_2escm",(void*)f_4456},
{"f_7082:posixunix_2escm",(void*)f_7082},
{"f_4460:posixunix_2escm",(void*)f_4460},
{"f_5095:posixunix_2escm",(void*)f_5095},
{"f_5097:posixunix_2escm",(void*)f_5097},
{"f_4465:posixunix_2escm",(void*)f_4465},
{"f_3307:posixunix_2escm",(void*)f_3307},
{"f_7876:posixunix_2escm",(void*)f_7876},
{"f_7872:posixunix_2escm",(void*)f_7872},
{"f_5084:posixunix_2escm",(void*)f_5084},
{"f_7702:posixunix_2escm",(void*)f_7702},
{"f_2705:posixunix_2escm",(void*)f_2705},
{"f_2708:posixunix_2escm",(void*)f_2708},
{"f_2702:posixunix_2escm",(void*)f_2702},
{"f_7715:posixunix_2escm",(void*)f_7715},
{"f_4165:posixunix_2escm",(void*)f_4165},
{"f_3329:posixunix_2escm",(void*)f_3329},
{"f_7897:posixunix_2escm",(void*)f_7897},
{"f_7729:posixunix_2escm",(void*)f_7729},
{"f_4496:posixunix_2escm",(void*)f_4496},
{"f_4492:posixunix_2escm",(void*)f_4492},
{"f_4490:posixunix_2escm",(void*)f_4490},
{"f_4177:posixunix_2escm",(void*)f_4177},
{"f_6106:posixunix_2escm",(void*)f_6106},
{"f_6104:posixunix_2escm",(void*)f_6104},
{"f_7736:posixunix_2escm",(void*)f_7736},
{"f_5503:posixunix_2escm",(void*)f_5503},
{"f_4183:posixunix_2escm",(void*)f_4183},
{"f_4187:posixunix_2escm",(void*)f_4187},
{"f_4195:posixunix_2escm",(void*)f_4195},
{"f_5588:posixunix_2escm",(void*)f_5588},
{"f_5564:posixunix_2escm",(void*)f_5564},
{"f_4132:posixunix_2escm",(void*)f_4132},
{"f_6142:posixunix_2escm",(void*)f_6142},
{"f_4140:posixunix_2escm",(void*)f_4140},
{"f_6132:posixunix_2escm",(void*)f_6132},
{"f_6130:posixunix_2escm",(void*)f_6130},
{"f_4151:posixunix_2escm",(void*)f_4151},
{"f_4157:posixunix_2escm",(void*)f_4157},
{"f_4155:posixunix_2escm",(void*)f_4155},
{"f_5521:posixunix_2escm",(void*)f_5521},
{"f_8685:posixunix_2escm",(void*)f_8685},
{"f_8682:posixunix_2escm",(void*)f_8682},
{"f_4104:posixunix_2escm",(void*)f_4104},
{"f_4108:posixunix_2escm",(void*)f_4108},
{"f_5052:posixunix_2escm",(void*)f_5052},
{"f_4964:posixunix_2escm",(void*)f_4964},
{"f_4111:posixunix_2escm",(void*)f_4111},
{"f_5023:posixunix_2escm",(void*)f_5023},
{"f_4993:posixunix_2escm",(void*)f_4993},
{"f_4924:posixunix_2escm",(void*)f_4924},
{"f_4927:posixunix_2escm",(void*)f_4927},
{"f_2985:posixunix_2escm",(void*)f_2985},
{"f_2987:posixunix_2escm",(void*)f_2987},
{"f_6083:posixunix_2escm",(void*)f_6083},
{"f_8655:posixunix_2escm",(void*)f_8655},
{"f_7954:posixunix_2escm",(void*)f_7954},
{"f_7968:posixunix_2escm",(void*)f_7968},
{"f_7292:posixunix_2escm",(void*)f_7292},
{"f_8636:posixunix_2escm",(void*)f_8636},
{"f_5884:posixunix_2escm",(void*)f_5884},
{"f_5880:posixunix_2escm",(void*)f_5880},
{"f_2945:posixunix_2escm",(void*)f_2945},
{"f_2947:posixunix_2escm",(void*)f_2947},
{"f_5887:posixunix_2escm",(void*)f_5887},
{"f_8660:posixunix_2escm",(void*)f_8660},
{"f_8488:posixunix_2escm",(void*)f_8488},
{"f_5895:posixunix_2escm",(void*)f_5895},
{"f_7002:posixunix_2escm",(void*)f_7002},
{"f_5890:posixunix_2escm",(void*)f_5890},
{"f_2995:posixunix_2escm",(void*)f_2995},
{"f_8695:posixunix_2escm",(void*)f_8695},
{"f_8304:posixunix_2escm",(void*)f_8304},
{"f_8308:posixunix_2escm",(void*)f_8308},
{"f_4258:posixunix_2escm",(void*)f_4258},
{"f_8642:posixunix_2escm",(void*)f_8642},
{"f_8649:posixunix_2escm",(void*)f_8649},
{"f_7589:posixunix_2escm",(void*)f_7589},
{"f_7004:posixunix_2escm",(void*)f_7004},
{"f_4260:posixunix_2escm",(void*)f_4260},
{"f_4266:posixunix_2escm",(void*)f_4266},
{"f_7020:posixunix_2escm",(void*)f_7020},
{"f_2975:posixunix_2escm",(void*)f_2975},
{"f_2977:posixunix_2escm",(void*)f_2977},
{"f_8676:posixunix_2escm",(void*)f_8676},
{"f_7032:posixunix_2escm",(void*)f_7032},
{"f_8445:posixunix_2escm",(void*)f_8445},
{"f_8447:posixunix_2escm",(void*)f_8447},
{"f_4243:posixunix_2escm",(void*)f_4243},
{"f_8343:posixunix_2escm",(void*)f_8343},
{"f_7040:posixunix_2escm",(void*)f_7040},
{"f_8345:posixunix_2escm",(void*)f_8345},
{"f_8349:posixunix_2escm",(void*)f_8349},
{"f_4213:posixunix_2escm",(void*)f_4213},
{"f_8332:posixunix_2escm",(void*)f_8332},
{"f_4221:posixunix_2escm",(void*)f_4221},
{"f_5830:posixunix_2escm",(void*)f_5830},
{"f_5834:posixunix_2escm",(void*)f_5834},
{"f_4225:posixunix_2escm",(void*)f_4225},
{"f_8322:posixunix_2escm",(void*)f_8322},
{"f_8326:posixunix_2escm",(void*)f_8326},
{"f_8329:posixunix_2escm",(void*)f_8329},
{"f_8496:posixunix_2escm",(void*)f_8496},
{"f_8491:posixunix_2escm",(void*)f_8491},
{"f_5512:posixunix_2escm",(void*)f_5512},
{"f_6210:posixunix_2escm",(void*)f_6210},
{"f_6214:posixunix_2escm",(void*)f_6214},
{"f_6219:posixunix_2escm",(void*)f_6219},
{"f_6218:posixunix_2escm",(void*)f_6218},
{"f_5507:posixunix_2escm",(void*)f_5507},
{"f_5517:posixunix_2escm",(void*)f_5517},
{"f_7536:posixunix_2escm",(void*)f_7536},
{"f_7533:posixunix_2escm",(void*)f_7533},
{"f_7539:posixunix_2escm",(void*)f_7539},
{"f_2927:posixunix_2escm",(void*)f_2927},
{"f_6238:posixunix_2escm",(void*)f_6238},
{"f_7010:posixunix_2escm",(void*)f_7010},
{"f_6224:posixunix_2escm",(void*)f_6224},
{"f_6753:posixunix_2escm",(void*)f_6753},
{"f_7558:posixunix_2escm",(void*)f_7558},
{"f_5844:posixunix_2escm",(void*)f_5844},
{"f_4934:posixunix_2escm",(void*)f_4934},
{"f_3699:posixunix_2escm",(void*)f_3699},
{"f_7529:posixunix_2escm",(void*)f_7529},
{"f_5858:posixunix_2escm",(void*)f_5858},
{"f_3686:posixunix_2escm",(void*)f_3686},
{"f_5820:posixunix_2escm",(void*)f_5820},
{"f_5824:posixunix_2escm",(void*)f_5824},
{"f_5828:posixunix_2escm",(void*)f_5828},
{"f_7545:posixunix_2escm",(void*)f_7545},
{"f_3666:posixunix_2escm",(void*)f_3666},
{"f_6294:posixunix_2escm",(void*)f_6294},
{"f_6297:posixunix_2escm",(void*)f_6297},
{"f_7596:posixunix_2escm",(void*)f_7596},
{"f_7264:posixunix_2escm",(void*)f_7264},
{"f_8395:posixunix_2escm",(void*)f_8395},
{"f_3654:posixunix_2escm",(void*)f_3654},
{"f_3658:posixunix_2escm",(void*)f_3658},
{"f_6285:posixunix_2escm",(void*)f_6285},
{"f_7901:posixunix_2escm",(void*)f_7901},
{"f_7909:posixunix_2escm",(void*)f_7909},
{"f_3642:posixunix_2escm",(void*)f_3642},
{"f_3646:posixunix_2escm",(void*)f_3646},
{"f_7288:posixunix_2escm",(void*)f_7288},
{"f_7282:posixunix_2escm",(void*)f_7282},
{"f_6306:posixunix_2escm",(void*)f_6306},
{"f_6300:posixunix_2escm",(void*)f_6300},
{"f_3623:posixunix_2escm",(void*)f_3623},
{"f_3625:posixunix_2escm",(void*)f_3625},
{"f_6592:posixunix_2escm",(void*)f_6592},
{"f_6164:posixunix_2escm",(void*)f_6164},
{"f_2957:posixunix_2escm",(void*)f_2957},
{"f_2955:posixunix_2escm",(void*)f_2955},
{"f_6158:posixunix_2escm",(void*)f_6158},
{"f_6152:posixunix_2escm",(void*)f_6152},
{"f_3192:posixunix_2escm",(void*)f_3192},
{"f_6150:posixunix_2escm",(void*)f_6150},
{"f_2967:posixunix_2escm",(void*)f_2967},
{"f_2965:posixunix_2escm",(void*)f_2965},
{"f_6189:posixunix_2escm",(void*)f_6189},
{"f_6187:posixunix_2escm",(void*)f_6187},
{"f_6180:posixunix_2escm",(void*)f_6180},
{"f_2935:posixunix_2escm",(void*)f_2935},
{"f_2937:posixunix_2escm",(void*)f_2937},
{"f_6174:posixunix_2escm",(void*)f_6174},
{"f_6170:posixunix_2escm",(void*)f_6170},
{"f_5800:posixunix_2escm",(void*)f_5800},
{"f_7978:posixunix_2escm",(void*)f_7978},
{"f_7974:posixunix_2escm",(void*)f_7974},
{"f_5807:posixunix_2escm",(void*)f_5807},
{"f_2699:posixunix_2escm",(void*)f_2699},
{"f_2696:posixunix_2escm",(void*)f_2696},
{"f_2693:posixunix_2escm",(void*)f_2693},
{"f_8401:posixunix_2escm",(void*)f_8401},
{"f_7982:posixunix_2escm",(void*)f_7982},
{"f_3922:posixunix_2escm",(void*)f_3922},
{"f_3924:posixunix_2escm",(void*)f_3924},
{"f_7913:posixunix_2escm",(void*)f_7913},
{"f_7916:posixunix_2escm",(void*)f_7916},
{"f_5305:posixunix_2escm",(void*)f_5305},
{"f_3917:posixunix_2escm",(void*)f_3917},
{"f_3915:posixunix_2escm",(void*)f_3915},
{"f_8461:posixunix_2escm",(void*)f_8461},
{"f_7923:posixunix_2escm",(void*)f_7923},
{"f_8452:posixunix_2escm",(void*)f_8452},
{"f_6520:posixunix_2escm",(void*)f_6520},
{"f_6514:posixunix_2escm",(void*)f_6514},
{"f_6511:posixunix_2escm",(void*)f_6511},
{"f_6779:posixunix_2escm",(void*)f_6779},
{"f_5331:posixunix_2escm",(void*)f_5331},
{"f_3968:posixunix_2escm",(void*)f_3968},
{"f_3399:posixunix_2escm",(void*)f_3399},
{"f_3397:posixunix_2escm",(void*)f_3397},
{"f_6549:posixunix_2escm",(void*)f_6549},
{"f_3964:posixunix_2escm",(void*)f_3964},
{"f_8432:posixunix_2escm",(void*)f_8432},
{"f_3390:posixunix_2escm",(void*)f_3390},
{"f_6340:posixunix_2escm",(void*)f_6340},
{"f_6344:posixunix_2escm",(void*)f_6344},
{"f_5345:posixunix_2escm",(void*)f_5345},
{"f_8420:posixunix_2escm",(void*)f_8420},
{"f_8428:posixunix_2escm",(void*)f_8428},
{"f_8424:posixunix_2escm",(void*)f_8424},
{"f_6718:posixunix_2escm",(void*)f_6718},
{"f_5312:posixunix_2escm",(void*)f_5312},
{"f_8412:posixunix_2escm",(void*)f_8412},
{"f_8416:posixunix_2escm",(void*)f_8416},
{"f_6709:posixunix_2escm",(void*)f_6709},
{"f_6705:posixunix_2escm",(void*)f_6705},
{"f_5322:posixunix_2escm",(void*)f_5322},
{"f_6553:posixunix_2escm",(void*)f_6553},
{"f_5378:posixunix_2escm",(void*)f_5378},
{"f_6555:posixunix_2escm",(void*)f_6555},
{"f_6559:posixunix_2escm",(void*)f_6559},
{"f_6733:posixunix_2escm",(void*)f_6733},
{"f_5371:posixunix_2escm",(void*)f_5371},
{"f_6580:posixunix_2escm",(void*)f_6580},
{"f_3585:posixunix_2escm",(void*)f_3585},
{"f_6723:posixunix_2escm",(void*)f_6723},
{"f_5386:posixunix_2escm",(void*)f_5386},
{"f_3999:posixunix_2escm",(void*)f_3999},
{"f_3995:posixunix_2escm",(void*)f_3995},
{"f_5352:posixunix_2escm",(void*)f_5352},
{"f_6379:posixunix_2escm",(void*)f_6379},
{"f_3947:posixunix_2escm",(void*)f_3947},
{"f_3943:posixunix_2escm",(void*)f_3943},
{"f_6253:posixunix_2escm",(void*)f_6253},
{"f_5362:posixunix_2escm",(void*)f_5362},
{"f_3616:posixunix_2escm",(void*)f_3616},
{"f_3612:posixunix_2escm",(void*)f_3612},
{"f_6259:posixunix_2escm",(void*)f_6259},
{"f_3591:posixunix_2escm",(void*)f_3591},
{"f_4773:posixunix_2escm",(void*)f_4773},
{"f_3606:posixunix_2escm",(void*)f_3606},
{"f_4780:posixunix_2escm",(void*)f_4780},
{"f_4789:posixunix_2escm",(void*)f_4789},
{"f_4783:posixunix_2escm",(void*)f_4783},
{"f_6279:posixunix_2escm",(void*)f_6279},
{"f_6267:posixunix_2escm",(void*)f_6267},
{"f_8130:posixunix_2escm",(void*)f_8130},
{"f_8134:posixunix_2escm",(void*)f_8134},
{"f_6269:posixunix_2escm",(void*)f_6269},
{"f_4732:posixunix_2escm",(void*)f_4732},
{"f_8389:posixunix_2escm",(void*)f_8389},
{"f_8382:posixunix_2escm",(void*)f_8382},
{"f_4742:posixunix_2escm",(void*)f_4742},
{"f_4745:posixunix_2escm",(void*)f_4745},
{"f_4748:posixunix_2escm",(void*)f_4748},
{"f_8378:posixunix_2escm",(void*)f_8378},
{"f_8371:posixunix_2escm",(void*)f_8371},
{"f_7200:posixunix_2escm",(void*)f_7200},
{"f_8367:posixunix_2escm",(void*)f_8367},
{"f_3525:posixunix_2escm",(void*)f_3525},
{"f_8355:posixunix_2escm",(void*)f_8355},
{"f_8352:posixunix_2escm",(void*)f_8352},
{"f_8123:posixunix_2escm",(void*)f_8123},
{"f_8120:posixunix_2escm",(void*)f_8120},
{"f_7165:posixunix_2escm",(void*)f_7165},
{"f_3901:posixunix_2escm",(void*)f_3901},
{"f_7175:posixunix_2escm",(void*)f_7175},
{"f_3904:posixunix_2escm",(void*)f_3904},
{"f_3907:posixunix_2escm",(void*)f_3907},
{"f_3909:posixunix_2escm",(void*)f_3909},
{"f_5686:posixunix_2escm",(void*)f_5686},
{"f_5680:posixunix_2escm",(void*)f_5680},
{"f_7189:posixunix_2escm",(void*)f_7189},
{"f_7182:posixunix_2escm",(void*)f_7182},
{"f_5693:posixunix_2escm",(void*)f_5693},
{"f_5697:posixunix_2escm",(void*)f_5697},
{"f_8196:posixunix_2escm",(void*)f_8196},
{"f_5664:posixunix_2escm",(void*)f_5664},
{"f_5668:posixunix_2escm",(void*)f_5668},
{"f_5676:posixunix_2escm",(void*)f_5676},
{"f_5672:posixunix_2escm",(void*)f_5672},
{"f_8177:posixunix_2escm",(void*)f_8177},
{"f_6952:posixunix_2escm",(void*)f_6952},
{"f_8174:posixunix_2escm",(void*)f_8174},
{"f_8170:posixunix_2escm",(void*)f_8170},
{"f_7221:posixunix_2escm",(void*)f_7221},
{"f_5653:posixunix_2escm",(void*)f_5653},
{"f_5657:posixunix_2escm",(void*)f_5657},
{"f_5621:posixunix_2escm",(void*)f_5621},
{"f_5637:posixunix_2escm",(void*)f_5637},
{"f_6993:posixunix_2escm",(void*)f_6993},
{"f_6998:posixunix_2escm",(void*)f_6998},
{"f_3817:posixunix_2escm",(void*)f_3817},
{"f_3814:posixunix_2escm",(void*)f_3814},
{"f_6359:posixunix_2escm",(void*)f_6359},
{"f_6933:posixunix_2escm",(void*)f_6933},
{"f_3884:posixunix_2escm",(void*)f_3884},
{"f_3881:posixunix_2escm",(void*)f_3881},
{"f_3887:posixunix_2escm",(void*)f_3887},
{"f_3503:posixunix_2escm",(void*)f_3503},
{"f_6381:posixunix_2escm",(void*)f_6381},
{"f_3875:posixunix_2escm",(void*)f_3875},
{"f_3871:posixunix_2escm",(void*)f_3871},
{"f_3878:posixunix_2escm",(void*)f_3878},
{"f_3865:posixunix_2escm",(void*)f_3865},
{"f_4823:posixunix_2escm",(void*)f_4823},
{"f_3515:posixunix_2escm",(void*)f_3515},
{"f_3849:posixunix_2escm",(void*)f_3849},
{"f_3848:posixunix_2escm",(void*)f_3848},
{"f_4701:posixunix_2escm",(void*)f_4701},
{"f_5139:posixunix_2escm",(void*)f_5139},
{"f_4398:posixunix_2escm",(void*)f_4398},
{"f_3832:posixunix_2escm",(void*)f_3832},
{"f_4852:posixunix_2escm",(void*)f_4852},
{"f_3839:posixunix_2escm",(void*)f_3839},
{"f_4710:posixunix_2escm",(void*)f_4710},
{"f_3823:posixunix_2escm",(void*)f_3823},
{"f_4860:posixunix_2escm",(void*)f_4860},
{"f_7687:posixunix_2escm",(void*)f_7687},
{"f_7683:posixunix_2escm",(void*)f_7683},
{"f_3895:posixunix_2escm",(void*)f_3895},
{"f_3890:posixunix_2escm",(void*)f_3890},
{"f_4830:posixunix_2escm",(void*)f_4830},
{"f_3898:posixunix_2escm",(void*)f_3898},
{"f_7697:posixunix_2escm",(void*)f_7697},
{"f_7691:posixunix_2escm",(void*)f_7691},
{"f_4842:posixunix_2escm",(void*)f_4842},
{"f_4846:posixunix_2escm",(void*)f_4846},
{"f_4849:posixunix_2escm",(void*)f_4849},
{"f_8200:posixunix_2escm",(void*)f_8200},
{"f_3091:posixunix_2escm",(void*)f_3091},
{"f_7646:posixunix_2escm",(void*)f_7646},
{"f_2826:posixunix_2escm",(void*)f_2826},
{"f_2828:posixunix_2escm",(void*)f_2828},
{"f_6904:posixunix_2escm",(void*)f_6904},
{"f_2822:posixunix_2escm",(void*)f_2822},
{"f_2820:posixunix_2escm",(void*)f_2820},
{"f_3857:posixunix_2escm",(void*)f_3857},
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
S|  for-each		3
o|eliminated procedure checks: 279 
o|specializations:
o|  1 (zero? fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  3 (##sys#length list)
o|  10 (cdr pair)
o|  1 (string-ref string fixnum)
o|  1 (string-length string)
o|  3 (##sys#check-list (or pair list) *)
o|  4 (make-string fixnum)
o|  4 (##sys#check-open-port * *)
o|  11 (eqv? * (not float))
o|  15 (car pair)
(o e)|safe calls: 867 
(o e)|assignments to immediate values: 26 
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error) 
o|Removed `not' forms: 9 
o|contracted procedure: "(posix-common.scm:185) strerror64" 
o|inlining procedure: k2743 
o|inlining procedure: k2743 
o|inlining procedure: k2758 
o|inlining procedure: k2758 
o|inlining procedure: k2777 
o|inlining procedure: k2777 
o|inlining procedure: k2854 
o|inlining procedure: k2866 
o|inlining procedure: k2866 
o|inlining procedure: k2878 
o|inlining procedure: k2878 
o|inlining procedure: k2890 
o|inlining procedure: k2890 
o|inlining procedure: k2854 
o|inlining procedure: k3011 
o|inlining procedure: k3011 
o|inlining procedure: k3023 
o|inlining procedure: k3023 
o|inlining procedure: k3033 
o|inlining procedure: k3033 
o|inlining procedure: k3060 
o|contracted procedure: k3076 
o|inlining procedure: k3073 
o|inlining procedure: k3073 
o|substituted constant variable: a3086 
o|inlining procedure: k3060 
o|inlining procedure: k3093 
o|inlining procedure: k3093 
o|substituted constant variable: a3137 
o|inlining procedure: k3138 
o|inlining procedure: k3138 
o|contracted procedure: k3154 
o|inlining procedure: k3157 
o|inlining procedure: k3157 
o|inlining procedure: k3190 
o|inlining procedure: k3190 
o|inlining procedure: k3214 
o|inlining procedure: k3214 
o|substituted constant variable: a3235 
o|inlining procedure: k3254 
o|inlining procedure: k3254 
o|inlining procedure: k3275 
o|propagated global variable: r32768947 delete-file 
o|inlining procedure: k3275 
o|inlining procedure: k3267 
o|inlining procedure: k3299 
o|inlining procedure: k3299 
o|inlining procedure: k3267 
o|inlining procedure: k3337 
o|inlining procedure: k3337 
o|inlining procedure: k3359 
o|contracted procedure: "(posix-common.scm:463) g331332" 
o|inlining procedure: k3370 
o|inlining procedure: k3370 
o|inlining procedure: k3359 
o|inlining procedure: k3407 
o|inlining procedure: k3407 
o|contracted procedure: "(posix-common.scm:464) g349350" 
o|inlining procedure: k3415 
o|inlining procedure: k3415 
o|inlining procedure: k3476 
o|inlining procedure: k3476 
o|inlining procedure: k3491 
o|inlining procedure: k3491 
o|inlining procedure: k3532 
o|inlining procedure: k3532 
o|substituted constant variable: a3554 
o|substituted constant variable: a3556 
o|inlining procedure: k3593 
o|inlining procedure: k3593 
o|inlining procedure: k3627 
o|inlining procedure: k3627 
o|inlining procedure: k3680 
o|inlining procedure: k3680 
o|inlining procedure: k3688 
o|inlining procedure: k3688 
o|contracted procedure: "(posix-common.scm:558) find-files" 
o|inlining procedure: k3713 
o|inlining procedure: k3713 
o|inlining procedure: k3734 
o|inlining procedure: k3734 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|inlining procedure: k3762 
o|inlining procedure: k3794 
o|inlining procedure: k3794 
o|inlining procedure: k3762 
o|inlining procedure: k3812 
o|inlining procedure: k3812 
o|inlining procedure: k3827 
o|inlining procedure: k3827 
o|contracted procedure: k3854 
o|inlining procedure: k3859 
o|inlining procedure: k3859 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|inlining procedure: k4006 
o|inlining procedure: k4006 
o|contracted procedure: "(posix-common.scm:595) ctime542" 
o|inlining procedure: k4042 
o|inlining procedure: k4042 
o|inlining procedure: k4086 
o|contracted procedure: "(posix-common.scm:618) strftime568" 
o|inlining procedure: k4072 
o|inlining procedure: k4072 
o|inlining procedure: k4086 
o|contracted procedure: "(posix-common.scm:620) asctime567" 
o|inlining procedure: k4059 
o|inlining procedure: k4059 
o|inlining procedure: k4188 
o|inlining procedure: k4197 
o|inlining procedure: k4197 
o|inlining procedure: k4188 
o|contracted procedure: "(posix-common.scm:644) get619" 
o|inlining procedure: k4298 
o|inlining procedure: k4298 
o|inlining procedure: k4384 
o|inlining procedure: k4384 
o|contracted procedure: "(posix-common.scm:712) c-string->allocated-pointer663" 
o|merged explicitly consed rest parameter: args675697 
o|consed rest parameter at call site: tmp22611 1 
o|inlining procedure: k4467 
o|inlining procedure: k4467 
o|inlining procedure: k4527 
o|inlining procedure: k4527 
o|inlining procedure: k4650 
o|inlining procedure: k4650 
o|contracted procedure: "(posixunix.scm:466) fcntl833" 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|inlining procedure: k4712 
o|inlining procedure: k4712 
o|inlining procedure: k4746 
o|inlining procedure: k4746 
o|inlining procedure: k4787 
o|inlining procedure: k4787 
o|inlining procedure: k4890 
o|inlining procedure: k4890 
o|inlining procedure: k4913 
o|inlining procedure: k4913 
o|inlining procedure: k4936 
o|inlining procedure: k4945 
o|inlining procedure: k4945 
o|inlining procedure: k4936 
o|inlining procedure: k4951 
o|inlining procedure: k4951 
o|inlining procedure: k4966 
o|inlining procedure: k4966 
o|contracted procedure: "(posixunix.scm:572) g10101011" 
o|inlining procedure: k4985 
o|inlining procedure: k4985 
o|inlining procedure: k5025 
o|inlining procedure: k5025 
o|contracted procedure: "(posixunix.scm:564) g991992" 
o|inlining procedure: k5044 
o|inlining procedure: k5044 
o|contracted procedure: "(posixunix.scm:558) g965966" 
o|inlining procedure: k5099 
o|inlining procedure: k5099 
o|contracted procedure: "(posixunix.scm:552) g950951" 
o|inlining procedure: k5116 
o|inlining procedure: k5116 
o|inlining procedure: k5141 
o|inlining procedure: k5141 
o|contracted procedure: "(posixunix.scm:546) g932933" 
o|inlining procedure: k5158 
o|inlining procedure: k5158 
o|contracted procedure: k5188 
o|inlining procedure: k5191 
o|inlining procedure: k5191 
o|contracted procedure: k5203 
o|inlining procedure: k5206 
o|inlining procedure: k5206 
o|inlining procedure: k5231 
o|inlining procedure: k5231 
o|inlining procedure: k5247 
o|inlining procedure: k5247 
o|inlining procedure: k5260 
o|inlining procedure: k5260 
o|inlining procedure: k5278 
o|inlining procedure: k5278 
o|inlining procedure: k5303 
o|inlining procedure: k5303 
o|inlining procedure: "(posixunix.scm:623) badmode1038" 
o|substituted constant variable: a5327 
o|substituted constant variable: a5329 
o|inlining procedure: k5343 
o|inlining procedure: k5343 
o|inlining procedure: "(posixunix.scm:634) badmode1038" 
o|substituted constant variable: a5367 
o|substituted constant variable: a5369 
o|substituted constant variable: a5374 
o|substituted constant variable: a5375 
o|inlining procedure: k5376 
o|inlining procedure: k5376 
o|substituted constant variable: a5389 
o|substituted constant variable: a5390 
o|inlining procedure: k5391 
o|inlining procedure: k5391 
o|inlining procedure: k5519 
o|inlining procedure: k5519 
o|inlining procedure: k5577 
o|inlining procedure: k5577 
o|inlining procedure: k5590 
o|contracted procedure: "(posixunix.scm:765) g11651172" 
o|inlining procedure: k5590 
o|inlining procedure: k5626 
o|inlining procedure: k5626 
o|inlining procedure: k5642 
o|inlining procedure: k5642 
o|inlining procedure: k5715 
o|inlining procedure: k5715 
o|inlining procedure: k5808 
o|inlining procedure: k5835 
o|inlining procedure: k5835 
o|contracted procedure: "(posixunix.scm:913) group-member" 
o|inlining procedure: k5808 
o|inlining procedure: k5897 
o|inlining procedure: k5897 
o|contracted procedure: "(posixunix.scm:936) _get-groups" 
o|inlining procedure: "(posixunix.scm:934) _ensure-groups" 
o|inlining procedure: k5955 
o|inlining procedure: k5955 
o|inlining procedure: "(posixunix.scm:945) _ensure-groups" 
o|inlining procedure: k6027 
o|inlining procedure: k6027 
o|contracted procedure: "(posixunix.scm:962) init1308" 
o|inlining procedure: k6091 
o|inlining procedure: k6091 
o|inlining procedure: k6117 
o|inlining procedure: k6117 
o|inlining procedure: k6140 
o|inlining procedure: k6140 
o|inlining procedure: k6172 
o|inlining procedure: k6172 
o|inlining procedure: k6197 
o|inlining procedure: k6197 
o|inlining procedure: k6225 
o|inlining procedure: k6225 
o|inlining procedure: k6246 
o|inlining procedure: k6271 
o|inlining procedure: k6271 
o|inlining procedure: k6292 
o|inlining procedure: k6292 
o|inlining procedure: k6322 
o|inlining procedure: k6322 
o|inlining procedure: k6246 
o|inlining procedure: k6367 
o|inlining procedure: k6367 
o|contracted procedure: "(posixunix.scm:1116) link1440" 
o|inlining procedure: k6342 
o|inlining procedure: k6342 
o|inlining procedure: k6421 
o|inlining procedure: k6421 
o|inlining procedure: k6447 
o|inlining procedure: k6447 
o|inlining procedure: k6461 
o|inlining procedure: k6485 
o|inlining procedure: k6485 
o|inlining procedure: k6461 
o|inlining procedure: k6506 
o|inlining procedure: k6506 
o|inlining procedure: k6526 
o|inlining procedure: k6526 
o|inlining procedure: k6563 
o|inlining procedure: k6563 
o|inlining procedure: k6585 
o|inlining procedure: k6585 
o|inlining procedure: k6594 
o|inlining procedure: k6594 
o|inlining procedure: k6616 
o|inlining procedure: k6616 
o|inlining procedure: k6641 
o|inlining procedure: k6641 
o|inlining procedure: k6688 
o|inlining procedure: k6688 
o|inlining procedure: k6710 
o|inlining procedure: k6710 
o|inlining procedure: k6738 
o|inlining procedure: k6738 
o|inlining procedure: k6781 
o|inlining procedure: k6781 
o|inlining procedure: k6830 
o|inlining procedure: k6830 
o|inlining procedure: k6935 
o|inlining procedure: k6956 
o|inlining procedure: k6956 
o|inlining procedure: k6935 
o|inlining procedure: k7012 
o|inlining procedure: k7012 
o|inlining procedure: k7042 
o|inlining procedure: k7042 
o|inlining procedure: k7057 
o|inlining procedure: k7074 
o|inlining procedure: k7074 
o|inlining procedure: k7057 
o|inlining procedure: k7170 
o|inlining procedure: k7170 
o|inlining procedure: k7180 
o|inlining procedure: k7180 
o|inlining procedure: k7293 
o|inlining procedure: k7293 
o|inlining procedure: k7324 
o|inlining procedure: k7324 
o|inlining procedure: k7349 
o|contracted procedure: "(posixunix.scm:1355) g17021703" 
o|contracted procedure: k7357 
o|inlining procedure: k7354 
o|inlining procedure: k7354 
o|inlining procedure: k7349 
o|inlining procedure: k7384 
o|inlining procedure: k7384 
o|inlining procedure: k7425 
o|inlining procedure: k7425 
o|inlining procedure: k7460 
o|inlining procedure: k7460 
o|inlining procedure: k7472 
o|inlining procedure: k7472 
o|substituted constant variable: a7485 
o|substituted constant variable: a7487 
o|substituted constant variable: a7489 
o|contracted procedure: "(posixunix.scm:1426) mmap1743" 
o|contracted procedure: k7569 
o|inlining procedure: k7597 
o|inlining procedure: k7597 
o|contracted procedure: "(posixunix.scm:1436) munmap1774" 
o|contracted procedure: "(posixunix.scm:1454) strptime1793" 
o|inlining procedure: k7640 
o|inlining procedure: k7640 
o|inlining procedure: k7692 
o|inlining procedure: k7692 
o|contracted procedure: "(posixunix.scm:1482) ex01832" 
o|inlining procedure: k7750 
o|inlining procedure: k7750 
o|inlining procedure: k7760 
o|inlining procedure: k7760 
o|inlining procedure: k7773 
o|inlining procedure: k7773 
o|substituted constant variable: a7789 
o|substituted constant variable: a7791 
o|substituted constant variable: a7793 
o|substituted constant variable: a7802 
o|contracted procedure: k7809 
o|inlining procedure: k7806 
o|inlining procedure: k7806 
o|inlining procedure: k7821 
o|inlining procedure: k7821 
o|contracted procedure: "(posixunix.scm:1522) ttyname1868" 
o|inlining procedure: k7877 
o|inlining procedure: k7877 
o|contracted procedure: "(posixunix.scm:1533) ttysize1877" 
o|inlining procedure: k7914 
o|inlining procedure: k7914 
o|contracted procedure: "(posixunix.scm:1546) getit1899" 
o|inlining procedure: k7955 
o|inlining procedure: k7955 
o|contracted procedure: "(posixunix.scm:1559) fork1906" 
o|contracted procedure: "(posixunix.scm:1555) g19241925" 
o|inlining procedure: k7940 
o|inlining procedure: k7940 
o|inlining procedure: k8048 
o|inlining procedure: k8048 
o|inlining procedure: k8088 
o|inlining procedure: k8088 
o|inlining procedure: k8107 
o|inlining procedure: k8107 
o|inlining procedure: k8141 
o|inlining procedure: k8141 
o|inlining procedure: k8160 
o|inlining procedure: k8160 
o|contracted procedure: k8181 
o|inlining procedure: k8178 
o|inlining procedure: k8178 
o|inlining procedure: k8231 
o|inlining procedure: k8249 
o|inlining procedure: k8249 
o|inlining procedure: k8231 
o|removed unused formal parameters: (loc2023) 
o|inlining procedure: k8263 
o|inlining procedure: k8263 
o|removed unused formal parameters: (loc2028 fd2031) 
o|inlining procedure: k8283 
o|inlining procedure: k8283 
o|inlining procedure: k8295 
o|contracted procedure: "(posixunix.scm:1678) replace-fd2003" 
o|inlining procedure: k8212 
o|inlining procedure: k8212 
o|inlining procedure: k8295 
o|inlining procedure: k8310 
o|inlining procedure: k8310 
o|removed unused parameter to known procedure: loc2023 "(posixunix.scm:1688) needed-pipe2009" 
o|removed unused parameter to known procedure: loc2023 "(posixunix.scm:1687) needed-pipe2009" 
o|removed unused parameter to known procedure: loc2023 "(posixunix.scm:1686) needed-pipe2009" 
o|removed unused formal parameters: (pid2063) 
o|inlining procedure: k8372 
o|inlining procedure: k8372 
o|removed unused parameter to known procedure: loc2028 "(posixunix.scm:1699) connect-parent2010" 
o|removed unused parameter to known procedure: fd2031 "(posixunix.scm:1699) connect-parent2010" 
o|removed unused formal parameters: (pid2071) 
o|inlining procedure: k8383 
o|inlining procedure: k8383 
o|removed unused parameter to known procedure: loc2028 "(posixunix.scm:1703) connect-parent2010" 
o|removed unused parameter to known procedure: fd2031 "(posixunix.scm:1703) connect-parent2010" 
o|removed unused parameter to known procedure: pid2063 "(posixunix.scm:1718) input-port2044" 
o|removed unused parameter to known procedure: pid2071 "(posixunix.scm:1715) output-port2045" 
o|removed unused parameter to known procedure: pid2063 "(posixunix.scm:1713) input-port2044" 
o|inlining procedure: k8463 
o|inlining procedure: k8463 
o|inlining procedure: k8624 
o|inlining procedure: k8624 
o|contracted procedure: "(posixunix.scm:1760) chroot2169" 
o|inlining procedure: k8609 
o|inlining procedure: k8609 
o|inlining procedure: k8647 
o|inlining procedure: k8647 
o|inlining procedure: k8668 
o|inlining procedure: k8668 
o|inlining procedure: k8687 
o|inlining procedure: k8687 
o|inlining procedure: k8706 
o|inlining procedure: k8706 
o|inlining procedure: k8725 
o|inlining procedure: k8725 
o|inlining procedure: k8744 
o|inlining procedure: k8744 
o|inlining procedure: k8766 
o|inlining procedure: k8766 
o|inlining procedure: k8781 
o|inlining procedure: k8781 
o|inlining procedure: k8813 
o|inlining procedure: k8813 
o|inlining procedure: k8837 
o|inlining procedure: k8837 
o|inlining procedure: k8849 
o|inlining procedure: k8849 
o|inlining procedure: k8859 
o|inlining procedure: k8859 
o|inlining procedure: k8896 
o|inlining procedure: k8896 
o|contracted procedure: "(posix-common.scm:257) g115116" 
o|inlining procedure: k8883 
o|inlining procedure: k8883 
o|replaced variables: 929 
o|removed binding forms: 570 
o|substituted constant variable: r27448906 
o|substituted constant variable: r28678912 
o|substituted constant variable: r28798914 
o|substituted constant variable: r28918916 
o|substituted constant variable: r28558918 
o|substituted constant variable: r30248922 
o|inlining procedure: k3060 
o|substituted constant variable: r30748928 
o|inlining procedure: k3060 
o|inlining procedure: k3060 
o|propagated global variable: g2993008948 delete-file 
o|inlining procedure: k3275 
o|inlining procedure: k3275 
o|propagated global variable: r32769434 delete-file 
o|propagated global variable: r32769434 delete-file 
o|converted assignments to bindings: (rmdir282) 
o|substituted constant variable: loc333 
o|substituted constant variable: loc333 
o|substituted constant variable: loc351 
o|substituted constant variable: loc351 
o|substituted constant variable: r34928975 
o|substituted constant variable: r35948979 
o|substituted constant variable: r36818985 
o|substituted constant variable: r36818985 
o|substituted constant variable: r36898989 
o|substituted constant variable: r36898989 
o|substituted constant variable: loc438 
o|substituted constant variable: r40739023 
o|substituted constant variable: r40739023 
o|substituted constant variable: r40609030 
o|substituted constant variable: r40609030 
o|substituted constant variable: r41899036 
o|substituted constant variable: r49149077 
o|substituted constant variable: r49149077 
o|substituted constant variable: r49149079 
o|substituted constant variable: r49149079 
o|inlining procedure: k4936 
o|inlining procedure: k4936 
o|substituted constant variable: r49469084 
o|inlining procedure: k4936 
o|substituted constant variable: r49379085 
o|substituted constant variable: r49379085 
o|substituted constant variable: r49869093 
o|substituted constant variable: r49869093 
o|substituted constant variable: r50459099 
o|substituted constant variable: r50459099 
o|substituted constant variable: r51179105 
o|substituted constant variable: r51179105 
o|substituted constant variable: r51599111 
o|substituted constant variable: r51599111 
o|substituted constant variable: r52619126 
o|removed side-effect free assignment to unused variable: badmode1038 
o|inlining procedure: k5303 
o|inlining procedure: k5343 
o|substituted constant variable: r57169174 
o|substituted constant variable: r58369177 
o|substituted constant variable: r58099178 
o|removed side-effect free assignment to unused variable: _ensure-groups 
o|substituted constant variable: r58989179 
o|inlining procedure: k6292 
o|substituted constant variable: r63239222 
o|substituted constant variable: r63239222 
o|substituted constant variable: r63439229 
o|substituted constant variable: r63439229 
o|substituted constant variable: r64489233 
o|inlining procedure: k6518 
o|inlining procedure: k6518 
o|inlining procedure: k6600 
o|substituted constant variable: r67119265 
o|substituted constant variable: r68319277 
o|inlining procedure: k7018 
o|inlining procedure: k7180 
o|substituted constant variable: r73559302 
o|substituted constant variable: r74619309 
o|inlining procedure: k7543 
o|substituted constant variable: r76419317 
o|substituted constant variable: r76419317 
o|substituted constant variable: r77619325 
o|substituted constant variable: r77619325 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: r78079329 
o|substituted constant variable: c-pointer19261930 
o|substituted constant variable: c-pointer19261930 
o|substituted constant variable: r79419343 
o|substituted constant variable: r79419343 
o|inlining procedure: k8107 
o|inlining procedure: k8107 
o|substituted constant variable: r81619356 
o|substituted constant variable: r82649364 
o|substituted constant variable: r82849366 
o|substituted constant variable: r83119372 
o|removed unused formal parameters: (stdfd2067) 
o|substituted constant variable: r83739374 
o|removed unused formal parameters: (stdfd2075) 
o|substituted constant variable: r83849376 
o|removed unused parameter to known procedure: stdfd2067 "(posixunix.scm:1718) input-port2044" 
o|removed unused parameter to known procedure: stdfd2075 "(posixunix.scm:1715) output-port2045" 
o|removed unused parameter to known procedure: stdfd2067 "(posixunix.scm:1713) input-port2044" 
o|substituted constant variable: r86109383 
o|substituted constant variable: r86109383 
o|converted assignments to bindings: (check1373) 
o|substituted constant variable: r88509414 
o|substituted constant variable: r88849421 
o|substituted constant variable: r88849421 
o|simplifications: ((let . 2)) 
o|replaced variables: 62 
o|removed binding forms: 966 
o|removed conditional forms: 1 
o|inlining procedure: k3535 
o|inlining procedure: k4249 
o|inlining procedure: k4249 
o|inlining procedure: k4476 
o|inlining procedure: k4758 
o|inlining procedure: k4758 
o|inlining procedure: k4803 
o|inlining procedure: k4803 
o|substituted constant variable: r49379482 
o|inlining procedure: k7559 
o|inlining procedure: k7559 
o|removed unused formal parameters: (loc2036) 
o|removed unused parameter to known procedure: loc2036 "(posixunix.scm:1695) connect-child2011" 
o|removed unused parameter to known procedure: loc2036 "(posixunix.scm:1694) connect-child2011" 
o|removed unused parameter to known procedure: loc2036 "(posixunix.scm:1693) connect-child2011" 
o|inlining procedure: k8575 
o|replaced variables: 28 
o|removed binding forms: 175 
o|substituted constant variable: r30619423 
o|substituted constant variable: r30619425 
o|substituted constant variable: r30619427 
o|substituted constant variable: r35369581 
o|substituted constant variable: r35369581 
o|substituted constant variable: r42509596 
o|contracted procedure: k4399 
o|substituted constant variable: r47599609 
o|substituted constant variable: r48049611 
o|substituted constant variable: r75609643 
o|contracted procedure: k7949 
o|removed unused formal parameters: (loc2049) 
o|removed unused parameter to known procedure: loc2049 "(posixunix.scm:1707) spawn2043" 
o|inlining procedure: k8810 
o|inlining procedure: k8810 
o|simplifications: ((let . 3)) 
o|replaced variables: 3 
o|removed binding forms: 31 
o|removed conditional forms: 4 
o|inlining procedure: k7721 
o|inlining procedure: k7721 
o|substituted constant variable: r88119708 
o|replaced variables: 1 
o|removed binding forms: 12 
o|substituted constant variable: r77229768 
o|contracted procedure: k7946 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|simplifications: ((if . 89) (##core#call . 668)) 
o|  call simplifications:
o|    <
o|    bitwise-ior	2
o|    vector-ref	2
o|    make-vector
o|    ##sys#structure?
o|    ##sys#foreign-pointer-argument	4
o|    fxior	2
o|    ##sys#check-structure	3
o|    ##sys#make-structure	3
o|    ##sys#setislot	3
o|    fxmin	2
o|    eof-object?
o|    ##sys#foreign-string-argument	5
o|    length
o|    fx>=	8
o|    fx*
o|    *
o|    inexact->exact
o|    memq	2
o|    list	7
o|    ##sys#check-list	5
o|    add1
o|    ##sys#apply	2
o|    values	20
o|    ##sys#fudge	2
o|    vector-set!	3
o|    char=?
o|    ##sys#foreign-block-argument	8
o|    ##sys#foreign-integer-argument	5
o|    fx-	12
o|    ##sys#check-number	8
o|    ##sys#check-vector
o|    procedure?
o|    member
o|    fx+	28
o|    string-ref
o|    fx>
o|    cons	13
o|    ##sys#size	14
o|    ##sys#call-with-values	14
o|    not	8
o|    ##sys#check-string	32
o|    fx=	32
o|    zero?
o|    ##sys#null-pointer?	4
o|    pair?	19
o|    ##sys#check-exact	37
o|    ##sys#slot	32
o|    eq?	40
o|    cdr	28
o|    ##sys#eqv?	17
o|    null?	72
o|    car	51
o|    vector	2
o|    fixnum?	15
o|    string?	2
o|    fx<	47
o|    ##sys#foreign-fixnum-argument	28
o|    apply	9
o|contracted procedure: k2717 
o|contracted procedure: k2746 
o|contracted procedure: k2755 
o|contracted procedure: k2771 
o|contracted procedure: k2799 
o|contracted procedure: k2790 
o|contracted procedure: k2920 
o|contracted procedure: k2842 
o|contracted procedure: k2914 
o|contracted procedure: k2845 
o|contracted procedure: k2908 
o|contracted procedure: k2848 
o|contracted procedure: k2902 
o|contracted procedure: k2851 
o|contracted procedure: k2863 
o|contracted procedure: k2869 
o|contracted procedure: k2875 
o|contracted procedure: k2881 
o|contracted procedure: k2887 
o|contracted procedure: k2893 
o|contracted procedure: k2899 
o|contracted procedure: k3005 
o|contracted procedure: k3008 
o|contracted procedure: k3030 
o|contracted procedure: k3026 
o|contracted procedure: k3036 
o|contracted procedure: k3042 
o|contracted procedure: k3063 
o|contracted procedure: k3070 
o|contracted procedure: k3096 
o|contracted procedure: k3108 
o|contracted procedure: k3122 
o|contracted procedure: k3178 
o|contracted procedure: k3141 
o|contracted procedure: k3170 
o|contracted procedure: k3160 
o|contracted procedure: k3184 
o|contracted procedure: k3193 
o|contracted procedure: k3199 
o|contracted procedure: k3202 
o|contracted procedure: k3205 
o|contracted procedure: k3236 
o|contracted procedure: k3211 
o|contracted procedure: k3322 
o|contracted procedure: k3245 
o|contracted procedure: k3257 
o|contracted procedure: k3264 
o|contracted procedure: k3302 
o|contracted procedure: k3312 
o|contracted procedure: k3316 
o|contracted procedure: k3439 
o|contracted procedure: k3331 
o|contracted procedure: k3334 
o|contracted procedure: k3436 
o|contracted procedure: k3340 
o|contracted procedure: k3373 
o|contracted procedure: k3418 
o|contracted procedure: k3569 
o|contracted procedure: k3451 
o|contracted procedure: k3563 
o|contracted procedure: k3454 
o|contracted procedure: k3557 
o|contracted procedure: k3457 
o|contracted procedure: k3460 
o|contracted procedure: k3479 
o|contracted procedure: k3494 
o|contracted procedure: k3498 
o|contracted procedure: k3504 
o|contracted procedure: k3550 
o|contracted procedure: k3507 
o|contracted procedure: k3526 
o|contracted procedure: k3529 
o|contracted procedure: k3544 
o|contracted procedure: k3535 
o|contracted procedure: k3575 
o|contracted procedure: k3596 
o|contracted procedure: k3599 
o|contracted procedure: k3630 
o|contracted procedure: k3637 
o|contracted procedure: k3660 
o|contracted procedure: k3676 
o|contracted procedure: k3694 
o|contracted procedure: k3716 
o|contracted procedure: k3719 
o|contracted procedure: k3725 
o|contracted procedure: k3737 
o|contracted procedure: k3746 
o|contracted procedure: k3772 
o|contracted procedure: k3843 
o|contracted procedure: k3862 
o|contracted procedure: k3926 
o|contracted procedure: k3939 
o|contracted procedure: k3932 
o|contracted procedure: k3948 
o|contracted procedure: k3954 
o|contracted procedure: k3969 
o|contracted procedure: k3975 
o|contracted procedure: k4000 
o|contracted procedure: k4017 
o|contracted procedure: k4013 
o|contracted procedure: k3992 
o|contracted procedure: k4023 
o|contracted procedure: k4133 
o|contracted procedure: k4080 
o|contracted procedure: k4089 
o|contracted procedure: k4072 
o|contracted procedure: k4123 
o|contracted procedure: k4119 
o|contracted procedure: k4059 
o|contracted procedure: k4142 
o|contracted procedure: k4145 
o|contracted procedure: k4159 
o|contracted procedure: k4200 
o|contracted procedure: k4207 
o|contracted procedure: k4215 
o|contracted procedure: k4227 
o|contracted procedure: k4231 
o|contracted procedure: k4238 
o|contracted procedure: k4174 
o|contracted procedure: k4245 
o|contracted procedure: k4328 
o|contracted procedure: k4268 
o|contracted procedure: k4322 
o|contracted procedure: k4271 
o|contracted procedure: k4316 
o|contracted procedure: k4274 
o|contracted procedure: k4310 
o|contracted procedure: k4277 
o|contracted procedure: k4280 
o|contracted procedure: k4283 
o|contracted procedure: k4301 
o|contracted procedure: k4339 
o|contracted procedure: k4387 
o|contracted procedure: k4390 
o|contracted procedure: k4427 
o|contracted procedure: k4393 
o|contracted procedure: k4414 
o|contracted procedure: k4452 
o|contracted procedure: k4470 
o|contracted procedure: k4483 
o|contracted procedure: k44839603 
o|contracted procedure: k4497 
o|contracted procedure: k4575 
o|contracted procedure: k4582 
o|contracted procedure: k4659 
o|contracted procedure: k4638 
o|contracted procedure: k4641 
o|contracted procedure: k4644 
o|contracted procedure: k4653 
o|contracted procedure: k4625 
o|contracted procedure: k4629 
o|contracted procedure: k4633 
o|contracted procedure: k8788 
o|contracted procedure: k4666 
o|contracted procedure: k4674 
o|contracted procedure: k4677 
o|contracted procedure: k4680 
o|contracted procedure: k4690 
o|contracted procedure: k4696 
o|contracted procedure: k4703 
o|contracted procedure: k4715 
o|contracted procedure: k4721 
o|contracted procedure: k4734 
o|contracted procedure: k4737 
o|contracted procedure: k4752 
o|contracted procedure: k4764 
o|contracted procedure: k4775 
o|contracted procedure: k4784 
o|contracted procedure: k4790 
o|contracted procedure: k4796 
o|contracted procedure: k4812 
o|contracted procedure: k4818 
o|contracted procedure: k4832 
o|contracted procedure: k4835 
o|contracted procedure: k4855 
o|contracted procedure: k4861 
o|contracted procedure: k4893 
o|contracted procedure: k4902 
o|contracted procedure: k4919 
o|contracted procedure: k4909 
o|contracted procedure: k4916 
o|contracted procedure: k4942 
o|contracted procedure: k4948 
o|contracted procedure: k4954 
o|contracted procedure: k4960 
o|contracted procedure: k4969 
o|contracted procedure: k4998 
o|contracted procedure: k5008 
o|contracted procedure: k5002 
o|contracted procedure: k5015 
o|contracted procedure: k5019 
o|contracted procedure: k4981 
o|contracted procedure: k4985 
o|contracted procedure: k5028 
o|contracted procedure: k5057 
o|contracted procedure: k5067 
o|contracted procedure: k5061 
o|contracted procedure: k5074 
o|contracted procedure: k5078 
o|contracted procedure: k5040 
o|contracted procedure: k5044 
o|contracted procedure: k4873 
o|contracted procedure: k4877 
o|contracted procedure: k4881 
o|contracted procedure: k5089 
o|contracted procedure: k5102 
o|contracted procedure: k5129 
o|contracted procedure: k5135 
o|contracted procedure: k5108 
o|contracted procedure: k5112 
o|contracted procedure: k5116 
o|contracted procedure: k5144 
o|contracted procedure: k5171 
o|contracted procedure: k5177 
o|contracted procedure: k5150 
o|contracted procedure: k5154 
o|contracted procedure: k5158 
o|contracted procedure: k5184 
o|contracted procedure: k5194 
o|contracted procedure: k5200 
o|contracted procedure: k5209 
o|contracted procedure: k5215 
o|contracted procedure: k5218 
o|contracted procedure: k5225 
o|contracted procedure: k5234 
o|contracted procedure: k5244 
o|contracted procedure: k5250 
o|contracted procedure: k5263 
o|contracted procedure: k5281 
o|contracted procedure: k5293 
o|contracted procedure: k5306 
o|contracted procedure: k5316 
o|contracted procedure: k5333 
o|contracted procedure: k5346 
o|contracted procedure: k5356 
o|contracted procedure: k5379 
o|contracted procedure: k5394 
o|contracted procedure: k5525 
o|contracted procedure: k5560 
o|contracted procedure: k5566 
o|contracted procedure: k5580 
o|contracted procedure: k5593 
o|contracted procedure: k5603 
o|contracted procedure: k5607 
o|contracted procedure: k5571 
o|contracted procedure: k5617 
o|contracted procedure: k5623 
o|contracted procedure: k5629 
o|contracted procedure: k5639 
o|contracted procedure: k5645 
o|contracted procedure: k5681 
o|contracted procedure: k5754 
o|contracted procedure: k5709 
o|contracted procedure: k5718 
o|contracted procedure: k5744 
o|contracted procedure: k5747 
o|contracted procedure: k5859 
o|contracted procedure: k5802 
o|contracted procedure: k5811 
o|contracted procedure: k5846 
o|contracted procedure: k5796 
o|contracted procedure: k5849 
o|contracted procedure: k5852 
o|contracted procedure: k5900 
o|contracted procedure: k5912 
o|contracted procedure: k5915 
o|contracted procedure: k5869 
o|contracted procedure: k58769186 
o|contracted procedure: k5934 
o|contracted procedure: k5958 
o|contracted procedure: k5964 
o|contracted procedure: k5974 
o|contracted procedure: k5977 
o|contracted procedure: k5984 
o|contracted procedure: k5988 
o|contracted procedure: k5998 
o|contracted procedure: k58769194 
o|contracted procedure: k6021 
o|contracted procedure: k6024 
o|contracted procedure: k6030 
o|contracted procedure: k6009 
o|contracted procedure: k6016 
o|contracted procedure: k6085 
o|contracted procedure: k6088 
o|contracted procedure: k6094 
o|contracted procedure: k6108 
o|contracted procedure: k6111 
o|contracted procedure: k6114 
o|contracted procedure: k6120 
o|contracted procedure: k6134 
o|contracted procedure: k6137 
o|contracted procedure: k6175 
o|contracted procedure: k6191 
o|contracted procedure: k6194 
o|contracted procedure: k6200 
o|contracted procedure: k6228 
o|contracted procedure: k6328 
o|contracted procedure: k6240 
o|contracted procedure: k6243 
o|contracted procedure: k6274 
o|contracted procedure: k6314 
o|contracted procedure: k6318 
o|contracted procedure: k6361 
o|contracted procedure: k6364 
o|contracted procedure: k6370 
o|contracted procedure: k6349 
o|contracted procedure: k6356 
o|contracted procedure: k6897 
o|contracted procedure: k6383 
o|contracted procedure: k6891 
o|contracted procedure: k6386 
o|contracted procedure: k6885 
o|contracted procedure: k6389 
o|contracted procedure: k6879 
o|contracted procedure: k6392 
o|contracted procedure: k6873 
o|contracted procedure: k6395 
o|contracted procedure: k6867 
o|contracted procedure: k6398 
o|contracted procedure: k6861 
o|contracted procedure: k6401 
o|contracted procedure: k6855 
o|contracted procedure: k6404 
o|contracted procedure: k6846 
o|contracted procedure: k6410 
o|contracted procedure: k6424 
o|contracted procedure: k6430 
o|contracted procedure: k6433 
o|contracted procedure: k6450 
o|contracted procedure: k6464 
o|contracted procedure: k6470 
o|contracted procedure: k6473 
o|contracted procedure: k6488 
o|contracted procedure: k6503 
o|contracted procedure: k6523 
o|contracted procedure: k6529 
o|contracted procedure: k6532 
o|contracted procedure: k6566 
o|contracted procedure: k6570 
o|contracted procedure: k6573 
o|contracted procedure: k6582 
o|contracted procedure: k6597 
o|contracted procedure: k6606 
o|contracted procedure: k6622 
o|contracted procedure: k6644 
o|contracted procedure: k6650 
o|contracted procedure: k6653 
o|contracted procedure: k6682 
o|contracted procedure: k6656 
o|contracted procedure: k6660 
o|contracted procedure: k6664 
o|contracted procedure: k6671 
o|contracted procedure: k6675 
o|contracted procedure: k6679 
o|contracted procedure: k6691 
o|contracted procedure: k6701 
o|contracted procedure: k6713 
o|contracted procedure: k6775 
o|contracted procedure: k6729 
o|contracted procedure: k6735 
o|contracted procedure: k6741 
o|contracted procedure: k6748 
o|contracted procedure: k6757 
o|contracted procedure: k6768 
o|contracted procedure: k6764 
o|contracted procedure: k6796 
o|contracted procedure: k6792 
o|contracted procedure: k6785 
o|inlining procedure: k6781 
o|contracted procedure: k6807 
o|contracted procedure: k6811 
o|contracted procedure: k6803 
o|inlining procedure: k6781 
o|contracted procedure: k6818 
o|contracted procedure: k6821 
o|contracted procedure: k6833 
o|contracted procedure: k6840 
o|contracted procedure: k7158 
o|contracted procedure: k6906 
o|contracted procedure: k7152 
o|contracted procedure: k6909 
o|contracted procedure: k7146 
o|contracted procedure: k6912 
o|contracted procedure: k7140 
o|contracted procedure: k6915 
o|contracted procedure: k7134 
o|contracted procedure: k6918 
o|contracted procedure: k7128 
o|contracted procedure: k6921 
o|contracted procedure: k6938 
o|contracted procedure: k6944 
o|contracted procedure: k6947 
o|contracted procedure: k6959 
o|contracted procedure: k6974 
o|contracted procedure: k6985 
o|contracted procedure: k7119 
o|contracted procedure: k6988 
o|contracted procedure: k7015 
o|contracted procedure: k7024 
o|contracted procedure: k7037 
o|contracted procedure: k7049 
o|contracted procedure: k7064 
o|contracted procedure: k7068 
o|contracted procedure: k7077 
o|contracted procedure: k7090 
o|contracted procedure: k7097 
o|contracted procedure: k7101 
o|contracted procedure: k7107 
o|contracted procedure: k7113 
o|contracted procedure: k7167 
o|contracted procedure: k7183 
o|contracted procedure: k7193 
o|contracted procedure: k7257 
o|contracted procedure: k7202 
o|contracted procedure: k7251 
o|contracted procedure: k7205 
o|contracted procedure: k7245 
o|contracted procedure: k7208 
o|contracted procedure: k7239 
o|contracted procedure: k7211 
o|contracted procedure: k7216 
o|contracted procedure: k7229 
o|contracted procedure: k7223 
o|contracted procedure: k7232 
o|contracted procedure: k7270 
o|contracted procedure: k7274 
o|contracted procedure: k7278 
o|contracted procedure: k7296 
o|contracted procedure: k7302 
o|contracted procedure: k7327 
o|contracted procedure: k7333 
o|contracted procedure: k7361 
o|contracted procedure: k7373 
o|contracted procedure: k7377 
o|contracted procedure: k7381 
o|contracted procedure: k7410 
o|contracted procedure: k7387 
o|contracted procedure: k7393 
o|contracted procedure: k7416 
o|contracted procedure: k7422 
o|contracted procedure: k7428 
o|contracted procedure: k7439 
o|contracted procedure: k7447 
o|contracted procedure: k7453 
o|contracted procedure: k7463 
o|contracted procedure: k7469 
o|contracted procedure: k7475 
o|contracted procedure: k7549 
o|contracted procedure: k7503 
o|contracted procedure: k7507 
o|contracted procedure: k7511 
o|contracted procedure: k7515 
o|contracted procedure: k7519 
o|contracted procedure: k7523 
o|contracted procedure: k7565 
o|contracted procedure: k7591 
o|contracted procedure: k7600 
o|contracted procedure: k7611 
o|contracted procedure: k7579 
o|contracted procedure: k7583 
o|contracted procedure: k7614 
o|contracted procedure: k7624 
o|contracted procedure: k7676 
o|contracted procedure: k7648 
o|contracted procedure: k7651 
o|contracted procedure: k7654 
o|contracted procedure: k7669 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|substituted constant variable: g9997 
o|contracted procedure: k7640 
o|contracted procedure: k7724 
o|contracted procedure: k77129767 
o|contracted procedure: k77129772 
o|contracted procedure: k7732 
o|contracted procedure: k7747 
o|contracted procedure: k7767 
o|contracted procedure: k7763 
o|contracted procedure: k7770 
o|contracted procedure: k7776 
o|contracted procedure: k7782 
o|contracted procedure: k7794 
o|contracted procedure: k7813 
o|contracted procedure: k7834 
o|contracted procedure: k7830 
o|contracted procedure: k7824 
o|contracted procedure: k7845 
o|contracted procedure: k7880 
o|contracted procedure: k7861 
o|contracted procedure: k7865 
o|contracted procedure: k7869 
o|contracted procedure: k8015 
o|contracted procedure: k7925 
o|contracted procedure: k8009 
o|contracted procedure: k7928 
o|contracted procedure: k8003 
o|contracted procedure: k7931 
o|contracted procedure: k7997 
o|contracted procedure: k7934 
o|contracted procedure: k7958 
o|contracted procedure: k7961 
o|contracted procedure: k7991 
o|contracted procedure: k8075 
o|contracted procedure: k8024 
o|contracted procedure: k8069 
o|contracted procedure: k8027 
o|contracted procedure: k8063 
o|contracted procedure: k8030 
o|contracted procedure: k8057 
o|contracted procedure: k8033 
o|contracted procedure: k8045 
o|contracted procedure: k8051 
o|contracted procedure: k8085 
o|contracted procedure: k8113 
o|contracted procedure: k8091 
o|contracted procedure: k8126 
o|contracted procedure: k8135 
o|contracted procedure: k8138 
o|contracted procedure: k8144 
o|contracted procedure: k8150 
o|contracted procedure: k8202 
o|contracted procedure: k8205 
o|contracted procedure: k8228 
o|contracted procedure: k8255 
o|contracted procedure: k8234 
o|contracted procedure: k8286 
o|contracted procedure: k8298 
o|contracted procedure: k8215 
o|contracted procedure: k8317 
o|contracted procedure: k8434 
o|contracted procedure: k8438 
o|contracted procedure: k8442 
o|contracted procedure: k8403 
o|contracted procedure: k8449 
o|contracted procedure: k8466 
o|contracted procedure: k8476 
o|contracted procedure: k8480 
o|contracted procedure: k8483 
o|contracted procedure: k8557 
o|contracted procedure: k8518 
o|contracted procedure: k8551 
o|contracted procedure: k8521 
o|contracted procedure: k8545 
o|contracted procedure: k8524 
o|contracted procedure: k8539 
o|contracted procedure: k8527 
o|contracted procedure: k8599 
o|contracted procedure: k8566 
o|contracted procedure: k8593 
o|contracted procedure: k8569 
o|contracted procedure: k8587 
o|contracted procedure: k8572 
o|contracted procedure: k8581 
o|contracted procedure: k8575 
o|contracted procedure: k8621 
o|contracted procedure: k8627 
o|contracted procedure: k8616 
o|contracted procedure: k8638 
o|contracted procedure: k8644 
o|contracted procedure: k8650 
o|contracted procedure: k8662 
o|contracted procedure: k8665 
o|contracted procedure: k8671 
o|contracted procedure: k8690 
o|contracted procedure: k8709 
o|contracted procedure: k8728 
o|contracted procedure: k8747 
o|contracted procedure: k8769 
o|contracted procedure: k8772 
o|contracted procedure: k8781 
o|contracted procedure: k8794 
o|contracted procedure: k8819 
o|contracted procedure: k8803 
o|contracted procedure: k8806 
o|contracted procedure: k8828 
o|contracted procedure: k8840 
o|contracted procedure: k8856 
o|contracted procedure: k8852 
o|contracted procedure: k8862 
o|contracted procedure: k8877 
o|contracted procedure: k8899 
o|contracted procedure: k8890 
o|simplifications: ((if . 1) (let . 123)) 
o|removed binding forms: 577 
o|inlining procedure: k3945 
o|inlining procedure: k3966 
o|inlining procedure: "(posixunix.scm:616) mode1037" 
o|inlining procedure: "(posixunix.scm:627) mode1037" 
o|inlining procedure: k6005 
o|replaced variables: 301 
o|removed binding forms: 2 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|inlining procedure: k5164 
o|inlining procedure: k5164 
o|removed side-effect free assignment to unused variable: mode1037 
o|inlining procedure: k5596 
o|inlining procedure: k5928 
o|inlining procedure: k5991 
o|substituted constant variable: r600610113 
o|substituted constant variable: r600610113 
o|replaced variables: 10 
o|removed binding forms: 154 
o|contracted procedure: k4647 
o|contracted procedure: k4887 
o|contracted procedure: k5925 
o|contracted procedure: k7540 
o|contracted procedure: k7607 
o|contracted procedure: k7890 
o|converted assignments to bindings: (check1039) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 21 
o|contracted procedure: k5296 
o|contracted procedure: k5336 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: doloop946947 0 
o|direct leaf routine/allocation: doloop928929 0 
o|direct leaf routine/allocation: for-each-loop11641176 0 
o|direct leaf routine/allocation: peek1483 0 
o|direct leaf routine/allocation: swapped-ends2046 3 
o|direct leaf routine/allocation: g21042111 0 
o|contracted procedure: k4864 
o|contracted procedure: k4867 
o|converted assignments to bindings: (doloop946947) 
o|converted assignments to bindings: (doloop928929) 
o|contracted procedure: k5574 
o|converted assignments to bindings: (for-each-loop11641176) 
o|contracted procedure: "(posixunix.scm:1177) k6560" 
o|contracted procedure: "(posixunix.scm:1690) k8337" 
o|contracted procedure: "(posixunix.scm:1695) k8360" 
o|contracted procedure: "(posixunix.scm:1694) k8364" 
o|contracted procedure: "(posixunix.scm:1731) k8469" 
o|simplifications: ((let . 3)) 
o|removed binding forms: 8 
o|direct leaf routine/allocation: for-each-loop21032121 0 
o|converted assignments to bindings: (for-each-loop21032121) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (loop1185 %process2092 chkstrlst2099 output-port2045 make-on-close2008 input-port2044 spawn2043 connect-parent2010 needed-pipe2009 connect-child2011 k8172 k8132 call-with-exec-args ##sys#terminal-check k7741 k7753 k7594 k7534 k7419 setup1653 err1654 k7219 k7173 loop1622 k6991 k6716 k6635 loop1529 ready?1482 fetch1484 loop1426 check1373 doloop12971298 loop1289 k5805 loop1270 k5712 check1039 k4844 k4847 k4850 k5082 k5050 lp983 k4991 lp1002 k4932 k4781 k4671 list->c-string-buffer k4545 doloop702703 tmp12610 tmp22611 doloop683684 free-c-string-buffer scan628 loop625 check-time-vector k3697 k3700 loop450 g422423 loop414 conc-loop395 k3513 loop374 k3362 loop328 g289296 for-each-loop288305 rmdir282 k3187 mode204 check205 k3002 ##sys#stat) 
o|calls to known targets: 293 
o|unused rest argument: _446 f_3865 
o|unused rest argument: _445 f_3857 
o|unused rest argument: _486 f_3917 
o|identified direct recursive calls: f_4195 1 
o|identified direct recursive calls: f_5139 2 
o|identified direct recursive calls: f_5097 2 
o|identified direct recursive calls: f_5588 1 
o|identified direct recursive calls: f_5895 1 
o|identified direct recursive calls: f_5953 1 
o|identified direct recursive calls: f_6639 1 
o|identified direct recursive calls: f_7072 1 
o|identified direct recursive calls: f_8461 1 
o|identified direct recursive calls: f_8764 2 
o|fast box initializations: 28 
o|fast global references: 73 
o|fast global assignments: 7 
o|dropping unused closure argument: f_8224 
o|dropping unused closure argument: f_8293 
o|dropping unused closure argument: f_3249 
o|dropping unused closure argument: f_8281 
o|dropping unused closure argument: f_8261 
o|dropping unused closure argument: f_4337 
o|dropping unused closure argument: f_5276 
o|dropping unused closure argument: f_3054 
o|dropping unused closure argument: f_2738 
o|dropping unused closure argument: f_7817 
o|dropping unused closure argument: f_4456 
o|dropping unused closure argument: f_5588 
o|dropping unused closure argument: f_6132 
o|dropping unused closure argument: f_8308 
o|dropping unused closure argument: f_8445 
o|dropping unused closure argument: f_7264 
o|dropping unused closure argument: f_3924 
o|dropping unused closure argument: f_7200 
o|dropping unused closure argument: f_3091 
*/
/* end of file */

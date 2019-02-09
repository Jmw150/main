/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixwin.c -feature platform-windows -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: scheduler pathname extras port lolevel library data-structures
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



#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#include <stdio.h>
#include <utime.h>
#include <windows.h>
#include <winsock2.h>

#define PIPE_BUF	512

#ifndef EWOULDBLOCK
# define EWOULDBLOCK 0
#endif

static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_shlcmd[256] = "";

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)	    C_fix(chmod(C_c_string(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_u_i_lstat(fn)     C_u_i_stat(fn)

#define C_u_i_execvp(f,a)   C_fix(execvp(C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

/* MS replacement for the fork-exec pair */
#define C_u_i_spawnvp(m,f,a)    C_fix(spawnvp(C_unfix(m), C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_spawnvpe(m,f,a,e) C_fix(spawnvpe(C_unfix(m), C_c_string(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))

#define C_flushall()	    C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map;
    for (map = errmap; map->win32; ++map)
    {
	if (map->win32 == w32err)
	{
	    errno = map->libc;
	    return;
	}
    }
    errno = ENOSYS; /* For lack of anything better */
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

static int fd_to_path(C_word fd, TCHAR path[])
{
  DWORD result;
  HANDLE fh = (HANDLE)_get_osfhandle(C_unfix(fd));

  if (fh == INVALID_HANDLE_VALUE) {
    set_last_errno();
    return -1;
  }

  result = GetFinalPathNameByHandle(fh, path, MAX_PATH, VOLUME_NAME_DOS);
  if (result == 0) {
    set_last_errno();
    return -1;
  } else if (result >= MAX_PATH) { /* Shouldn't happen */
    errno = ENOMEM; /* For lack of anything better */
    return -1;
  } else {
    return 0;
  }
}

static C_word C_fchmod(C_word fd, C_word m)
{
  TCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(chmod(path, C_unfix(m)));
}

static C_word C_fchdir(C_word fd)
{
  TCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(chdir(path));
}

static int C_fcall
process_wait(C_word h, C_word t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)


static C_TLS int C_isNT = 0;


static int C_fcall
C_windows_nt()
{
  static int has_info = 0;

  if(!has_info) {
    OSVERSIONINFO ovf;
    ZeroMemory(&ovf, sizeof(ovf));
    ovf.dwOSVersionInfoSize = sizeof(ovf);
    has_info = 1;

    if(GetVersionEx(&ovf)) {
      SYSTEM_INFO si;

      switch (ovf.dwPlatformId) {
      case VER_PLATFORM_WIN32_NT:
        return C_isNT = 1;
      }
    }
  }

  return C_isNT;
}


static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
      char *cmdnam = C_windows_nt() ? "\\cmd.exe" : "\\command.com";
      UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
      if (len)
	C_strlcpy(C_shlcmd + len, cmdnam, sizeof(C_shlcmd));
      else
	return set_last_errno();
    }

    return 1;
}

#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char *app, const char *cmdlin, const char **env,
	  int *phandle, int *pstdin_fd, int *pstdout_fd, int *pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((C_word)parent_end,0)) >= 0;
                /* Make new handle inheritable */
		if (success)
		  success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);
	    }
	}
    }

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		C_strlcpy(pb, *p, len+1);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) {
	if (child_io_handles[i] != NULL)
	    CloseHandle(child_io_handles[i]);
    }

    if (success)
    {
	*phandle = (C_word)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) {
	    if (io_fds[i] != -1)
		_close(io_fds[i]);
	}
    }

    return success;
}

static int set_file_mtime(char *filename, C_word atime, C_word mtime)
{
  struct stat sb;
  struct _utimbuf tb;

  /* Only stat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (C_stat(filename, &sb) == -1) return -1;
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
  return _utime(filename, &tb);
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
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[408];
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
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,51,52,57,51,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,24),40,97,51,52,57,57,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,53,54,56,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,11),40,97,51,53,54,50,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,57,48,32,115,108,32,105,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,49,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,54,52,50,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,49,55,53,32,97,114,103,115,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,53,55,55,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,9),40,97,51,53,53,54,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,48,48,57,32,105,41,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,103,49,48,50,50,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,50,49,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,7),40,97,51,55,55,48,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,11),40,97,51,55,54,52,32,101,120,110,41,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,54,53,32,103,49,48,55,55,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,7),40,97,51,55,57,49,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,51,56,55,50,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,14),40,97,51,56,54,54,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,7),40,97,51,55,56,53,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,9),40,97,51,55,53,56,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,7),40,97,52,48,51,53,41,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,17),40,97,52,48,52,54,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,7),40,97,52,48,52,48,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,52,48,53,53,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,7),40,97,52,48,54,57,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,17),40,97,52,48,55,53,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,7),40,97,52,48,57,51,41,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,17),40,97,52,48,57,57,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,49,49,55,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,17),40,97,52,49,50,56,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,7),40,97,52,49,50,50,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,49,51,55,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,115,105,122,101,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,13),40,115,117,102,102,105,120,45,108,111,111,112,41,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,8),40,118,97,54,48,54,52,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,99,111,117,110,116,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,8),40,118,97,54,48,55,50,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,113,117,111,116,101,45,97,114,103,45,115,116,114,105,110,103,32,115,116,114,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,52,56,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,25),40,97,52,54,51,51,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,51,49,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,25),40,97,52,55,49,54,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,104,101,108,108,45,99,111,109,109,97,110,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,103,49,53,55,56,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,55,55,41,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,48,49,32,103,49,53,49,51,41,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,7),40,97,53,48,55,48,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,22),40,97,53,48,55,54,32,105,110,32,111,117,116,32,112,105,100,32,101,114,114,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,39),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,101,120,97,99,116,102,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,46,32,95,41,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,41,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,46,32,95,41,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,41,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,11),40,97,53,52,57,57,32,115,105,103,41,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,14),40,97,53,53,48,56,32,46,32,114,101,115,116,41,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,10),40,97,53,53,51,51,32,117,109,41,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,12),40,97,53,53,51,57,32,112,111,114,116,41,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,9),40,97,53,53,55,53,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,9),40,97,53,53,56,49,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,9),40,97,53,53,56,55,32,102,41,0,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k4855 */
C_regparm static C_word C_fcall stub1456(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1367(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);

C_return(z);
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

/* from k3379 */
C_regparm static C_word C_fcall stub916(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3366 */
C_regparm static C_word C_fcall stub906(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3299 */
C_regparm static C_word C_fcall stub879(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
C_regparm static C_word C_fcall stub823(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k2716 in k2710 in k2707 in k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
C_regparm static C_word C_fcall stub707(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=C_fix((C_word)set_file_mtime(t0,t1,t2));
return C_r;}

/* from k2546 */
C_regparm static C_word C_fcall stub633(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word *av) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word *av) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word *av) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word *av) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word *av) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word *av) C_noret;
C_noret_decl(f_2376)
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word *av) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word *av) C_noret;
C_noret_decl(f_2417)
static void C_fcall f_2417(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word *av) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word *av) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word *av) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word *av) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word *av) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word *av) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word *av) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word *av) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word *av) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word *av) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word *av) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word *av) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word *av) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word *av) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word *av) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word *av) C_noret;
C_noret_decl(f_2966)
static void C_fcall f_2966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3076)
static void C_fcall f_3076(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3089)
static void C_ccall f_3089(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word *av) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3121)
static void C_ccall f_3121(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word *av) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static void C_fcall f_3175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word *av) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word *av) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_fcall f_3231(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word *av) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word *av) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word *av) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word *av) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word *av) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word *av) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word *av) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word *av) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word *av) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word *av) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word *av) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word *av) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word *av) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word *av) C_noret;
C_noret_decl(f_3541)
static void C_fcall f_3541(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word *av) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word *av) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word *av) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word *av) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_fcall f_3580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word *av) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word *av) C_noret;
C_noret_decl(f_3637)
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_fcall f_3658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_fcall f_3667(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3692)
static void C_fcall f_3692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3697)
static C_word C_fcall f_3697(C_word t0,C_word t1);
C_noret_decl(f_3716)
static C_word C_fcall f_3716(C_word t0,C_word t1);
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3741)
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_fcall f_3796(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word *av) C_noret;
C_noret_decl(f_3833)
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3898)
static void C_fcall f_3898(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word *av) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word *av) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word *av) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word *av) C_noret;
C_noret_decl(f_4153)
static void C_fcall f_4153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word *av) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word *av) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word *av) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_fcall f_4268(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word *av) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word *av) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void C_fcall f_4325(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4372)
static C_word C_fcall f_4372(C_word t0,C_word t1);
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_fcall f_4426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4433)
static void C_fcall f_4433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word *av) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word *av) C_noret;
C_noret_decl(f_4526)
static void C_fcall f_4526(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4570)
static C_word C_fcall f_4570(C_word t0,C_word t1);
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word *av) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word *av) C_noret;
C_noret_decl(f_4770)
static void C_fcall f_4770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_fcall f_4801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word *av) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word *av) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_fcall f_4981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_fcall f_5020(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5022)
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5027)
static C_word C_fcall f_5027(C_word t0,C_word t1);
C_noret_decl(f_5036)
static C_word C_fcall f_5036(C_word t0,C_word t1);
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word *av) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word *av) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word *av) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word *av) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word *av) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word *av) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word *av) C_noret;
C_noret_decl(f_5299)
static void C_ccall f_5299(C_word c,C_word *av) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word *av) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word *av) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word *av) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word *av) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word *av) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word *av) C_noret;
C_noret_decl(f_5347)
static void C_ccall f_5347(C_word c,C_word *av) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word *av) C_noret;
C_noret_decl(f_5359)
static void C_ccall f_5359(C_word c,C_word *av) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word *av) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word *av) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word *av) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word *av) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word *av) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word *av) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word *av) C_noret;
C_noret_decl(f_5425)
static void C_ccall f_5425(C_word c,C_word *av) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word *av) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5504)
static void C_ccall f_5504(C_word c,C_word *av) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5540)
static void C_ccall f_5540(C_word c,C_word *av) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word *av) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word *av) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va6064)
static void C_fcall va6064(C_word t0,C_word t1) C_noret;
C_noret_decl(va6072)
static void C_fcall va6072(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2376)
static void C_ccall trf_2376(C_word c,C_word *av) C_noret;
static void C_ccall trf_2376(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2376(t0,t1,t2);}

C_noret_decl(trf_2417)
static void C_ccall trf_2417(C_word c,C_word *av) C_noret;
static void C_ccall trf_2417(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2417(t0,t1,t2);}

C_noret_decl(trf_2567)
static void C_ccall trf_2567(C_word c,C_word *av) C_noret;
static void C_ccall trf_2567(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2567(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2966)
static void C_ccall trf_2966(C_word c,C_word *av) C_noret;
static void C_ccall trf_2966(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2966(t0,t1);}

C_noret_decl(trf_3039)
static void C_ccall trf_3039(C_word c,C_word *av) C_noret;
static void C_ccall trf_3039(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3039(t0,t1,t2,t3);}

C_noret_decl(trf_3076)
static void C_ccall trf_3076(C_word c,C_word *av) C_noret;
static void C_ccall trf_3076(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3076(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3175)
static void C_ccall trf_3175(C_word c,C_word *av) C_noret;
static void C_ccall trf_3175(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3175(t0,t1);}

C_noret_decl(trf_3231)
static void C_ccall trf_3231(C_word c,C_word *av) C_noret;
static void C_ccall trf_3231(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3231(t0,t1,t2);}

C_noret_decl(trf_3541)
static void C_ccall trf_3541(C_word c,C_word *av) C_noret;
static void C_ccall trf_3541(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3541(t0,t1,t2,t3);}

C_noret_decl(trf_3580)
static void C_ccall trf_3580(C_word c,C_word *av) C_noret;
static void C_ccall trf_3580(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3580(t0,t1);}

C_noret_decl(trf_3586)
static void C_ccall trf_3586(C_word c,C_word *av) C_noret;
static void C_ccall trf_3586(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3586(t0,t1,t2,t3);}

C_noret_decl(trf_3637)
static void C_ccall trf_3637(C_word c,C_word *av) C_noret;
static void C_ccall trf_3637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3637(t0,t1,t2);}

C_noret_decl(trf_3658)
static void C_ccall trf_3658(C_word c,C_word *av) C_noret;
static void C_ccall trf_3658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3658(t0,t1);}

C_noret_decl(trf_3667)
static void C_ccall trf_3667(C_word c,C_word *av) C_noret;
static void C_ccall trf_3667(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3667(t0,t1,t2);}

C_noret_decl(trf_3692)
static void C_ccall trf_3692(C_word c,C_word *av) C_noret;
static void C_ccall trf_3692(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3692(t0,t1,t2);}

C_noret_decl(trf_3741)
static void C_ccall trf_3741(C_word c,C_word *av) C_noret;
static void C_ccall trf_3741(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3741(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3796)
static void C_ccall trf_3796(C_word c,C_word *av) C_noret;
static void C_ccall trf_3796(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3796(t0,t1);}

C_noret_decl(trf_3833)
static void C_ccall trf_3833(C_word c,C_word *av) C_noret;
static void C_ccall trf_3833(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3833(t0,t1,t2);}

C_noret_decl(trf_3898)
static void C_ccall trf_3898(C_word c,C_word *av) C_noret;
static void C_ccall trf_3898(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3898(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4153)
static void C_ccall trf_4153(C_word c,C_word *av) C_noret;
static void C_ccall trf_4153(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4153(t0,t1);}

C_noret_decl(trf_4268)
static void C_ccall trf_4268(C_word c,C_word *av) C_noret;
static void C_ccall trf_4268(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4268(t0,t1);}

C_noret_decl(trf_4325)
static void C_ccall trf_4325(C_word c,C_word *av) C_noret;
static void C_ccall trf_4325(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4325(t0,t1,t2);}

C_noret_decl(trf_4426)
static void C_ccall trf_4426(C_word c,C_word *av) C_noret;
static void C_ccall trf_4426(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4426(t0,t1,t2);}

C_noret_decl(trf_4433)
static void C_ccall trf_4433(C_word c,C_word *av) C_noret;
static void C_ccall trf_4433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4433(t0,t1);}

C_noret_decl(trf_4526)
static void C_ccall trf_4526(C_word c,C_word *av) C_noret;
static void C_ccall trf_4526(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4526(t0,t1);}

C_noret_decl(trf_4770)
static void C_ccall trf_4770(C_word c,C_word *av) C_noret;
static void C_ccall trf_4770(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4770(t0,t1);}

C_noret_decl(trf_4801)
static void C_ccall trf_4801(C_word c,C_word *av) C_noret;
static void C_ccall trf_4801(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4801(t0,t1);}

C_noret_decl(trf_4981)
static void C_ccall trf_4981(C_word c,C_word *av) C_noret;
static void C_ccall trf_4981(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4981(t0,t1,t2);}

C_noret_decl(trf_5020)
static void C_ccall trf_5020(C_word c,C_word *av) C_noret;
static void C_ccall trf_5020(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5020(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5022)
static void C_ccall trf_5022(C_word c,C_word *av) C_noret;
static void C_ccall trf_5022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5022(t0,t1,t2);}

C_noret_decl(trva6064)
static void C_ccall trva6064(C_word c,C_word *av) C_noret;
static void C_ccall trva6064(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6064(t0,t1);}

C_noret_decl(trva6072)
static void C_ccall trva6072(C_word c,C_word *av) C_noret;
static void C_ccall trva6072(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6072(t0,t1);}

/* k2222 */
static void C_ccall f_2224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2224,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2225 in k2222 */
static void C_ccall f_2227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2227,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2228 in k2225 in k2222 */
static void C_ccall f_2230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2230,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2233,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2236,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2239,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2242(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2242,2,av);}
a=C_alloc(104);
t2=C_a_i_provide(&a,1,lf[2]);
t3=C_a_i_provide(&a,1,lf[3]);
t4=C_set_block_item(lf[4] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[5] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[6] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[7] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[13] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[14] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[15] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[16] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[17] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[18] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[19] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[20] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[21] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[22] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[23] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[24] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[25] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[26] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[27] /* chicken.file.posix#file-test-lock */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[28] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[29] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[30] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[31] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[32] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[33] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[34] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[35] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[36] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[37] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[38] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[41] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[42] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[43] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[44] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[45] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[46] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[47] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[48] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[49] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[50] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[51] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[52] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[53] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[54] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[55] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[56] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[57] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[58] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[59] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[60] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[61] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[62] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[65] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[66] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[67] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[68] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[71] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[74] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[75] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[76] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t77=C_set_block_item(lf[77] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t78=C_set_block_item(lf[78] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t79=C_set_block_item(lf[79] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t80=C_a_i_provide(&a,1,lf[80]);
t81=C_set_block_item(lf[81] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[82] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[83] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[84] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[85] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t86=C_set_block_item(lf[86] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t87=C_set_block_item(lf[87] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t88=C_set_block_item(lf[88] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t89=C_a_i_provide(&a,1,lf[89]);
t90=C_mutate((C_word*)lf[90]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2328,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[96]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2346,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[99]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t93=C_set_block_item(lf[109] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[110] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[111] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[112] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[113] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[114] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[115] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[116] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[117] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[118] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[119] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[120] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[121] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[122] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[123] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[124] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[125] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[126] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[127] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[128] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[129] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[130] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t115=C_set_block_item(lf[131] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t116=C_set_block_item(lf[132] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t117=C_a_i_provide(&a,1,lf[133]);
t118=C_set_block_item(lf[134] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[135] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[136] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t121=C_set_block_item(lf[137] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t122=C_set_block_item(lf[138] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[139] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[140] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[141] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[142] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[143] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[144] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[145] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[146] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[147] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[148] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[149] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[150] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[151] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[152] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[153] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[154] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[155] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[156] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[157] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[158] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[159] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[160] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[161] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[162] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[163] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[164] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[165] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[166] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[167] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t152=C_set_block_item(lf[168] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t153=C_set_block_item(lf[169] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t154=C_a_i_provide(&a,1,lf[170]);
t155=C_set_block_item(lf[171] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[172] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[173] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[174] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[175] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[176] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t161=C_set_block_item(lf[177] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t162=C_set_block_item(lf[178] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[179] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[180] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[181] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t166=C_set_block_item(lf[182] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t167=C_set_block_item(lf[183] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t168=C_a_i_provide(&a,1,lf[184]);
t169=C_mutate(&lf[185] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t170=C_mutate((C_word*)lf[188]+1 /* (set! ##sys#posix-error ...) */,lf[185]);
t171=C_mutate(&lf[189] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t172=C_mutate((C_word*)lf[196]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate((C_word*)lf[198]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2631,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate((C_word*)lf[204]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2681,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate((C_word*)lf[208]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2687,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[210]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2772,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate((C_word*)lf[217]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2778,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate((C_word*)lf[220]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2784,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t181=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t182=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5588,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:282: chicken.base#getter-with-setter */
t183=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t183;
av2[1]=t181;
av2[2]=t182;
av2[3]=*((C_word*)lf[217]+1);
av2[4]=lf[407];
((C_proc)(void*)(*((C_word*)t183+1)))(5,av2);}}

/* chicken.process#system in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2328(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2328,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[91]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2341,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:202: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2339 in chicken.process#system in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2341,2,av);}
/* posix.scm:203: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=lf[91];
av2[4]=lf[94];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.process#system* in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2346,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2350,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:209: system */
t4=*((C_word*)lf[90]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2348 in chicken.process#system* in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2350,2,av);}
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
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[98];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_2362,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2366,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix.scm:216: chicken.platform#software-version */
t5=*((C_word*)lf[108]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_2366(2,av2);}}}

/* k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2366(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2366,2,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[100]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=t3;
t5=C_eqp(t1,lf[100]);
t6=(C_truep(t5)?lf[101]:lf[102]);
t7=t6;
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2397,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t10,a[5]=t12,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* string->list */
t14=*((C_word*)lf[107]+1);{
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

/* g256 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2376,3,t0,t1,t2);}
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
t4=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[104];
av2[3]=lf[105];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2395 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2397(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2397,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2417(t6,t2,t1);}

/* k2398 in k2395 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2400,2,av);}
a=C_alloc(7);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[106]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k2409 in k2398 in k2395 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2411,2,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* posix.scm:227: scheme#string-append */
t3=*((C_word*)lf[106]+1);{
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

/* map-loop250 in k2395 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_2417(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2417,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix.scm:220: g256 */
t5=((C_word*)t0)[4];
f_2376(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2440 in map-loop250 in k2395 in k2364 in chicken.process#qs in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2442(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2442,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2417(t6,((C_word*)t0)[5],t5);}

/* chicken.posix#posix-error in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2549(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_2549,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2553,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:161: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2551 in chicken.posix#posix-error in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2553(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2553,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2564,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub633(t4,t5);
/* posix-common.scm:158: ##sys#peek-c-string */
t7=*((C_word*)lf[187]+1);{
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

/* k2558 in k2551 in chicken.posix#posix-error in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2560,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[92]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k2562 in k2551 in chicken.posix#posix-error in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2564,2,av);}
/* posix-common.scm:162: string-append */
t2=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[186];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_2567(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2567,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2571,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_2571(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2592,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:205: chicken.base#port? */
t8=*((C_word*)lf[195]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2569 in chicken.posix#stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2571,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:216: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[190];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[191];
av2[5]=((C_word*)t0)[5];
f_2549(6,av2);}}
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

/* k2590 in chicken.posix#stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2592,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:205: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[75]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:207: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:212: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[194];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2594 in k2590 in chicken.posix#stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2596,2,av);}
t2=C_u_i_fstat(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2571(2,av2);}}

/* k2603 in k2590 in chicken.posix#stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2605,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_u_i_lstat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2571(2,av2);}}
else{
t2=C_u_i_stat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2571(2,av2);}}}

/* chicken.file.posix#file-stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2613,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:222: stat */
f_2567(t6,t2,t5,C_SCHEME_TRUE,lf[197]);}

/* k2618 in chicken.file.posix#file-stat in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_2620,2,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),((C_word)C_SCHEME_UNDEFINED),((C_word)C_SCHEME_UNDEFINED));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2631,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2635,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:231: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[199];
tp(4,av2);}}

/* k2633 in chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2635,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fchmod(((C_word*)t0)[3],((C_word*)t0)[4]);
f_2638(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:233: chicken.base#port? */
t4=*((C_word*)lf[195]+1);{
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

/* k2636 in k2633 in chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2638,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:242: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[199];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2549(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2654 in k2633 in chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2656,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:233: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[75]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2670,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:236: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
tp(4,av2);}}
else{
/* posix-common.scm:238: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[193];
av2[3]=lf[201];
av2[4]=lf[202];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2658 in k2654 in k2633 in chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2660,2,av);}
t2=C_fchmod(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2638(2,av2);}}

/* k2668 in k2654 in k2633 in chicken.file.posix#set-file-permissions! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2670,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_2638(2,av2);}}

/* chicken.file.posix#file-modification-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2675,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:246: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[205]);}

/* k2677 in chicken.file.posix#file-modification-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2679,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2681,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:250: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[207]);}

/* k2683 in chicken.file.posix#file-access-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2685,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2687,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:254: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[209]);}

/* k2689 in chicken.file.posix#file-change-time in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2691,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_2693,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2697,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
/* posix-common.scm:259: chicken.time#current-seconds */
t6=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_car(t4);
f_2697(2,av2);}}}

/* k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2697(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2697,2,av);}
a=C_alloc(7);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?t2:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
/* posix-common.scm:260: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[211];
tp(4,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_2709(2,av2);}}}

/* k2707 in k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2709,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posix-common.scm:261: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[211];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2712(2,av2);}}}

/* k2710 in k2707 in k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2712,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2718,a[2]=t3,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t8=C_i_foreign_string_argumentp(t4);
/* posix-common.scm:262: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t3;{
C_word *av2=av;
av2[0]=t8;
av2[1]=stub707(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t5,t6);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2716 in k2710 in k2707 in k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2718,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub707(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2726 in k2710 in k2707 in k2695 in chicken.file.posix#set-file-times! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2728,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[185];
av2[3]=lf[190];
av2[4]=lf[211];
av2[5]=lf[212];
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

/* chicken.file.posix#file-size in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2772,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2776,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:271: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[216]);}

/* k2774 in chicken.file.posix#file-size in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2776,2,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2778,4,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[218],t2,t3,C_fix(-1));
/* posixwin.scm:877: chicken.base#error */
t5=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[219];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.file.posix#set-file-group! in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2784,4,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[221],t2,C_fix(-1),t3);
/* posixwin.scm:877: chicken.base#error */
t5=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[219];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2792,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5582,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:288: chicken.base#getter-with-setter */
t5=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[220]+1);
av2[4]=lf[405];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2796,2,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5576,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:294: chicken.base#getter-with-setter */
t5=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[198]+1);
av2[4]=lf[403];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2800(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2800,2,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2802,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[38]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2929,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[37]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2949,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[78] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[77] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[76] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[79]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2962,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5540,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:369: chicken.base#getter-with-setter */
t17=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[79]+1);
av2[4]=lf[402];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2802,c,av);}
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:303: stat */
f_2567(t12,t2,t5,t9,lf[229]);}

/* k2819 in chicken.file.posix#file-type in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2821,2,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[222];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[223];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[224];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[225];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[226];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[227];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[228]:lf[222]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2889,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:317: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2895 in chicken.file.posix#regular-file? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2897,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[222],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2899,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:321: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2905 in chicken.file.posix#symbolic-link? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2907,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[223],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2909,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2917,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:325: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2915 in chicken.file.posix#block-device? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2917,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[226],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2919,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:329: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2925 in chicken.file.posix#character-device? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2927,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[225],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2929,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2935 in chicken.file.posix#fifo? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2937,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[227],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2939,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2947,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:337: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2945 in chicken.file.posix#socket? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2947,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[228],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2949,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2957,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:341: chicken.file.posix#file-type */
t4=*((C_word*)lf[31]+1);{
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

/* k2955 in chicken.file.posix#directory? in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2957,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[224],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2962,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2966,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_2966(t7,C_u_i_car(t6));}
else{
t6=t5;
f_2966(t6,C_fix((C_word)SEEK_SET));}}

/* k2964 in chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_2966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2966,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:357: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[230];
tp(4,av2);}}

/* k2967 in k2964 in chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2969,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:358: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[230];
tp(4,av2);}}

/* k2970 in k2967 in k2964 in chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2972,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:359: chicken.base#port? */
t4=*((C_word*)lf[195]+1);{
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

/* k2976 in k2970 in k2967 in k2964 in chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2978,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:366: posix-error */
t2=lf[185];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[230];
av2[4]=lf[231];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2549(7,av2);}}}

/* k2982 in k2970 in k2967 in k2964 in chicken.file.posix#set-file-position! in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_2984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2984,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[232]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2978(2,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2978(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2978(2,av2);}}
else{
/* posix-common.scm:365: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[193];
av2[3]=lf[230];
av2[4]=lf[233];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3011(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3011,2,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[41] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[52] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[59] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[53] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[54] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[58] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[46] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[44] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[47] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[57] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[45] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[56] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[62] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IREAD));
t18=C_set_block_item(lf[71] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWRITE));
t19=C_set_block_item(lf[74] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IEXEC));
t20=C_set_block_item(lf[60] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IREAD));
t21=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWRITE));
t22=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IEXEC));
t23=C_set_block_item(lf[61] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IREAD));
t24=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWRITE));
t25=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IEXEC));
t26=C_set_block_item(lf[65] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t27=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3076,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[42]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3095,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[43]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3109,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[75]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[7]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[177]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[171]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=*((C_word*)lf[255]+1);
t42=C_mutate((C_word*)lf[255]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3214,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5509,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5534,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:528: chicken.base#getter-with-setter */
t46=*((C_word*)lf[395]+1);{
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
av2[4]=lf[398];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3039(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3039,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3047,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[234]);
if(C_truep(t8)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[235];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:454: ##sys#error */
t9=*((C_word*)lf[97]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[236];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
/* posix-common.scm:455: ##sys#error */
t9=*((C_word*)lf[97]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[237];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[238];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t1;
av2[2]=lf[239];
av2[3]=t4;
tp(4,av2);}}}}

/* k3045 in mode in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3047,2,av);}
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3076(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3076,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:461: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=t2;
av2[4]=lf[240];
av2[5]=t3;
f_2549(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3089,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:462: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[243];
av2[5]=lf[232];
tp(6,av2);}}
else{
/* posix-common.scm:462: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[243];
av2[5]=lf[232];
tp(6,av2);}}}}

/* k3087 in check in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3089,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3095,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3099,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:467: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[244];
tp(4,av2);}}

/* k3097 in chicken.file.posix#open-input-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3099,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:468: mode */
f_3039(t2,C_SCHEME_TRUE,((C_word*)t0)[6],lf[244]);}

/* k3105 in k3097 in chicken.file.posix#open-input-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3107,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:468: check */
f_3076(((C_word*)t0)[4],lf[244],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* chicken.file.posix#open-output-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,3)))){
C_save_and_reclaim((void*)f_3109,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3113,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:471: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[245];
tp(4,av2);}}

/* k3111 in chicken.file.posix#open-output-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3113,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:472: mode */
f_3039(t2,C_SCHEME_FALSE,((C_word*)t0)[6],lf[245]);}

/* k3119 in k3111 in chicken.file.posix#open-output-file* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3121,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:472: check */
f_3076(((C_word*)t0)[4],lf[245],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* chicken.file.posix#port->fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3123(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3123,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[246]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[228],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:482: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[247]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[247]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3162,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:483: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[250]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3137 in chicken.file.posix#port->fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3139,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3146 in k3160 in chicken.file.posix#port->fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3148,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3160 in chicken.file.posix#port->fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3162,2,av);}
a=C_alloc(4);
t2=C_i_zerop(t1);
if(C_truep(C_i_not(t2))){
t3=C_port_fileno(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
/* posix-common.scm:486: posix-error */
t5=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[190];
av2[3]=lf[246];
av2[4]=lf[248];
av2[5]=((C_word*)t0)[2];
f_2549(6,av2);}}
else{
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
/* posix-common.scm:488: posix-error */
t3=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[193];
av2[3]=lf[246];
av2[4]=lf[249];
av2[5]=((C_word*)t0)[2];
f_2549(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3168,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3172,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:492: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[251];
tp(4,av2);}}

/* k3170 in chicken.file.posix#duplicate-fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3172(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3172,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_3175(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3193,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:496: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[251];
tp(4,av2);}}}

/* k3173 in k3170 in chicken.file.posix#duplicate-fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3175,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:499: posix-error */
t4=lf[185];{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[190];
av2[3]=lf[251];
av2[4]=lf[252];
av2[5]=((C_word*)t0)[3];
f_2549(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3176 in k3173 in k3170 in chicken.file.posix#duplicate-fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3178,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3191 in k3170 in chicken.file.posix#duplicate-fileno in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3193,2,av);}
t2=((C_word*)t0)[2];
f_3175(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.process-context.posix#current-process-id in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3195,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub823(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3198,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3202,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:513: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[253];
tp(4,av2);}}

/* k3200 in chicken.process-context.posix#change-directory* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3202,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
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
t5=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[190];
av2[3]=lf[253];
av2[4]=lf[254];
av2[5]=((C_word*)t0)[3];
f_2549(6,av2);}}}

/* k3203 in k3200 in chicken.process-context.posix#change-directory* in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3205,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3214(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3214,3,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[171]+1);
t4=*((C_word*)lf[171]+1);
/* posix-common.scm:520: g830 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[171]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[171]+1);
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

/* k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3228(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3228,2,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[256] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[257] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3250,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[87]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3385,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[135]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5500,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:603: chicken.base#getter-with-setter */
t15=*((C_word*)lf[395]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[135]+1);
av2[4]=lf[396];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3231(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3231,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:547: ##sys#error */
t6=*((C_word*)lf[97]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[258];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3250,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:550: chicken.time#current-seconds */
t4=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3254(2,av2);}}}

/* k3252 in chicken.time.posix#seconds->local-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3254,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:551: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[259];
tp(4,av2);}}

/* k3255 in k3252 in chicken.time.posix#seconds->local-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3257,2,av);}
/* posix-common.scm:552: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3271,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3275,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:555: chicken.time#current-seconds */
t4=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3275(2,av2);}}}

/* k3273 in chicken.time.posix#seconds->utc-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3275,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3278,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:556: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[260];
tp(4,av2);}}

/* k3276 in k3273 in chicken.time.posix#seconds->utc-time in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3278,2,av);}
/* posix-common.scm:557: decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[256]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[256];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3303,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3307,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:561: chicken.time#current-seconds */
t4=*((C_word*)lf[214]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3307(2,av2);}}}

/* k3305 in chicken.time.posix#seconds->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3307,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3310,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:562: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[213]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[262];
tp(4,av2);}}

/* k3308 in k3305 in chicken.time.posix#seconds->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3310(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3310,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=C_i_foreign_ranged_integer_argumentp(((C_word*)t0)[3],t4);
t6=stub879(t3,t5);
/* posix-common.scm:560: ##sys#peek-c-string */
t7=*((C_word*)lf[187]+1);{
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

/* k3311 in k3308 in k3305 in chicken.time.posix#seconds->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3313,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:565: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[261]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[261]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:566: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[262];
av2[3]=lf[263];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3341,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3345,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:571: check-time-vector */
f_3231(t3,lf[264],t2);}

/* k3343 in chicken.time.posix#local-time->seconds in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3345,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:572: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3347 in k3343 in chicken.time.posix#local-time->seconds in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3349,2,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:574: ##sys#error */
t3=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[264];
av2[3]=lf[265];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3385,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3392,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:582: check-time-vector */
f_3231(t7,lf[267],t2);}

/* k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3392,2,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[267]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3411,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:586: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[267];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:588: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3399 in k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3401,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:587: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=lf[268];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3409 in k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3411,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3415,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:586: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[266]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3413 in k3409 in k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3415(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3415,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub916(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:579: ##sys#peek-c-string */
t6=*((C_word*)lf[187]+1);{
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
t5=*((C_word*)lf[187]+1);{
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

/* k3416 in k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3418,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:590: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[261]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[261]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:591: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=lf[269];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3437 in k3390 in chicken.time.posix#time->string in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3439(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3439,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub906(t3,t2,t4);
/* posix-common.scm:578: ##sys#peek-c-string */
t6=*((C_word*)lf[187]+1);{
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
t5=*((C_word*)lf[187]+1);{
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

/* chicken.process.signal#set-signal-handler! in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3447(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3447,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3451,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:598: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[271];
tp(4,av2);}}

/* k3449 in chicken.process.signal#set-signal-handler! in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3451,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];
t3=C_establish_signal_handler(((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_vector_set(*((C_word*)lf[270]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_establish_signal_handler(((C_word*)t0)[3],C_SCHEME_FALSE);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_vector_set(*((C_word*)lf[270]+1),((C_word*)t0)[3],((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3462(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(231,c,8)))){
C_save_and_reclaim((void *)f_3462,2,av);}
a=C_alloc(231);
t2=C_mutate((C_word*)lf[137]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[126]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3470,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[275] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3541,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[277] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3658,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[286] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3692,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[287]+1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate(&lf[288] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3741,a[2]=t9,a[3]=t8,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(lf[127] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t13=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3917,a[2]=t12,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3957,a[2]=t12,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3997,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4061,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t21=C_set_block_item(lf[50] /* chicken.file.posix#open/noinherit */,0,C_fix((C_word)O_NOINHERIT));
t22=C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC);
t23=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t24=C_u_fixnum_or(t22,t23);
t25=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4149,a[2]=t24,a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4184,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4215,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(lf[159] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t32=C_set_block_item(lf[151] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t33=C_set_block_item(lf[148] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t34=C_set_block_item(lf[150] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t35=C_set_block_item(lf[157] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t36=C_set_block_item(lf[142] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t37=C_set_block_item(lf[144] /* chicken.process.signal#signal/break */,0,C_fix((C_word)SIGBREAK));
t38=C_set_block_item(lf[143] /* chicken.process.signal#signal/alrm */,0,C_fix(0));
t39=C_set_block_item(lf[145] /* chicken.process.signal#signal/bus */,0,C_fix(0));
t40=C_set_block_item(lf[146] /* chicken.process.signal#signal/chld */,0,C_fix(0));
t41=C_set_block_item(lf[147] /* chicken.process.signal#signal/cont */,0,C_fix(0));
t42=C_set_block_item(lf[149] /* chicken.process.signal#signal/hup */,0,C_fix(0));
t43=C_set_block_item(lf[152] /* chicken.process.signal#signal/io */,0,C_fix(0));
t44=C_set_block_item(lf[153] /* chicken.process.signal#signal/kill */,0,C_fix(0));
t45=C_set_block_item(lf[154] /* chicken.process.signal#signal/pipe */,0,C_fix(0));
t46=C_set_block_item(lf[155] /* chicken.process.signal#signal/prof */,0,C_fix(0));
t47=C_set_block_item(lf[156] /* chicken.process.signal#signal/quit */,0,C_fix(0));
t48=C_set_block_item(lf[158] /* chicken.process.signal#signal/stop */,0,C_fix(0));
t49=C_set_block_item(lf[160] /* chicken.process.signal#signal/trap */,0,C_fix(0));
t50=C_set_block_item(lf[161] /* chicken.process.signal#signal/tstp */,0,C_fix(0));
t51=C_set_block_item(lf[162] /* chicken.process.signal#signal/urg */,0,C_fix(0));
t52=C_set_block_item(lf[163] /* chicken.process.signal#signal/usr1 */,0,C_fix(0));
t53=C_set_block_item(lf[164] /* chicken.process.signal#signal/usr2 */,0,C_fix(0));
t54=C_set_block_item(lf[165] /* chicken.process.signal#signal/vtalrm */,0,C_fix(0));
t55=C_set_block_item(lf[166] /* chicken.process.signal#signal/winch */,0,C_fix(0));
t56=C_set_block_item(lf[167] /* chicken.process.signal#signal/xcpu */,0,C_fix(0));
t57=C_set_block_item(lf[168] /* chicken.process.signal#signal/xfsz */,0,C_fix(0));
t58=C_a_i_list7(&a,7,*((C_word*)lf[159]+1),*((C_word*)lf[151]+1),*((C_word*)lf[148]+1),*((C_word*)lf[150]+1),*((C_word*)lf[157]+1),*((C_word*)lf[142]+1),*((C_word*)lf[144]+1));
t59=C_mutate((C_word*)lf[169]+1 /* (set! chicken.process.signal#signals-list ...) */,t58);
t60=C_mutate(&lf[329] /* (set! chicken.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4519,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[88]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4549,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t62=C_set_block_item(lf[128] /* chicken.process#spawn/overlay */,0,C_fix((C_word)P_OVERLAY));
t63=C_set_block_item(lf[129] /* chicken.process#spawn/wait */,0,C_fix((C_word)P_WAIT));
t64=C_set_block_item(lf[130] /* chicken.process#spawn/nowait */,0,C_fix((C_word)P_NOWAIT));
t65=C_set_block_item(lf[131] /* chicken.process#spawn/nowaito */,0,C_fix((C_word)P_NOWAITO));
t66=C_set_block_item(lf[132] /* chicken.process#spawn/detach */,0,C_fix((C_word)P_DETACH));
t67=C_mutate(&lf[331] /* (set! chicken.posix#quote-arg-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4595,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate(&lf[338] /* (set! chicken.posix#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4770,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4797,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t72=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5020,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
t73=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t72,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t74=C_mutate((C_word*)lf[125]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5164,a[2]=t72,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp));
t75=C_mutate((C_word*)lf[179]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5257,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5263,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[173]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5275,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[174]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5281,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5287,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[175]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[176]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5299,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5305,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5311,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5323,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5329,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5335,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5341,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5347,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5353,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t93=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5359,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[182]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5365,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5371,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[6]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5377,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[134]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5383,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[172]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5389,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[136]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5395,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[138]+1 /* (set! chicken.process.signal#signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5401,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[139]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5407,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[140]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5413,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[141]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5419,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t104=C_mutate((C_word*)lf[183]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5425,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t105=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5431,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t106=C_mutate((C_word*)lf[86]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5437,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t107=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_fix(0));
t108=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_fix(0));
t109=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_fix(0));
t110=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_fix(0));
t111=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_fix(0));
t112=C_set_block_item(lf[49] /* chicken.file.posix#open/noctty */,0,C_fix(0));
t113=C_set_block_item(lf[51] /* chicken.file.posix#open/nonblock */,0,C_fix(0));
t114=C_set_block_item(lf[48] /* chicken.file.posix#open/fsync */,0,C_fix(0));
t115=C_set_block_item(lf[55] /* chicken.file.posix#open/sync */,0,C_fix(0));
t116=C_set_block_item(lf[66] /* chicken.file.posix#perm/isgid */,0,C_fix(0));
t117=C_set_block_item(lf[67] /* chicken.file.posix#perm/isuid */,0,C_fix(0));
t118=C_set_block_item(lf[68] /* chicken.file.posix#perm/isvtx */,0,C_fix(0));
t119=C_a_i_provide(&a,1,lf[352]);
t120=C_mutate((C_word*)lf[353]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5455,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t121=C_set_block_item(lf[355] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t122=C_set_block_item(lf[356] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t123=C_set_block_item(lf[357] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t124=C_set_block_item(lf[358] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t125=C_set_block_item(lf[359] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t126=C_set_block_item(lf[360] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t127=C_set_block_item(lf[361] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t128=C_set_block_item(lf[362] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t129=C_set_block_item(lf[363] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t130=C_set_block_item(lf[364] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t131=C_set_block_item(lf[365] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t132=C_set_block_item(lf[366] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t133=C_set_block_item(lf[367] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t134=C_set_block_item(lf[368] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t135=C_set_block_item(lf[369] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t136=C_set_block_item(lf[370] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t137=C_set_block_item(lf[371] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t138=C_set_block_item(lf[372] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t139=C_set_block_item(lf[373] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t140=C_set_block_item(lf[374] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t141=C_set_block_item(lf[375] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t142=C_set_block_item(lf[376] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t143=C_set_block_item(lf[377] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t144=C_set_block_item(lf[378] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t145=C_set_block_item(lf[379] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t146=C_set_block_item(lf[380] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t147=C_set_block_item(lf[381] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t148=C_set_block_item(lf[382] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t149=C_set_block_item(lf[383] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t150=C_set_block_item(lf[384] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t151=C_set_block_item(lf[385] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t152=C_set_block_item(lf[386] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t153=C_set_block_item(lf[387] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t154=C_set_block_item(lf[388] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t155=C_set_block_item(lf[389] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t156=C_set_block_item(lf[390] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t157=C_set_block_item(lf[391] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t158=C_set_block_item(lf[392] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t159=C_set_block_item(lf[393] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t160=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t160;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t160+1)))(2,av2);}}

/* chicken.process#process-sleep in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3464,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:615: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[272];
tp(4,av2);}}

/* k3466 in chicken.process#process-sleep in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3468,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_process_sleep(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-wait in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3470,c,av);}
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
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3489,a[2]=t13,a[3]=t9,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:622: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t14;
av2[2]=t13;
av2[3]=lf[273];
tp(4,av2);}}

/* k3487 in chicken.process#process-wait in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3489,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[2],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
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

/* a3493 in k3487 in chicken.process#process-wait in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3494,2,av);}
if(C_truep(C_process_wait(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* posixwin.scm:858: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_fix((C_word)C_exstatus);
C_values(5,av2);}}
else{
/* posixwin.scm:859: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix(-1);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a3499 in k3487 in chicken.process#process-wait in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3500(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3500,5,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:625: posix-error */
t6=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[93];
av2[3]=lf[273];
av2[4]=lf[274];
av2[5]=((C_word*)t0)[2];
f_2549(6,av2);}}
else{
/* posix-common.scm:626: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3541(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3541,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=t2;
t7=C_u_i_length(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3549,a[2]=t1,a[3]=t7,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_fixnum_plus(&a,2,t7,C_fix(1));
/* posix-common.scm:642: chicken.memory#make-pointer-vector */
t10=*((C_word*)lf[282]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3549,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3557,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:644: scheme#call-with-current-continuation */
t5=*((C_word*)lf[281]+1);{
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

/* k3550 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3552,2,av);}
/* posix-common.scm:640: g985 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3557,3,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:644: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[280]+1);{
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

/* a3562 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3563,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3569,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:644: k982 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3568 in a3562 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3569,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3573,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:646: free-c-string-buffer */
f_3658(t2,((C_word*)t0)[3]);}

/* k3571 in a3568 in a3562 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3573,2,av);}
/* posix-common.scm:646: chicken.condition#signal */
t2=*((C_word*)lf[276]+1);{
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

/* a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3578(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3578,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li49),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3637,a[2]=((C_word*)t0)[7],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3654,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12174 */
t5=t2;
f_3580(t5,t4);}

/* tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_3580,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3584,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3586,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li48),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3586(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k3582 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3584,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop990 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3586(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3586,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3602,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3627,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* posix-common.scm:655: convert */
t12=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}}

/* k3600 in doloop990 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3602(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3602,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub973(t2,t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3608(2,av2);}}
else{
/* posix-common.scm:657: chicken.base#error */
t6=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[279];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3606 in k3600 in doloop990 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3608,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:658: chicken.memory#pointer-vector-set! */
t3=*((C_word*)lf[278]+1);{
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

/* k3609 in k3606 in k3600 in doloop990 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 in ... */
static void C_ccall f_3611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3611,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3586(t5,((C_word*)t0)[5],t3,t4);}

/* k3625 in doloop990 in tmp12174 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3627,2,av);}
/* posix-common.scm:655: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22175 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3637,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3643,a[2]=t2,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:644: k982 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3642 in tmp22175 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3643,2,av);}{
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

/* k3652 in a3577 in a3556 in k3547 in chicken.posix#list->c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3654,2,av);}
a=C_alloc(3);
/* tmp22175 */
t2=((C_word*)t0)[2];
f_3637(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3658(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3658,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3662,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:663: chicken.memory#pointer-vector-length */
t4=*((C_word*)lf[285]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3660 in chicken.posix#free-c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3662,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3667,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3667(t6,((C_word*)t0)[3],C_fix(0));}

/* doloop1009 in k3660 in chicken.posix#free-c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3667(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3667,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3677,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:666: chicken.memory#pointer-vector-ref */
t5=*((C_word*)lf[284]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k3675 in doloop1009 in k3660 in chicken.posix#free-c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3677,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* posix-common.scm:667: chicken.memory#free */
t3=*((C_word*)lf[283]+1);{
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
f_3667(t4,((C_word*)t0)[4],t3);}}

/* k3678 in k3675 in doloop1009 in k3660 in chicken.posix#free-c-string-buffer in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3680,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3667(t3,((C_word*)t0)[4],t2);}

/* chicken.posix#check-environment-list in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3692(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3692,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3697,a[2]=t3,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3716,a[2]=t5,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=(
  f_3716(t7,t6)
);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* g1022 in chicken.posix#check-environment-list in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static C_word C_fcall f_3697(C_word t0,C_word t1){
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

/* for-each-loop1021 in chicken.posix#check-environment-list in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static C_word C_fcall f_3716(C_word t0,C_word t1){
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
  f_3697(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3739,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3741,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3745,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:683: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3745,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:685: list->c-string-buffer */
f_3541(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3751,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3759,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li68),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:688: scheme#call-with-current-continuation */
t7=*((C_word*)lf[281]+1);{
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

/* k3752 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3754,2,av);}
/* posix-common.scm:683: g1057 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3759,3,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li67),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:688: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[280]+1);{
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

/* a3764 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3765,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3771,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:688: k1054 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3770 in a3764 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3771,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3775,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:690: free-c-string-buffer */
f_3658(t2,((C_word*)t0)[4]);}

/* k3773 in a3770 in a3764 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3775,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:691: free-c-string-buffer */
f_3658(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:692: chicken.condition#signal */
t3=*((C_word*)lf[276]+1);{
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

/* k3776 in k3773 in a3770 in a3764 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3778,2,av);}
/* posix-common.scm:692: chicken.condition#signal */
t2=*((C_word*)lf[276]+1);{
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

/* a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3786,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li64),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3867,a[2]=((C_word*)t0)[9],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
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

/* a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_3792,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:696: check-environment-list */
f_3692(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_3796(t3,C_SCHEME_UNDEFINED);}}

/* k3794 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3796(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3796,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:702: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k3801 in k3794 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3803,2,av);}
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

/* k3804 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3806(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3806,2,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=((C_word*)t0)[4];
t8=C_i_check_list_2(t7,lf[289]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3831,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3833,a[2]=t5,a[3]=t11,a[4]=t6,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3833(t13,t9,t7);}

/* k3808 in k3804 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3810,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3796(t3,t2);}

/* k3829 in k3804 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3831,2,av);}
/* posix-common.scm:698: list->c-string-buffer */
f_3541(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1065 in k3804 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3833(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3833,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
/* posix-common.scm:699: scheme#string-append */
t7=*((C_word*)lf[106]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[290];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3856 in map-loop1065 in k3804 in a3791 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 in ... */
static void C_ccall f_3858(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3858,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3833(t6,((C_word*)t0)[5],t5);}

/* a3866 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3867,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3873,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
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

/* a3872 in a3866 in a3785 in a3758 in k3749 in k3743 in chicken.posix#call-with-exec-args in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3873,2,av);}{
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

/* check in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_3898(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3898,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:714: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=t2;
av2[4]=lf[291];
av2[5]=t3;
f_2549(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3911,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:715: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[292];
av2[5]=lf[232];
tp(6,av2);}}
else{
/* posix-common.scm:715: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[241]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=*((C_word*)lf[242]+1);
av2[4]=lf[292];
av2[5]=lf[232];
tp(6,av2);}}}}

/* k3909 in check in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3911,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3917,c,av);}
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
t4=C_i_check_string_2(t2,lf[293]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[294]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[294]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:726: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[293];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[295]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3948,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:727: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[293];
tp(4,av2);}}
else{
/* posix-common.scm:711: ##sys#error */
t10=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[296];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k3929 in chicken.process#open-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3931,2,av);}
/* posix-common.scm:722: check */
f_3898(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k3936 in chicken.process#open-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3938,2,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:722: check */
f_3898(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k3946 in chicken.process#open-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3948,2,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:722: check */
f_3898(((C_word*)t0)[3],lf[293],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_3957,c,av);}
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
t4=C_i_check_string_2(t2,lf[297]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[294]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[294]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3978,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:737: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[297];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[295]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:738: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[297];
tp(4,av2);}}
else{
/* posix-common.scm:711: ##sys#error */
t10=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[296];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k3969 in chicken.process#open-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3971,2,av);}
/* posix-common.scm:733: check */
f_3898(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k3976 in chicken.process#open-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3978,2,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:733: check */
f_3898(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k3986 in chicken.process#open-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_3988,2,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:733: check */
f_3898(((C_word*)t0)[3],lf[297],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_3997(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3997,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(1),C_SCHEME_TRUE,lf[298]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4004,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posix-common.scm:745: posix-error */
t8=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[190];
av2[3]=lf[298];
av2[4]=lf[299];
av2[5]=t2;
f_2549(6,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4002 in chicken.process#close-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4004,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4012(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4012,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,lf[300]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4019,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posix-common.scm:752: posix-error */
t8=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[190];
av2[3]=lf[300];
av2[4]=lf[301];
av2[5]=t2;
f_2549(6,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k4017 in chicken.process#close-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4019,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4027,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4031,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4031(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4031,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=t6,a[3]=t4,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4041,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4056,a[2]=t4,a[3]=t6,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:758: ##sys#dynamic-wind */
t10=*((C_word*)lf[304]+1);{
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

/* a4035 in k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4036,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[302]+1));
t3=C_mutate((C_word*)lf[302]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4040 in k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4041,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4047,a[2]=((C_word*)t0)[2],a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
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

/* a4046 in a4040 in k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4047,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4051,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:761: chicken.process#close-input-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4049 in a4046 in a4040 in k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4051,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4055 in k4029 in chicken.process#with-input-from-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4056,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[302]+1));
t3=C_mutate((C_word*)lf[302]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4061,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4065,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[121]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4063 in chicken.process#call-with-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4065,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li80),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4076,a[2]=t2,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
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

/* a4069 in k4063 in chicken.process#call-with-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4070,2,av);}
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

/* a4075 in k4063 in chicken.process#call-with-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4076,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4080,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:770: chicken.process#close-output-pipe */
t4=*((C_word*)lf[118]+1);{
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

/* k4078 in a4075 in k4063 in chicken.process#call-with-output-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4080,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4085,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4089,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4087 in chicken.process#call-with-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4089,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4094,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4100,a[2]=t2,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
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

/* a4093 in k4087 in chicken.process#call-with-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4094,2,av);}
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

/* a4099 in k4087 in chicken.process#call-with-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4100,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:779: chicken.process#close-input-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4102 in a4099 in k4087 in chicken.process#call-with-input-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4104,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4109,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[121]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4113,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=t6,a[3]=t4,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4123,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4138,a[2]=t4,a[3]=t6,a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:785: ##sys#dynamic-wind */
t10=*((C_word*)lf[304]+1);{
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

/* a4117 in k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4118,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[305]+1));
t3=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4122 in k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4123,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
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

/* a4128 in a4122 in k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4129,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4133,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:788: chicken.process#close-output-pipe */
t4=*((C_word*)lf[118]+1);{
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

/* k4131 in a4128 in a4122 in k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4133,2,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[303]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4137 in k4111 in chicken.process#with-output-to-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4138,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[305]+1));
t3=C_mutate((C_word*)lf[305]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4149,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4153,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4153(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4153(t6,((C_word*)t0)[2]);}}

/* k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4153,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[306]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:524: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[306];
tp(4,av2);}}

/* k4157 in k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4159,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:525: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[306];
tp(4,av2);}}

/* k4160 in k4157 in k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4162,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:526: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[306];
tp(4,av2);}}

/* k4164 in k4160 in k4157 in k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4166(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4166,2,av);}
a=C_alloc(10);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4169,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4175,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:528: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4167 in k4164 in k4160 in k4157 in k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4169,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4173 in k4164 in k4160 in k4157 in k4151 in chicken.file.posix#file-open in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4175,2,av);}
/* posixwin.scm:529: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[306];
av2[4]=lf[307];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* chicken.file.posix#file-close in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4184,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4188,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:534: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[309];
tp(4,av2);}}

/* k4186 in chicken.file.posix#file-close in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4188,2,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
f_4193(2,av2);}}

/* loop in k4186 in chicken.file.posix#file-close in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4193,2,av);}
t2=C_close(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t3)){
/* posixwin.scm:538: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[308]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[308]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixwin.scm:540: posix-error */
t4=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=lf[309];
av2[4]=lf[310];
av2[5]=((C_word*)t0)[2];
f_2549(6,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4215,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4219,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:544: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[311];
tp(4,av2);}}

/* k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4219,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:545: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[311];
tp(4,av2);}}

/* k4220 in k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4222,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_car(t3);
f_4225(2,av2);}}
else{
/* posixwin.scm:546: scheme#make-string */
t3=*((C_word*)lf[314]+1);{
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

/* k4223 in k4220 in k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4225,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4228(2,av2);}}
else{
/* posixwin.scm:548: ##sys#signal-hook */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[193];
av2[3]=lf[311];
av2[4]=lf[313];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixwin.scm:548: ##sys#signal-hook */
t4=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[193];
av2[3]=lf[311];
av2[4]=lf[313];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k4226 in k4223 in k4220 in k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4228,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4240,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:551: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4229 in k4226 in k4223 in k4220 in k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4231,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4238 in k4226 in k4223 in k4220 in k4217 in chicken.file.posix#file-read in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4240,2,av);}
/* posixwin.scm:552: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[311];
av2[4]=lf[312];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4258,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4262,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:557: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[315];
tp(4,av2);}}

/* k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4262,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4265(2,av2);}}
else{
/* posixwin.scm:559: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[315];
av2[4]=lf[317];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* posixwin.scm:559: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[193];
av2[3]=lf[315];
av2[4]=lf[317];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4263 in k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4265,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4268(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4268(t3,C_block_size(((C_word*)t0)[3]));}}

/* k4266 in k4263 in k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4268(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4268,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:561: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[315];
tp(4,av2);}}

/* k4269 in k4266 in k4263 in k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4271(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4271,2,av);}
a=C_alloc(9);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4280,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:564: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4272 in k4269 in k4266 in k4263 in k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4274,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4278 in k4269 in k4266 in k4263 in k4260 in chicken.file.posix#file-write in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4280,2,av);}
/* posixwin.scm:565: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[315];
av2[4]=lf[316];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* chicken.file.posix#file-mkstemp in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4298(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_4298,3,av);}
a=C_alloc(40);
t3=C_i_check_string_2(t2,lf[318]);
t4=lf[319];
t5=C_block_size(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)va6072,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp);
t8=t7;
va6072(t8,C_s_a_i_times(&a,2,t6,t6));}

/* k4309 */
static void C_ccall f_4311(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4311,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4317,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_fixnum_difference(t4,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4426,a[2]=t8,a[3]=t2,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4426(t10,t5,t6);}

/* k4315 in k4309 */
static void C_ccall f_4317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4317,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4413,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4417,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:581: chicken.pathname#pathname-directory */
t6=*((C_word*)lf[325]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4318 in k4315 in k4309 */
static void C_ccall f_4320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4320,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word)li98),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_4325(t5,((C_word*)t0)[9],C_fix(1));}

/* loop in k4318 in k4315 in k4309 */
static void C_fcall f_4325(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_4325,3,t0,t1,t2);}
a=C_alloc(15);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li96),tmp=(C_word)a,a+=7,tmp);
t5=(
  f_4372(t4,t3)
);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4333,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:595: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[306];
tp(4,av2);}}

/* k4331 in loop in k4318 in k4315 in k4309 */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4333,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)va6064,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li97),tmp=(C_word)a,a+=10,tmp);
t4=t3;
va6064(t4,C_s_a_i_bitwise_ior(&a,2,*((C_word*)lf[53]+1),*((C_word*)lf[46]+1)));}

/* suffix-loop in loop in k4318 in k4315 in k4309 */
static C_word C_fcall f_4372(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_rand(((C_word*)t0)[3]);
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=C_i_string_set(((C_word*)t0)[5],t1,t3);
t5=C_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k4411 in k4315 in k4309 */
static void C_ccall f_4413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4413,2,av);}
if(C_truep(C_i_not(t1))){
/* posixwin.scm:585: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[321];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t2)){
/* posixwin.scm:587: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[322];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_4320(2,av2);}}}}

/* k4415 in k4315 in k4309 */
static void C_ccall f_4417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4417,2,av);}
if(C_truep(t1)){
t2=t1;
/* posixwin.scm:581: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[323]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[323]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[318];
tp(6,av2);}}
else{
/* posixwin.scm:581: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[323]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[323]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[324];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[318];
tp(6,av2);}}}

/* loop in k4309 */
static void C_fcall f_4426(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4426,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4433,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t4=C_i_string_ref(((C_word*)t0)[3],t2);
t5=t3;
f_4433(t5,C_eqp(t4,C_make_character(88)));}
else{
t4=t3;
f_4433(t4,C_SCHEME_FALSE);}}

/* k4431 in loop in k4309 */
static void C_fcall f_4433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4433,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* posixwin.scm:579: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4426(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.process#create-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4457,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_fixnum_or(*((C_word*)lf[45]+1),*((C_word*)lf[50]+1)):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_pipe(C_SCHEME_FALSE,t4);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:615: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t7;
tp(2,av2);}}
else{
/* posixwin.scm:617: scheme#values */{
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

/* k4462 in chicken.process#create-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4464,2,av);}
/* posixwin.scm:617: scheme#values */{
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

/* k4471 in chicken.process#create-pipe in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4473,2,av);}
/* posixwin.scm:616: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[327];
av2[4]=lf[328];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_4519,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4523,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:672: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[329];
tp(4,av2);}}

/* k4521 in chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4523,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_4526(t3,C_dup(((C_word*)t0)[3]));}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4547,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:676: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[251];
tp(4,av2);}}}

/* k4524 in k4521 in chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4526(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4526,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4535,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:679: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4527 in k4524 in k4521 in chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4529,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4533 in k4524 in k4521 in chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4535,2,av);}
/* posixwin.scm:680: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
av2[3]=lf[251];
av2[4]=lf[330];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4545 in k4521 in chicken.posix#duplicate-fileno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4547,2,av);}
t2=((C_word*)t0)[2];
f_4526(t2,C_dup2(((C_word*)t0)[3],((C_word*)t0)[4]));}

/* chicken.time.posix#local-timezone-abbreviation in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4549,2,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1367(t2);
/* posixwin.scm:687: ##sys#peek-c-string */
t4=*((C_word*)lf[187]+1);{
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

/* loop in chicken.posix#quote-arg-string in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static C_word C_fcall f_4570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
if(C_truep(C_u_i_char_whitespacep(t3))){
return(C_SCHEME_TRUE);}
else{
t4=C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* chicken.posix#quote-arg-string in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4595(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4595,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_i_string_length(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4570,a[2]=t5,a[3]=t3,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t7=(
  f_4570(t6,C_fix(0))
);
if(C_truep(t7)){
/* posixwin.scm:721: scheme#string-append */
t8=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[332];
av2[3]=t2;
av2[4]=lf[333];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* chicken.process#process-execute in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,7)))){
C_save_and_reclaim((void*)f_4607,c,av);}
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
t16=(C_truep(t13)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp):lf[331]);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=t2,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:726: call-with-exec-args */
t18=lf[288];
f_3741(t18,t1,lf[334],t2,t16,t5,t9,t17);}

/* a4633 in chicken.process#process-execute in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4634(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4634,5,av);}
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixwin.scm:734: posix-error */
t8=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[93];
av2[3]=lf[334];
av2[4]=lf[335];
av2[5]=((C_word*)t0)[2];
f_2549(6,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* f_4648 in chicken.process#process-execute in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4648,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#process-spawn in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +11,c,3)))){
C_save_and_reclaim((void*)f_4687,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+11);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
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
t19=(C_truep(t16)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4731,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp):lf[331]);
t20=t19;
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4712,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t20,a[6]=t7,a[7]=t12,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:739: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t21;
av2[2]=t2;
av2[3]=lf[336];
tp(4,av2);}}

/* k4710 in chicken.process#process-spawn in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4712,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:740: call-with-exec-args */
t3=lf[288];
f_3741(t3,((C_word*)t0)[4],lf[336],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* a4716 in k4710 in chicken.process#process-spawn in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4717(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4717,5,av);}
a=C_alloc(4);
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_spawnvpe(((C_word*)t0)[2],t2,t3,t4):C_u_i_spawnvp(((C_word*)t0)[2],t2,t3));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4724,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_eqp(t7,C_fix(-1));
if(C_truep(t9)){
/* posixwin.scm:748: posix-error */
t10=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[93];
av2[3]=lf[336];
av2[4]=lf[337];
av2[5]=((C_word*)t0)[3];
f_2549(6,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k4722 in a4716 in k4710 in chicken.process#process-spawn in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4724,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4731 in chicken.process#process-spawn in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4731,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#shell-command in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4770(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4770,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4774,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:754: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[340]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[341];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4772 in chicken.posix#shell-command in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4774,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_mpointer(&a,(void*)C_shlcmd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:758: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
tp(2,av2);}}}}

/* k4784 in k4772 in chicken.posix#shell-command in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4786,2,av);}
/* posixwin.scm:759: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[339];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-run in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4797,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4801,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_4801(t6,C_u_i_car(t5));}
else{
t5=t4;
f_4801(t5,C_SCHEME_FALSE);}}

/* k4799 in chicken.process#process-run in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4801(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4801,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* posixwin.scm:768: chicken.process#process-spawn */
t2=*((C_word*)lf[113]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[130]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4814,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:772: shell-command */
f_4770(t2,lf[343]);}}

/* k4812 in k4799 in chicken.process#process-run in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4814,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_a_i_list2(&a,2,lf[342],t2);
/* posixwin.scm:770: chicken.process#process-spawn */
t4=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[130]+1);
av2[3]=t1;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4827 in k4951 in k4947 in k4943 in k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in ... */
static void C_ccall f_4829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4829,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[8]);
/* posixwin.scm:796: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4833(2,av2);}}}

/* k4831 in k4827 in k4951 in k4947 in k4943 in k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in ... */
static void C_ccall f_4833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4833,2,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[4])?C_i_foreign_pointer_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[5])?C_i_foreign_pointer_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t7=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t7;
av2[1]=stub1456(C_SCHEME_UNDEFINED,((C_word*)t0)[8],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4897(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,5)))){
C_save_and_reclaim((void *)f_4897,2,av);}
a=C_alloc(31);
t2=t1;
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=((*(int *)C_data_pointer(t3))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(1));
t6=((*(int *)C_data_pointer(t5))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t7=C_a_i_bytevector(&a,1,C_fix(1));
t8=((*(int *)C_data_pointer(t7))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t9=C_a_i_bytevector(&a,1,C_fix(1));
t10=((*(int *)C_data_pointer(t9))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t9,a[6]=t5,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4941,a[2]=((C_word*)t0)[3],a[3]=t11,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm:811: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t12;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4902 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4904,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:816: chicken.file.posix#open-input-file* */
t3=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[7])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:824: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k4912 in k4902 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4914,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:818: chicken.file.posix#open-output-file* */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4916 in k4912 in k4902 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4918,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:821: chicken.file.posix#open-input-file* */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* posixwin.scm:815: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4])));
av2[5]=C_SCHEME_FALSE;
C_values(6,av2);}}}

/* k4920 in k4916 in k4912 in k4902 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 in ... */
static void C_ccall f_4922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4922,2,av);}
/* posixwin.scm:815: scheme#values */{
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
av2[4]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[5]=t1;
C_values(6,av2);}}

/* k4932 in k4902 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4934,2,av);}
/* posixwin.scm:825: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[344];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_4941,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4943 in k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_4945,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4947 in k4943 in k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_4949,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm:812: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[345]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[345]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
tp(6,av2);}}

/* k4951 in k4947 in k4943 in k4939 in k4895 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 in ... */
static void C_ccall f_4953(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4953,2,av);}
a=C_alloc(9);
t2=(C_truep(((C_word*)t0)[2])?C_fix(0):C_fix(4));
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=t1;
t9=t2;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4829,a[2]=t5,a[3]=t6,a[4]=t7,a[5]=t8,a[6]=t9,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t11=C_i_foreign_string_argumentp(((C_word*)t0)[8]);
/* posixwin.scm:796: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[192]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[192]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_4829(2,av2);}}}

/* k4971 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_4973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4973,2,av);}
/* posixwin.scm:803: chicken.string#string-intersperse */
t2=*((C_word*)lf[347]+1);{
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

/* map-loop1501 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_4981(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4981,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5006,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posixwin.scm:806: g1507 */
t5=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5004 in map-loop1501 in a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5006,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4981(t6,((C_word*)t0)[5],t5);}

/* %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_5020(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_5020,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(29);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5022,a[2]=t2,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5063,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t3,a[6]=t10,a[7]=t1,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:836: chkstrlst */
t14=t11;
f_5022(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=((C_word*)t8)[1];
t16=C_a_i_list2(&a,2,lf[342],t15);
t17=C_set_block_item(t9,0,t16);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5102,a[2]=t8,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:840: shell-command */
f_4770(t18,t2);}}

/* chkstrlst in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5022,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5027,a[2]=((C_word*)t0)[2],a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5036,a[2]=t4,a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_5036(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g1578 in chkstrlst in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static C_word C_fcall f_5027(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop1577 in chkstrlst in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static C_word C_fcall f_5036(C_word t0,C_word t1){
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
  /* posixwin.scm:833: g1578 */
  f_5027(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5063,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:841: check-environment-list */
f_3692(t2,((C_word*)t0)[8],((C_word*)t0)[2]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5066(2,av2);}}}

/* k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_5066,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li119),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5077,a[2]=((C_word*)t0)[5],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:842: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5070 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5071(C_word c,C_word *av){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_5071,2,av);}
a=C_alloc(29);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=((C_word*)((C_word*)t0)[4])[1];
t6=((C_word*)t0)[5];
t7=C_a_i_list(&a,1,((C_word*)((C_word*)t0)[6])[1]);
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_i_car(t7));
t10=C_a_i_cons(&a,2,t4,t5);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4897,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4973,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t9)){
/* posixwin.scm:803: chicken.string#string-intersperse */
t13=*((C_word*)lf[347]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t11;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=lf[331];
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4981,a[2]=t15,a[3]=t19,a[4]=t17,a[5]=t16,a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp));
t21=((C_word*)t19)[1];
f_4981(t21,t12,t10);}}

/* a5076 in k5064 in k5061 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5077(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5077,6,av);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:845: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
C_values(6,av2);}}
else{
/* posixwin.scm:846: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* k5100 in %process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5102,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5063(2,av2);}}

/* chicken.process#process in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_5104,c,av);}
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
/* posixwin.scm:849: %process */
f_5020(t1,lf[348],C_SCHEME_FALSE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:849: %process */
f_5020(t1,lf[348],C_SCHEME_FALSE,t2,t5,t9,t13);}}

/* chicken.process#process* in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_5164,c,av);}
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
/* posixwin.scm:852: %process */
f_5020(t1,lf[349],C_SCHEME_TRUE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:852: %process */
f_5020(t1,lf[349],C_SCHEME_TRUE,t2,t5,t9,t13);}}

/* chicken.process-context.posix#current-user-name in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5236,2,av);}
a=C_alloc(3);
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[187]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_username);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5246,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:871: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[95]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k5244 in chicken.process-context.posix#current-user-name in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5246,2,av);}
/* posixwin.scm:872: ##sys#error */
t2=*((C_word*)lf[97]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[350];
av2[3]=lf[351];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#create-fifo in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5257,2,av);}
/* posixwin.scm:878: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#create-session in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5263,2,av);}
/* posixwin.scm:879: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[181];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#create-symbolic-link in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5269,2,av);}
/* posixwin.scm:880: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[5];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-group-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5275,2,av);}
/* posixwin.scm:881: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[173];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5281,2,av);}
/* posixwin.scm:882: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[174];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-name in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5287,2,av);}
/* posixwin.scm:883: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[180];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-group-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5293,2,av);}
/* posixwin.scm:884: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[175];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-user-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5299,2,av);}
/* posixwin.scm:885: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[176];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-control in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5305,2,av);}
/* posixwin.scm:887: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[14];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-link in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5311,2,av);}
/* posixwin.scm:888: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5317,2,av);}
/* posixwin.scm:889: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[18];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock/blocking in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5323,2,av);}
/* posixwin.scm:890: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[19];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-select in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5329,2,av);}
/* posixwin.scm:891: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[26];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-test-lock in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5335,2,av);}
/* posixwin.scm:892: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-truncate in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5341,2,av);}
/* posixwin.scm:893: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-unlock in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5347,2,av);}
/* posixwin.scm:894: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[29];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#parent-process-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5353,2,av);}
/* posixwin.scm:895: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[178];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-fork in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5359,2,av);}
/* posixwin.scm:896: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[110];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#process-group-id in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5365,2,av);}
/* posixwin.scm:897: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[182];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-signal in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5371,2,av);}
/* posixwin.scm:898: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[112];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#read-symbolic-link in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5377,2,av);}
/* posixwin.scm:899: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5383,2,av);}
/* posixwin.scm:900: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[134];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#set-root-directory! in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5389,2,av);}
/* posixwin.scm:901: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[172];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-signal-mask! in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5395,2,av);}
/* posixwin.scm:902: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[136];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5401,2,av);}
/* posixwin.scm:903: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[138];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask! in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5407,2,av);}
/* posixwin.scm:904: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[139];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-masked? in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5413,2,av);}
/* posixwin.scm:905: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[140];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-unmask! in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5419,2,av);}
/* posixwin.scm:906: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[141];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#user-information in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5425,2,av);}
/* posixwin.scm:907: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[183];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#utc-time->seconds in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5431,2,av);}
/* posixwin.scm:908: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[82];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#string->time in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5437,2,av);}
/* posixwin.scm:909: chicken.base#error */
t2=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[86];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5455,2,av);}
/* posix.scm:374: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[354]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[354]+1);
av2[1]=t1;
tp(2,av2);}}

/* a5499 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5500,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5504,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:605: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[394];
tp(4,av2);}}

/* k5502 in a5499 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5504,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(*((C_word*)lf[270]+1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5508 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,3)))){
C_save_and_reclaim((void*)f_5509,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
/* posix-common.scm:530: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[397];
tp(4,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_5516(2,av2);}}}

/* k5514 in a5508 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5516,2,av);}
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

/* a5533 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5534,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:535: ##sys#check-fixnum */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[203]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[397];
tp(4,av2);}}

/* k5536 in a5533 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5538,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_umask(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5539 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5540(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5540,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5544,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:371: chicken.base#port? */
t5=*((C_word*)lf[195]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5542 in a5539 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5544,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:380: posix-error */
t4=lf[185];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[190];
av2[3]=lf[399];
av2[4]=lf[400];
av2[5]=((C_word*)t0)[3];
f_2549(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5545 in k5542 in a5539 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5547,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5553 in a5539 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_5555,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[232]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_5544(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_5544(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5544(2,av2);}}
else{
/* posix-common.scm:378: ##sys#signal-hook */
t2=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[193];
av2[3]=lf[399];
av2[4]=lf[401];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a5575 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5576,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5580,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:296: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[201]);}

/* k5578 in a5575 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5580,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5581 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5582,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5586,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:289: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[404]);}

/* k5584 in a5581 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5586,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5587 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5588,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5592,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:283: stat */
f_2567(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[406]);}

/* k5590 in a5587 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5592,2,av);}
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
C_word t4;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2296))){
C_save(t1);
C_rereclaim2(2296*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,408);
lf[1]=C_decode_literal(C_heaptop,C_text("\376B\000\000/this function is not available on this platform"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_h_intern(&lf[3],19, C_text("chicken.file.posix#"));
lf[4]=C_h_intern(&lf[4],30, C_text("chicken.file.posix#create-fifo"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[6]=C_h_intern(&lf[6],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[13]=C_h_intern(&lf[13],29, C_text("chicken.file.posix#file-close"));
lf[14]=C_h_intern(&lf[14],31, C_text("chicken.file.posix#file-control"));
lf[15]=C_h_intern(&lf[15],37, C_text("chicken.file.posix#file-creation-mode"));
lf[16]=C_h_intern(&lf[16],29, C_text("chicken.file.posix#file-group"));
lf[17]=C_h_intern(&lf[17],28, C_text("chicken.file.posix#file-link"));
lf[18]=C_h_intern(&lf[18],28, C_text("chicken.file.posix#file-lock"));
lf[19]=C_h_intern(&lf[19],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[20]=C_h_intern(&lf[20],31, C_text("chicken.file.posix#file-mkstemp"));
lf[21]=C_h_intern(&lf[21],28, C_text("chicken.file.posix#file-open"));
lf[22]=C_h_intern(&lf[22],29, C_text("chicken.file.posix#file-owner"));
lf[23]=C_h_intern(&lf[23],35, C_text("chicken.file.posix#file-permissions"));
lf[24]=C_h_intern(&lf[24],32, C_text("chicken.file.posix#file-position"));
lf[25]=C_h_intern(&lf[25],28, C_text("chicken.file.posix#file-read"));
lf[26]=C_h_intern(&lf[26],30, C_text("chicken.file.posix#file-select"));
lf[27]=C_h_intern(&lf[27],33, C_text("chicken.file.posix#file-test-lock"));
lf[28]=C_h_intern(&lf[28],32, C_text("chicken.file.posix#file-truncate"));
lf[29]=C_h_intern(&lf[29],30, C_text("chicken.file.posix#file-unlock"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file.posix#file-write"));
lf[31]=C_h_intern(&lf[31],28, C_text("chicken.file.posix#file-type"));
lf[32]=C_h_intern(&lf[32],32, C_text("chicken.file.posix#block-device\077"));
lf[33]=C_h_intern(&lf[33],36, C_text("chicken.file.posix#character-device\077"));
lf[34]=C_h_intern(&lf[34],29, C_text("chicken.file.posix#directory\077"));
lf[35]=C_h_intern(&lf[35],24, C_text("chicken.file.posix#fifo\077"));
lf[36]=C_h_intern(&lf[36],32, C_text("chicken.file.posix#regular-file\077"));
lf[37]=C_h_intern(&lf[37],26, C_text("chicken.file.posix#socket\077"));
lf[38]=C_h_intern(&lf[38],33, C_text("chicken.file.posix#symbolic-link\077"));
lf[39]=C_h_intern(&lf[39],32, C_text("chicken.file.posix#fileno/stderr"));
lf[40]=C_h_intern(&lf[40],31, C_text("chicken.file.posix#fileno/stdin"));
lf[41]=C_h_intern(&lf[41],32, C_text("chicken.file.posix#fileno/stdout"));
lf[42]=C_h_intern(&lf[42],35, C_text("chicken.file.posix#open-input-file\052"));
lf[43]=C_h_intern(&lf[43],36, C_text("chicken.file.posix#open-output-file\052"));
lf[44]=C_h_intern(&lf[44],30, C_text("chicken.file.posix#open/append"));
lf[45]=C_h_intern(&lf[45],30, C_text("chicken.file.posix#open/binary"));
lf[46]=C_h_intern(&lf[46],29, C_text("chicken.file.posix#open/creat"));
lf[47]=C_h_intern(&lf[47],28, C_text("chicken.file.posix#open/excl"));
lf[48]=C_h_intern(&lf[48],29, C_text("chicken.file.posix#open/fsync"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.file.posix#open/noctty"));
lf[50]=C_h_intern(&lf[50],33, C_text("chicken.file.posix#open/noinherit"));
lf[51]=C_h_intern(&lf[51],32, C_text("chicken.file.posix#open/nonblock"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.file.posix#open/rdonly"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/rdwr"));
lf[54]=C_h_intern(&lf[54],28, C_text("chicken.file.posix#open/read"));
lf[55]=C_h_intern(&lf[55],28, C_text("chicken.file.posix#open/sync"));
lf[56]=C_h_intern(&lf[56],28, C_text("chicken.file.posix#open/text"));
lf[57]=C_h_intern(&lf[57],29, C_text("chicken.file.posix#open/trunc"));
lf[58]=C_h_intern(&lf[58],29, C_text("chicken.file.posix#open/write"));
lf[59]=C_h_intern(&lf[59],30, C_text("chicken.file.posix#open/wronly"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/irgrp"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/iroth"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irusr"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/irwxg"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/irwxo"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/irwxu"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/isgid"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/isuid"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/isvtx"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/iwoth"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/iwusr"));
lf[72]=C_h_intern(&lf[72],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.file.posix#perm/ixoth"));
lf[74]=C_h_intern(&lf[74],29, C_text("chicken.file.posix#perm/ixusr"));
lf[75]=C_h_intern(&lf[75],31, C_text("chicken.file.posix#port->fileno"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.file.posix#seek/cur"));
lf[77]=C_h_intern(&lf[77],27, C_text("chicken.file.posix#seek/end"));
lf[78]=C_h_intern(&lf[78],27, C_text("chicken.file.posix#seek/set"));
lf[79]=C_h_intern(&lf[79],37, C_text("chicken.file.posix#set-file-position!"));
lf[80]=C_h_intern(&lf[80],19, C_text("chicken.time.posix#"));
lf[81]=C_h_intern(&lf[81],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[82]=C_h_intern(&lf[82],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[83]=C_h_intern(&lf[83],38, C_text("chicken.time.posix#seconds->local-time"));
lf[84]=C_h_intern(&lf[84],34, C_text("chicken.time.posix#seconds->string"));
lf[85]=C_h_intern(&lf[85],38, C_text("chicken.time.posix#local-time->seconds"));
lf[86]=C_h_intern(&lf[86],31, C_text("chicken.time.posix#string->time"));
lf[87]=C_h_intern(&lf[87],31, C_text("chicken.time.posix#time->string"));
lf[88]=C_h_intern(&lf[88],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[89]=C_h_intern(&lf[89],16, C_text("chicken.process#"));
lf[90]=C_h_intern(&lf[90],22, C_text("chicken.process#system"));
lf[91]=C_h_intern(&lf[91],6, C_text("system"));
lf[92]=C_h_intern(&lf[92],15, C_text("\003syssignal-hook"));
lf[93]=C_h_intern(&lf[93],14, C_text("\000process-error"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032`system\047 invocation failed"));
lf[95]=C_h_intern(&lf[95],16, C_text("\003sysupdate-errno"));
lf[96]=C_h_intern(&lf[96],23, C_text("chicken.process#system\052"));
lf[97]=C_h_intern(&lf[97],9, C_text("\003syserror"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\0003shell invocation failed with non-zero return status"));
lf[99]=C_h_intern(&lf[99],18, C_text("chicken.process#qs"));
lf[100]=C_h_intern(&lf[100],7, C_text("mingw32"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\042\042"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047\134\047\047"));
lf[103]=C_h_intern(&lf[103],18, C_text("chicken.base#error"));
lf[104]=C_h_intern(&lf[104],2, C_text("qs"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\0004NUL character can not be represented in shell string"));
lf[106]=C_h_intern(&lf[106],20, C_text("scheme#string-append"));
lf[107]=C_h_intern(&lf[107],16, C_text("\003sysstring->list"));
lf[108]=C_h_intern(&lf[108],33, C_text("chicken.platform#software-version"));
lf[109]=C_h_intern(&lf[109],31, C_text("chicken.process#process-execute"));
lf[110]=C_h_intern(&lf[110],28, C_text("chicken.process#process-fork"));
lf[111]=C_h_intern(&lf[111],27, C_text("chicken.process#process-run"));
lf[112]=C_h_intern(&lf[112],30, C_text("chicken.process#process-signal"));
lf[113]=C_h_intern(&lf[113],29, C_text("chicken.process#process-spawn"));
lf[114]=C_h_intern(&lf[114],28, C_text("chicken.process#process-wait"));
lf[115]=C_h_intern(&lf[115],36, C_text("chicken.process#call-with-input-pipe"));
lf[116]=C_h_intern(&lf[116],37, C_text("chicken.process#call-with-output-pipe"));
lf[117]=C_h_intern(&lf[117],32, C_text("chicken.process#close-input-pipe"));
lf[118]=C_h_intern(&lf[118],33, C_text("chicken.process#close-output-pipe"));
lf[119]=C_h_intern(&lf[119],27, C_text("chicken.process#create-pipe"));
lf[120]=C_h_intern(&lf[120],31, C_text("chicken.process#open-input-pipe"));
lf[121]=C_h_intern(&lf[121],32, C_text("chicken.process#open-output-pipe"));
lf[122]=C_h_intern(&lf[122],36, C_text("chicken.process#with-input-from-pipe"));
lf[123]=C_h_intern(&lf[123],35, C_text("chicken.process#with-output-to-pipe"));
lf[124]=C_h_intern(&lf[124],23, C_text("chicken.process#process"));
lf[125]=C_h_intern(&lf[125],24, C_text("chicken.process#process\052"));
lf[126]=C_h_intern(&lf[126],29, C_text("chicken.process#process-sleep"));
lf[127]=C_h_intern(&lf[127],24, C_text("chicken.process#pipe/buf"));
lf[128]=C_h_intern(&lf[128],29, C_text("chicken.process#spawn/overlay"));
lf[129]=C_h_intern(&lf[129],26, C_text("chicken.process#spawn/wait"));
lf[130]=C_h_intern(&lf[130],28, C_text("chicken.process#spawn/nowait"));
lf[131]=C_h_intern(&lf[131],29, C_text("chicken.process#spawn/nowaito"));
lf[132]=C_h_intern(&lf[132],28, C_text("chicken.process#spawn/detach"));
lf[133]=C_h_intern(&lf[133],23, C_text("chicken.process.signal#"));
lf[134]=C_h_intern(&lf[134],33, C_text("chicken.process.signal#set-alarm!"));
lf[135]=C_h_intern(&lf[135],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[136]=C_h_intern(&lf[136],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[137]=C_h_intern(&lf[137],37, C_text("chicken.process.signal#signal-handler"));
lf[138]=C_h_intern(&lf[138],34, C_text("chicken.process.signal#signal-mask"));
lf[139]=C_h_intern(&lf[139],35, C_text("chicken.process.signal#signal-mask!"));
lf[140]=C_h_intern(&lf[140],37, C_text("chicken.process.signal#signal-masked\077"));
lf[141]=C_h_intern(&lf[141],37, C_text("chicken.process.signal#signal-unmask!"));
lf[142]=C_h_intern(&lf[142],34, C_text("chicken.process.signal#signal/abrt"));
lf[143]=C_h_intern(&lf[143],34, C_text("chicken.process.signal#signal/alrm"));
lf[144]=C_h_intern(&lf[144],35, C_text("chicken.process.signal#signal/break"));
lf[145]=C_h_intern(&lf[145],33, C_text("chicken.process.signal#signal/bus"));
lf[146]=C_h_intern(&lf[146],34, C_text("chicken.process.signal#signal/chld"));
lf[147]=C_h_intern(&lf[147],34, C_text("chicken.process.signal#signal/cont"));
lf[148]=C_h_intern(&lf[148],33, C_text("chicken.process.signal#signal/fpe"));
lf[149]=C_h_intern(&lf[149],33, C_text("chicken.process.signal#signal/hup"));
lf[150]=C_h_intern(&lf[150],33, C_text("chicken.process.signal#signal/ill"));
lf[151]=C_h_intern(&lf[151],33, C_text("chicken.process.signal#signal/int"));
lf[152]=C_h_intern(&lf[152],32, C_text("chicken.process.signal#signal/io"));
lf[153]=C_h_intern(&lf[153],34, C_text("chicken.process.signal#signal/kill"));
lf[154]=C_h_intern(&lf[154],34, C_text("chicken.process.signal#signal/pipe"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.process.signal#signal/prof"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.process.signal#signal/quit"));
lf[157]=C_h_intern(&lf[157],34, C_text("chicken.process.signal#signal/segv"));
lf[158]=C_h_intern(&lf[158],34, C_text("chicken.process.signal#signal/stop"));
lf[159]=C_h_intern(&lf[159],34, C_text("chicken.process.signal#signal/term"));
lf[160]=C_h_intern(&lf[160],34, C_text("chicken.process.signal#signal/trap"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.process.signal#signal/tstp"));
lf[162]=C_h_intern(&lf[162],33, C_text("chicken.process.signal#signal/urg"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.process.signal#signal/usr1"));
lf[164]=C_h_intern(&lf[164],34, C_text("chicken.process.signal#signal/usr2"));
lf[165]=C_h_intern(&lf[165],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[166]=C_h_intern(&lf[166],35, C_text("chicken.process.signal#signal/winch"));
lf[167]=C_h_intern(&lf[167],34, C_text("chicken.process.signal#signal/xcpu"));
lf[168]=C_h_intern(&lf[168],34, C_text("chicken.process.signal#signal/xfsz"));
lf[169]=C_h_intern(&lf[169],35, C_text("chicken.process.signal#signals-list"));
lf[170]=C_h_intern(&lf[170],30, C_text("chicken.process-context.posix#"));
lf[171]=C_h_intern(&lf[171],47, C_text("chicken.process-context.posix#change-directory\052"));
lf[172]=C_h_intern(&lf[172],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[173]=C_h_intern(&lf[173],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[174]=C_h_intern(&lf[174],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[175]=C_h_intern(&lf[175],46, C_text("chicken.process-context.posix#current-group-id"));
lf[176]=C_h_intern(&lf[176],45, C_text("chicken.process-context.posix#current-user-id"));
lf[177]=C_h_intern(&lf[177],48, C_text("chicken.process-context.posix#current-process-id"));
lf[178]=C_h_intern(&lf[178],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[179]=C_h_intern(&lf[179],47, C_text("chicken.process-context.posix#current-user-name"));
lf[180]=C_h_intern(&lf[180],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[181]=C_h_intern(&lf[181],44, C_text("chicken.process-context.posix#create-session"));
lf[182]=C_h_intern(&lf[182],46, C_text("chicken.process-context.posix#process-group-id"));
lf[183]=C_h_intern(&lf[183],46, C_text("chicken.process-context.posix#user-information"));
lf[184]=C_h_intern(&lf[184],14, C_text("chicken.posix#"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[187]=C_h_intern(&lf[187],17, C_text("\003syspeek-c-string"));
lf[188]=C_h_intern(&lf[188],15, C_text("\003sysposix-error"));
lf[190]=C_h_intern(&lf[190],11, C_text("\000file-error"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[192]=C_h_intern(&lf[192],17, C_text("\003sysmake-c-string"));
lf[193]=C_h_intern(&lf[193],11, C_text("\000type-error"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[195]=C_h_intern(&lf[195],18, C_text("chicken.base#port\077"));
lf[196]=C_h_intern(&lf[196],28, C_text("chicken.file.posix#file-stat"));
lf[197]=C_h_intern(&lf[197],9, C_text("file-stat"));
lf[198]=C_h_intern(&lf[198],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[199]=C_h_intern(&lf[199],21, C_text("set-file-permissions!"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376B\000\000\036cannot change file permissions"));
lf[201]=C_h_intern(&lf[201],16, C_text("file-permissions"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\0000bad argument type - not a fixnum, port or string"));
lf[203]=C_h_intern(&lf[203],16, C_text("\003syscheck-fixnum"));
lf[204]=C_h_intern(&lf[204],41, C_text("chicken.file.posix#file-modification-time"));
lf[205]=C_h_intern(&lf[205],22, C_text("file-modification-time"));
lf[206]=C_h_intern(&lf[206],35, C_text("chicken.file.posix#file-access-time"));
lf[207]=C_h_intern(&lf[207],16, C_text("file-access-time"));
lf[208]=C_h_intern(&lf[208],35, C_text("chicken.file.posix#file-change-time"));
lf[209]=C_h_intern(&lf[209],16, C_text("file-change-time"));
lf[210]=C_h_intern(&lf[210],34, C_text("chicken.file.posix#set-file-times!"));
lf[211]=C_h_intern(&lf[211],15, C_text("set-file-times!"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot set file times"));
lf[213]=C_h_intern(&lf[213],23, C_text("\003syscheck-exact-integer"));
lf[214]=C_h_intern(&lf[214],28, C_text("chicken.time#current-seconds"));
lf[215]=C_h_intern(&lf[215],28, C_text("chicken.file.posix#file-size"));
lf[216]=C_h_intern(&lf[216],9, C_text("file-size"));
lf[217]=C_h_intern(&lf[217],34, C_text("chicken.file.posix#set-file-owner!"));
lf[218]=C_h_intern(&lf[218],15, C_text("set-file-owner!"));
lf[219]=C_h_intern(&lf[219],5, C_text("chown"));
lf[220]=C_h_intern(&lf[220],34, C_text("chicken.file.posix#set-file-group!"));
lf[221]=C_h_intern(&lf[221],15, C_text("set-file-group!"));
lf[222]=C_h_intern(&lf[222],12, C_text("regular-file"));
lf[223]=C_h_intern(&lf[223],13, C_text("symbolic-link"));
lf[224]=C_h_intern(&lf[224],9, C_text("directory"));
lf[225]=C_h_intern(&lf[225],16, C_text("character-device"));
lf[226]=C_h_intern(&lf[226],12, C_text("block-device"));
lf[227]=C_h_intern(&lf[227],4, C_text("fifo"));
lf[228]=C_h_intern(&lf[228],6, C_text("socket"));
lf[229]=C_h_intern(&lf[229],9, C_text("file-type"));
lf[230]=C_h_intern(&lf[230],18, C_text("set-file-position!"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030cannot set file position"));
lf[232]=C_h_intern(&lf[232],6, C_text("stream"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[234]=C_h_intern(&lf[234],7, C_text("\000append"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001a"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033invalid mode for input file"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025invalid mode argument"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001r"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001w"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[241]=C_h_intern(&lf[241],13, C_text("\003sysmake-port"));
lf[242]=C_h_intern(&lf[242],21, C_text("\003sysstream-port-class"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010(fdport)"));
lf[244]=C_h_intern(&lf[244],16, C_text("open-input-file\052"));
lf[245]=C_h_intern(&lf[245],17, C_text("open-output-file\052"));
lf[246]=C_h_intern(&lf[246],12, C_text("port->fileno"));
lf[247]=C_h_intern(&lf[247],13, C_text("\003sysport-data"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot access file-descriptor of port"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376B\000\000\031port has no attached file"));
lf[250]=C_h_intern(&lf[250],25, C_text("\003syspeek-unsigned-integer"));
lf[251]=C_h_intern(&lf[251],16, C_text("duplicate-fileno"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file-descriptor"));
lf[253]=C_h_intern(&lf[253],17, C_text("change-directory\052"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376B\000\000\037cannot change current directory"));
lf[255]=C_h_intern(&lf[255],25, C_text("\003syschange-directory-hook"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025time vector too short"));
lf[259]=C_h_intern(&lf[259],19, C_text("seconds->local-time"));
lf[260]=C_h_intern(&lf[260],17, C_text("seconds->utc-time"));
lf[261]=C_h_intern(&lf[261],13, C_text("\003syssubstring"));
lf[262]=C_h_intern(&lf[262],15, C_text("seconds->string"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot convert seconds to string"));
lf[264]=C_h_intern(&lf[264],19, C_text("local-time->seconds"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot convert time vector to seconds"));
lf[266]=C_h_intern(&lf[266],15, C_text("\003sysmake-string"));
lf[267]=C_h_intern(&lf[267],12, C_text("time->string"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376B\000\000 time formatting overflows buffer"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot convert time vector to string"));
lf[270]=C_h_intern(&lf[270],17, C_text("\003syssignal-vector"));
lf[271]=C_h_intern(&lf[271],19, C_text("set-signal-handler!"));
lf[272]=C_h_intern(&lf[272],13, C_text("process-sleep"));
lf[273]=C_h_intern(&lf[273],12, C_text("process-wait"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376B\000\000 waiting for child process failed"));
lf[276]=C_h_intern(&lf[276],24, C_text("chicken.condition#signal"));
lf[278]=C_h_intern(&lf[278],34, C_text("chicken.memory#pointer-vector-set!"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015Out of memory"));
lf[280]=C_h_intern(&lf[280],40, C_text("chicken.condition#with-exception-handler"));
lf[281]=C_h_intern(&lf[281],37, C_text("scheme#call-with-current-continuation"));
lf[282]=C_h_intern(&lf[282],34, C_text("chicken.memory#make-pointer-vector"));
lf[283]=C_h_intern(&lf[283],19, C_text("chicken.memory#free"));
lf[284]=C_h_intern(&lf[284],33, C_text("chicken.memory#pointer-vector-ref"));
lf[285]=C_h_intern(&lf[285],36, C_text("chicken.memory#pointer-vector-length"));
lf[287]=C_h_intern(&lf[287],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[289]=C_h_intern(&lf[289],3, C_text("map"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001="));
lf[291]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open pipe"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006(pipe)"));
lf[293]=C_h_intern(&lf[293],15, C_text("open-input-pipe"));
lf[294]=C_h_intern(&lf[294],5, C_text("\000text"));
lf[295]=C_h_intern(&lf[295],7, C_text("\000binary"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376B\000\000#illegal input/output mode specifier"));
lf[297]=C_h_intern(&lf[297],16, C_text("open-output-pipe"));
lf[298]=C_h_intern(&lf[298],16, C_text("close-input-pipe"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[300]=C_h_intern(&lf[300],17, C_text("close-output-pipe"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376B\000\000\030error while closing pipe"));
lf[302]=C_h_intern(&lf[302],18, C_text("\003sysstandard-input"));
lf[303]=C_h_intern(&lf[303],13, C_text("scheme#values"));
lf[304]=C_h_intern(&lf[304],16, C_text("\003sysdynamic-wind"));
lf[305]=C_h_intern(&lf[305],19, C_text("\003sysstandard-output"));
lf[306]=C_h_intern(&lf[306],9, C_text("file-open"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020cannot open file"));
lf[308]=C_h_intern(&lf[308],22, C_text("\003sysdispatch-interrupt"));
lf[309]=C_h_intern(&lf[309],10, C_text("file-close"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021cannot close file"));
lf[311]=C_h_intern(&lf[311],9, C_text("file-read"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot read from file"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[314]=C_h_intern(&lf[314],18, C_text("scheme#make-string"));
lf[315]=C_h_intern(&lf[315],10, C_text("file-write"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot write to file"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376B\000\000(bad argument type - not a string or blob"));
lf[318]=C_h_intern(&lf[318],12, C_text("file-mkstemp"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376B\000\000$0123456789abcdefghijklmnopqrstuvwxyz"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376B\000\000\034cannot create temporary file"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026non-existent directory"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020invalid template"));
lf[323]=C_h_intern(&lf[323],16, C_text("\003sysfile-exists\077"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[325]=C_h_intern(&lf[325],35, C_text("chicken.pathname#pathname-directory"));
lf[326]=C_h_intern(&lf[326],18, C_text("scheme#string-copy"));
lf[327]=C_h_intern(&lf[327],11, C_text("create-pipe"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot create pipe"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot duplicate file descriptor"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[334]=C_h_intern(&lf[334],15, C_text("process-execute"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[336]=C_h_intern(&lf[336],13, C_text("process-spawn"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024cannot spawn process"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376B\000\000 cannot retrieve system directory"));
lf[340]=C_h_intern(&lf[340],48, C_text("chicken.process-context#get-environment-variable"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007COMSPEC"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002/c"));
lf[343]=C_h_intern(&lf[343],11, C_text("process-run"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376B\000\000\026cannot execute process"));
lf[345]=C_h_intern(&lf[345],17, C_text("\003sysmake-locative"));
lf[346]=C_h_intern(&lf[346],8, C_text("location"));
lf[347]=C_h_intern(&lf[347],33, C_text("chicken.string#string-intersperse"));
lf[348]=C_h_intern(&lf[348],7, C_text("process"));
lf[349]=C_h_intern(&lf[349],8, C_text("process\052"));
lf[350]=C_h_intern(&lf[350],17, C_text("current-user-name"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376B\000\000!cannot retrieve current user-name"));
lf[352]=C_h_intern(&lf[352],14, C_text("chicken.errno#"));
lf[353]=C_h_intern(&lf[353],19, C_text("chicken.errno#errno"));
lf[354]=C_h_intern(&lf[354],9, C_text("\003syserrno"));
lf[355]=C_h_intern(&lf[355],24, C_text("chicken.errno#errno/2big"));
lf[356]=C_h_intern(&lf[356],25, C_text("chicken.errno#errno/acces"));
lf[357]=C_h_intern(&lf[357],25, C_text("chicken.errno#errno/again"));
lf[358]=C_h_intern(&lf[358],24, C_text("chicken.errno#errno/badf"));
lf[359]=C_h_intern(&lf[359],24, C_text("chicken.errno#errno/busy"));
lf[360]=C_h_intern(&lf[360],25, C_text("chicken.errno#errno/child"));
lf[361]=C_h_intern(&lf[361],26, C_text("chicken.errno#errno/deadlk"));
lf[362]=C_h_intern(&lf[362],23, C_text("chicken.errno#errno/dom"));
lf[363]=C_h_intern(&lf[363],25, C_text("chicken.errno#errno/exist"));
lf[364]=C_h_intern(&lf[364],25, C_text("chicken.errno#errno/fault"));
lf[365]=C_h_intern(&lf[365],24, C_text("chicken.errno#errno/fbig"));
lf[366]=C_h_intern(&lf[366],25, C_text("chicken.errno#errno/ilseq"));
lf[367]=C_h_intern(&lf[367],24, C_text("chicken.errno#errno/intr"));
lf[368]=C_h_intern(&lf[368],25, C_text("chicken.errno#errno/inval"));
lf[369]=C_h_intern(&lf[369],22, C_text("chicken.errno#errno/io"));
lf[370]=C_h_intern(&lf[370],25, C_text("chicken.errno#errno/isdir"));
lf[371]=C_h_intern(&lf[371],25, C_text("chicken.errno#errno/mfile"));
lf[372]=C_h_intern(&lf[372],25, C_text("chicken.errno#errno/mlink"));
lf[373]=C_h_intern(&lf[373],31, C_text("chicken.errno#errno/nametoolong"));
lf[374]=C_h_intern(&lf[374],25, C_text("chicken.errno#errno/nfile"));
lf[375]=C_h_intern(&lf[375],25, C_text("chicken.errno#errno/nodev"));
lf[376]=C_h_intern(&lf[376],25, C_text("chicken.errno#errno/noent"));
lf[377]=C_h_intern(&lf[377],26, C_text("chicken.errno#errno/noexec"));
lf[378]=C_h_intern(&lf[378],25, C_text("chicken.errno#errno/nolck"));
lf[379]=C_h_intern(&lf[379],25, C_text("chicken.errno#errno/nomem"));
lf[380]=C_h_intern(&lf[380],25, C_text("chicken.errno#errno/nospc"));
lf[381]=C_h_intern(&lf[381],25, C_text("chicken.errno#errno/nosys"));
lf[382]=C_h_intern(&lf[382],26, C_text("chicken.errno#errno/notdir"));
lf[383]=C_h_intern(&lf[383],28, C_text("chicken.errno#errno/notempty"));
lf[384]=C_h_intern(&lf[384],25, C_text("chicken.errno#errno/notty"));
lf[385]=C_h_intern(&lf[385],24, C_text("chicken.errno#errno/nxio"));
lf[386]=C_h_intern(&lf[386],24, C_text("chicken.errno#errno/perm"));
lf[387]=C_h_intern(&lf[387],24, C_text("chicken.errno#errno/pipe"));
lf[388]=C_h_intern(&lf[388],25, C_text("chicken.errno#errno/range"));
lf[389]=C_h_intern(&lf[389],24, C_text("chicken.errno#errno/rofs"));
lf[390]=C_h_intern(&lf[390],25, C_text("chicken.errno#errno/spipe"));
lf[391]=C_h_intern(&lf[391],24, C_text("chicken.errno#errno/srch"));
lf[392]=C_h_intern(&lf[392],30, C_text("chicken.errno#errno/wouldblock"));
lf[393]=C_h_intern(&lf[393],24, C_text("chicken.errno#errno/xdev"));
lf[394]=C_h_intern(&lf[394],14, C_text("signal-handler"));
lf[395]=C_h_intern(&lf[395],31, C_text("chicken.base#getter-with-setter"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376B\000\000+(chicken.process.signal#signal-handler sig)"));
lf[397]=C_h_intern(&lf[397],18, C_text("file-creation-mode"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376B\000\000,(chicken.file.posix#file-creation-mode mode)"));
lf[399]=C_h_intern(&lf[399],13, C_text("file-position"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376B\000\000%cannot retrieve file position of port"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014invalid file"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-position port)"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047(chicken.file.posix#file-permissions f)"));
lf[404]=C_h_intern(&lf[404],10, C_text("file-group"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-group f)"));
lf[406]=C_h_intern(&lf[406],10, C_text("file-owner"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376B\000\000!(chicken.file.posix#file-owner f)"));
C_register_lf2(lf,408,create_ptable());{}
t2=C_mutate(&lf[0] /* (set! c1657 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2224,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_scheduler_toplevel(2,av2);}}

/* va6064 in k4331 in loop in k4318 in k4315 in k4309 */
static void C_fcall va6064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trva6064,2,t0,t1);}
a=C_alloc(5);
t2=C_s_a_i_bitwise_ior(&a,2,t1,*((C_word*)lf[47]+1));
t3=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IWRITE));
t4=C_open(((C_word*)t0)[2],t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
if(C_truep(C_fixnum_lessp(((C_word*)t0)[3],((C_word*)t0)[4]))){
t6=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm:602: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_4325(t7,((C_word*)t0)[6],t6);}
else{
/* posixwin.scm:603: posix-error */
t6=lf[185];{
C_word av2[6];
av2[0]=t6;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[190];
av2[3]=lf[318];
av2[4]=lf[320];
av2[5]=((C_word*)t0)[7];
f_2549(6,av2);}}}
else{
/* posixwin.scm:604: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
av2[3]=((C_word*)t0)[8];
C_values(4,av2);}}}

/* va6072 in chicken.file.posix#file-mkstemp in k3460 in k3226 in k3009 in k2798 in k2794 in k2790 in k2240 in k2237 in k2234 in k2231 in k2228 in k2225 in k2222 */
static void C_fcall va6072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(40,0,2)))){
C_save_and_reclaim_args((void *)trva6072,2,t0,t1);}
a=C_alloc(40);
t2=C_s_a_i_times(&a,2,t1,((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:574: scheme#string-copy */
t5=*((C_word*)lf[326]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[359] = {
{C_text("f_2224:posix_2escm"),(void*)f_2224},
{C_text("f_2227:posix_2escm"),(void*)f_2227},
{C_text("f_2230:posix_2escm"),(void*)f_2230},
{C_text("f_2233:posix_2escm"),(void*)f_2233},
{C_text("f_2236:posix_2escm"),(void*)f_2236},
{C_text("f_2239:posix_2escm"),(void*)f_2239},
{C_text("f_2242:posix_2escm"),(void*)f_2242},
{C_text("f_2328:posix_2escm"),(void*)f_2328},
{C_text("f_2341:posix_2escm"),(void*)f_2341},
{C_text("f_2346:posix_2escm"),(void*)f_2346},
{C_text("f_2350:posix_2escm"),(void*)f_2350},
{C_text("f_2362:posix_2escm"),(void*)f_2362},
{C_text("f_2366:posix_2escm"),(void*)f_2366},
{C_text("f_2376:posix_2escm"),(void*)f_2376},
{C_text("f_2397:posix_2escm"),(void*)f_2397},
{C_text("f_2400:posix_2escm"),(void*)f_2400},
{C_text("f_2411:posix_2escm"),(void*)f_2411},
{C_text("f_2417:posix_2escm"),(void*)f_2417},
{C_text("f_2442:posix_2escm"),(void*)f_2442},
{C_text("f_2549:posix_2escm"),(void*)f_2549},
{C_text("f_2553:posix_2escm"),(void*)f_2553},
{C_text("f_2560:posix_2escm"),(void*)f_2560},
{C_text("f_2564:posix_2escm"),(void*)f_2564},
{C_text("f_2567:posix_2escm"),(void*)f_2567},
{C_text("f_2571:posix_2escm"),(void*)f_2571},
{C_text("f_2592:posix_2escm"),(void*)f_2592},
{C_text("f_2596:posix_2escm"),(void*)f_2596},
{C_text("f_2605:posix_2escm"),(void*)f_2605},
{C_text("f_2613:posix_2escm"),(void*)f_2613},
{C_text("f_2620:posix_2escm"),(void*)f_2620},
{C_text("f_2631:posix_2escm"),(void*)f_2631},
{C_text("f_2635:posix_2escm"),(void*)f_2635},
{C_text("f_2638:posix_2escm"),(void*)f_2638},
{C_text("f_2656:posix_2escm"),(void*)f_2656},
{C_text("f_2660:posix_2escm"),(void*)f_2660},
{C_text("f_2670:posix_2escm"),(void*)f_2670},
{C_text("f_2675:posix_2escm"),(void*)f_2675},
{C_text("f_2679:posix_2escm"),(void*)f_2679},
{C_text("f_2681:posix_2escm"),(void*)f_2681},
{C_text("f_2685:posix_2escm"),(void*)f_2685},
{C_text("f_2687:posix_2escm"),(void*)f_2687},
{C_text("f_2691:posix_2escm"),(void*)f_2691},
{C_text("f_2693:posix_2escm"),(void*)f_2693},
{C_text("f_2697:posix_2escm"),(void*)f_2697},
{C_text("f_2709:posix_2escm"),(void*)f_2709},
{C_text("f_2712:posix_2escm"),(void*)f_2712},
{C_text("f_2718:posix_2escm"),(void*)f_2718},
{C_text("f_2728:posix_2escm"),(void*)f_2728},
{C_text("f_2772:posix_2escm"),(void*)f_2772},
{C_text("f_2776:posix_2escm"),(void*)f_2776},
{C_text("f_2778:posix_2escm"),(void*)f_2778},
{C_text("f_2784:posix_2escm"),(void*)f_2784},
{C_text("f_2792:posix_2escm"),(void*)f_2792},
{C_text("f_2796:posix_2escm"),(void*)f_2796},
{C_text("f_2800:posix_2escm"),(void*)f_2800},
{C_text("f_2802:posix_2escm"),(void*)f_2802},
{C_text("f_2821:posix_2escm"),(void*)f_2821},
{C_text("f_2889:posix_2escm"),(void*)f_2889},
{C_text("f_2897:posix_2escm"),(void*)f_2897},
{C_text("f_2899:posix_2escm"),(void*)f_2899},
{C_text("f_2907:posix_2escm"),(void*)f_2907},
{C_text("f_2909:posix_2escm"),(void*)f_2909},
{C_text("f_2917:posix_2escm"),(void*)f_2917},
{C_text("f_2919:posix_2escm"),(void*)f_2919},
{C_text("f_2927:posix_2escm"),(void*)f_2927},
{C_text("f_2929:posix_2escm"),(void*)f_2929},
{C_text("f_2937:posix_2escm"),(void*)f_2937},
{C_text("f_2939:posix_2escm"),(void*)f_2939},
{C_text("f_2947:posix_2escm"),(void*)f_2947},
{C_text("f_2949:posix_2escm"),(void*)f_2949},
{C_text("f_2957:posix_2escm"),(void*)f_2957},
{C_text("f_2962:posix_2escm"),(void*)f_2962},
{C_text("f_2966:posix_2escm"),(void*)f_2966},
{C_text("f_2969:posix_2escm"),(void*)f_2969},
{C_text("f_2972:posix_2escm"),(void*)f_2972},
{C_text("f_2978:posix_2escm"),(void*)f_2978},
{C_text("f_2984:posix_2escm"),(void*)f_2984},
{C_text("f_3011:posix_2escm"),(void*)f_3011},
{C_text("f_3039:posix_2escm"),(void*)f_3039},
{C_text("f_3047:posix_2escm"),(void*)f_3047},
{C_text("f_3076:posix_2escm"),(void*)f_3076},
{C_text("f_3089:posix_2escm"),(void*)f_3089},
{C_text("f_3095:posix_2escm"),(void*)f_3095},
{C_text("f_3099:posix_2escm"),(void*)f_3099},
{C_text("f_3107:posix_2escm"),(void*)f_3107},
{C_text("f_3109:posix_2escm"),(void*)f_3109},
{C_text("f_3113:posix_2escm"),(void*)f_3113},
{C_text("f_3121:posix_2escm"),(void*)f_3121},
{C_text("f_3123:posix_2escm"),(void*)f_3123},
{C_text("f_3139:posix_2escm"),(void*)f_3139},
{C_text("f_3148:posix_2escm"),(void*)f_3148},
{C_text("f_3162:posix_2escm"),(void*)f_3162},
{C_text("f_3168:posix_2escm"),(void*)f_3168},
{C_text("f_3172:posix_2escm"),(void*)f_3172},
{C_text("f_3175:posix_2escm"),(void*)f_3175},
{C_text("f_3178:posix_2escm"),(void*)f_3178},
{C_text("f_3193:posix_2escm"),(void*)f_3193},
{C_text("f_3195:posix_2escm"),(void*)f_3195},
{C_text("f_3198:posix_2escm"),(void*)f_3198},
{C_text("f_3202:posix_2escm"),(void*)f_3202},
{C_text("f_3205:posix_2escm"),(void*)f_3205},
{C_text("f_3214:posix_2escm"),(void*)f_3214},
{C_text("f_3228:posix_2escm"),(void*)f_3228},
{C_text("f_3231:posix_2escm"),(void*)f_3231},
{C_text("f_3250:posix_2escm"),(void*)f_3250},
{C_text("f_3254:posix_2escm"),(void*)f_3254},
{C_text("f_3257:posix_2escm"),(void*)f_3257},
{C_text("f_3271:posix_2escm"),(void*)f_3271},
{C_text("f_3275:posix_2escm"),(void*)f_3275},
{C_text("f_3278:posix_2escm"),(void*)f_3278},
{C_text("f_3303:posix_2escm"),(void*)f_3303},
{C_text("f_3307:posix_2escm"),(void*)f_3307},
{C_text("f_3310:posix_2escm"),(void*)f_3310},
{C_text("f_3313:posix_2escm"),(void*)f_3313},
{C_text("f_3341:posix_2escm"),(void*)f_3341},
{C_text("f_3345:posix_2escm"),(void*)f_3345},
{C_text("f_3349:posix_2escm"),(void*)f_3349},
{C_text("f_3385:posix_2escm"),(void*)f_3385},
{C_text("f_3392:posix_2escm"),(void*)f_3392},
{C_text("f_3401:posix_2escm"),(void*)f_3401},
{C_text("f_3411:posix_2escm"),(void*)f_3411},
{C_text("f_3415:posix_2escm"),(void*)f_3415},
{C_text("f_3418:posix_2escm"),(void*)f_3418},
{C_text("f_3439:posix_2escm"),(void*)f_3439},
{C_text("f_3447:posix_2escm"),(void*)f_3447},
{C_text("f_3451:posix_2escm"),(void*)f_3451},
{C_text("f_3462:posix_2escm"),(void*)f_3462},
{C_text("f_3464:posix_2escm"),(void*)f_3464},
{C_text("f_3468:posix_2escm"),(void*)f_3468},
{C_text("f_3470:posix_2escm"),(void*)f_3470},
{C_text("f_3489:posix_2escm"),(void*)f_3489},
{C_text("f_3494:posix_2escm"),(void*)f_3494},
{C_text("f_3500:posix_2escm"),(void*)f_3500},
{C_text("f_3541:posix_2escm"),(void*)f_3541},
{C_text("f_3549:posix_2escm"),(void*)f_3549},
{C_text("f_3552:posix_2escm"),(void*)f_3552},
{C_text("f_3557:posix_2escm"),(void*)f_3557},
{C_text("f_3563:posix_2escm"),(void*)f_3563},
{C_text("f_3569:posix_2escm"),(void*)f_3569},
{C_text("f_3573:posix_2escm"),(void*)f_3573},
{C_text("f_3578:posix_2escm"),(void*)f_3578},
{C_text("f_3580:posix_2escm"),(void*)f_3580},
{C_text("f_3584:posix_2escm"),(void*)f_3584},
{C_text("f_3586:posix_2escm"),(void*)f_3586},
{C_text("f_3602:posix_2escm"),(void*)f_3602},
{C_text("f_3608:posix_2escm"),(void*)f_3608},
{C_text("f_3611:posix_2escm"),(void*)f_3611},
{C_text("f_3627:posix_2escm"),(void*)f_3627},
{C_text("f_3637:posix_2escm"),(void*)f_3637},
{C_text("f_3643:posix_2escm"),(void*)f_3643},
{C_text("f_3654:posix_2escm"),(void*)f_3654},
{C_text("f_3658:posix_2escm"),(void*)f_3658},
{C_text("f_3662:posix_2escm"),(void*)f_3662},
{C_text("f_3667:posix_2escm"),(void*)f_3667},
{C_text("f_3677:posix_2escm"),(void*)f_3677},
{C_text("f_3680:posix_2escm"),(void*)f_3680},
{C_text("f_3692:posix_2escm"),(void*)f_3692},
{C_text("f_3697:posix_2escm"),(void*)f_3697},
{C_text("f_3716:posix_2escm"),(void*)f_3716},
{C_text("f_3739:posix_2escm"),(void*)f_3739},
{C_text("f_3741:posix_2escm"),(void*)f_3741},
{C_text("f_3745:posix_2escm"),(void*)f_3745},
{C_text("f_3751:posix_2escm"),(void*)f_3751},
{C_text("f_3754:posix_2escm"),(void*)f_3754},
{C_text("f_3759:posix_2escm"),(void*)f_3759},
{C_text("f_3765:posix_2escm"),(void*)f_3765},
{C_text("f_3771:posix_2escm"),(void*)f_3771},
{C_text("f_3775:posix_2escm"),(void*)f_3775},
{C_text("f_3778:posix_2escm"),(void*)f_3778},
{C_text("f_3786:posix_2escm"),(void*)f_3786},
{C_text("f_3792:posix_2escm"),(void*)f_3792},
{C_text("f_3796:posix_2escm"),(void*)f_3796},
{C_text("f_3803:posix_2escm"),(void*)f_3803},
{C_text("f_3806:posix_2escm"),(void*)f_3806},
{C_text("f_3810:posix_2escm"),(void*)f_3810},
{C_text("f_3831:posix_2escm"),(void*)f_3831},
{C_text("f_3833:posix_2escm"),(void*)f_3833},
{C_text("f_3858:posix_2escm"),(void*)f_3858},
{C_text("f_3867:posix_2escm"),(void*)f_3867},
{C_text("f_3873:posix_2escm"),(void*)f_3873},
{C_text("f_3898:posix_2escm"),(void*)f_3898},
{C_text("f_3911:posix_2escm"),(void*)f_3911},
{C_text("f_3917:posix_2escm"),(void*)f_3917},
{C_text("f_3931:posix_2escm"),(void*)f_3931},
{C_text("f_3938:posix_2escm"),(void*)f_3938},
{C_text("f_3948:posix_2escm"),(void*)f_3948},
{C_text("f_3957:posix_2escm"),(void*)f_3957},
{C_text("f_3971:posix_2escm"),(void*)f_3971},
{C_text("f_3978:posix_2escm"),(void*)f_3978},
{C_text("f_3988:posix_2escm"),(void*)f_3988},
{C_text("f_3997:posix_2escm"),(void*)f_3997},
{C_text("f_4004:posix_2escm"),(void*)f_4004},
{C_text("f_4012:posix_2escm"),(void*)f_4012},
{C_text("f_4019:posix_2escm"),(void*)f_4019},
{C_text("f_4027:posix_2escm"),(void*)f_4027},
{C_text("f_4031:posix_2escm"),(void*)f_4031},
{C_text("f_4036:posix_2escm"),(void*)f_4036},
{C_text("f_4041:posix_2escm"),(void*)f_4041},
{C_text("f_4047:posix_2escm"),(void*)f_4047},
{C_text("f_4051:posix_2escm"),(void*)f_4051},
{C_text("f_4056:posix_2escm"),(void*)f_4056},
{C_text("f_4061:posix_2escm"),(void*)f_4061},
{C_text("f_4065:posix_2escm"),(void*)f_4065},
{C_text("f_4070:posix_2escm"),(void*)f_4070},
{C_text("f_4076:posix_2escm"),(void*)f_4076},
{C_text("f_4080:posix_2escm"),(void*)f_4080},
{C_text("f_4085:posix_2escm"),(void*)f_4085},
{C_text("f_4089:posix_2escm"),(void*)f_4089},
{C_text("f_4094:posix_2escm"),(void*)f_4094},
{C_text("f_4100:posix_2escm"),(void*)f_4100},
{C_text("f_4104:posix_2escm"),(void*)f_4104},
{C_text("f_4109:posix_2escm"),(void*)f_4109},
{C_text("f_4113:posix_2escm"),(void*)f_4113},
{C_text("f_4118:posix_2escm"),(void*)f_4118},
{C_text("f_4123:posix_2escm"),(void*)f_4123},
{C_text("f_4129:posix_2escm"),(void*)f_4129},
{C_text("f_4133:posix_2escm"),(void*)f_4133},
{C_text("f_4138:posix_2escm"),(void*)f_4138},
{C_text("f_4149:posix_2escm"),(void*)f_4149},
{C_text("f_4153:posix_2escm"),(void*)f_4153},
{C_text("f_4159:posix_2escm"),(void*)f_4159},
{C_text("f_4162:posix_2escm"),(void*)f_4162},
{C_text("f_4166:posix_2escm"),(void*)f_4166},
{C_text("f_4169:posix_2escm"),(void*)f_4169},
{C_text("f_4175:posix_2escm"),(void*)f_4175},
{C_text("f_4184:posix_2escm"),(void*)f_4184},
{C_text("f_4188:posix_2escm"),(void*)f_4188},
{C_text("f_4193:posix_2escm"),(void*)f_4193},
{C_text("f_4215:posix_2escm"),(void*)f_4215},
{C_text("f_4219:posix_2escm"),(void*)f_4219},
{C_text("f_4222:posix_2escm"),(void*)f_4222},
{C_text("f_4225:posix_2escm"),(void*)f_4225},
{C_text("f_4228:posix_2escm"),(void*)f_4228},
{C_text("f_4231:posix_2escm"),(void*)f_4231},
{C_text("f_4240:posix_2escm"),(void*)f_4240},
{C_text("f_4258:posix_2escm"),(void*)f_4258},
{C_text("f_4262:posix_2escm"),(void*)f_4262},
{C_text("f_4265:posix_2escm"),(void*)f_4265},
{C_text("f_4268:posix_2escm"),(void*)f_4268},
{C_text("f_4271:posix_2escm"),(void*)f_4271},
{C_text("f_4274:posix_2escm"),(void*)f_4274},
{C_text("f_4280:posix_2escm"),(void*)f_4280},
{C_text("f_4298:posix_2escm"),(void*)f_4298},
{C_text("f_4311:posix_2escm"),(void*)f_4311},
{C_text("f_4317:posix_2escm"),(void*)f_4317},
{C_text("f_4320:posix_2escm"),(void*)f_4320},
{C_text("f_4325:posix_2escm"),(void*)f_4325},
{C_text("f_4333:posix_2escm"),(void*)f_4333},
{C_text("f_4372:posix_2escm"),(void*)f_4372},
{C_text("f_4413:posix_2escm"),(void*)f_4413},
{C_text("f_4417:posix_2escm"),(void*)f_4417},
{C_text("f_4426:posix_2escm"),(void*)f_4426},
{C_text("f_4433:posix_2escm"),(void*)f_4433},
{C_text("f_4457:posix_2escm"),(void*)f_4457},
{C_text("f_4464:posix_2escm"),(void*)f_4464},
{C_text("f_4473:posix_2escm"),(void*)f_4473},
{C_text("f_4519:posix_2escm"),(void*)f_4519},
{C_text("f_4523:posix_2escm"),(void*)f_4523},
{C_text("f_4526:posix_2escm"),(void*)f_4526},
{C_text("f_4529:posix_2escm"),(void*)f_4529},
{C_text("f_4535:posix_2escm"),(void*)f_4535},
{C_text("f_4547:posix_2escm"),(void*)f_4547},
{C_text("f_4549:posix_2escm"),(void*)f_4549},
{C_text("f_4570:posix_2escm"),(void*)f_4570},
{C_text("f_4595:posix_2escm"),(void*)f_4595},
{C_text("f_4607:posix_2escm"),(void*)f_4607},
{C_text("f_4634:posix_2escm"),(void*)f_4634},
{C_text("f_4648:posix_2escm"),(void*)f_4648},
{C_text("f_4687:posix_2escm"),(void*)f_4687},
{C_text("f_4712:posix_2escm"),(void*)f_4712},
{C_text("f_4717:posix_2escm"),(void*)f_4717},
{C_text("f_4724:posix_2escm"),(void*)f_4724},
{C_text("f_4731:posix_2escm"),(void*)f_4731},
{C_text("f_4770:posix_2escm"),(void*)f_4770},
{C_text("f_4774:posix_2escm"),(void*)f_4774},
{C_text("f_4786:posix_2escm"),(void*)f_4786},
{C_text("f_4797:posix_2escm"),(void*)f_4797},
{C_text("f_4801:posix_2escm"),(void*)f_4801},
{C_text("f_4814:posix_2escm"),(void*)f_4814},
{C_text("f_4829:posix_2escm"),(void*)f_4829},
{C_text("f_4833:posix_2escm"),(void*)f_4833},
{C_text("f_4897:posix_2escm"),(void*)f_4897},
{C_text("f_4904:posix_2escm"),(void*)f_4904},
{C_text("f_4914:posix_2escm"),(void*)f_4914},
{C_text("f_4918:posix_2escm"),(void*)f_4918},
{C_text("f_4922:posix_2escm"),(void*)f_4922},
{C_text("f_4934:posix_2escm"),(void*)f_4934},
{C_text("f_4941:posix_2escm"),(void*)f_4941},
{C_text("f_4945:posix_2escm"),(void*)f_4945},
{C_text("f_4949:posix_2escm"),(void*)f_4949},
{C_text("f_4953:posix_2escm"),(void*)f_4953},
{C_text("f_4973:posix_2escm"),(void*)f_4973},
{C_text("f_4981:posix_2escm"),(void*)f_4981},
{C_text("f_5006:posix_2escm"),(void*)f_5006},
{C_text("f_5020:posix_2escm"),(void*)f_5020},
{C_text("f_5022:posix_2escm"),(void*)f_5022},
{C_text("f_5027:posix_2escm"),(void*)f_5027},
{C_text("f_5036:posix_2escm"),(void*)f_5036},
{C_text("f_5063:posix_2escm"),(void*)f_5063},
{C_text("f_5066:posix_2escm"),(void*)f_5066},
{C_text("f_5071:posix_2escm"),(void*)f_5071},
{C_text("f_5077:posix_2escm"),(void*)f_5077},
{C_text("f_5102:posix_2escm"),(void*)f_5102},
{C_text("f_5104:posix_2escm"),(void*)f_5104},
{C_text("f_5164:posix_2escm"),(void*)f_5164},
{C_text("f_5236:posix_2escm"),(void*)f_5236},
{C_text("f_5246:posix_2escm"),(void*)f_5246},
{C_text("f_5257:posix_2escm"),(void*)f_5257},
{C_text("f_5263:posix_2escm"),(void*)f_5263},
{C_text("f_5269:posix_2escm"),(void*)f_5269},
{C_text("f_5275:posix_2escm"),(void*)f_5275},
{C_text("f_5281:posix_2escm"),(void*)f_5281},
{C_text("f_5287:posix_2escm"),(void*)f_5287},
{C_text("f_5293:posix_2escm"),(void*)f_5293},
{C_text("f_5299:posix_2escm"),(void*)f_5299},
{C_text("f_5305:posix_2escm"),(void*)f_5305},
{C_text("f_5311:posix_2escm"),(void*)f_5311},
{C_text("f_5317:posix_2escm"),(void*)f_5317},
{C_text("f_5323:posix_2escm"),(void*)f_5323},
{C_text("f_5329:posix_2escm"),(void*)f_5329},
{C_text("f_5335:posix_2escm"),(void*)f_5335},
{C_text("f_5341:posix_2escm"),(void*)f_5341},
{C_text("f_5347:posix_2escm"),(void*)f_5347},
{C_text("f_5353:posix_2escm"),(void*)f_5353},
{C_text("f_5359:posix_2escm"),(void*)f_5359},
{C_text("f_5365:posix_2escm"),(void*)f_5365},
{C_text("f_5371:posix_2escm"),(void*)f_5371},
{C_text("f_5377:posix_2escm"),(void*)f_5377},
{C_text("f_5383:posix_2escm"),(void*)f_5383},
{C_text("f_5389:posix_2escm"),(void*)f_5389},
{C_text("f_5395:posix_2escm"),(void*)f_5395},
{C_text("f_5401:posix_2escm"),(void*)f_5401},
{C_text("f_5407:posix_2escm"),(void*)f_5407},
{C_text("f_5413:posix_2escm"),(void*)f_5413},
{C_text("f_5419:posix_2escm"),(void*)f_5419},
{C_text("f_5425:posix_2escm"),(void*)f_5425},
{C_text("f_5431:posix_2escm"),(void*)f_5431},
{C_text("f_5437:posix_2escm"),(void*)f_5437},
{C_text("f_5455:posix_2escm"),(void*)f_5455},
{C_text("f_5500:posix_2escm"),(void*)f_5500},
{C_text("f_5504:posix_2escm"),(void*)f_5504},
{C_text("f_5509:posix_2escm"),(void*)f_5509},
{C_text("f_5516:posix_2escm"),(void*)f_5516},
{C_text("f_5534:posix_2escm"),(void*)f_5534},
{C_text("f_5538:posix_2escm"),(void*)f_5538},
{C_text("f_5540:posix_2escm"),(void*)f_5540},
{C_text("f_5544:posix_2escm"),(void*)f_5544},
{C_text("f_5547:posix_2escm"),(void*)f_5547},
{C_text("f_5555:posix_2escm"),(void*)f_5555},
{C_text("f_5576:posix_2escm"),(void*)f_5576},
{C_text("f_5580:posix_2escm"),(void*)f_5580},
{C_text("f_5582:posix_2escm"),(void*)f_5582},
{C_text("f_5586:posix_2escm"),(void*)f_5586},
{C_text("f_5588:posix_2escm"),(void*)f_5588},
{C_text("f_5592:posix_2escm"),(void*)f_5592},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
{C_text("va6064:posix_2escm"),(void*)va6064},
{C_text("va6072:posix_2escm"),(void*)va6072},
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
o|hiding unexported module binding: chicken.posix#duplicate-fileno 
o|hiding unexported module binding: chicken.posix#quote-arg-string 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#chown 
S|applied compiler syntax:
S|  for-each		2
S|  map		3
o|eliminated procedure checks: 80 
o|specializations:
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  2 (scheme#string-length string)
o|  1 (chicken.bitwise#bitwise-ior fixnum fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  3 (scheme#cdr pair)
o|  1 (chicken.base#add1 fixnum)
o|  1 (##sys#length list)
o|  1 (scheme#= * *)
o|  1 (scheme#zero? *)
o|  1 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol))
o|  1 (scheme#< * *)
o|  8 (scheme#car pair)
o|  4 (##sys#check-list (or pair list) *)
o|  1 (scheme#char=? char char)
o|  1 (scheme#zero? integer)
(o e)|safe calls: 472 
(o e)|assignments to immediate values: 114 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|dropping redundant toplevel assignment: chicken.process-context.posix#user-information 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-test-lock chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c1657) 
o|inlining procedure: k2333 
o|inlining procedure: k2333 
o|inlining procedure: k2351 
o|inlining procedure: k2351 
o|inlining procedure: k2378 
o|inlining procedure: k2378 
o|substituted constant variable: a2388 
o|inlining procedure: k2419 
o|inlining procedure: k2419 
o|contracted procedure: "(posix-common.scm:162) strerror630" 
o|inlining procedure: k2572 
o|inlining procedure: k2572 
o|inlining procedure: k2587 
o|inlining procedure: k2587 
o|inlining procedure: k2606 
o|inlining procedure: k2606 
o|inlining procedure: k2639 
o|inlining procedure: k2639 
o|inlining procedure: k2651 
o|inlining procedure: k2651 
o|inlining procedure: k2729 
o|inlining procedure: k2729 
o|contracted procedure: "(posix-common.scm:262) g702703" 
o|inlining procedure: k2716 
o|inlining procedure: k2716 
o|consed rest parameter at call site: "(posix-common.scm:275) chicken.posix#chown" 1 
o|consed rest parameter at call site: "(posix-common.scm:279) chicken.posix#chown" 1 
o|inlining procedure: k2816 
o|inlining procedure: k2828 
o|inlining procedure: k2828 
o|inlining procedure: k2840 
o|inlining procedure: k2840 
o|inlining procedure: k2852 
o|inlining procedure: k2852 
o|inlining procedure: k2816 
o|inlining procedure: k2973 
o|inlining procedure: k2973 
o|inlining procedure: k2985 
o|inlining procedure: k2985 
o|inlining procedure: k2995 
o|inlining procedure: k2995 
o|inlining procedure: k3045 
o|inlining procedure: k3058 
o|inlining procedure: k3058 
o|substituted constant variable: a3071 
o|inlining procedure: k3045 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|inlining procedure: k3091 
o|inlining procedure: k3091 
o|substituted constant variable: a3126 
o|inlining procedure: k3127 
o|inlining procedure: k3127 
o|inlining procedure: k3146 
o|inlining procedure: k3146 
o|inlining procedure: k3176 
o|inlining procedure: k3176 
o|inlining procedure: k3203 
o|inlining procedure: k3203 
o|inlining procedure: k3216 
o|propagated global variable: r32175657 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3216 
o|inlining procedure: k3236 
o|inlining procedure: k3236 
o|inlining procedure: k3314 
o|inlining procedure: k3314 
o|contracted procedure: "(posix-common.scm:563) ctime877" 
o|substituted constant variable: a3353 
o|inlining procedure: k3350 
o|inlining procedure: k3350 
o|inlining procedure: k3393 
o|contracted procedure: "(posix-common.scm:586) strftime902" 
o|inlining procedure: k3379 
o|inlining procedure: k3379 
o|inlining procedure: k3393 
o|contracted procedure: "(posix-common.scm:588) asctime901" 
o|inlining procedure: k3366 
o|inlining procedure: k3366 
o|contracted procedure: "(posix-common.scm:623) chicken.posix#process-wait-impl" 
o|inlining procedure: k5226 
o|inlining procedure: k5226 
o|inlining procedure: k3502 
o|inlining procedure: k3502 
o|inlining procedure: k3588 
o|inlining procedure: k3588 
o|contracted procedure: "(posix-common.scm:656) c-string->allocated-pointer971" 
o|merged explicitly consed rest parameter: args9831004 
o|consed rest parameter at call site: tmp22175 1 
o|inlining procedure: k3669 
o|inlining procedure: k3669 
o|inlining procedure: k3718 
o|inlining procedure: k3718 
o|inlining procedure: k3776 
o|inlining procedure: k3776 
o|inlining procedure: k3835 
o|contracted procedure: "(posix-common.scm:699) g10711080" 
o|inlining procedure: k3835 
o|inlining procedure: k3882 
o|inlining procedure: k3882 
o|inlining procedure: k3900 
o|inlining procedure: k3900 
o|inlining procedure: k3913 
o|inlining procedure: k3913 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|inlining procedure: "(posix-common.scm:728) badmode1094" 
o|substituted constant variable: a3953 
o|substituted constant variable: a3955 
o|inlining procedure: k3969 
o|inlining procedure: k3969 
o|inlining procedure: "(posix-common.scm:739) badmode1094" 
o|substituted constant variable: a3993 
o|substituted constant variable: a3995 
o|substituted constant variable: a4000 
o|substituted constant variable: a4001 
o|inlining procedure: k4002 
o|inlining procedure: k4002 
o|substituted constant variable: a4015 
o|substituted constant variable: a4016 
o|inlining procedure: k4017 
o|inlining procedure: k4017 
o|inlining procedure: k4167 
o|inlining procedure: k4167 
o|inlining procedure: k4195 
o|inlining procedure: k4195 
o|inlining procedure: k4229 
o|inlining procedure: k4229 
o|inlining procedure: k4272 
o|inlining procedure: k4272 
o|inlining procedure: k4342 
o|inlining procedure: k4342 
o|inlining procedure: k4374 
o|inlining procedure: k4374 
o|inlining procedure: k4401 
o|inlining procedure: k4401 
o|inlining procedure: k4418 
o|inlining procedure: k4418 
o|inlining procedure: k4428 
o|inlining procedure: k4428 
o|inlining procedure: k4462 
o|inlining procedure: k4462 
o|inlining procedure: k4527 
o|inlining procedure: k4527 
o|inlining procedure: k4597 
o|inlining procedure: k4597 
o|contracted procedure: "(posixwin.scm:721) needs-quoting?1371" 
o|inlining procedure: k4572 
o|inlining procedure: k4572 
o|inlining procedure: k4639 
o|inlining procedure: k4639 
o|inlining procedure: k4722 
o|inlining procedure: k4722 
o|inlining procedure: k4775 
o|inlining procedure: k4775 
o|inlining procedure: k4802 
o|inlining procedure: k4802 
o|inlining procedure: "(posixwin.scm:773) chicken.posix#shell-command-arguments" 
o|merged explicitly consed rest parameter: rest14831491 
o|substituted constant variable: g152515261533 
o|substituted constant variable: g152515261533 
o|substituted constant variable: g152515261533 
o|substituted constant variable: g152715281534 
o|substituted constant variable: g152715281534 
o|substituted constant variable: g152715281534 
o|substituted constant variable: g152915301535 
o|substituted constant variable: g152915301535 
o|substituted constant variable: g152915301535 
o|substituted constant variable: g153115321536 
o|substituted constant variable: g153115321536 
o|substituted constant variable: g153115321536 
o|inlining procedure: k4905 
o|inlining procedure: k4920 
o|inlining procedure: k4920 
o|inlining procedure: k4905 
o|contracted procedure: "(posixwin.scm:810) c-process1447" 
o|inlining procedure: k4967 
o|inlining procedure: k4967 
o|inlining procedure: k4971 
o|inlining procedure: k4971 
o|inlining procedure: k4983 
o|inlining procedure: k4983 
o|inlining procedure: k5038 
o|inlining procedure: k5038 
o|consed rest parameter at call site: "(posixwin.scm:843) chicken.posix#process-impl" 8 
o|inlining procedure: k5079 
o|inlining procedure: k5079 
o|inlining procedure: "(posixwin.scm:839) chicken.posix#shell-command-arguments" 
o|inlining procedure: k5238 
o|inlining procedure: k5238 
o|merged explicitly consed rest parameter: _16521656 
o|inlining procedure: k5521 
o|inlining procedure: k5521 
o|substituted constant variable: a5549 
o|inlining procedure: k5545 
o|inlining procedure: k5545 
o|inlining procedure: k5556 
o|inlining procedure: k5556 
o|inlining procedure: k5566 
o|inlining procedure: k5566 
o|replaced variables: 473 
o|removed binding forms: 557 
o|substituted constant variable: r25735602 
o|substituted constant variable: r27175615 
o|substituted constant variable: r27175615 
o|inlining procedure: "(posix-common.scm:275) chicken.posix#chown" 
o|inlining procedure: "(posix-common.scm:279) chicken.posix#chown" 
o|substituted constant variable: r28295618 
o|substituted constant variable: r28415620 
o|substituted constant variable: r28535622 
o|substituted constant variable: r28175624 
o|substituted constant variable: r29865628 
o|inlining procedure: k3045 
o|substituted constant variable: r30595633 
o|inlining procedure: k3045 
o|inlining procedure: k3045 
o|substituted constant variable: r30925639 
o|substituted constant variable: r30925639 
o|substituted constant variable: r30925641 
o|substituted constant variable: r30925641 
o|propagated global variable: g8308315658 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r33805677 
o|substituted constant variable: r33805677 
o|substituted constant variable: r33675684 
o|substituted constant variable: r33675684 
o|substituted constant variable: r38835710 
o|removed side-effect free assignment to unused variable: badmode1094 
o|substituted constant variable: r39145713 
o|substituted constant variable: r39145713 
o|substituted constant variable: r39145715 
o|substituted constant variable: r39145715 
o|inlining procedure: k3929 
o|inlining procedure: k3969 
o|substituted constant variable: r44195771 
o|substituted constant variable: r44195771 
o|substituted constant variable: r45735791 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|contracted procedure: "(posixwin.scm:843) chicken.posix#process-impl" 
o|substituted constant variable: r49215811 
o|substituted constant variable: r49215811 
o|substituted constant variable: c-pointer14501467 
o|substituted constant variable: c-pointer14501467 
o|substituted constant variable: c-pointer14501467 
o|substituted constant variable: r49685814 
o|substituted constant variable: r49685814 
o|substituted constant variable: r49685816 
o|substituted constant variable: r49685816 
o|removed unused formal parameters: (_16521656) 
o|substituted constant variable: r55575844 
o|replaced variables: 37 
o|removed binding forms: 505 
o|removed conditional forms: 1 
o|inlining procedure: k3453 
o|inlining procedure: k3453 
o|inlining procedure: k3678 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|substituted constant variable: stdinf1489 
o|substituted constant variable: stdoutf1488 
o|contracted procedure: k4835 
o|substituted constant variable: stdoutf1488 
o|substituted constant variable: stdinf1489 
o|inlining procedure: k5121 
o|inlining procedure: k5181 
o|removed side-effect free assignment to unused variable: chicken.posix#chown 
o|replaced variables: 12 
o|removed binding forms: 92 
o|removed conditional forms: 4 
o|substituted constant variable: r30465859 
o|substituted constant variable: r30465861 
o|substituted constant variable: r30465863 
o|substituted constant variable: r34545915 
o|contracted procedure: k3603 
o|substituted constant variable: r42455932 
o|substituted constant variable: r42925934 
o|substituted constant variable: r4836 
o|contracted procedure: k4959 
o|contracted procedure: k4963 
o|inlining procedure: k5518 
o|inlining procedure: k5518 
o|simplifications: ((let . 2)) 
o|replaced variables: 6 
o|removed binding forms: 19 
o|removed conditional forms: 2 
o|substituted constant variable: a4834 
o|substituted constant variable: r4960 
o|substituted constant variable: r4960 
o|substituted constant variable: r4964 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 0)) 
o|substituted constant variable: r4960 
o|substituted constant variable: r4964 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 4)) 
o|substituted constant variable: r55195976 
o|replaced variables: 1 
o|removed binding forms: 14 
o|removed binding forms: 6 
o|simplifications: ((if . 53) (##core#call . 306)) 
o|  call simplifications:
o|    ##sys#foreign-pointer-argument	4
o|    scheme#string-length
o|    scheme#char-whitespace?
o|    scheme#*
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref	3
o|    scheme#string-set!
o|    chicken.bitwise#bitwise-ior
o|    chicken.fixnum#fxior	3
o|    scheme#list	5
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	4
o|    ##sys#apply	2
o|    chicken.fixnum#fx+	6
o|    ##sys#call-with-values	3
o|    scheme#values	10
o|    scheme#vector-set!	2
o|    ##sys#foreign-block-argument	2
o|    ##sys#foreign-ranged-integer-argument
o|    chicken.fixnum#fx-	6
o|    ##sys#check-vector
o|    ##sys#size	6
o|    ##sys#null-pointer?	2
o|    scheme#not	3
o|    chicken.fixnum#fx=	16
o|    scheme#cdr	18
o|    ##sys#foreign-string-argument	3
o|    scheme#vector
o|    chicken.base#fixnum?	5
o|    scheme#string?	2
o|    ##sys#foreign-fixnum-argument	2
o|    scheme#null?	48
o|    scheme#car	31
o|    scheme#string->list
o|    scheme#pair?	12
o|    scheme#cons	8
o|    ##sys#setslot	3
o|    ##sys#slot	19
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	25
o|    ##sys#check-string	11
o|    chicken.fixnum#fx<	11
o|contracted procedure: k2330 
o|contracted procedure: k2336 
o|contracted procedure: k2354 
o|contracted procedure: k2453 
o|contracted procedure: k2367 
o|contracted procedure: k2450 
o|contracted procedure: k2370 
o|contracted procedure: k2373 
o|contracted procedure: k2381 
o|contracted procedure: k2405 
o|contracted procedure: k2413 
o|contracted procedure: k2422 
o|contracted procedure: k2425 
o|contracted procedure: k2428 
o|contracted procedure: k2436 
o|contracted procedure: k2444 
o|contracted procedure: k2456 
o|contracted procedure: k2546 
o|contracted procedure: k2575 
o|contracted procedure: k2584 
o|contracted procedure: k2600 
o|contracted procedure: k2624 
o|contracted procedure: k2615 
o|contracted procedure: k2642 
o|contracted procedure: k2648 
o|contracted procedure: k2664 
o|contracted procedure: k2756 
o|contracted procedure: k2698 
o|contracted procedure: k2750 
o|contracted procedure: k2701 
o|contracted procedure: k2744 
o|contracted procedure: k2704 
o|contracted procedure: k2732 
o|contracted procedure: k2723 
o|contracted procedure: k2762 
o|contracted procedure: k2882 
o|contracted procedure: k2804 
o|contracted procedure: k2876 
o|contracted procedure: k2807 
o|contracted procedure: k2870 
o|contracted procedure: k2810 
o|contracted procedure: k2864 
o|contracted procedure: k2813 
o|contracted procedure: k2825 
o|contracted procedure: k2831 
o|contracted procedure: k2837 
o|contracted procedure: k2843 
o|contracted procedure: k2849 
o|contracted procedure: k2855 
o|contracted procedure: k2861 
o|contracted procedure: k2992 
o|contracted procedure: k2988 
o|contracted procedure: k2998 
o|contracted procedure: k3004 
o|contracted procedure: k3048 
o|contracted procedure: k3055 
o|contracted procedure: k3061 
o|contracted procedure: k3081 
o|contracted procedure: k3164 
o|contracted procedure: k3130 
o|contracted procedure: k3143 
o|contracted procedure: k3149 
o|contracted procedure: k3179 
o|contracted procedure: k3185 
o|contracted procedure: k3188 
o|contracted procedure: k3206 
o|contracted procedure: k3222 
o|contracted procedure: k3233 
o|contracted procedure: k3246 
o|contracted procedure: k3239 
o|contracted procedure: k3261 
o|contracted procedure: k3282 
o|contracted procedure: k3325 
o|contracted procedure: k3321 
o|contracted procedure: k3299 
o|contracted procedure: k3331 
o|contracted procedure: k3440 
o|contracted procedure: k3387 
o|contracted procedure: k3396 
o|contracted procedure: k3379 
o|contracted procedure: k3430 
o|contracted procedure: k3426 
o|contracted procedure: k3366 
o|contracted procedure: k3532 
o|contracted procedure: k3472 
o|contracted procedure: k3526 
o|contracted procedure: k3475 
o|contracted procedure: k3520 
o|contracted procedure: k3478 
o|contracted procedure: k3514 
o|contracted procedure: k3481 
o|contracted procedure: k3484 
o|contracted procedure: k3505 
o|contracted procedure: k3543 
o|contracted procedure: k3591 
o|contracted procedure: k3594 
o|contracted procedure: k3631 
o|contracted procedure: k3597 
o|contracted procedure: k3618 
o|contracted procedure: k3672 
o|contracted procedure: k3685 
o|contracted procedure: k36855922 
o|contracted procedure: k3694 
o|contracted procedure: k3699 
o|contracted procedure: k3702 
o|contracted procedure: k3721 
o|contracted procedure: k3731 
o|contracted procedure: k3735 
o|contracted procedure: k3746 
o|contracted procedure: k3812 
o|contracted procedure: k3826 
o|contracted procedure: k3838 
o|contracted procedure: k3841 
o|contracted procedure: k3844 
o|contracted procedure: k3852 
o|contracted procedure: k3860 
o|contracted procedure: k3821 
o|contracted procedure: k3885 
o|contracted procedure: k3903 
o|contracted procedure: k3919 
o|contracted procedure: k3932 
o|contracted procedure: k3942 
o|contracted procedure: k3959 
o|contracted procedure: k3972 
o|contracted procedure: k3982 
o|contracted procedure: k4005 
o|contracted procedure: k4020 
o|contracted procedure: k4146 
o|contracted procedure: k4154 
o|contracted procedure: k4170 
o|contracted procedure: k4179 
o|contracted procedure: k4198 
o|contracted procedure: k4204 
o|contracted procedure: k4235 
o|contracted procedure: k4250 
o|contracted procedure: k4275 
o|contracted procedure: k4284 
o|contracted procedure: k4300 
o|contracted procedure: k4303 
o|contracted procedure: k4312 
o|contracted procedure: k4339 
o|contracted procedure: k4345 
o|contracted procedure: k4351 
o|contracted procedure: k4358 
o|contracted procedure: k4368 
o|contracted procedure: k4377 
o|contracted procedure: k4391 
o|contracted procedure: k4380 
o|contracted procedure: k4387 
o|contracted procedure: k4395 
o|contracted procedure: k4404 
o|contracted procedure: k4422 
o|contracted procedure: k4438 
o|contracted procedure: k4444 
o|contracted procedure: k4451 
o|contracted procedure: k4478 
o|contracted procedure: k4459 
o|contracted procedure: k4468 
o|contracted procedure: k4515 
o|contracted procedure: k4530 
o|contracted procedure: k4539 
o|contracted procedure: k4542 
o|contracted procedure: k4563 
o|contracted procedure: k4575 
o|contracted procedure: k4592 
o|contracted procedure: k4581 
o|contracted procedure: k4588 
o|contracted procedure: k4680 
o|contracted procedure: k4609 
o|contracted procedure: k4674 
o|contracted procedure: k4612 
o|contracted procedure: k4668 
o|contracted procedure: k4615 
o|contracted procedure: k4662 
o|contracted procedure: k4618 
o|contracted procedure: k4656 
o|contracted procedure: k4621 
o|contracted procedure: k4650 
o|contracted procedure: k4624 
o|contracted procedure: k4627 
o|contracted procedure: k4636 
o|contracted procedure: k4642 
o|contracted procedure: k4763 
o|contracted procedure: k4689 
o|contracted procedure: k4757 
o|contracted procedure: k4692 
o|contracted procedure: k4751 
o|contracted procedure: k4695 
o|contracted procedure: k4745 
o|contracted procedure: k4698 
o|contracted procedure: k4739 
o|contracted procedure: k4701 
o|contracted procedure: k4733 
o|contracted procedure: k4704 
o|contracted procedure: k4707 
o|contracted procedure: k4719 
o|contracted procedure: k4725 
o|contracted procedure: k4816 
o|contracted procedure: k4819 
o|contracted procedure: k5024 
o|contracted procedure: k5041 
o|contracted procedure: k5051 
o|contracted procedure: k5055 
o|contracted procedure: k5058 
o|contracted procedure: k5014 
o|contracted procedure: k4889 
o|contracted procedure: k4892 
o|contracted procedure: k4955 
o|contracted procedure: k4839 
o|contracted procedure: k4843 
o|contracted procedure: k4847 
o|contracted procedure: k4851 
o|contracted procedure: k4855 
o|contracted procedure: k4877 
o|contracted procedure: k4884 
o|contracted procedure: k4974 
o|contracted procedure: k4986 
o|contracted procedure: k4989 
o|contracted procedure: k4992 
o|contracted procedure: k5000 
o|contracted procedure: k5008 
o|contracted procedure: k5096 
o|contracted procedure: k5157 
o|contracted procedure: k5106 
o|contracted procedure: k5151 
o|contracted procedure: k5109 
o|contracted procedure: k5145 
o|contracted procedure: k5112 
o|contracted procedure: k5139 
o|contracted procedure: k5115 
o|contracted procedure: k5133 
o|contracted procedure: k5118 
o|contracted procedure: k5127 
o|contracted procedure: k5121 
o|contracted procedure: k5217 
o|contracted procedure: k5166 
o|contracted procedure: k5211 
o|contracted procedure: k5169 
o|contracted procedure: k5205 
o|contracted procedure: k5172 
o|contracted procedure: k5199 
o|contracted procedure: k5175 
o|contracted procedure: k5193 
o|contracted procedure: k5178 
o|contracted procedure: k5187 
o|contracted procedure: k5181 
o|contracted procedure: k5527 
o|contracted procedure: k5511 
o|contracted procedure: k5563 
o|contracted procedure: k5559 
o|contracted procedure: k5569 
o|simplifications: ((##core#call . 4) (let . 47)) 
o|  call simplifications:
o|    scheme#*	2
o|    chicken.bitwise#bitwise-ior	2
o|removed binding forms: 251 
o|inlining procedure: "(posix-common.scm:721) mode1093" 
o|inlining procedure: "(posix-common.scm:732) mode1093" 
o|contracted procedure: k4306 
o|contracted procedure: k4335 
o|replaced variables: 155 
o|removed binding forms: 2 
o|removed side-effect free assignment to unused variable: mode1093 
o|replaced variables: 6 
o|removed binding forms: 70 
o|converted assignments to bindings: (check1095) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 6 
o|contracted procedure: k3922 
o|contracted procedure: k3962 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g10221029 0 
o|direct leaf routine/allocation: suffix-loop1337 0 
o|direct leaf routine/allocation: loop1374 0 
o|direct leaf routine/allocation: g15781585 0 
o|contracted procedure: "(posix-common.scm:672) k3724" 
o|contracted procedure: k4327 
o|converted assignments to bindings: (suffix-loop1337) 
o|contracted procedure: k4600 
o|converted assignments to bindings: (loop1374) 
o|contracted procedure: "(posixwin.scm:833) k5044" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 4 
o|direct leaf routine/allocation: for-each-loop10211034 0 
o|direct leaf routine/allocation: for-each-loop15771595 0 
o|converted assignments to bindings: (for-each-loop10211034) 
o|converted assignments to bindings: (for-each-loop15771595) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (%process1566 chkstrlst1573 map-loop15011518 k4799 chicken.posix#shell-command chicken.posix#call-with-exec-args k4524 va6072 k4431 loop1324 va6064 loop1335 k4266 k4151 check1095 chicken.posix#check-environment-list map-loop10651083 chicken.posix#list->c-string-buffer k3794 doloop10091010 tmp12174 tmp22175 doloop990991 chicken.posix#free-c-string-buffer chicken.posix#check-time-vector k3173 mode777 check778 k2964 chicken.posix#stat g256265 map-loop250272) 
o|calls to known targets: 121 
o|identified direct recursive calls: f_3716 1 
o|identified direct recursive calls: f_4372 1 
o|identified direct recursive calls: f_4570 1 
o|identified direct recursive calls: f_5036 1 
o|unused rest argument: _16601663 f_5257 
o|unused rest argument: _16661669 f_5263 
o|unused rest argument: _16721675 f_5269 
o|unused rest argument: _16781681 f_5275 
o|unused rest argument: _16841687 f_5281 
o|unused rest argument: _16901693 f_5287 
o|unused rest argument: _16961699 f_5293 
o|unused rest argument: _17021705 f_5299 
o|unused rest argument: _17141717 f_5305 
o|unused rest argument: _17201723 f_5311 
o|unused rest argument: _17261729 f_5317 
o|unused rest argument: _17321735 f_5323 
o|unused rest argument: _17381741 f_5329 
o|unused rest argument: _17441747 f_5335 
o|unused rest argument: _17501753 f_5341 
o|unused rest argument: _17561759 f_5347 
o|unused rest argument: _17621765 f_5353 
o|unused rest argument: _17681771 f_5359 
o|unused rest argument: _17741777 f_5365 
o|unused rest argument: _17801783 f_5371 
o|unused rest argument: _17861789 f_5377 
o|unused rest argument: _17921795 f_5383 
o|unused rest argument: _17981801 f_5389 
o|unused rest argument: _18041807 f_5395 
o|unused rest argument: _18101813 f_5401 
o|unused rest argument: _18161819 f_5407 
o|unused rest argument: _18221825 f_5413 
o|unused rest argument: _18281831 f_5419 
o|unused rest argument: _18341837 f_5425 
o|unused rest argument: _18401843 f_5431 
o|unused rest argument: _18461849 f_5437 
o|fast box initializations: 11 
o|fast global references: 80 
o|fast global assignments: 12 
o|dropping unused closure argument: f_2567 
o|dropping unused closure argument: f_3039 
o|dropping unused closure argument: f_3076 
o|dropping unused closure argument: f_3231 
o|dropping unused closure argument: f_3541 
o|dropping unused closure argument: f_3658 
o|dropping unused closure argument: f_3692 
o|dropping unused closure argument: f_3898 
o|dropping unused closure argument: f_4770 
o|dropping unused closure argument: f_5020 
*/
/* end of file */

/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file posixwin.c
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#include <utime.h>
#include <winsock2.h>

#define PIPE_BUF	512

static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_hostname[256] = "";
static C_TLS char C_osver[16] = "";
static C_TLS char C_osrel[16] = "";
static C_TLS char C_processor[16] = "";
static C_TLS char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)	    C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)	    C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    int what_len = name_len + 3;
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(what_len);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    C_strlcpy(what, name, what_len);
    if (strchr("\\/", name[name_len - 1]))
	C_strlcat(what, "*", what_len);
    else
	C_strlcat(what, "\\*", what_len);

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int C_fcall
closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent * C_fcall
readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)	    C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_lstat(fn)	    C_stat(fn)

#define C_u_i_execvp(f,a)   C_fix(execvp(C_data_pointer(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_data_pointer(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

/* MS replacement for the fork-exec pair */
#define C_u_i_spawnvp(m,f,a) C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_spawnvpe(m,f,a,e) C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_c_pointer_vector_or_null(a), (const char *const *)C_c_pointer_vector_or_null(e)))

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
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_fix(0))

static int C_fcall
get_hostname()
{
    /* Do we already have hostname? */
    if (strlen(C_hostname))
    {
	return 1;
    }
    else
    {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
	{
	    int nok = gethostname(C_hostname, sizeof(C_hostname));
	    WSACleanup();
	    return !nok;
	}
	return 0;
    }
}

static int C_fcall
sysinfo()
{
    /* Do we need to build the sysinfo? */
    if (!strlen(C_osrel))
    {
	OSVERSIONINFO ovf;
	ZeroMemory(&ovf, sizeof(ovf));
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (get_hostname() && GetVersionEx(&ovf))
	{
	    SYSTEM_INFO si;
	    _snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	    strncpy(C_osrel, "Win", sizeof(C_osrel) - 1);
	    switch (ovf.dwPlatformId)
	    {
	    case VER_PLATFORM_WIN32s:
		strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
		break;
	    case VER_PLATFORM_WIN32_WINDOWS:
		if (ovf.dwMajorVersion == 4)
		{
		    if (ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win95", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 10)
			strncpy(C_osrel, "Win98", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 90)
			strncpy(C_osrel, "WinMe", sizeof(C_osrel) - 1);
		}
		break;
	    case VER_PLATFORM_WIN32_NT:
		C_isNT = 1;
		if (ovf.dwMajorVersion == 6)
		    strncpy(C_osrel, "WinVista", sizeof(C_osrel) - 1);
		else if (ovf.dwMajorVersion == 5)
		{
		    if (ovf.dwMinorVersion == 2)
			strncpy(C_osrel, "WinServer2003", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 1)
			strncpy(C_osrel, "WinXP", sizeof(C_osrel) - 1);
		    else if ( ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win2000", sizeof(C_osrel) - 1);
		}
		else if (ovf.dwMajorVersion <= 4)
		   strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
		break;
	    }
	    GetSystemInfo(&si);
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    switch (si.wProcessorArchitecture)
	    {
	    case PROCESSOR_ARCHITECTURE_INTEL:
		strncpy(C_processor, "x86", sizeof(C_processor) - 1);
		break;
#	    ifdef PROCESSOR_ARCHITECTURE_IA64
	    case PROCESSOR_ARCHITECTURE_IA64:
		strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_AMD64
	    case PROCESSOR_ARCHITECTURE_AMD64:
		strncpy(C_processor, "x64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
	    case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
		break;
#	    endif
	    }
	}
	else
	    return set_last_errno();
    }
    return 1;
}

static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
	if (sysinfo()) /* for C_isNT */
	{
	    char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
	    UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
	    if (len)
		C_strlcpy(C_shlcmd + len, cmdnam, sizeof(C_shlcmd));
	    else
		return set_last_errno();
	}
	else
	    return 0;
    }
    return 1;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
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
C_process(const char * app, const char * cmdlin, const char ** env,
	  C_word * phandle,
	  int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
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

static int set_file_mtime(char *filename, C_word tm)
{
  struct _utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return _utime(filename, &tb);
}

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


#define PROT_NONE       0
#define PROT_READ       1
#define PROT_WRITE      2
#define PROT_EXEC       4
#define MAP_FILE        0
#define MAP_SHARED      1
#define MAP_PRIVATE     2
#define MAP_FIXED       0x10
#define MAP_ANONYMOUS   0x20

// This value is available starting with Windows XP with SP2 
// and Windows Server 2003 with SP1.
#ifndef FILE_MAP_EXECUTE
#define FILE_MAP_EXECUTE 0x20
#endif//FILE_MAP_EXECUTE

static int page_flags[] =
{
    0,
    PAGE_READONLY,
    PAGE_READWRITE,
    PAGE_READWRITE,
    PAGE_EXECUTE_READ,
    PAGE_EXECUTE_READ,
    PAGE_EXECUTE_READWRITE
};

static int file_flags[] =
{
    0,
    FILE_MAP_READ,
    FILE_MAP_READ|FILE_MAP_WRITE,
    FILE_MAP_READ|FILE_MAP_WRITE,
    FILE_MAP_READ|FILE_MAP_EXECUTE,
    FILE_MAP_READ|FILE_MAP_EXECUTE,
    FILE_MAP_READ|FILE_MAP_WRITE|FILE_MAP_EXECUTE
};

void* mmap(void* addr,int len,int prot,int flags,int fd,int off)
{
    HANDLE hMap;
    HANDLE hFile;

    void* ptr;

    if ((flags & MAP_FIXED) || (flags & MAP_PRIVATE) || (flags & MAP_ANONYMOUS))
    {
        errno = EINVAL;
        return (void*)-1;
    }

    /*
     * We must cast because _get_osfhandle returns intptr_t, but it must
     * be compared with INVALID_HANDLE_VALUE, which is a HANDLE type.
     * Who comes up with this shit?
     */
    hFile = (HANDLE)_get_osfhandle(fd);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return (void*)-1;
    }

    hMap = CreateFileMapping(
            hFile,
            NULL,
            page_flags[prot & (PROT_READ|PROT_WRITE|PROT_EXEC)],
            0,
            0,
            NULL);

    if (hMap == INVALID_HANDLE_VALUE)
    {
        set_last_errno();
        return (void*)-1;
    }

    ptr = MapViewOfFile(
            hMap,
            file_flags[prot & (PROT_READ|PROT_WRITE|PROT_EXEC)],
            0,
            off,
            len);

    if (ptr == NULL)
    {
        set_last_errno();
        ptr = (void*)-1;
    }

    CloseHandle(hMap);

    return ptr;
}

int munmap(void* addr,int len)
{
    if (UnmapViewOfFile(addr))
    {
        errno = 0;
        return 0;
    }
    set_last_errno();
    return -1;
}

int is_bad_mmap(void* p)
{
    void* bad_ptr;
    bad_ptr = (void*)-1;
    return p == bad_ptr;
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

static C_TLS C_word lf[411];
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
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,102,95,50,53,54,50,32,102,105,108,101,49,55,51,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,115,111,99,107,101,116,63,32,102,105,108,101,49,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,49,55,55,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,56,50,32,112,111,115,49,56,51,32,46,32,119,104,101,110,99,101,49,56,52,41,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,109,111,100,101,32,105,110,112,50,48,54,32,109,50,48,55,32,108,111,99,50,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,32,108,111,99,50,50,48,32,102,100,50,50,49,32,105,110,112,50,50,50,32,114,50,50,51,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,21),40,102,95,50,55,48,49,32,102,100,50,50,54,32,46,32,109,50,50,55,41,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,21),40,102,95,50,55,49,53,32,102,100,50,50,57,32,46,32,109,50,51,48,41,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,16),40,102,95,50,55,50,57,32,112,111,114,116,50,51,54,41};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,24),40,102,95,50,55,55,55,32,111,108,100,50,52,53,32,46,32,110,101,119,50,52,54,41};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,53,54,50,53,55,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,14),40,114,109,100,105,114,32,100,105,114,50,56,51,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,11),40,103,50,56,57,32,102,50,57,56,41,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,56,32,103,50,57,53,51,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,38),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,55,53,32,46,32,116,109,112,50,55,52,50,55,54,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,51,50,57,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,7),40,97,50,57,57,51,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,47),40,97,50,57,57,57,32,100,105,114,51,51,55,51,51,56,51,52,51,32,102,105,108,101,51,51,57,51,52,48,51,52,52,32,101,120,116,51,52,49,51,52,50,51,52,53,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,49,56,32,46,32,116,109,112,51,49,55,51,49,57,41,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,53,57,51,54,48,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,51,50,48,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,11),40,103,52,50,50,32,109,52,50,52,41,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,52,49,53,41,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,46),40,97,51,50,48,54,32,100,105,114,51,57,56,51,57,57,52,48,52,32,102,105,108,52,48,48,52,48,49,52,48,53,32,101,120,116,52,48,50,52,48,51,52,48,54,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,51,57,54,41,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,51,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,7),40,97,51,51,55,51,41,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,51,51,55,56,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,51,51,57,56,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,100,105,114,52,53,49,32,102,115,52,53,50,32,114,52,53,51,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,52,52,32,120,52,52,57,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,54,48,32,46,32,95,52,52,54,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,102,95,51,52,53,50,32,46,32,95,52,52,53,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,52,56,57,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,52,57,50,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,52,57,53,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,52,57,56,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,102,95,51,53,48,52,32,120,52,56,56,32,121,52,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,51,53,48,49,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,15),40,102,95,51,53,49,50,32,46,32,95,52,56,54,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,7),40,97,51,53,48,57,41,0};
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
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,7),40,97,51,56,56,52,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,33),40,97,51,56,57,48,32,101,112,105,100,54,53,56,32,101,110,111,114,109,54,53,57,32,101,99,111,100,101,54,54,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,24),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,54,52,51,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,7),40,97,51,57,53,57,41,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,14),40,97,51,57,53,51,32,101,120,110,54,56,49,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,100,111,108,111,111,112,54,56,51,32,115,108,54,56,53,32,105,54,56,54,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,50,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,7),40,97,52,48,51,51,41,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,21),40,116,109,112,50,50,50,52,53,32,97,114,103,115,54,55,53,54,57,55,41,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,7),40,97,51,57,54,56,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,15),40,97,51,57,52,55,32,107,54,55,52,54,56,48,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,56),40,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,54,54,57,32,99,111,110,118,101,114,116,54,55,48,32,108,111,99,54,55,49,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,48,50,32,105,55,48,52,41};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,38),40,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,55,48,48,41,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,10),40,110,111,112,32,120,55,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,7),40,97,52,49,49,54,41,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,14),40,97,52,49,49,48,32,101,120,110,55,50,57,41,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,49,51,55,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,7),40,97,52,49,54,48,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,20),40,97,52,49,53,52,32,46,32,97,114,103,115,55,50,51,55,51,51,41,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,7),40,97,52,49,51,49,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,97,52,49,48,52,32,107,55,50,50,55,50,56,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,81),40,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,55,49,50,32,102,105,108,101,110,97,109,101,55,49,51,32,97,114,103,99,111,110,118,55,49,52,32,97,114,103,108,105,115,116,55,49,53,32,101,110,118,108,105,115,116,55,49,54,32,112,114,111,99,55,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,56,49,51,32,102,108,97,103,115,56,49,52,32,46,32,109,111,100,101,56,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,18),40,102,105,108,101,45,99,108,111,115,101,32,102,100,56,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,37),40,102,105,108,101,45,114,101,97,100,32,102,100,56,51,51,32,115,105,122,101,56,51,52,32,46,32,98,117,102,102,101,114,56,51,53,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,38),40,102,105,108,101,45,119,114,105,116,101,32,102,100,56,52,53,32,98,117,102,102,101,114,56,52,54,32,46,32,115,105,122,101,56,52,55,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,22),40,115,117,102,102,105,120,45,108,111,111,112,32,105,110,100,101,120,56,55,56,41,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,99,111,117,110,116,56,55,54,41,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,54,53,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,56,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,56,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,56,57,55,32,105,110,112,56,57,56,32,114,56,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,57,48,51,32,46,32,109,57,48,52,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,57,49,51,32,46,32,109,57,49,52,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,57,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,27),40,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,57,50,56,41,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,7),40,97,52,54,56,55,41,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,20),40,97,52,54,57,51,32,46,32,114,101,115,117,108,116,115,57,52,52,41,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,57,52,48,32,112,114,111,99,57,52,49,32,46,32,109,111,100,101,57,52,50,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,7),40,97,52,55,49,49,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,20),40,97,52,55,49,55,32,46,32,114,101,115,117,108,116,115,57,53,49,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,57,52,55,32,112,114,111,99,57,52,56,32,46,32,109,111,100,101,57,52,57,41};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,7),40,97,52,55,51,53,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,97,52,55,52,54,32,46,32,114,101,115,117,108,116,115,57,54,54,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,97,52,55,52,48,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,7),40,97,52,55,53,53,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,57,53,52,32,116,104,117,110,107,57,53,53,32,46,32,109,111,100,101,57,53,54,41};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,7),40,97,52,55,54,57,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,20),40,97,52,55,56,48,32,46,32,114,101,115,117,108,116,115,57,56,51,41,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,7),40,97,52,55,55,52,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,7),40,97,52,55,56,57,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,57,55,49,32,116,104,117,110,107,57,55,50,32,46,32,109,111,100,101,57,55,51,41,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,57,57,49,57,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,34),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,49,48,54,54,32,109,49,48,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,49,48,55,50,32,97,99,99,49,48,55,51,32,108,111,99,49,48,55,52,41,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,55,56,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,49,48,56,48,41,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,28),40,109,111,100,101,32,105,110,112,49,48,56,57,32,109,49,48,57,48,32,108,111,99,49,48,57,49,41,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,28),40,99,104,101,99,107,32,102,100,49,49,48,51,32,105,110,112,49,49,48,52,32,114,49,49,48,53,41,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,33),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,49,49,48,57,32,46,32,109,49,49,49,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,34),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,49,49,49,50,32,46,32,109,49,49,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,49,49,49,57,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,36),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,49,49,50,53,32,46,32,110,101,119,49,49,50,54,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,49,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,49,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,49,53,48,41};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,49,53,50,32,109,111,100,101,49,49,53,51,32,46,32,115,105,122,101,49,49,53,52,41,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,26),40,113,117,111,116,101,45,97,114,103,45,115,116,114,105,110,103,32,115,116,114,49,49,56,49,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,14),40,102,95,53,51,50,50,32,120,49,50,48,50,41,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,37),40,97,53,51,48,55,32,112,114,103,49,50,48,51,32,97,114,103,98,117,102,49,50,48,52,32,101,110,118,98,117,102,49,50,48,53,41,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,49,56,55,32,46,32,116,109,112,49,49,56,54,49,49,56,56,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,48,53,32,120,49,50,50,57,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,37),40,97,53,51,57,48,32,112,114,103,49,50,51,48,32,97,114,103,98,117,102,49,50,51,49,32,101,110,118,98,117,102,49,50,51,50,41,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,51),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,49,50,49,51,32,102,105,108,101,110,97,109,101,49,50,49,52,32,46,32,116,109,112,49,50,49,50,49,50,49,53,41,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,50,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,50,52,53,32,46,32,97,114,103,115,49,50,52,54,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,24),40,109,97,112,45,108,111,111,112,49,51,48,51,32,103,49,51,49,53,49,51,50,49,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,49,50,56,54,32,99,109,100,49,50,56,55,32,97,114,103,115,49,50,56,56,32,101,110,118,49,50,56,57,32,115,116,100,111,117,116,102,49,50,57,48,32,115,116,100,105,110,102,49,50,57,49,32,115,116,100,101,114,114,102,49,50,57,50,32,46,32,116,109,112,49,50,56,53,49,50,57,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,7),40,103,49,51,56,50,41,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,56,49,41,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,51,55,56,41,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,7),40,97,53,55,52,52,41,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,38),40,97,53,55,53,48,32,105,110,49,52,48,55,32,111,117,116,49,52,48,56,32,112,105,100,49,52,48,57,32,101,114,114,49,52,49,48,41,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,51,55,49,32,101,114,114,63,49,51,55,50,32,99,109,100,49,51,55,51,32,97,114,103,115,49,51,55,52,32,101,110,118,49,51,55,53,32,101,120,97,99,116,102,49,51,55,54,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,52,49,56,32,46,32,116,109,112,49,52,49,55,49,52,49,57,41,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,52,51,54,32,46,32,116,109,112,49,52,51,53,49,52,51,55,41};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,52,53,50,32,110,111,104,97,110,103,49,52,53,51,41,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,13),40,115,108,101,101,112,32,115,49,52,53,53,41,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,52,57,55,32,108,101,110,49,52,57,56,32,112,114,111,116,49,52,57,57,32,102,108,97,103,49,53,48,48,32,102,100,49,53,48,49,32,46,32,111,102,102,49,53,48,50,41};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,53,49,57,32,46,32,108,101,110,49,53,50,48,41,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,53,50,52,41,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,53,50,55,41,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,46,32,95,49,53,53,56,49,53,54,50,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,53,54,53,49,53,54,57,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,53,55,49,49,53,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,53,55,55,49,53,56,49,41,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,53,56,51,49,53,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,53,56,57,49,53,57,51,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,53,57,53,49,53,57,57,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,54,48,49,49,54,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,54,48,55,49,54,49,49,41,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,54,49,51,49,54,49,55,41,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,54,49,57,49,54,50,51,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,54,50,53,49,54,50,57,41,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,54,51,49,49,54,51,53,41};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,54,51,55,49,54,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,54,52,51,49,54,52,55,41,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,54,52,57,49,54,53,51,41,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,54,53,53,49,54,53,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,54,54,49,49,54,54,53,41};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,54,54,55,49,54,55,49,41,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,54,55,51,49,54,55,55,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,54,55,57,49,54,56,51,41,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,54,56,53,49,54,56,57,41,0,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,54,57,49,49,54,57,53,41,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,54,57,55,49,55,48,49,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,55,48,51,49,55,48,55,41};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,55,48,57,49,55,49,51,41};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,55,49,53,49,55,49,57,41,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,55,50,49,49,55,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,55,50,55,49,55,51,49,41,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,55,51,51,49,55,51,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,55,51,57,49,55,52,51,41,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,55,52,53,49,55,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,55,53,49,49,55,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,55,53,55,49,55,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,55,54,51,49,55,54,55,41,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,55,54,57,49,55,55,51,41,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,55,55,53,49,55,55,57,41,0,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,55,56,49,49,55,56,53,41,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,55,56,55,49,55,57,49,41,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,55,57,51,49,55,57,55,41,0,0,0,0,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,56,48,48,41,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,14),40,97,54,51,55,57,32,115,105,103,54,51,57,41,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,19),40,97,54,51,56,56,32,46,32,116,109,112,52,57,56,52,57,57,41,0,0,0,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,13),40,97,54,52,49,51,32,117,109,53,49,49,41,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,15),40,97,54,52,49,57,32,112,111,114,116,49,57,52,41,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,12),40,97,54,52,53,54,32,102,49,49,48,41,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,17),40,97,54,52,54,50,32,102,49,49,50,32,116,49,49,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k6071 */
C_regparm static C_word C_fcall stub1513(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k6015 */
C_regparm static C_word C_fcall stub1492(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_mk_bool(is_bad_mmap(t0));
return C_r;}

/* from k6006 */
C_regparm static C_word C_fcall stub1480(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k5529 */
C_regparm static C_word C_fcall stub1258(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
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

/* from k5118 */
C_regparm static C_word C_fcall stub1140(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word C_fcall stub1134(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
C_return(z);
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

/* from k3769 */
C_regparm static C_word C_fcall stub621(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k3667 */
C_regparm static C_word C_fcall stub582(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3654 */
C_regparm static C_word C_fcall stub572(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3587 */
C_regparm static C_word C_fcall stub544(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k6471 in a6462 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
C_regparm static C_word C_fcall stub119(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2312 */
C_regparm static C_word C_fcall stub67(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word *av) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_5492)
static void C_ccall f_5492(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_fcall f_4199(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word *av) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word *av) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word *av) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word *av) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word *av) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_5475)
static void C_fcall f_5475(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word *av) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_6380)
static void C_ccall f_6380(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word *av) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word *av) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word *av) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word *av) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word *av) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word *av) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word *av) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word *av) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5244)
static C_word C_fcall f_5244(C_word t0,C_word t1);
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word *av) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word *av) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word *av) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word *av) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word *av) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_fcall f_6043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word *av) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word *av) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word *av) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word *av) C_noret;
C_noret_decl(f_6028)
static void C_fcall f_6028(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_fcall f_4419(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2599)
static void C_fcall f_2599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6420)
static void C_ccall f_6420(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word *av) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word *av) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word *av) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_6424)
static void C_ccall f_6424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word *av) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word *av) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word *av) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word *av) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_fcall f_2868(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3790)
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2892)
static void C_fcall f_2892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_fcall f_3778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word *av) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word *av) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word *av) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word *av) C_noret;
C_noret_decl(f_3186)
static void C_fcall f_3186(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5444)
static void C_ccall f_5444(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_3932)
static void C_fcall f_3932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word *av) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word *av) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_fcall f_2844(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word *av) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word *av) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_fcall f_3971(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word *av) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word *av) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word *av) C_noret;
C_noret_decl(f_2333)
static void C_fcall f_2333(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word *av) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word *av) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word *av) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word *av) C_noret;
C_noret_decl(f_3306)
static void C_fcall f_3306(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3110)
static void C_fcall f_3110(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word *av) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word *av) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word *av) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word *av) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word *av) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word *av) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word *av) C_noret;
C_noret_decl(f_2686)
static void C_fcall f_2686(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5085)
static void C_fcall f_5085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word *av) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word *av) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word *av) C_noret;
C_noret_decl(f_5694)
static void C_fcall f_5694(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5696)
static void C_fcall f_5696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word *av) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word *av) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_4474)
static void C_fcall f_4474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word *av) C_noret;
C_noret_decl(f_4481)
static void C_fcall f_4481(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word *av) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_6293)
static void C_ccall f_6293(C_word c,C_word *av) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word *av) C_noret;
C_noret_decl(f_3519)
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word *av) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word *av) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word *av) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word *av) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word *av) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word *av) C_noret;
C_noret_decl(f_6275)
static void C_ccall f_6275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6473)
static void C_ccall f_6473(C_word c,C_word *av) C_noret;
C_noret_decl(f_5186)
static void C_fcall f_5186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4060)
static void C_fcall f_4060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word *av) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word *av) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word *av) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word *av) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word *av) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word *av) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word *av) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word *av) C_noret;
C_noret_decl(f_6084)
static void C_fcall f_6084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word *av) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5701)
static C_word C_fcall f_5701(C_word t0,C_word t1);
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word *av) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word *av) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word *av) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word *av) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word *av) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word *av) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word *av) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_fcall f_4142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_fcall f_4545(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_fcall f_4051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word *av) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word *av) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word *av) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word *av) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word *av) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word *av) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word *av) C_noret;
C_noret_decl(f_4315)
static void C_fcall f_4315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_ccall f_6329(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static C_word C_fcall f_5710(C_word t0,C_word t1);
C_noret_decl(f_6305)
static void C_ccall f_6305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word *av) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word *av) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word *av) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word *av) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word *av) C_noret;
C_noret_decl(f_3490)
static void C_ccall f_3490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3084)
static void C_fcall f_3084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_5398)
static void C_ccall f_5398(C_word c,C_word *av) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word *av) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word *av) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word *av) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word *av) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word *av) C_noret;
C_noret_decl(f_2787)
static void C_ccall f_2787(C_word c,C_word *av) C_noret;
C_noret_decl(f_2784)
static void C_fcall f_2784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word *av) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4920)
static void C_fcall f_4920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3294)
static void C_fcall f_3294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_fcall f_3297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4961)
static void C_fcall f_4961(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word *av) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_fcall f_4998(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2952)
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_fcall f_2959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word *av) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_fcall f_3241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_fcall f_5174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word *av) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word *av) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_fcall f_3220(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word *av) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word *av) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word *av) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word *av) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word *av) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word *av) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word *av) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_4372)
static void C_fcall f_4372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4561)
static void C_ccall f_4561(C_word c,C_word *av) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word *av) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word *av) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word *av) C_noret;

C_noret_decl(trf_4199)
static void C_ccall trf_4199(C_word c,C_word *av) C_noret;
static void C_ccall trf_4199(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4199(t0,t1);}

C_noret_decl(trf_5475)
static void C_ccall trf_5475(C_word c,C_word *av) C_noret;
static void C_ccall trf_5475(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5475(t0,t1);}

C_noret_decl(trf_6043)
static void C_ccall trf_6043(C_word c,C_word *av) C_noret;
static void C_ccall trf_6043(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6043(t0,t1);}

C_noret_decl(trf_6028)
static void C_ccall trf_6028(C_word c,C_word *av) C_noret;
static void C_ccall trf_6028(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6028(t0,t1);}

C_noret_decl(trf_4419)
static void C_ccall trf_4419(C_word c,C_word *av) C_noret;
static void C_ccall trf_4419(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4419(t0,t1,t2);}

C_noret_decl(trf_2599)
static void C_ccall trf_2599(C_word c,C_word *av) C_noret;
static void C_ccall trf_2599(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2599(t0,t1);}

C_noret_decl(trf_2868)
static void C_ccall trf_2868(C_word c,C_word *av) C_noret;
static void C_ccall trf_2868(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2868(t0,t1,t2);}

C_noret_decl(trf_3790)
static void C_ccall trf_3790(C_word c,C_word *av) C_noret;
static void C_ccall trf_3790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3790(t0,t1,t2);}

C_noret_decl(trf_2892)
static void C_ccall trf_2892(C_word c,C_word *av) C_noret;
static void C_ccall trf_2892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2892(t0,t1,t2);}

C_noret_decl(trf_3778)
static void C_ccall trf_3778(C_word c,C_word *av) C_noret;
static void C_ccall trf_3778(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3778(t0,t1,t2);}

C_noret_decl(trf_3186)
static void C_ccall trf_3186(C_word c,C_word *av) C_noret;
static void C_ccall trf_3186(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3186(t0,t1,t2);}

C_noret_decl(trf_3932)
static void C_ccall trf_3932(C_word c,C_word *av) C_noret;
static void C_ccall trf_3932(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3932(t0,t1,t2,t3);}

C_noret_decl(trf_2844)
static void C_ccall trf_2844(C_word c,C_word *av) C_noret;
static void C_ccall trf_2844(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2844(t0,t1);}

C_noret_decl(trf_3971)
static void C_ccall trf_3971(C_word c,C_word *av) C_noret;
static void C_ccall trf_3971(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3971(t0,t1);}

C_noret_decl(trf_3977)
static void C_ccall trf_3977(C_word c,C_word *av) C_noret;
static void C_ccall trf_3977(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3977(t0,t1,t2,t3);}

C_noret_decl(trf_2333)
static void C_ccall trf_2333(C_word c,C_word *av) C_noret;
static void C_ccall trf_2333(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2333(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3306)
static void C_ccall trf_3306(C_word c,C_word *av) C_noret;
static void C_ccall trf_3306(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3306(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3110)
static void C_ccall trf_3110(C_word c,C_word *av) C_noret;
static void C_ccall trf_3110(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3110(t0,t1);}

C_noret_decl(trf_5655)
static void C_ccall trf_5655(C_word c,C_word *av) C_noret;
static void C_ccall trf_5655(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5655(t0,t1,t2);}

C_noret_decl(trf_2686)
static void C_ccall trf_2686(C_word c,C_word *av) C_noret;
static void C_ccall trf_2686(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2686(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5085)
static void C_ccall trf_5085(C_word c,C_word *av) C_noret;
static void C_ccall trf_5085(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5085(t0,t1);}

C_noret_decl(trf_5694)
static void C_ccall trf_5694(C_word c,C_word *av) C_noret;
static void C_ccall trf_5694(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5694(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5696)
static void C_ccall trf_5696(C_word c,C_word *av) C_noret;
static void C_ccall trf_5696(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5696(t0,t1,t2);}

C_noret_decl(trf_4474)
static void C_ccall trf_4474(C_word c,C_word *av) C_noret;
static void C_ccall trf_4474(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4474(t0,t1,t2);}

C_noret_decl(trf_4087)
static void C_ccall trf_4087(C_word c,C_word *av) C_noret;
static void C_ccall trf_4087(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4087(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4481)
static void C_ccall trf_4481(C_word c,C_word *av) C_noret;
static void C_ccall trf_4481(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4481(t0,t1);}

C_noret_decl(trf_3519)
static void C_ccall trf_3519(C_word c,C_word *av) C_noret;
static void C_ccall trf_3519(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3519(t0,t1,t2);}

C_noret_decl(trf_5186)
static void C_ccall trf_5186(C_word c,C_word *av) C_noret;
static void C_ccall trf_5186(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5186(t0,t1);}

C_noret_decl(trf_4060)
static void C_ccall trf_4060(C_word c,C_word *av) C_noret;
static void C_ccall trf_4060(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4060(t0,t1,t2);}

C_noret_decl(trf_6084)
static void C_ccall trf_6084(C_word c,C_word *av) C_noret;
static void C_ccall trf_6084(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6084(t0,t1);}

C_noret_decl(trf_4028)
static void C_ccall trf_4028(C_word c,C_word *av) C_noret;
static void C_ccall trf_4028(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4028(t0,t1,t2);}

C_noret_decl(trf_4142)
static void C_ccall trf_4142(C_word c,C_word *av) C_noret;
static void C_ccall trf_4142(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4142(t0,t1);}

C_noret_decl(trf_4545)
static void C_ccall trf_4545(C_word c,C_word *av) C_noret;
static void C_ccall trf_4545(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4545(t0,t1,t2,t3);}

C_noret_decl(trf_4051)
static void C_ccall trf_4051(C_word c,C_word *av) C_noret;
static void C_ccall trf_4051(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4051(t0,t1);}

C_noret_decl(trf_4315)
static void C_ccall trf_4315(C_word c,C_word *av) C_noret;
static void C_ccall trf_4315(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4315(t0,t1);}

C_noret_decl(trf_2649)
static void C_ccall trf_2649(C_word c,C_word *av) C_noret;
static void C_ccall trf_2649(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2649(t0,t1,t2,t3);}

C_noret_decl(trf_3084)
static void C_ccall trf_3084(C_word c,C_word *av) C_noret;
static void C_ccall trf_3084(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3084(t0,t1);}

C_noret_decl(trf_2784)
static void C_ccall trf_2784(C_word c,C_word *av) C_noret;
static void C_ccall trf_2784(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2784(t0,t1);}

C_noret_decl(trf_4920)
static void C_ccall trf_4920(C_word c,C_word *av) C_noret;
static void C_ccall trf_4920(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4920(t0,t1,t2,t3);}

C_noret_decl(trf_3294)
static void C_ccall trf_3294(C_word c,C_word *av) C_noret;
static void C_ccall trf_3294(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3294(t0,t1);}

C_noret_decl(trf_3297)
static void C_ccall trf_3297(C_word c,C_word *av) C_noret;
static void C_ccall trf_3297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3297(t0,t1);}

C_noret_decl(trf_4961)
static void C_ccall trf_4961(C_word c,C_word *av) C_noret;
static void C_ccall trf_4961(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4961(t0,t1,t2,t3);}

C_noret_decl(trf_4998)
static void C_ccall trf_4998(C_word c,C_word *av) C_noret;
static void C_ccall trf_4998(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4998(t0,t1,t2,t3);}

C_noret_decl(trf_2952)
static void C_ccall trf_2952(C_word c,C_word *av) C_noret;
static void C_ccall trf_2952(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2952(t0,t1,t2);}

C_noret_decl(trf_2959)
static void C_ccall trf_2959(C_word c,C_word *av) C_noret;
static void C_ccall trf_2959(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2959(t0,t1);}

C_noret_decl(trf_3241)
static void C_ccall trf_3241(C_word c,C_word *av) C_noret;
static void C_ccall trf_3241(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3241(t0,t1,t2);}

C_noret_decl(trf_5174)
static void C_ccall trf_5174(C_word c,C_word *av) C_noret;
static void C_ccall trf_5174(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5174(t0,t1);}

C_noret_decl(trf_3220)
static void C_ccall trf_3220(C_word c,C_word *av) C_noret;
static void C_ccall trf_3220(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3220(t0,t1,t2);}

C_noret_decl(trf_4372)
static void C_ccall trf_4372(C_word c,C_word *av) C_noret;
static void C_ccall trf_4372(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4372(t0,t1,t2);}

/* k2376 in k2356 in stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2378,2,av);}
/* posix-common.scm:227: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2369 in k2356 in stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2371,2,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_lstat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2337(2,av2);}}
else{
t2=C_stat(t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2337(2,av2);}}}

/* k4749 in a4746 in a4740 in k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4751,2,av);}{
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

/* a4755 in k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4756,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[207]+1));
t3=C_mutate2((C_word*)lf[207]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5486 in k5473 in process-run in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5488,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5492,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1190: ##sys#shell-command-arguments */
t4=*((C_word*)lf[319]+1);{
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

/* k4582 in open-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_4584,2,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posixwin.scm:810: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4761,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4765,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[199]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* process* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_5838,c,av);}
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
/* posixwin.scm:1267: %process */
f_5694(t1,lf[328],C_SCHEME_TRUE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1267: %process */
f_5694(t1,lf[328],C_SCHEME_TRUE,t2,t5,t9,t13);}}

/* k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4765(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4765,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4770,a[2]=t6,a[3]=t4,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4775,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4790,a[2]=t4,a[3]=t6,a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:872: ##sys#dynamic-wind */
t10=*((C_word*)lf[99]+1);{
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

/* k5490 in k5486 in k5473 in process-run in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5492,2,av);}
/* posixwin.scm:1190: process-spawn */
t2=*((C_word*)lf[313]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[305]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* file-open in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4195,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4199,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_4199(t7,C_u_i_car(t6));}
else{
t6=t5;
f_4199(t6,((C_word*)t0)[2]);}}

/* k2818 in k2815 in current-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2820,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:422: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
/* posix-common.scm:423: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[72];
av2[4]=lf[75];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k4197 in file-open in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4199(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4199,2,t0,t1);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[172]);
t4=C_i_check_exact_2(((C_word*)t0)[3],lf[172]);
t5=C_i_check_exact_2(t2,lf[172]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:704: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[172];
tp(4,av2);}}

/* a4769 in k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4770,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate2((C_word*)lf[209]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-link in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6185,2,av);}
/* posixwin.scm:1494: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[365];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4774 in k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4775,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4781,a[2]=((C_word*)t0)[2],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:875: ##sys#call-with-values */{
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

/* ##sys#shell-command-arguments in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5465,3,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list2(&a,2,lf[320],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5458 in k5446 in shell-command in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5460,2,av);}
/* posixwin.scm:1180: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[315];
av2[3]=lf[316];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3211,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* posix-common.scm:505: directory */
t4=*((C_word*)lf[30]+1);{
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
t4=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[94];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3218,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li36),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3220(t5,((C_word*)t0)[6],t1);}

/* file-lock/blocking in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6197,2,av);}
/* posixwin.scm:1496: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[367];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* file-lock in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6191,2,av);}
/* posixwin.scm:1495: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[366];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3425 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in ... */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3427,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
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
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k5473 in process-run in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5475(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_5475,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* posixwin.scm:1189: process-spawn */
t2=*((C_word*)lf[313]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[305]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1190: ##sys#shell-command */
t3=*((C_word*)lf[315]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* process-run in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5471,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5475,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t5=t3;
t6=t4;
f_5475(t6,C_u_i_car(t5));}
else{
t5=t4;
f_5475(t5,C_SCHEME_FALSE);}}

/* a6388 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_6389,c,av);}
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
t5=(C_truep(t4)?C_i_check_exact_2(t4,lf[106]):C_SCHEME_UNDEFINED);
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

/* a6379 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6380,3,av);}
t3=C_i_check_exact_2(t2,lf[127]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(*((C_word*)lf[126]+1),t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4575 in open-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4577,2,av);}
/* posixwin.scm:810: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* current-effective-user-name in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6167,2,av);}
/* posixwin.scm:1491: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[362];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* current-effective-user-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6161,2,av);}
/* posixwin.scm:1490: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[361];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* current-user-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6179,2,av);}
/* posixwin.scm:1493: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[364];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* current-group-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6173,2,av);}
/* posixwin.scm:1492: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[363];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* fifo? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6366,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2815 in current-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2817,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_curdir(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2820,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:420: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}

/* k3640 in k3634 in k3630 in local-time->seconds in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3642,2,av);}
if(C_truep(t1)){
/* posix-common.scm:606: ##sys#error */
t2=*((C_word*)lf[54]+1);{
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
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* current-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_2804,c,av);}
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
t5=*((C_word*)lf[73]+1);{
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
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2817,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t5;
av2[2]=C_fix(1024);
av2[3]=C_make_character(32);
tp(4,av2);}}}

/* k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3853(C_word c,C_word *av){
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
C_word t184;
C_word t185;
C_word t186;
C_word t187;
C_word t188;
C_word t189;
C_word t190;
C_word t191;
C_word t192;
C_word t193;
C_word t194;
C_word t195;
C_word t196;
C_word t197;
C_word t198;
C_word t199;
C_word t200;
C_word t201;
C_word t202;
C_word t203;
C_word t204;
C_word t205;
C_word t206;
C_word t207;
C_word t208;
C_word t209;
C_word t210;
C_word t211;
C_word t212;
C_word t213;
C_word t214;
C_word t215;
C_word t216;
C_word t217;
C_word t218;
C_word t219;
C_word t220;
C_word t221;
C_word t222;
C_word t223;
C_word t224;
C_word t225;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(337,c,9)))){
C_save_and_reclaim((void *)f_3853,2,av);}
a=C_alloc(337);
t2=C_mutate2((C_word*)lf[127]+1 /* (set! signal-handler ...) */,t1);
t3=C_mutate2((C_word*)lf[128]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[129]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3861,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2(&lf[133] /* (set! list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3932,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2(&lf[135] /* (set! free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[145]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
t9=C_mutate2(&lf[146] /* (set! call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4087,a[2]=t8,a[3]=t7,a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate2((C_word*)lf[147]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t11=C_mutate2((C_word*)lf[148]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t12=C_mutate2((C_word*)lf[149]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t13=C_mutate2((C_word*)lf[150]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t14=C_mutate2((C_word*)lf[151]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDWR));
t15=C_mutate2((C_word*)lf[152]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t16=C_mutate2((C_word*)lf[153]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t17=C_mutate2((C_word*)lf[154]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t18=C_mutate2((C_word*)lf[155]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t19=C_mutate2((C_word*)lf[156]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t20=C_mutate2((C_word*)lf[157]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t21=C_mutate2((C_word*)lf[158]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t22=C_mutate2((C_word*)lf[159]+1 /* (set! open/noinherit ...) */,C_fix((C_word)O_NOINHERIT));
t23=C_mutate2((C_word*)lf[160]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IREAD));
t24=C_mutate2((C_word*)lf[161]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWRITE));
t25=C_mutate2((C_word*)lf[162]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IEXEC));
t26=C_mutate2((C_word*)lf[163]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IREAD));
t27=C_mutate2((C_word*)lf[164]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWRITE));
t28=C_mutate2((C_word*)lf[165]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IEXEC));
t29=C_mutate2((C_word*)lf[166]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IREAD));
t30=C_mutate2((C_word*)lf[167]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWRITE));
t31=C_mutate2((C_word*)lf[168]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IEXEC));
t32=C_mutate2((C_word*)lf[169]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t33=C_mutate2((C_word*)lf[170]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t34=C_mutate2((C_word*)lf[171]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t35=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t36=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t35);
t37=t36;
t38=C_mutate2((C_word*)lf[172]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4195,a[2]=t37,a[3]=((C_word)li92),tmp=(C_word)a,a+=4,tmp));
t39=C_mutate2((C_word*)lf[174]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4230,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate2((C_word*)lf[177]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4261,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t41=C_mutate2((C_word*)lf[180]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate2((C_word*)lf[183]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4345,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate2((C_word*)lf[73]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4545,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
t45=C_mutate2((C_word*)lf[195]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4563,a[2]=t44,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate2((C_word*)lf[199]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4603,a[2]=t44,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate2((C_word*)lf[200]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4643,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate2((C_word*)lf[202]+1 /* (set! close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4661,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate2((C_word*)lf[204]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate2((C_word*)lf[205]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4703,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate2((C_word*)lf[206]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4727,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate2((C_word*)lf[208]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate2((C_word*)lf[210]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate2((C_word*)lf[212]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t55=C_mutate2((C_word*)lf[213]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t56=C_mutate2((C_word*)lf[214]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t57=C_mutate2((C_word*)lf[215]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t58=C_mutate2((C_word*)lf[216]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t59=C_mutate2((C_word*)lf[217]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t60=C_mutate2((C_word*)lf[218]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t61=C_set_block_item(lf[219] /* signal/alrm */,0,C_fix(0));
t62=C_set_block_item(lf[220] /* signal/chld */,0,C_fix(0));
t63=C_set_block_item(lf[221] /* signal/cont */,0,C_fix(0));
t64=C_set_block_item(lf[222] /* signal/hup */,0,C_fix(0));
t65=C_set_block_item(lf[223] /* signal/io */,0,C_fix(0));
t66=C_set_block_item(lf[224] /* signal/kill */,0,C_fix(0));
t67=C_set_block_item(lf[225] /* signal/pipe */,0,C_fix(0));
t68=C_set_block_item(lf[226] /* signal/prof */,0,C_fix(0));
t69=C_set_block_item(lf[227] /* signal/quit */,0,C_fix(0));
t70=C_set_block_item(lf[228] /* signal/stop */,0,C_fix(0));
t71=C_set_block_item(lf[229] /* signal/trap */,0,C_fix(0));
t72=C_set_block_item(lf[230] /* signal/tstp */,0,C_fix(0));
t73=C_set_block_item(lf[231] /* signal/urg */,0,C_fix(0));
t74=C_set_block_item(lf[232] /* signal/usr1 */,0,C_fix(0));
t75=C_set_block_item(lf[233] /* signal/usr2 */,0,C_fix(0));
t76=C_set_block_item(lf[234] /* signal/vtalrm */,0,C_fix(0));
t77=C_set_block_item(lf[235] /* signal/winch */,0,C_fix(0));
t78=C_set_block_item(lf[236] /* signal/xcpu */,0,C_fix(0));
t79=C_set_block_item(lf[237] /* signal/xfsz */,0,C_fix(0));
t80=C_a_i_list7(&a,7,*((C_word*)lf[212]+1),*((C_word*)lf[213]+1),*((C_word*)lf[214]+1),*((C_word*)lf[215]+1),*((C_word*)lf[216]+1),*((C_word*)lf[217]+1),*((C_word*)lf[218]+1));
t81=C_mutate2((C_word*)lf[238]+1 /* (set! signals-list ...) */,t80);
t82=C_mutate2((C_word*)lf[239]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t83=C_mutate2((C_word*)lf[240]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t84=C_mutate2((C_word*)lf[241]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t85=C_mutate2((C_word*)lf[242]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t86=C_mutate2((C_word*)lf[243]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t87=C_mutate2((C_word*)lf[244]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t88=C_mutate2((C_word*)lf[245]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t89=C_mutate2((C_word*)lf[246]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t90=C_mutate2((C_word*)lf[247]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t91=C_mutate2((C_word*)lf[248]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t92=C_mutate2((C_word*)lf[249]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t93=C_mutate2((C_word*)lf[250]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t94=C_mutate2((C_word*)lf[251]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t95=C_mutate2((C_word*)lf[252]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t96=C_mutate2((C_word*)lf[253]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t97=C_mutate2((C_word*)lf[254]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t98=C_mutate2((C_word*)lf[255]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t99=C_mutate2((C_word*)lf[256]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t100=C_mutate2((C_word*)lf[257]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t101=C_mutate2((C_word*)lf[258]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t102=C_mutate2((C_word*)lf[259]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t103=C_mutate2((C_word*)lf[260]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t104=C_mutate2((C_word*)lf[261]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t105=C_mutate2((C_word*)lf[262]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t106=C_mutate2((C_word*)lf[263]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t107=C_mutate2((C_word*)lf[264]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t108=C_mutate2((C_word*)lf[265]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t109=C_mutate2((C_word*)lf[266]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t110=C_mutate2((C_word*)lf[267]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t111=C_mutate2((C_word*)lf[268]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t112=C_mutate2((C_word*)lf[269]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t113=C_mutate2((C_word*)lf[270]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t114=C_mutate2((C_word*)lf[271]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t115=C_mutate2((C_word*)lf[272]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t116=C_mutate2((C_word*)lf[273]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t117=C_mutate2((C_word*)lf[274]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t118=C_mutate2((C_word*)lf[275]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t119=C_mutate2((C_word*)lf[276]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t120=C_mutate2((C_word*)lf[277]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4894,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t121=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4920,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
t122=C_mutate2((C_word*)lf[279]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4940,a[2]=t121,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t123=C_mutate2((C_word*)lf[280]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4946,a[2]=t121,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp));
t124=C_mutate2((C_word*)lf[281]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4952,a[2]=t121,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t125=C_mutate2((C_word*)lf[50]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t126=C_mutate2((C_word*)lf[51]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t127=C_mutate2((C_word*)lf[52]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t128=C_SCHEME_UNDEFINED;
t129=(*a=C_VECTOR_TYPE|1,a[1]=t128,tmp=(C_word)a,a+=2,tmp);
t130=C_SCHEME_UNDEFINED;
t131=(*a=C_VECTOR_TYPE|1,a[1]=t130,tmp=(C_word)a,a+=2,tmp);
t132=C_set_block_item(t129,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4961,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t133=C_set_block_item(t131,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4998,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate2((C_word*)lf[64]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5016,a[2]=t131,a[3]=t129,a[4]=((C_word)li131),tmp=(C_word)a,a+=5,tmp));
t135=C_mutate2((C_word*)lf[65]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5030,a[2]=t131,a[3]=t129,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp));
t136=C_mutate2((C_word*)lf[12]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate2((C_word*)lf[70]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5078,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate2((C_word*)lf[292]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5108,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t139=C_mutate2((C_word*)lf[293]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5121,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate2((C_word*)lf[294]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t141=C_mutate2((C_word*)lf[295]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5153,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t142=C_mutate2((C_word*)lf[297]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5168,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t143=C_mutate2((C_word*)lf[303]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t144=C_mutate2((C_word*)lf[304]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t145=C_mutate2((C_word*)lf[305]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t146=C_mutate2((C_word*)lf[306]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t147=C_mutate2((C_word*)lf[307]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t148=C_mutate2(&lf[308] /* (set! quote-arg-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5269,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate2((C_word*)lf[311]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5281,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate2((C_word*)lf[313]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5361,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate2((C_word*)lf[315]+1 /* (set! ##sys#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5444,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate2((C_word*)lf[319]+1 /* (set! ##sys#shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5465,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate2((C_word*)lf[321]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5471,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate2((C_word*)lf[322]+1 /* (set! ##sys#process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5561,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t155=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5694,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
t156=C_mutate2((C_word*)lf[327]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5778,a[2]=t155,a[3]=((C_word)li159),tmp=(C_word)a,a+=4,tmp));
t157=C_mutate2((C_word*)lf[328]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5838,a[2]=t155,a[3]=((C_word)li160),tmp=(C_word)a,a+=4,tmp));
t158=C_mutate2((C_word*)lf[130]+1 /* (set! ##sys#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5898,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate2((C_word*)lf[329]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5910,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate2((C_word*)lf[330]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5916,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate2((C_word*)lf[332]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5928,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t162=C_mutate2((C_word*)lf[335]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5959,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t163=C_mutate2((C_word*)lf[337]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t164=C_mutate2((C_word*)lf[338]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t165=C_mutate2((C_word*)lf[339]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t166=C_mutate2((C_word*)lf[340]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t167=C_mutate2((C_word*)lf[341]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t168=C_mutate2((C_word*)lf[342]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t169=C_mutate2((C_word*)lf[343]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t170=C_mutate2((C_word*)lf[344]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t171=C_mutate2((C_word*)lf[345]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANONYMOUS));
t172=C_mutate2((C_word*)lf[346]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6021,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t173=C_mutate2((C_word*)lf[351]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6077,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t174=C_mutate2((C_word*)lf[353]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6110,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t175=C_mutate2((C_word*)lf[354]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t176=C_mutate2((C_word*)lf[355]+1 /* (set! change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6125,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate2((C_word*)lf[356]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6131,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t178=C_mutate2((C_word*)lf[357]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6137,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate2((C_word*)lf[358]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6143,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate2((C_word*)lf[359]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6149,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t181=C_mutate2((C_word*)lf[360]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6155,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t182=C_mutate2((C_word*)lf[361]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6161,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t183=C_mutate2((C_word*)lf[362]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6167,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t184=C_mutate2((C_word*)lf[363]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6173,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t185=C_mutate2((C_word*)lf[364]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6179,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t186=C_mutate2((C_word*)lf[365]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6185,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t187=C_mutate2((C_word*)lf[366]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6191,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t188=C_mutate2((C_word*)lf[367]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6197,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t189=C_mutate2((C_word*)lf[368]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6203,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t190=C_mutate2((C_word*)lf[369]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6209,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t191=C_mutate2((C_word*)lf[370]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t192=C_mutate2((C_word*)lf[371]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6221,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t193=C_mutate2((C_word*)lf[372]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6227,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t194=C_mutate2((C_word*)lf[373]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6233,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t195=C_mutate2((C_word*)lf[374]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6239,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t196=C_mutate2((C_word*)lf[375]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6245,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t197=C_mutate2((C_word*)lf[376]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6251,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t198=C_mutate2((C_word*)lf[377]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6257,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t199=C_mutate2((C_word*)lf[378]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6263,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t200=C_mutate2((C_word*)lf[379]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6269,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t201=C_mutate2((C_word*)lf[380]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6275,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t202=C_mutate2((C_word*)lf[381]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6281,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t203=C_mutate2((C_word*)lf[382]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6287,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t204=C_mutate2((C_word*)lf[383]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6293,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t205=C_mutate2((C_word*)lf[384]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6299,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t206=C_mutate2((C_word*)lf[385]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6305,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t207=C_mutate2((C_word*)lf[386]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6311,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t208=C_mutate2((C_word*)lf[387]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6317,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t209=C_mutate2((C_word*)lf[388]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6323,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t210=C_mutate2((C_word*)lf[389]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6329,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp));
t211=C_mutate2((C_word*)lf[390]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6335,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp));
t212=C_mutate2((C_word*)lf[391]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6341,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t213=C_mutate2((C_word*)lf[392]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6347,a[2]=((C_word)li207),tmp=(C_word)a,a+=3,tmp));
t214=C_mutate2((C_word*)lf[393]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6353,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp));
t215=C_mutate2((C_word*)lf[394]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6359,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t216=C_set_block_item(lf[395] /* errno/wouldblock */,0,C_fix(0));
t217=C_mutate2((C_word*)lf[39]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6366,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t218=C_set_block_item(lf[396] /* open/fsync */,0,C_fix(0));
t219=C_set_block_item(lf[397] /* open/noctty */,0,C_fix(0));
t220=C_set_block_item(lf[398] /* open/nonblock */,0,C_fix(0));
t221=C_set_block_item(lf[399] /* open/sync */,0,C_fix(0));
t222=C_set_block_item(lf[400] /* perm/isgid */,0,C_fix(0));
t223=C_set_block_item(lf[401] /* perm/isuid */,0,C_fix(0));
t224=C_set_block_item(lf[402] /* perm/isvtx */,0,C_fix(0));
t225=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t225;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t225+1)))(2,av2);}}

/* current-process-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3855,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fudge(C_fix(33));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-write-access? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4946,3,av);}
/* posixwin.scm:1001: check */
f_4920(t1,t2,C_fix((C_word)4),lf[280]);}

/* k3630 in local-time->seconds in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3632,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:604: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3634 in k3630 in local-time->seconds in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3636,2,av);}
a=C_alloc(9);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3642,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:605: fp= */
t4=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[118];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* file-read-access? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4940,3,av);}
/* posixwin.scm:1000: check */
f_4920(t1,t2,C_fix((C_word)2),lf[279]);}

/* file-execute-access? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4952,3,av);}
/* posixwin.scm:1002: check */
f_4920(t1,t2,C_fix((C_word)2),lf[281]);}

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
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2230))){
C_save(t1);
C_rereclaim2(2230*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,411);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000/this function is not available on this platform");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[10]=C_h_intern(&lf[10],11,"\000file-error");
lf[11]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[12]=C_h_intern(&lf[12],12,"port->fileno");
lf[13]=C_h_intern(&lf[13],17,"\003sysmake-c-string");
lf[14]=C_h_intern(&lf[14],27,"\003sysplatform-fixup-pathname");
lf[15]=C_h_intern(&lf[15],11,"\000type-error");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\052bad argument type - not a fixnum or string");
lf[17]=C_h_intern(&lf[17],5,"port\077");
lf[18]=C_h_intern(&lf[18],9,"file-stat");
lf[19]=C_h_intern(&lf[19],16,"_stat_st_blksize");
lf[20]=C_h_intern(&lf[20],15,"_stat_st_blocks");
lf[21]=C_h_intern(&lf[21],22,"file-modification-time");
lf[22]=C_h_intern(&lf[22],16,"file-access-time");
lf[23]=C_h_intern(&lf[23],16,"file-change-time");
lf[24]=C_h_intern(&lf[24],10,"file-owner");
lf[25]=C_h_intern(&lf[25],16,"file-permissions");
lf[26]=C_h_intern(&lf[26],9,"file-size");
lf[27]=C_h_intern(&lf[27],9,"file-type");
lf[28]=C_h_intern(&lf[28],12,"regular-file");
lf[29]=C_h_intern(&lf[29],13,"symbolic-link");
lf[30]=C_h_intern(&lf[30],9,"directory");
lf[31]=C_h_intern(&lf[31],16,"character-device");
lf[32]=C_h_intern(&lf[32],12,"block-device");
lf[33]=C_h_intern(&lf[33],4,"fifo");
lf[34]=C_h_intern(&lf[34],6,"socket");
lf[35]=C_h_intern(&lf[35],13,"regular-file\077");
lf[36]=C_h_intern(&lf[36],14,"symbolic-link\077");
lf[37]=C_h_intern(&lf[37],13,"block-device\077");
lf[38]=C_h_intern(&lf[38],17,"character-device\077");
lf[39]=C_h_intern(&lf[39],5,"fifo\077");
lf[40]=C_h_intern(&lf[40],7,"socket\077");
lf[41]=C_h_intern(&lf[41],10,"directory\077");
lf[42]=C_h_intern(&lf[42],8,"seek/set");
lf[43]=C_h_intern(&lf[43],8,"seek/end");
lf[44]=C_h_intern(&lf[44],8,"seek/cur");
lf[45]=C_h_intern(&lf[45],18,"set-file-position!");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[47]=C_h_intern(&lf[47],6,"stream");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[49]=C_h_intern(&lf[49],13,"file-position");
lf[50]=C_h_intern(&lf[50],12,"fileno/stdin");
lf[51]=C_h_intern(&lf[51],13,"fileno/stdout");
lf[52]=C_h_intern(&lf[52],13,"fileno/stderr");
lf[53]=C_h_intern(&lf[53],7,"\000append");
lf[54]=C_h_intern(&lf[54],9,"\003syserror");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[61]=C_h_intern(&lf[61],13,"\003sysmake-port");
lf[62]=C_h_intern(&lf[62],21,"\003sysstream-port-class");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[64]=C_h_intern(&lf[64],16,"open-input-file\052");
lf[65]=C_h_intern(&lf[65],17,"open-output-file\052");
lf[66]=C_h_intern(&lf[66],13,"\003sysport-data");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[69]=C_h_intern(&lf[69],25,"\003syspeek-unsigned-integer");
lf[70]=C_h_intern(&lf[70],16,"duplicate-fileno");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[72]=C_h_intern(&lf[72],17,"current-directory");
lf[73]=C_h_intern(&lf[73],16,"change-directory");
lf[74]=C_h_intern(&lf[74],13,"\003syssubstring");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[76]=C_h_intern(&lf[76],15,"\003sysmake-string");
lf[77]=C_h_intern(&lf[77],16,"delete-directory");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[79]=C_h_intern(&lf[79],11,"delete-file");
lf[80]=C_h_intern(&lf[80],10,"find-files");
lf[81]=C_h_intern(&lf[81],9,"\000dotfiles");
lf[82]=C_h_intern(&lf[82],16,"\000follow-symlinks");
lf[83]=C_h_intern(&lf[83],16,"create-directory");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[85]=C_h_intern(&lf[85],18,"pathname-directory");
lf[86]=C_h_intern(&lf[86],18,"decompose-pathname");
lf[87]=C_h_intern(&lf[87],13,"make-pathname");
lf[88]=C_h_intern(&lf[88],12,"file-exists\077");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[90]=C_h_intern(&lf[90],16,"\003sysmake-pointer");
lf[91]=C_h_intern(&lf[91],4,"glob");
lf[92]=C_h_intern(&lf[92],23,"irregex-match-substring");
lf[93]=C_h_intern(&lf[93],13,"irregex-match");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[95]=C_h_intern(&lf[95],16,"\003sysglob->regexp");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[99]=C_h_intern(&lf[99],16,"\003sysdynamic-wind");
lf[100]=C_h_intern(&lf[100],7,"irregex");
lf[101]=C_h_intern(&lf[101],15,"\003sysget-keyword");
lf[102]=C_h_intern(&lf[102],6,"\000limit");
lf[103]=C_h_intern(&lf[103],5,"\000seed");
lf[104]=C_h_intern(&lf[104],7,"\000action");
lf[105]=C_h_intern(&lf[105],5,"\000test");
lf[106]=C_h_intern(&lf[106],18,"file-creation-mode");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[109]=C_h_intern(&lf[109],19,"seconds->local-time");
lf[110]=C_h_intern(&lf[110],18,"\003sysdecode-seconds");
lf[111]=C_h_intern(&lf[111],15,"current-seconds");
lf[112]=C_h_intern(&lf[112],17,"seconds->utc-time");
lf[113]=C_h_intern(&lf[113],15,"seconds->string");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[115]=C_h_intern(&lf[115],19,"local-time->seconds");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[117]=C_h_intern(&lf[117],3,"fp=");
lf[118]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[119]=C_h_intern(&lf[119],12,"time->string");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[122]=C_h_intern(&lf[122],6,"setenv");
lf[123]=C_h_intern(&lf[123],8,"unsetenv");
lf[124]=C_h_intern(&lf[124],25,"get-environment-variables");
lf[125]=C_h_intern(&lf[125],19,"set-signal-handler!");
lf[126]=C_h_intern(&lf[126],17,"\003syssignal-vector");
lf[127]=C_h_intern(&lf[127],14,"signal-handler");
lf[128]=C_h_intern(&lf[128],18,"current-process-id");
lf[129]=C_h_intern(&lf[129],12,"process-wait");
lf[130]=C_h_intern(&lf[130],16,"\003sysprocess-wait");
lf[131]=C_h_intern(&lf[131],14,"\000process-error");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[134]=C_h_intern(&lf[134],6,"signal");
lf[136]=C_h_intern(&lf[136],19,"pointer-vector-set!");
lf[137]=C_h_intern(&lf[137],5,"error");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\015Out of memory");
lf[139]=C_h_intern(&lf[139],22,"with-exception-handler");
lf[140]=C_h_intern(&lf[140],30,"call-with-current-continuation");
lf[141]=C_h_intern(&lf[141],19,"make-pointer-vector");
lf[142]=C_h_intern(&lf[142],4,"free");
lf[143]=C_h_intern(&lf[143],18,"pointer-vector-ref");
lf[144]=C_h_intern(&lf[144],21,"pointer-vector-length");
lf[145]=C_h_intern(&lf[145],24,"pathname-strip-directory");
lf[147]=C_h_intern(&lf[147],8,"pipe/buf");
lf[148]=C_h_intern(&lf[148],11,"open/rdonly");
lf[149]=C_h_intern(&lf[149],11,"open/wronly");
lf[150]=C_h_intern(&lf[150],9,"open/rdwr");
lf[151]=C_h_intern(&lf[151],9,"open/read");
lf[152]=C_h_intern(&lf[152],10,"open/write");
lf[153]=C_h_intern(&lf[153],10,"open/creat");
lf[154]=C_h_intern(&lf[154],11,"open/append");
lf[155]=C_h_intern(&lf[155],9,"open/excl");
lf[156]=C_h_intern(&lf[156],10,"open/trunc");
lf[157]=C_h_intern(&lf[157],11,"open/binary");
lf[158]=C_h_intern(&lf[158],9,"open/text");
lf[159]=C_h_intern(&lf[159],14,"open/noinherit");
lf[160]=C_h_intern(&lf[160],10,"perm/irusr");
lf[161]=C_h_intern(&lf[161],10,"perm/iwusr");
lf[162]=C_h_intern(&lf[162],10,"perm/ixusr");
lf[163]=C_h_intern(&lf[163],10,"perm/irgrp");
lf[164]=C_h_intern(&lf[164],10,"perm/iwgrp");
lf[165]=C_h_intern(&lf[165],10,"perm/ixgrp");
lf[166]=C_h_intern(&lf[166],10,"perm/iroth");
lf[167]=C_h_intern(&lf[167],10,"perm/iwoth");
lf[168]=C_h_intern(&lf[168],10,"perm/ixoth");
lf[169]=C_h_intern(&lf[169],10,"perm/irwxu");
lf[170]=C_h_intern(&lf[170],10,"perm/irwxg");
lf[171]=C_h_intern(&lf[171],10,"perm/irwxo");
lf[172]=C_h_intern(&lf[172],9,"file-open");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[174]=C_h_intern(&lf[174],10,"file-close");
lf[175]=C_h_intern(&lf[175],22,"\003sysdispatch-interrupt");
lf[176]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[177]=C_h_intern(&lf[177],9,"file-read");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[180]=C_h_intern(&lf[180],10,"file-write");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[182]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[183]=C_h_intern(&lf[183],12,"file-mkstemp");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000$0123456789abcdefghijklmnopqrstuvwxyz");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[186]=C_h_intern(&lf[186],6,"random");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid template");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\026non-existent directory");
lf[189]=C_h_intern(&lf[189],17,"directory-exists\077");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[191]=C_h_intern(&lf[191],11,"string-copy");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[195]=C_h_intern(&lf[195],15,"open-input-pipe");
lf[196]=C_h_intern(&lf[196],5,"\000text");
lf[197]=C_h_intern(&lf[197],7,"\000binary");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[199]=C_h_intern(&lf[199],16,"open-output-pipe");
lf[200]=C_h_intern(&lf[200],16,"close-input-pipe");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[202]=C_h_intern(&lf[202],17,"close-output-pipe");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[204]=C_h_intern(&lf[204],20,"call-with-input-pipe");
lf[205]=C_h_intern(&lf[205],21,"call-with-output-pipe");
lf[206]=C_h_intern(&lf[206],20,"with-input-from-pipe");
lf[207]=C_h_intern(&lf[207],18,"\003sysstandard-input");
lf[208]=C_h_intern(&lf[208],19,"with-output-to-pipe");
lf[209]=C_h_intern(&lf[209],19,"\003sysstandard-output");
lf[210]=C_h_intern(&lf[210],11,"create-pipe");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[212]=C_h_intern(&lf[212],11,"signal/term");
lf[213]=C_h_intern(&lf[213],10,"signal/int");
lf[214]=C_h_intern(&lf[214],10,"signal/fpe");
lf[215]=C_h_intern(&lf[215],10,"signal/ill");
lf[216]=C_h_intern(&lf[216],11,"signal/segv");
lf[217]=C_h_intern(&lf[217],11,"signal/abrt");
lf[218]=C_h_intern(&lf[218],12,"signal/break");
lf[219]=C_h_intern(&lf[219],11,"signal/alrm");
lf[220]=C_h_intern(&lf[220],11,"signal/chld");
lf[221]=C_h_intern(&lf[221],11,"signal/cont");
lf[222]=C_h_intern(&lf[222],10,"signal/hup");
lf[223]=C_h_intern(&lf[223],9,"signal/io");
lf[224]=C_h_intern(&lf[224],11,"signal/kill");
lf[225]=C_h_intern(&lf[225],11,"signal/pipe");
lf[226]=C_h_intern(&lf[226],11,"signal/prof");
lf[227]=C_h_intern(&lf[227],11,"signal/quit");
lf[228]=C_h_intern(&lf[228],11,"signal/stop");
lf[229]=C_h_intern(&lf[229],11,"signal/trap");
lf[230]=C_h_intern(&lf[230],11,"signal/tstp");
lf[231]=C_h_intern(&lf[231],10,"signal/urg");
lf[232]=C_h_intern(&lf[232],11,"signal/usr1");
lf[233]=C_h_intern(&lf[233],11,"signal/usr2");
lf[234]=C_h_intern(&lf[234],13,"signal/vtalrm");
lf[235]=C_h_intern(&lf[235],12,"signal/winch");
lf[236]=C_h_intern(&lf[236],11,"signal/xcpu");
lf[237]=C_h_intern(&lf[237],11,"signal/xfsz");
lf[238]=C_h_intern(&lf[238],12,"signals-list");
lf[239]=C_h_intern(&lf[239],10,"errno/perm");
lf[240]=C_h_intern(&lf[240],11,"errno/noent");
lf[241]=C_h_intern(&lf[241],10,"errno/srch");
lf[242]=C_h_intern(&lf[242],10,"errno/intr");
lf[243]=C_h_intern(&lf[243],8,"errno/io");
lf[244]=C_h_intern(&lf[244],12,"errno/noexec");
lf[245]=C_h_intern(&lf[245],10,"errno/badf");
lf[246]=C_h_intern(&lf[246],11,"errno/child");
lf[247]=C_h_intern(&lf[247],11,"errno/nomem");
lf[248]=C_h_intern(&lf[248],11,"errno/acces");
lf[249]=C_h_intern(&lf[249],11,"errno/fault");
lf[250]=C_h_intern(&lf[250],10,"errno/busy");
lf[251]=C_h_intern(&lf[251],11,"errno/exist");
lf[252]=C_h_intern(&lf[252],12,"errno/notdir");
lf[253]=C_h_intern(&lf[253],11,"errno/isdir");
lf[254]=C_h_intern(&lf[254],11,"errno/inval");
lf[255]=C_h_intern(&lf[255],11,"errno/mfile");
lf[256]=C_h_intern(&lf[256],11,"errno/nospc");
lf[257]=C_h_intern(&lf[257],11,"errno/spipe");
lf[258]=C_h_intern(&lf[258],10,"errno/pipe");
lf[259]=C_h_intern(&lf[259],11,"errno/again");
lf[260]=C_h_intern(&lf[260],10,"errno/rofs");
lf[261]=C_h_intern(&lf[261],10,"errno/nxio");
lf[262]=C_h_intern(&lf[262],10,"errno/2big");
lf[263]=C_h_intern(&lf[263],10,"errno/xdev");
lf[264]=C_h_intern(&lf[264],11,"errno/nodev");
lf[265]=C_h_intern(&lf[265],11,"errno/nfile");
lf[266]=C_h_intern(&lf[266],11,"errno/notty");
lf[267]=C_h_intern(&lf[267],10,"errno/fbig");
lf[268]=C_h_intern(&lf[268],11,"errno/mlink");
lf[269]=C_h_intern(&lf[269],9,"errno/dom");
lf[270]=C_h_intern(&lf[270],11,"errno/range");
lf[271]=C_h_intern(&lf[271],12,"errno/deadlk");
lf[272]=C_h_intern(&lf[272],17,"errno/nametoolong");
lf[273]=C_h_intern(&lf[273],11,"errno/nolck");
lf[274]=C_h_intern(&lf[274],11,"errno/nosys");
lf[275]=C_h_intern(&lf[275],14,"errno/notempty");
lf[276]=C_h_intern(&lf[276],11,"errno/ilseq");
lf[277]=C_h_intern(&lf[277],16,"change-file-mode");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[279]=C_h_intern(&lf[279],17,"file-read-access\077");
lf[280]=C_h_intern(&lf[280],18,"file-write-access\077");
lf[281]=C_h_intern(&lf[281],20,"file-execute-access\077");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[292]=C_h_intern(&lf[292],27,"local-timezone-abbreviation");
lf[293]=C_h_intern(&lf[293],5,"_exit");
lf[294]=C_h_intern(&lf[294],14,"terminal-port\077");
lf[295]=C_h_intern(&lf[295],13,"terminal-size");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[297]=C_h_intern(&lf[297],19,"set-buffering-mode!");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[299]=C_h_intern(&lf[299],5,"\000full");
lf[300]=C_h_intern(&lf[300],5,"\000line");
lf[301]=C_h_intern(&lf[301],5,"\000none");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[303]=C_h_intern(&lf[303],13,"spawn/overlay");
lf[304]=C_h_intern(&lf[304],10,"spawn/wait");
lf[305]=C_h_intern(&lf[305],12,"spawn/nowait");
lf[306]=C_h_intern(&lf[306],13,"spawn/nowaito");
lf[307]=C_h_intern(&lf[307],12,"spawn/detach");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[311]=C_h_intern(&lf[311],15,"process-execute");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[313]=C_h_intern(&lf[313],13,"process-spawn");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[315]=C_h_intern(&lf[315],17,"\003sysshell-command");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[317]=C_h_intern(&lf[317],24,"get-environment-variable");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[319]=C_h_intern(&lf[319],27,"\003sysshell-command-arguments");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[321]=C_h_intern(&lf[321],11,"process-run");
lf[322]=C_h_intern(&lf[322],11,"\003sysprocess");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[324]=C_h_intern(&lf[324],17,"\003sysmake-locative");
lf[325]=C_h_intern(&lf[325],8,"location");
lf[326]=C_h_intern(&lf[326],18,"string-intersperse");
lf[327]=C_h_intern(&lf[327],7,"process");
lf[328]=C_h_intern(&lf[328],8,"process\052");
lf[329]=C_h_intern(&lf[329],5,"sleep");
lf[330]=C_h_intern(&lf[330],13,"get-host-name");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[332]=C_h_intern(&lf[332],18,"system-information");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[335]=C_h_intern(&lf[335],17,"current-user-name");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[337]=C_h_intern(&lf[337],9,"prot/none");
lf[338]=C_h_intern(&lf[338],9,"prot/read");
lf[339]=C_h_intern(&lf[339],10,"prot/write");
lf[340]=C_h_intern(&lf[340],9,"prot/exec");
lf[341]=C_h_intern(&lf[341],8,"map/file");
lf[342]=C_h_intern(&lf[342],10,"map/shared");
lf[343]=C_h_intern(&lf[343],11,"map/private");
lf[344]=C_h_intern(&lf[344],9,"map/fixed");
lf[345]=C_h_intern(&lf[345],13,"map/anonymous");
lf[346]=C_h_intern(&lf[346],18,"map-file-to-memory");
lf[347]=C_h_intern(&lf[347],4,"mmap");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[350]=C_h_intern(&lf[350],16,"\003sysnull-pointer");
lf[351]=C_h_intern(&lf[351],22,"unmap-file-from-memory");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[353]=C_h_intern(&lf[353],26,"memory-mapped-file-pointer");
lf[354]=C_h_intern(&lf[354],19,"memory-mapped-file\077");
lf[355]=C_h_intern(&lf[355],17,"change-directory\052");
lf[356]=C_h_intern(&lf[356],17,"change-file-owner");
lf[357]=C_h_intern(&lf[357],11,"create-fifo");
lf[358]=C_h_intern(&lf[358],14,"create-session");
lf[359]=C_h_intern(&lf[359],20,"create-symbolic-link");
lf[360]=C_h_intern(&lf[360],26,"current-effective-group-id");
lf[361]=C_h_intern(&lf[361],25,"current-effective-user-id");
lf[362]=C_h_intern(&lf[362],27,"current-effective-user-name");
lf[363]=C_h_intern(&lf[363],16,"current-group-id");
lf[364]=C_h_intern(&lf[364],15,"current-user-id");
lf[365]=C_h_intern(&lf[365],9,"file-link");
lf[366]=C_h_intern(&lf[366],9,"file-lock");
lf[367]=C_h_intern(&lf[367],18,"file-lock/blocking");
lf[368]=C_h_intern(&lf[368],11,"file-select");
lf[369]=C_h_intern(&lf[369],14,"file-test-lock");
lf[370]=C_h_intern(&lf[370],13,"file-truncate");
lf[371]=C_h_intern(&lf[371],11,"file-unlock");
lf[372]=C_h_intern(&lf[372],10,"get-groups");
lf[373]=C_h_intern(&lf[373],17,"group-information");
lf[374]=C_h_intern(&lf[374],17,"initialize-groups");
lf[375]=C_h_intern(&lf[375],17,"parent-process-id");
lf[376]=C_h_intern(&lf[376],12,"process-fork");
lf[377]=C_h_intern(&lf[377],16,"process-group-id");
lf[378]=C_h_intern(&lf[378],14,"process-signal");
lf[379]=C_h_intern(&lf[379],18,"read-symbolic-link");
lf[380]=C_h_intern(&lf[380],10,"set-alarm!");
lf[381]=C_h_intern(&lf[381],13,"set-group-id!");
lf[382]=C_h_intern(&lf[382],11,"set-groups!");
lf[383]=C_h_intern(&lf[383],21,"set-process-group-id!");
lf[384]=C_h_intern(&lf[384],19,"set-root-directory!");
lf[385]=C_h_intern(&lf[385],16,"set-signal-mask!");
lf[386]=C_h_intern(&lf[386],12,"set-user-id!");
lf[387]=C_h_intern(&lf[387],11,"signal-mask");
lf[388]=C_h_intern(&lf[388],12,"signal-mask!");
lf[389]=C_h_intern(&lf[389],14,"signal-masked\077");
lf[390]=C_h_intern(&lf[390],14,"signal-unmask!");
lf[391]=C_h_intern(&lf[391],13,"terminal-name");
lf[392]=C_h_intern(&lf[392],16,"user-information");
lf[393]=C_h_intern(&lf[393],17,"utc-time->seconds");
lf[394]=C_h_intern(&lf[394],12,"string->time");
lf[395]=C_h_intern(&lf[395],16,"errno/wouldblock");
lf[396]=C_h_intern(&lf[396],10,"open/fsync");
lf[397]=C_h_intern(&lf[397],11,"open/noctty");
lf[398]=C_h_intern(&lf[398],13,"open/nonblock");
lf[399]=C_h_intern(&lf[399],9,"open/sync");
lf[400]=C_h_intern(&lf[400],10,"perm/isgid");
lf[401]=C_h_intern(&lf[401],10,"perm/isuid");
lf[402]=C_h_intern(&lf[402],10,"perm/isvtx");
lf[403]=C_h_intern(&lf[403],18,"getter-with-setter");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\031(file-creation-mode mode)");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\024(file-position port)");
lf[408]=C_h_intern(&lf[408],26,"set-file-modification-time");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\032(file-modification-time f)");
C_register_lf2(lf,411,create_ptable());{}
t2=C_mutate2(&lf[0] /* (set! c1563 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2288,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_scheduler_toplevel(2,av2);}}

/* k5606 in k5576 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5608,2,av);}
/* posixwin.scm:1239: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[323];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* port->fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5044(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5044,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[12]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5076,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1046: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k5040 in open-output-file* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_5042,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1041: check */
f_4998(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k5054 in k5074 in port->fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5056,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in quote-arg-string in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static C_word C_fcall f_5244(C_word t0,C_word t1){
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

/* file-close in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4230(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4230,3,av);}
a=C_alloc(7);
t3=C_i_check_exact_2(t2,lf[174]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4239,a[2]=t2,a[3]=t5,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t1;
f_4239(2,av2);}}

/* k4615 in open-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4617,2,av);}
/* posixwin.scm:820: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* loop in file-close in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4239,2,av);}
t2=C_close(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=C_fix((C_word)errno);
if(C_truep(C_i_eqvp(t3,C_fix((C_word)EINTR)))){
/* posixwin.scm:716: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[175]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[175]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixwin.scm:718: posix-error */
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[10];
av2[3]=lf[174];
av2[4]=lf[176];
av2[5]=((C_word*)t0)[2];
f_2315(6,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5026 in open-input-file* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_5028,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posixwin.scm:1037: check */
f_4998(((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k5629 in k5625 in k5621 in k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5631,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=((C_word*)t0)[8];
t9=t1;
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5503,a[2]=t5,a[3]=t6,a[4]=t7,a[5]=t8,a[6]=t9,a[7]=t2,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t11=C_i_foreign_string_argumentp(t3);
/* posixwin.scm:1213: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t10;
av2[2]=t11;
tp(3,av2);}}
else{
t11=t10;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_5503(2,av2);}}}

/* k4219 in k4210 in k4197 in file-open in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4221,2,av);}
/* posixwin.scm:707: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[172];
av2[4]=lf[173];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* close-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4643(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4643,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[200]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4650,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:830: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* open-output-file* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5030,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[65]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5042,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1041: mode */
f_4961(t5,C_SCHEME_FALSE,t3,lf[65]);}

/* k5645 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5647,2,av);}
/* posixwin.scm:1220: string-intersperse */
t2=*((C_word*)lf[326]+1);{
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

/* k4440 in suffix-loop in loop in k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4442,2,av);}
t2=C_i_string_ref(((C_word*)t0)[2],t1);
t3=C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* posixwin.scm:770: suffix-loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_4419(t5,((C_word*)t0)[6],t4);}

/* k5000 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5002,2,av);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:1030: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[287];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1031: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=*((C_word*)lf[62]+1);
av2[4]=lf[288];
av2[5]=lf[47];
tp(6,av2);}}}

/* k4210 in k4197 in file-open in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4212(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4212,2,av);}
a=C_alloc(10);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4215,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4221,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:706: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4213 in k4210 in k4197 in file-open in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4215,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5615,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1229: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[324]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[324]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[325];
tp(6,av2);}}

/* k6041 in k6029 in k6026 in k6023 in map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_6043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,10)))){
C_save_and_reclaim_args((void *)trf_6043,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* posixwin.scm:1458: posix-error */
t2=lf[2];{
C_word av2[11];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[346];
av2[4]=lf[348];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[8];
f_2315(11,av2);}}
else{
t2=((C_word*)t0)[9];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_record3(&a,3,lf[347],((C_word*)t0)[10],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5619,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1229: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[324]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[324]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[325];
tp(6,av2);}}

/* map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6021(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_6021,c,av);}
a=C_alloc((c-7)*C_SIZEOF_PAIR+8);
t7=C_build_rest(&a,c,7,av);
C_word t8;
C_word t9;
C_word t10;
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6025,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t2;
f_6025(2,av2);}}
else{
/* posixwin.scm:1452: ##sys#null-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[350]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[350]+1);
av2[1]=t8;
tp(2,av2);}}}

/* k5012 in k5000 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5014,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* open-input-file* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5016,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5028,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1037: mode */
f_4961(t5,C_SCHEME_TRUE,t3,lf[64]);}

/* parent-process-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6245,2,av);}
/* posixwin.scm:1504: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[375];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4622 in open-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_4624,2,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posixwin.scm:820: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k5621 in k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5623,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1229: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[324]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[324]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[325];
tp(6,av2);}}

/* k5625 in k5621 in k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5627(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5627,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[8])?C_fix(0):C_fix(1));
t5=(C_truep(((C_word*)t0)[9])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[10])){
/* posixwin.scm:1230: + */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=C_fix(0);
C_plus(5,av2);}}
else{
/* posixwin.scm:1230: + */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=C_fix(4);
C_plus(5,av2);}}}

/* k6029 in k6026 in k6023 in map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6031(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6031,2,av);}
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
t13=stub1480(t6,t7,t8,t9,t10,t11,t12);
t14=t13;
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6037,a[2]=((C_word*)t0)[8],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6043,a[2]=t15,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t14,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t14)){
t17=C_i_foreign_pointer_argumentp(t14);
t18=t16;
f_6043(t18,stub1492(C_SCHEME_UNDEFINED,t17));}
else{
t17=t16;
f_6043(t17,stub1492(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* process-group-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6257,2,av);}
/* posixwin.scm:1506: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[377];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* process-fork in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6251,2,av);}
/* posixwin.scm:1505: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[376];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6026 in k6023 in map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_6028(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_6028,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(((C_word*)t0)[6]))){
if(C_truep(C_specialp(((C_word*)t0)[6]))){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6031(2,av2);}}
else{
/* posixwin.scm:1455: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[15];
av2[3]=lf[346];
av2[4]=lf[349];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixwin.scm:1455: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[15];
av2[3]=lf[346];
av2[4]=lf[349];
av2[5]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k6023 in map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6025,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t4=((C_word*)t0)[7];
t5=t3;
f_6028(t5,C_u_i_car(t4));}
else{
t4=t3;
f_6028(t4,C_fix(0));}}

/* suffix-loop in loop in k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4419(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_4419,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4442,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:769: random */
t5=*((C_word*)lf[186]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2597 in set-file-position! in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_2599,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[45]);
t4=C_i_check_exact_2(t2,lf[45]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2611,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:320: port? */
t7=*((C_word*)lf[17]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* a6419 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6420(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6420,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6424,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6436,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:332: port? */
t5=*((C_word*)lf[17]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* get-groups in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6227,2,av);}
/* posixwin.scm:1501: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[372];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2588 in directory? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2590,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[30],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* set-file-position! in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_2595,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2599,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t6=t4;
t7=t5;
f_2599(t7,C_u_i_car(t6));}
else{
t6=t5;
f_2599(t6,C_fix((C_word)SEEK_SET));}}

/* open-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4603,c,av);}
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
t4=C_i_check_string_2(t2,lf[199]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[196]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4617,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[196]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:823: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[199];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[197]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:824: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[199];
tp(4,av2);}}
else{
/* posixwin.scm:798: ##sys#error */
t10=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[198];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* file-unlock in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6221,2,av);}
/* posixwin.scm:1500: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[371];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a6413 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6414,3,av);}
t3=C_i_check_exact_2(t2,lf[106]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_umask(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6035 in k6029 in k6026 in k6023 in map-file-to-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_6037,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_record3(&a,3,lf[347],((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2578 in socket? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2580,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[34],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* initialize-groups in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6239,2,av);}
/* posixwin.scm:1503: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[374];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* group-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6233,2,av);}
/* posixwin.scm:1502: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[373];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* directory? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2582,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2590,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:302: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* k6425 in k6422 in a6419 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6427,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6422 in a6419 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6424,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t2,C_fix(0)))){
/* posix-common.scm:341: posix-error */
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[49];
av2[4]=lf[405];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2568 */
static void C_ccall f_2570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2570,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[33],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-test-lock in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6209,2,av);}
/* posixwin.scm:1498: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[369];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* socket? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2572,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:299: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* k4800 in create-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4802,2,av);}
/* posixwin.scm:892: values */{
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

/* file-select in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6203,2,av);}
/* posixwin.scm:1497: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[368];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2876 in g289 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2878,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[79]+1);
t3=*((C_word*)lf[79]+1);
/* posix-common.scm:440: g299 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:442: directory? */
t3=*((C_word*)lf[41]+1);{
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

/* file-truncate in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6215,2,av);}
/* posixwin.scm:1499: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[370];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2867(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2867,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2892,a[2]=t5,a[3]=t2,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2892(t7,t3,t1);}

/* g289 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2868(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2868,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2878,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:441: symbolic-link? */
t4=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* scan in k3780 in loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3790,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_subchar(((C_word*)t0)[2],t2);
if(C_truep(C_i_char_equalp(C_make_character(61),t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3816,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:648: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[74]+1);
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

/* for-each-loop288 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2892(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2892,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2902,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:435: g289 */
t5=((C_word*)t0)[3];
f_2868(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* seconds->utc-time in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_3559,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:587: current-seconds */
t4=*((C_word*)lf[111]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[112]);
/* posix-common.scm:589: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[110]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}}

/* k2885 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2887,2,av);}
/* posix-common.scm:446: rmdir */
f_2844(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2882 in k2876 in g289 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2884,2,av);}
if(C_truep(t1)){
/* posix-common.scm:440: g299 */
f_2844(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[79]+1);
t3=*((C_word*)lf[79]+1);
/* posix-common.scm:440: g299 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[79]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3778(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3778,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub621(t5,t6);
/* posix-common.scm:641: ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t3;
av2[2]=t7;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3772(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3772,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=t3,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3778(t5,t1,C_fix(0));}

/* k3392 in k3385 in a3378 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in ... */
static void C_ccall f_3394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3394,2,av);}
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
f_3306(t3,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],t2);}}

/* a3398 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3399,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3389 in k3385 in a3378 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in ... */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3391,2,av);}
/* posix-common.scm:545: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k3385 in a3378 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in ... */
static void C_ccall f_3387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3387,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
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

/* a3373 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3374,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* unsetenv in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3752(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3752,3,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[123]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3760,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:637: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[123];
tp(4,av2);}}

/* k3370 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3372,2,av);}
/* posix-common.scm:542: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a3378 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3379,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3387,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:546: directory */
t3=*((C_word*)lf[30]+1);{
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

/* k3748 in k3744 in setenv in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3750,2,av);}
t2=C_setenv(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3186(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_3186,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3201,a[2]=t4,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:502: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3180,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3186,a[2]=t4,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3186(t6,t1,t2);}

/* k4632 in open-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_4634,2,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posixwin.scm:820: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k3780 in loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3782(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3782,2,av);}
a=C_alloc(9);
t2=t1;
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3790,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3790(t6,((C_word*)t0)[4],C_fix(0));}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_3362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3362,2,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3374,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3399,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:544: ##sys#dynamic-wind */
t11=*((C_word*)lf[99]+1);{
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
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

/* k4809 in create-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4811,2,av);}
/* posixwin.scm:891: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[210];
av2[4]=lf[211];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3758 in unsetenv in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3760,2,av);}
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#shell-command in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5444,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5448,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1175: get-environment-variable */
t3=*((C_word*)lf[317]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[318];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5446 in shell-command in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5448,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_mpointer(&a,(void*)C_shlcmd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1179: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
tp(2,av2);}}}}

/* k3561 in seconds->utc-time in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3563,2,av);}
t2=C_i_check_number_2(t1,lf[112]);
/* posix-common.scm:589: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[110]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k6434 in a6419 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6436,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[47]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_6424(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_fix(-1);
f_6424(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6424(2,av2);}}
else{
/* posix-common.scm:339: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[15];
av2[3]=lf[49];
av2[4]=lf[406];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* f_5405 in process-spawn in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5405,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3932(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_3932,4,t1,t2,t3,t4);}
a=C_alloc(11);
t5=C_i_check_list_2(t2,t4);
t6=t2;
t7=C_u_i_length(t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3940,a[2]=t1,a[3]=t7,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=C_a_i_plus(&a,2,t7,C_fix(1));
/* posix-common.scm:698: make-pointer-vector */
t10=*((C_word*)lf[141]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* k3592 in seconds->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3594(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3594,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_i_check_number_2(t2,lf[113]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t2);
t7=stub544(t5,t6);
/* posix-common.scm:592: ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);{
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

/* seconds->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3590,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3594,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:593: current-seconds */
t4=*((C_word*)lf[111]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_i_car(t2);
f_3594(2,av2);}}}

/* process-spawn in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +8,c,7)))){
C_save_and_reclaim((void*)f_5361,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+8);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=(C_truep(t14)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5405,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp):lf[308]);
t18=C_i_check_exact_2(t2,lf[313]);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5391,a[2]=t2,a[3]=t3,a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1161: call-with-exec-args */
t20=lf[146];
f_4087(t20,t1,lf[313],t3,t17,t6,t10,t19);}

/* delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,6)))){
C_save_and_reclaim((void*)f_2838,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[77]);
if(C_truep(t5)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2867,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:435: find-files */
t9=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[81];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[82];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(7,av2);}}
else{
/* posix-common.scm:447: rmdir */
f_2844(t1,t2);}}

/* regular-file? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2522,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2530,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:284: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* posix-error in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2315(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_2315,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2319,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:184: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2317 in posix-error in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2319(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2319,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub67(t4,t5);
/* posix-common.scm:181: ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);{
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

/* k3351 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_3353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3353,2,av);}
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
f_3306(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* k2846 in rmdir in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2848,2,av);}
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
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[77];
av2[4]=lf[78];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}}

/* k3348 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3350,2,av);}
/* posix-common.scm:540: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* rmdir in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2844(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2844,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:430: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* ##sys#process-wait in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5898,4,av);}
if(C_truep(C_process_wait(t2,t3))){
/* posixwin.scm:1273: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_fix((C_word)C_exstatus);
C_values(5,av2);}}
else{
/* posixwin.scm:1274: values */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix(-1);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* k2324 in k2317 in posix-error in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2326,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[3]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
av2[6]=((C_word*)t0)[5];
C_apply(7,av2);}}

/* k3991 in doloop683 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3993(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3993,2,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub665(t2,t1);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3999(2,av2);}}
else{
/* posix-common.scm:713: error */
t6=*((C_word*)lf[137]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[138];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3997 in k3991 in doloop683 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3999,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:714: pointer-vector-set! */
t3=*((C_word*)lf[136]+1);{
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

/* k2356 in stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2358,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:225: port->fileno */
t3=*((C_word*)lf[12]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2378,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:228: ##sys#platform-fixup-pathname */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[14]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
/* posix-common.scm:235: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[16];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* change-file-mode in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4894(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4894,4,av);}
a=C_alloc(5);
t4=C_i_check_string_2(t2,lf[277]);
t5=C_i_check_exact_2(t3,lf[277]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4918,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:986: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[277];
tp(4,av2);}}

/* character-device? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2552,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2560,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:293: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* k2548 in block-device? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2550,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[32],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3744 in setenv in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3746,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3750,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[122];
tp(4,av2);}}

/* k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3328,2,av);}
a=C_alloc(14);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[97]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[98]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posix-common.scm:538: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3306(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* posix-common.scm:539: symbolic-link? */
t3=*((C_word*)lf[36]+1);{
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
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
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

/* tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3971(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_3971,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li74),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3977(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* doloop683 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_3977,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3993,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4018,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=C_u_i_car(t10);
/* posix-common.scm:711: convert */
t12=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t12;
av2[1]=t9;
av2[2]=t11;
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}}

/* k3973 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3975,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5307 in process-execute in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5308(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5308,5,av);}
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixwin.scm:1155: posix-error */
t8=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[131];
av2[3]=lf[311];
av2[4]=lf[312];
av2[5]=((C_word*)t0)[2];
f_2315(6,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* block-device? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2542,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2550,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:290: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* k2538 in symbolic-link? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2540,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[29],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3319(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3319,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3328,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* posix-common.scm:537: directory? */
t6=*((C_word*)lf[41]+1);{
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

/* k2335 in stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2337,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:239: posix-error */
t2=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[11];
av2[5]=((C_word*)t0)[5];
f_2315(6,av2);}}
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

/* ##sys#stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2333(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2333,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2337,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_fstat(t2);
f_2337(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2358,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:225: port? */
t8=*((C_word*)lf[17]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* a3959 in a3953 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3960,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3964,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:702: free-c-string-buffer */
f_4051(t2,((C_word*)t0)[3]);}

/* k3540 in seconds->local-time in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3542,2,av);}
t2=C_i_check_number_2(t1,lf[109]);
/* posix-common.scm:585: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[110]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* k3962 in a3959 in a3953 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3964,2,av);}
/* posix-common.scm:702: signal */
t2=*((C_word*)lf[134]+1);{
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

/* a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3969(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3969,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li75),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[7],a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4045,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12244 */
t5=t2;
f_3971(t5,t4);}

/* k2328 in k2317 in posix-error in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2330,2,av);}
/* posix-common.scm:185: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3118 in k3108 in k3096 in loop in k3068 in k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3120,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_5322 in process-execute in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5322,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* process-execute in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,7)))){
C_save_and_reclaim((void*)f_5281,c,av);}
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
t16=(C_truep(t13)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5322,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp):lf[308]);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5308,a[2]=t2,a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1147: call-with-exec-args */
t18=lf[146];
f_4087(t18,t1,lf[311],t2,t16,t5,t9,t17);}

/* k2528 in regular-file? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2530,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[28],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3725 in k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3727(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3727,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub572(t3,t2,t4);
/* posix-common.scm:610: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
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
t5=*((C_word*)lf[6]+1);{
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

/* symbolic-link? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2532,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2540,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:287: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3304,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3306,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li43),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3306(t5,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10]);}

/* loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3306(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3306,5,t0,t1,t2,t3,t4);}
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
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3319,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* posix-common.scm:535: make-pathname */
t8=*((C_word*)lf[87]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k3108 in k3096 in loop in k3068 in k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3110(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3110,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* posix-common.scm:492: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3084(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:493: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3084(t3,t2);}}

/* seconds->local-time in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,3)))){
C_save_and_reclaim((void*)f_3538,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posix-common.scm:583: current-seconds */
t4=*((C_word*)lf[111]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_check_number_2(t4,lf[109]);
/* posix-common.scm:585: ##sys#decode-seconds */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[110]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[110]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k5678 in map-loop1303 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5680(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5680,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_5655(t6,((C_word*)t0)[5],t5);}

/* quote-arg-string in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5269(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5269,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_i_string_length(t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5244,a[2]=t5,a[3]=t3,a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp);
t7=(
  f_5244(t6,C_fix(0))
);
if(C_truep(t7)){
/* posixwin.scm:1143: string-append */
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[309];
av2[3]=t2;
av2[4]=lf[310];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3701 in k3697 in k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3703(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3703,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t4=C_i_foreign_block_argumentp(t1);
t5=stub582(t3,t2,((C_word*)t0)[3],t4);
/* posix-common.scm:611: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
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
t5=*((C_word*)lf[6]+1);{
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

/* k3704 in k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
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
/* posix-common.scm:622: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:623: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[119];
av2[3]=lf[121];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* map-loop1303 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5655,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posixwin.scm:1223: g1309 */
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

/* f_3504 in a3501 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3504,4,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a3501 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3502,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3504,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* call-with-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4679,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4683,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[195]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4669 in k4666 in close-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4671,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2697 in check in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2699,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* file-read in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_4261,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_check_exact_2(t2,lf[177]);
t6=C_i_check_exact_2(t3,lf[177]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4271,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=C_u_i_car(t8);
f_4271(2,av2);}}
else{
t8=t3;
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t7;
av2[2]=t8;
av2[3]=C_make_character(32);
tp(4,av2);}}}

/* k4696 in a4693 in k4681 in call-with-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4698,2,av);}{
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

/* k4275 in k4272 in k4269 in file-read in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4277,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* check in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2686(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2686,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:370: posix-error */
t6=lf[2];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[10];
av2[3]=t2;
av2[4]=lf[60];
av2[5]=t3;
f_2315(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2699,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:371: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t6;
av2[2]=t4;
av2[3]=*((C_word*)lf[62]+1);
av2[4]=lf[63];
av2[5]=lf[47];
tp(6,av2);}}}

/* k5083 in duplicate-fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5085,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5094,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1063: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_2701 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_2701,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[64]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2713,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:377: mode */
f_2649(t5,C_SCHEME_TRUE,t3,lf[64]);}

/* k4068 in doloop702 in k4053 in free-c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
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
/* posix-common.scm:723: free */
t3=*((C_word*)lf[142]+1);{
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
f_4060(t4,((C_word*)t0)[4],t3);}}

/* k4071 in k4068 in doloop702 in k4053 in free-c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
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

/* k5086 in k5083 in duplicate-fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5088,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2300,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2303(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2303,2,av);}
a=C_alloc(18);
t2=C_mutate2(&lf[2] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[8]+1 /* (set! ##sys#posix-error ...) */,lf[2]);
t4=C_mutate2(&lf[9] /* (set! ##sys#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2333,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[18]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2383,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6457,a[2]=((C_word)li215),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6463,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:252: getter-with-setter */
t9=*((C_word*)lf[403]+1);{
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
av2[4]=lf[410];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a4693 in k4681 in call-with-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4694,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4698,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:849: close-input-pipe */
t4=*((C_word*)lf[200]+1);{
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

/* k4269 in file-read in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4271,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4274(2,av2);}}
else{
/* posixwin.scm:726: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[15];
av2[3]=lf[177];
av2[4]=lf[179];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}
else{
/* posixwin.scm:726: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[15];
av2[3]=lf[177];
av2[4]=lf[179];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5694(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_5694,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(25);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=t2,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5737,a[2]=t2,a[3]=t8,a[4]=t9,a[5]=t6,a[6]=t3,a[7]=t10,a[8]=t1,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:1252: chkstrlst */
t14=t11;
f_5696(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5772,a[2]=t9,a[3]=t8,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1255: ##sys#shell-command-arguments */
t16=*((C_word*)lf[319]+1);{
C_word av2[3];
av2[0]=t16;
av2[1]=t15;
av2[2]=((C_word*)t8)[1];
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}}

/* chkstrlst in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5696,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5701,a[2]=((C_word*)t0)[2],a[3]=((C_word)li153),tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5710,a[2]=t4,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_5710(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4272 in k4269 in file-read in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4274(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4274,2,av);}
a=C_alloc(11);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4286,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:729: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4666 in close-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4668,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:840: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[10];
av2[3]=lf[202];
av2[4]=lf[203];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4284 in k4272 in k4269 in file-read in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4286,2,av);}
/* posixwin.scm:730: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[177];
av2[4]=lf[178];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k4459 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4461,2,av);}
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
/* posixwin.scm:765: ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[10];
av2[3]=lf[183];
av2[4]=lf[187];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
f_4367(2,av2);}}}
else{
/* posixwin.scm:763: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[10];
av2[3]=lf[183];
av2[4]=lf[188];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k5092 in k5083 in duplicate-fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5094,2,av);}
/* posixwin.scm:1064: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[70];
av2[4]=lf[291];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* nop in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4085,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* close-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4661(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4661,3,av);}
a=C_alloc(5);
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[202]);
t5=close_pipe(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4668,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:838: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k5937 in system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5939,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5943,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_osrel);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* loop in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4474,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4481,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t4=C_i_string_ref(((C_word*)t0)[3],t2);
t5=t3;
f_4481(t5,C_eqp(t4,C_make_character(88)));}
else{
t4=t3;
f_4481(t4,C_SCHEME_FALSE);}}

/* k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_4091,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:731: list->c-string-buffer */
f_3932(t3,t2,((C_word*)t0)[9],((C_word*)t0)[6]);}

/* k5060 in k5074 in port->fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5062,2,av);}
/* posixwin.scm:1050: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[12];
av2[4]=lf[290];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k4463 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4465,2,av);}
if(C_truep(t1)){
t2=t1;
/* posixwin.scm:759: directory-exists? */
t3=*((C_word*)lf[189]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* posixwin.scm:759: directory-exists? */
t2=*((C_word*)lf[189]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[190];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4087,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4091,a[2]=t5,a[3]=t1,a[4]=t7,a[5]=t3,a[6]=t2,a[7]=t6,a[8]=((C_word*)t0)[2],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:729: pathname-strip-directory */
t9=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_2924,c,av);}
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
t7=C_i_check_string_2(t2,lf[83]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2934,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_block_size(t2);
t10=C_eqp(C_fix(0),t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2940,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t10;
f_2940(2,av2);}}
else{
/* posix-common.scm:457: file-exists? */
t12=*((C_word*)lf[88]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t12;
av2[1]=t11;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}

/* a4687 in k4681 in call-with-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4688,2,av);}
/* posixwin.scm:847: proc */
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

/* k4479 in loop in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_4481,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
/* posixwin.scm:757: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4474(t3,((C_word*)t0)[4],t2);}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* duplicate-fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5078,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_exact_2(t2,*((C_word*)lf[70]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5085,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_5085(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[70]);
t8=t5;
f_5085(t8,C_dup2(t2,t6));}}

/* k5074 in port->fileno in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_5076,2,av);}
a=C_alloc(8);
if(C_truep(C_i_zerop(t1))){
/* posixwin.scm:1052: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
av2[3]=lf[12];
av2[4]=lf[289];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5062,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1049: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* set-groups! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6287,2,av);}
/* posixwin.scm:1511: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[382];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* set-group-id! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6281,2,av);}
/* posixwin.scm:1510: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[381];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4097(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4097,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4105,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li90),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:726: call-with-current-continuation */
t7=*((C_word*)lf[140]+1);{
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

/* k4681 in call-with-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4683,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4694,a[2]=t2,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:846: ##sys#call-with-values */{
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

/* set-root-directory! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6299,2,av);}
/* posixwin.scm:1513: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[384];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a3509 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3510,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3512 in a3509 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3512,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* set-process-group-id! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6293,2,av);}
/* posixwin.scm:1512: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[383];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3517,2,av);}
a=C_alloc(38);
t2=C_mutate2((C_word*)lf[106]+1 /* (set! file-creation-mode ...) */,t1);
t3=C_mutate2(&lf[107] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[109]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3538,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[112]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[113]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t7=C_fix((C_word)sizeof(struct tm));
t8=C_mutate2((C_word*)lf[115]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3628,a[2]=t7,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t9=C_fix((C_word)sizeof(struct tm));
t10=C_mutate2((C_word*)lf[119]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3673,a[2]=t9,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate2((C_word*)lf[122]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3735,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[123]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[124]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3772,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[125]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3838,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6380,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:663: getter-with-setter */
t17=*((C_word*)lf[403]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[125]+1);
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}

/* check-time-vector in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3519(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3519,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:581: ##sys#error */
t6=*((C_word*)lf[54]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[108];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4651 in k4648 in close-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4653,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4648 in close-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4650,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[3]);
if(C_truep(t3)){
/* posixwin.scm:832: ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[10];
av2[3]=lf[200];
av2[4]=lf[201];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2900 in for-each-loop288 in k2865 in delete-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2902,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2892(t3,((C_word*)t0)[4],t2);}

/* setenv in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3735,4,av);}
a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[122]);
t5=C_i_check_string_2(t3,lf[122]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3746,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:632: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[122];
tp(4,av2);}}

/* system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5928,2,av);}
a=C_alloc(6);
if(C_truep(C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5939,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_hostname);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5954,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1299: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
tp(2,av2);}}}

/* read-symbolic-link in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6269,2,av);}
/* posixwin.scm:1508: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[379];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* process-signal in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6263,2,av);}
/* posixwin.scm:1507: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[378];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* set-alarm! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6275,2,av);}
/* posixwin.scm:1509: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[380];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2725 */
static void C_ccall f_2727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_2727,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:381: check */
f_2686(((C_word*)t0)[4],lf[65],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* f_2729 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2729(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2729,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[12]);
t5=C_slot(t2,C_fix(7));
t6=C_eqp(lf[34],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:391: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[66]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[66]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2771,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:392: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k6471 in a6462 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6473,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=stub119(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5184 in k5175 in k5172 in set-buffering-mode! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_5186,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm:1112: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word av2[7];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[297];
av2[3]=lf[298];
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

/* doloop702 in k4053 in free-c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
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
/* posix-common.scm:722: pointer-vector-ref */
t5=*((C_word*)lf[143]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2711 */
static void C_ccall f_2713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_2713,2,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:377: check */
f_2686(((C_word*)t0)[4],lf[64],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* f_2715 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_2715,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_i_check_exact_2(t2,lf[65]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2727,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:381: mode */
f_2649(t5,C_SCHEME_FALSE,t3,lf[65]);}

/* k6481 in a6462 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6483,2,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:260: posix-error */
t2=lf[2];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[408];
av2[4]=lf[409];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2315(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* get-host-name in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5916,2,av);}
a=C_alloc(3);
if(C_truep(C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_hostname);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* posixwin.scm:1289: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[330];
av2[3]=lf[331];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* sleep in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5910,3,av);}
t3=C_i_check_exact_2(t2,lf[329]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_sleep(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6456 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6457,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6461,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:254: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[21]);}

/* unmap-file-from-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_6077,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_check_structure_2(t2,lf[347],lf[351]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6084,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=t5;
f_6084(t7,C_u_i_car(t6));}
else{
t6=t5;
f_6084(t6,C_slot(t2,C_fix(2)));}}

/* a6462 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6463(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6463,4,av);}
a=C_alloc(9);
t4=C_i_check_number_2(t3,lf[408]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6483,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=t5;
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6473,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* posix-common.scm:257: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}
else{
t10=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=stub119(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t8);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k6459 in a6456 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_6461,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3953 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3954,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3960,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:696: k674 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3940,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3948,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li79),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:696: call-with-current-continuation */
t5=*((C_word*)lf[140]+1);{
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

/* k3941 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3943,2,av);}
/* posix-common.scm:696: g678 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3948(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3948,3,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li73),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li78),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:696: with-exception-handler */
t5=*((C_word*)lf[139]+1);{
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

/* file-stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2383,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:244: ##sys#stat */
f_2333(t6,t2,t5,C_SCHEME_TRUE,lf[18]);}

/* k4000 in k3997 in k3991 in doloop683 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4002,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3977(t5,((C_word*)t0)[5],t3,t4);}

/* k6082 in unmap-file-from-memory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_6084(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6084,2,t0,t1);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=C_i_foreign_integer_argumentp(t1);
t5=stub1513(C_SCHEME_UNDEFINED,t3,t4);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* posixwin.scm:1467: posix-error */
t7=lf[2];{
C_word av2[7];
av2[0]=t7;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[351];
av2[4]=lf[352];
av2[5]=((C_word*)t0)[2];
av2[6]=t1;
f_2315(7,av2);}}}

/* k4043 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4045,2,av);}
a=C_alloc(3);
/* tmp22245 */
t2=((C_word*)t0)[2];
f_4028(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* a4033 in tmp22245 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4034,2,av);}{
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

/* tmp22245 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4028,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=t2,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:696: k674 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* g1382 in chkstrlst in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static C_word C_fcall f_5701(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* k5139 in terminal-port? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5141,2,av);}
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

/* k4319 in k4313 in k4310 in file-write in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4321,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4016 in doloop683 in tmp12244 in a3968 in a3947 in k3938 in list->c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4018,2,av);}
/* posix-common.scm:711: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k4325 in k4313 in k4310 in file-write in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4327,2,av);}
/* posixwin.scm:743: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[180];
av2[4]=lf[181];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k4119 in a4116 in a4110 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4121,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:737: free-c-string-buffer */
f_4051(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:738: signal */
t3=*((C_word*)lf[134]+1);{
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

/* k4122 in k4119 in a4116 in a4110 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4124,2,av);}
/* posix-common.scm:738: signal */
t2=*((C_word*)lf[134]+1);{
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

/* a4711 in k4705 in call-with-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4712,2,av);}
/* posixwin.scm:856: proc */
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

/* k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4358(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4358,2,av);}
a=C_alloc(16);
t2=t1;
t3=C_block_size(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_fixnum_difference(t4,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4474,a[2]=t8,a[3]=t2,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4474(t10,t5,t6);}

/* a4717 in k4705 in call-with-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4718,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4722,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:858: close-output-pipe */
t4=*((C_word*)lf[202]+1);{
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

/* k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4355,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4358,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:752: string-copy */
t4=*((C_word*)lf[191]+1);{
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

/* a4154 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4155,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4161,a[2]=t2,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
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

/* k2609 in k2597 in set-file-position! in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2611,2,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:327: posix-error */
t2=lf[2];{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[45];
av2[4]=lf[46];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2315(7,av2);}}}

/* k4151 in a4137 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4153,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4142(t3,t2);}

/* k4705 in call-with-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4707,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4718,a[2]=t2,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:855: ##sys#call-with-values */{
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

/* k5735 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5737,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1257: chkstrlst */
t3=((C_word*)t0)[9];
f_5696(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5740(2,av2);}}}

/* call-with-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4703,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4707,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[199]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4345(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4345,3,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[183]);
t4=lf[184];
t5=C_block_size(t4);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4355,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:751: * */{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t7;
av2[2]=t6;
av2[3]=t6;
av2[4]=t6;
C_times(5,av2);}}

/* k4140 in a4137 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4142,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:744: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* terminal-port? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5135(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5135,3,av);}
a=C_alloc(4);
t3=t2;
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,lf[294]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5141,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1085: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[69]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4545(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4545,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4549,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:800: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}

/* k4147 in k4140 in a4137 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4149,2,av);}
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

/* k5505 in k5501 in k5629 in k5625 in k5621 in k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5507(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5507,2,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[4])?C_i_foreign_pointer_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[5])?C_i_foreign_pointer_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
t7=((C_word*)t0)[7];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=stub1258(C_SCHEME_UNDEFINED,((C_word*)t0)[8],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k4547 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4549,2,av);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posixwin.scm:802: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[193];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:803: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[61]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=*((C_word*)lf[62]+1);
av2[4]=lf[194];
av2[5]=lf[47];
tp(6,av2);}}}

/* k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4731(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4731,2,av);}
a=C_alloc(19);
t2=t1;
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4736,a[2]=t6,a[3]=t4,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4741,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li115),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4756,a[2]=t4,a[3]=t6,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:862: ##sys#dynamic-wind */
t10=*((C_word*)lf[99]+1);{
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

/* k5738 in k5735 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,6)))){
C_save_and_reclaim((void *)f_5740,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li156),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5751,a[2]=((C_word*)t0)[6],a[3]=((C_word)li157),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1258: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[8];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4735 in k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4736,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[207]+1));
t3=C_mutate2((C_word*)lf[207]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5744 in k5738 in k5735 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_5745,2,av);}
/* posixwin.scm:1258: ##sys#process */
t2=*((C_word*)lf[322]+1);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
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
av2[9]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(10,av2);}}

/* k2615 in k2597 in set-file-position! in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2617,2,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[47]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_2611(2,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2611(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2611(2,av2);}}
else{
/* posix-common.scm:326: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[15];
av2[3]=lf[45];
av2[4]=lf[48];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k5501 in k5629 in k5625 in k5621 in k5617 in k5613 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5503,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[8]);
/* posixwin.scm:1213: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5507(2,av2);}}}

/* create-symbolic-link in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6149,2,av);}
/* posixwin.scm:1488: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[359];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* create-session in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6143,2,av);}
/* posixwin.scm:1487: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[358];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* free-c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4051(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4051,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4055,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:719: pointer-vector-length */
t4=*((C_word*)lf[144]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4720 in a4717 in k4705 in call-with-output-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4722,2,av);}{
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

/* user-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6347,2,av);}
/* posixwin.scm:1521: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[392];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4727,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4731,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[195]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4053 in free-c-string-buffer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
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
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4060,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li81),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4060(t6,((C_word*)t0)[3],C_fix(0));}

/* terminal-name in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6341,2,av);}
/* posixwin.scm:1520: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[391];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* terminal-size in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5153,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5160,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1089: terminal-port? */
t4=*((C_word*)lf[294]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* current-effective-group-id in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6155,2,av);}
/* posixwin.scm:1489: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[360];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* string->time in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6359,2,av);}
/* posixwin.scm:1523: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[394];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4310 in file-write in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4312,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t3=((C_word*)t0)[5];
t4=t2;
f_4315(t4,C_u_i_car(t3));}
else{
t3=t2;
f_4315(t3,C_block_size(((C_word*)t0)[3]));}}

/* utc-time->seconds in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6353,2,av);}
/* posixwin.scm:1522: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[393];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4313 in k4310 in file-write in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4315(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4315,2,t0,t1);}
a=C_alloc(9);
t2=t1;
t3=C_i_check_exact_2(t2,lf[180]);
t4=C_write(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:742: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* _exit in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_5121,c,av);}
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
av2[1]=stub1140(C_SCHEME_UNDEFINED,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=stub1140(C_SCHEME_UNDEFINED,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a4110 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4111,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4117,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:726: k722 */
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4116 in a4110 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4117,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4121,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:736: free-c-string-buffer */
f_4051(t2,((C_word*)t0)[4]);}

/* change-directory* in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6125,2,av);}
/* posixwin.scm:1484: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[355];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* signal-masked? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6329,2,av);}
/* posixwin.scm:1518: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[389];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* signal-mask! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6323,2,av);}
/* posixwin.scm:1517: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[388];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* file-write in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,5)))){
C_save_and_reclaim((void*)f_4305,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_i_check_exact_2(t2,lf[180]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4312,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4312(2,av2);}}
else{
/* posixwin.scm:737: ##sys#signal-hook */
t7=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[15];
av2[3]=lf[180];
av2[4]=lf[182];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}
else{
/* posixwin.scm:737: ##sys#signal-hook */
t7=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[15];
av2[3]=lf[180];
av2[4]=lf[182];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* k4098 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4100,2,av);}
/* posix-common.scm:726: g726 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* create-fifo in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6137,2,av);}
/* posixwin.scm:1486: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[357];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* change-directory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4505(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4505,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[73]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4512,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:786: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[73];
tp(4,av2);}}

/* a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4105(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4105,3,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li89),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:726: with-exception-handler */
t5=*((C_word*)lf[139]+1);{
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

/* change-file-owner in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6131,2,av);}
/* posixwin.scm:1485: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[356];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* signal-unmask! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6335,2,av);}
/* posixwin.scm:1519: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[390];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2655 in mode in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2657,2,av);}
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4132,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li86),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=((C_word*)t0)[9],a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
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

/* a4137 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4138,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:742: list->c-string-buffer */
f_3932(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=t2;
f_4142(t3,C_SCHEME_UNDEFINED);}}

/* for-each-loop1381 in chkstrlst in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static C_word C_fcall f_5710(C_word t0,C_word t1){
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
  /* posixwin.scm:1249: g1382 */
  f_5701(((C_word*)t0)[2],t2)
);
t4=C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* set-signal-mask! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6305,2,av);}
/* posixwin.scm:1514: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[385];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* mode in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2649(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2649,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2657,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[53]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posix-common.scm:363: ##sys#error */
t10=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t5;
av2[2]=lf[55];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[56];
av2[3]=t4;
tp(4,av2);}}}
else{
/* posix-common.scm:364: ##sys#error */
t9=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[57];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[58];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:359: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[59];
av2[3]=t4;
tp(4,av2);}}}}

/* k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2644(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2644,2,av);}
a=C_alloc(53);
t2=C_mutate2((C_word*)lf[49]+1 /* (set! file-position ...) */,t1);
t3=C_mutate2((C_word*)lf[50]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t4=C_mutate2((C_word*)lf[51]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t5=C_mutate2((C_word*)lf[52]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[64]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2701,a[2]=t9,a[3]=t7,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate2((C_word*)lf[65]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2715,a[2]=t9,a[3]=t7,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate2((C_word*)lf[12]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[70]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[72]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2804,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate2((C_word*)lf[77]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate2((C_word*)lf[83]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate2((C_word*)lf[30]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3041,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate2((C_word*)lf[91]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate2((C_word*)lf[80]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6389,a[2]=((C_word)li212),tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6414,a[2]=((C_word)li213),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:564: getter-with-setter */
t25=*((C_word*)lf[403]+1);{
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
av2[4]=lf[404];
((C_proc)(void*)(*((C_word*)t25+1)))(5,av2);}}

/* k2286 */
static void C_ccall f_2288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2288,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* memory-mapped-file? in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6119,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[347]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* memory-mapped-file-pointer in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6110,3,av);}
t3=C_i_check_structure_2(t2,lf[347],lf[353]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* signal-mask in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6317,2,av);}
/* posixwin.scm:1516: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[387];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* set-user-id! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6311,2,av);}
/* posixwin.scm:1515: error */
t2=*((C_word*)lf[137]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[386];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* local-timezone-abbreviation in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5108,2,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1134(t2);
/* posixwin.scm:1071: ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
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

/* k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2297,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k2289 in k2286 */
static void C_ccall f_2291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2291,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2292 in k2289 in k2286 */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2294,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_3466,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3470,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3510,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t4;
av2[2]=lf[105];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* f_3460 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3460,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5390 in process-spawn in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5391(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5391,5,av);}
a=C_alloc(4);
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_spawnvpe(((C_word*)t0)[2],t2,t3,t4):C_u_i_spawnvp(((C_word*)t0)[2],t2,t3));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5398,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=C_eqp(t7,C_fix(-1));
if(C_truep(t9)){
/* posixwin.scm:1169: posix-error */
t10=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[131];
av2[3]=lf[313];
av2[4]=lf[314];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}
else{
t10=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* a3492 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3493,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3495 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3496,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3498 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3499,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3096 in loop in k3068 in k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3098(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3098,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_string_ref(t2,C_fix(0));
t4=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t5=(C_truep(t4)?C_i_string_ref(t2,C_fix(1)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_make_character(46),t3);
if(C_truep(t7)){
t8=C_i_not(t5);
if(C_truep(t8)){
t9=t6;
f_3110(t9,t8);}
else{
t9=C_eqp(C_make_character(46),t5);
if(C_truep(t9)){
t10=C_eqp(C_fix(2),((C_word*)t0)[2]);
t11=t6;
f_3110(t11,(C_truep(t10)?t10:C_i_not(((C_word*)t0)[5])));}
else{
t10=t6;
f_3110(t10,C_i_not(((C_word*)t0)[5]));}}}
else{
t8=t6;
f_3110(t8,C_SCHEME_FALSE);}}

/* a3489 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3490,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4740 in k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4741,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:865: ##sys#call-with-values */{
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

/* loop in k3068 in k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3084(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3084,2,t0,t1);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3098,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:485: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[74]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* a4746 in a4740 in k4729 in with-input-from-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4747,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4751,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:868: close-input-pipe */
t4=*((C_word*)lf[200]+1);{
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

/* k5396 in a5390 in process-spawn in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5398,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3476,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3496,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t3;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[6];
av2[4]=t4;
tp(5,av2);}}

/* k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3473,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t3;
av2[2]=lf[103];
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
tp(5,av2);}}

/* k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3470,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3502,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t3;
av2[2]=lf[104];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
tp(5,av2);}}

/* k3068 in k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3070(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3070,2,av);}
a=C_alloc(10);
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* posix-common.scm:477: posix-error */
t3=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[10];
av2[3]=lf[30];
av2[4]=lf[89];
av2[5]=((C_word*)t0)[4];
f_2315(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3084(t6,((C_word*)t0)[3]);}}

/* k3697 in k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3699,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_make_character(0);
tp(4,av2);}}

/* k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3479,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3493,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t3;
av2[2]=lf[81];
av2[3]=((C_word*)t0)[7];
av2[4]=t4;
tp(5,av2);}}

/* k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3063,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:472: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[90]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3064 in k3061 in k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3066,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:475: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[30];
tp(4,av2);}}

/* k3058 in k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3060,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:471: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[90]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4519 in k4510 in change-directory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4521,2,av);}
/* posixwin.scm:789: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[73];
av2[4]=lf[192];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3680,2,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[119]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:618: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[119];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:620: ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_make_character(0);
tp(4,av2);}}}

/* k3279 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3281,2,av);}
/* posix-common.scm:504: ##sys#glob->regexp */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[95]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[95]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* f_3452 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3452,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3687 in k3678 in time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3689,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:619: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[119];
av2[3]=lf[120];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k2558 in character-device? in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2560,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_eqp(lf[31],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2562 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2562,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2570,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:296: file-type */
t4=*((C_word*)lf[27]+1);{
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

/* time->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_3673,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3680,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:614: check-time-vector */
f_3519(t7,lf[119],t2);}

/* k4510 in change-directory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4512,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_chdir(t1);
t4=C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4521,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:788: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k4513 in k4510 in change-directory in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4515,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3485(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3485,2,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[7];
t8=t1;
t9=((C_word*)t0)[8];
t10=C_i_check_string_2(t3,lf[80]);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3294,a[2]=t8,a[3]=t5,a[4]=t12,a[5]=t9,a[6]=t2,a[7]=t3,a[8]=t6,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
if(C_truep(C_fixnump(t7))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3460,a[2]=t12,a[3]=t7,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
t15=t13;
f_3294(t15,t14);}
else{
t14=t13;
f_3294(t14,t7);}}
else{
t14=t13;
f_3294(t14,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3452,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));}}

/* k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3482,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3490,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:552: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[101]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[101]+1);
av2[1]=t3;
av2[2]=lf[82];
av2[3]=((C_word*)t0)[8];
av2[4]=t4;
tp(5,av2);}}

/* k2785 in k2782 */
static void C_ccall f_2787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2787,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2782 */
static void C_fcall f_2784(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2784,2,t0,t1);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:408: posix-error */
t4=lf[2];{
C_word av2[6];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[70];
av2[4]=lf[71];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3259 in g422 in k3235 in loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3261,2,av);}
/* posix-common.scm:510: make-pathname */
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
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2769 */
static void C_ccall f_2771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2771,2,av);}
a=C_alloc(4);
if(C_truep(C_i_zerop(t1))){
/* posix-common.scm:397: posix-error */
t2=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[15];
av2[3]=lf[12];
av2[4]=lf[67];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}
else{
t2=C_C_fileno(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:395: posix-error */
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[12];
av2[4]=lf[68];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* f_2777 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_2777,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_check_exact_2(t2,*((C_word*)lf[70]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2784,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_2784(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[70]);
t8=t5;
f_2784(t8,C_dup2(t2,t6));}}

/* k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2940,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[3],a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3023,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[83];
tp(4,av2);}}}}

/* k5941 in k5937 in system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5943,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_osver);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5945 in k5941 in k5937 in system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5947,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_processor);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2932 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2934,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5967 in current-user-name in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5969,2,av);}
/* posixwin.scm:1309: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[335];
av2[3]=lf[336];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4920(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4920,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4938,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:997: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k2752 in k2769 */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2754,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2990 in loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2992,2,av);}
t2=((C_word*)t0)[2];
f_2959(t2,C_i_not(t1));}

/* a2993 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2994,2,av);}
/* posix-common.scm:459: decompose-pathname */
t2=*((C_word*)lf[86]+1);{
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

/* set-signal-handler! in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3838(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3838,4,av);}
t4=C_i_check_exact_2(t2,lf[125]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=C_i_vector_set(*((C_word*)lf[126]+1),t2,t3);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_vector_set(*((C_word*)lf[126]+1),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_3294,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t4=t3;
f_3297(t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3443,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:527: irregex */
t5=*((C_word*)lf[100]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_3297,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:530: directory */
t4=*((C_word*)lf[30]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2983 in k2957 in loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2985,2,av);}
/* posix-common.scm:462: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2952(t2,((C_word*)t0)[3],t1);}

/* current-user-name in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5959,2,av);}
a=C_alloc(3);
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_username);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5969,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:1308: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k3818 in k3814 in scan in k3780 in loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3820(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3820,2,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* posix-common.scm:650: loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3778(t6,t4,t5);}

/* k5949 in k5945 in k5941 in k5937 in system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_5951,2,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list5(&a,5,lf[333],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2976 in k2960 in k2957 in loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2978,2,av);}
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
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[83];
av2[4]=lf[84];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}}

/* k5952 in system-information in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5954,2,av);}
/* posixwin.scm:1300: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[332];
av2[3]=lf[334];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3814 in scan in k3780 in loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3816(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3816,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3820,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=C_block_size(((C_word*)t0)[6]);
/* posix-common.scm:649: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* k4916 in change-file-mode in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4918,2,av);}
a=C_alloc(5);
t2=C_chmod(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:987: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4908 in k4916 in change-file-mode in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4910,2,av);}
/* posixwin.scm:988: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[277];
av2[4]=lf[278];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3806 in k3818 in k3814 in scan in k3780 in loop in get-environment-variables in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3808,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4936 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4938(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4938,2,av);}
a=C_alloc(4);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(C_fix(0),t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posixwin.scm:998: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k4928 in k4936 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4930,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2743 */
static void C_ccall f_2745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2745,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-type in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_2435,c,av);}
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
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:272: ##sys#stat */
f_2333(t12,t2,t5,t9,lf[27]);}

/* k2431 in file-size in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2433,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_double_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4967 in mode in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4969,2,av);}
/* posixwin.scm:1018: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* mode in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4961(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4961,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4969,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t3;
t7=C_u_i_car(t6);
t8=C_eqp(t7,lf[53]);
if(C_truep(t8)){
t9=t2;
if(C_truep(t9)){
/* posixwin.scm:1022: ##sys#error */
t10=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t5;
av2[2]=lf[282];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
/* posixwin.scm:1018: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[283];
av2[3]=t4;
tp(4,av2);}}}
else{
/* posixwin.scm:1023: ##sys#error */
t9=*((C_word*)lf[54]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t5;
av2[2]=lf[284];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posixwin.scm:1018: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[285];
av2[3]=t4;
tp(4,av2);}}
else{
/* posixwin.scm:1018: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=lf[286];
av2[3]=t4;
tp(4,av2);}}}}

/* file-size in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2429,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2433,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:269: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[26]);}

/* k2425 in file-permissions in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2427,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* file-permissions in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2423,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:268: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[25]);}

/* k2419 in file-owner in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2421,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2452 in file-type in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2454,2,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[29];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[30];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[31];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[32];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO)))){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[33];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_eqvp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[34]:lf[28]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a3890 in process-wait in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3891(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3891,5,av);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posix-common.scm:681: posix-error */
t6=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[131];
av2[3]=lf[129];
av2[4]=lf[132];
av2[5]=((C_word*)t0)[2];
f_2315(6,av2);}}
else{
/* posix-common.scm:682: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* k2960 in k2957 in loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2962,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:450: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[83];
tp(4,av2);}}

/* a3884 in process-wait in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3885,2,av);}
/* posix-common.scm:679: ##sys#process-wait */
t2=*((C_word*)lf[130]+1);{
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

/* k3043 in directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3045(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3045,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_check_string_2(t2,lf[30]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[76]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[76]+1);
av2[1]=t11;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3041,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3045,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:468: current-directory */
t5=*((C_word*)lf[72]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3045(2,av2);}}}

/* check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4998(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4998,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5002,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:1028: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t5;
tp(2,av2);}}

/* loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2952,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2959,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2992,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:461: directory? */
t5=*((C_word*)lf[41]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_2959(t4,C_SCHEME_FALSE);}}

/* k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2950,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2952,a[2]=t3,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2952(t5,((C_word*)t0)[2],t1);}

/* k2957 in loop in k2948 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_2959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_2959,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:462: pathname-directory */
t4=*((C_word*)lf[85]+1);{
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

/* k3432 in k3425 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in ... */
static void C_ccall f_3434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3434,2,av);}
/* posix-common.scm:549: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* process-wait in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,5)))){
C_save_and_reclaim((void*)f_3861,c,av);}
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
t14=C_i_check_exact_2(t13,lf[129]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3885,a[2]=t13,a[3]=t9,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3891,a[2]=t13,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp);
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

/* k3021 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3023,2,av);}
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
t4=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=lf[83];
av2[4]=lf[84];
av2[5]=((C_word*)t0)[3];
f_2315(6,av2);}}}

/* g422 in k3235 in loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3241,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3249,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:510: irregex-match-substring */
t5=*((C_word*)lf[92]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2413 in file-change-time in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2415,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3247 in g422 in k3235 in loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3249,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* posix-common.scm:511: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3220(t5,t3,t4);}

/* file-owner in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2417,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:267: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[24]);}

/* k3410 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3412,2,av);}
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
f_3306(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* file-change-time in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2411,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2415,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:266: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[23]);}

/* k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 in ... */
static void C_ccall f_3418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3418,2,av);}
a=C_alloc(16);
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
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
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
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

/* a5750 in k5738 in k5735 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5751,6,av);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm:1260: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
C_values(6,av2);}}
else{
/* posixwin.scm:1261: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
C_values(5,av2);}}}

/* file-access-time in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2405,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:265: ##sys#stat */
f_2333(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[22]);}

/* k3235 in loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3237,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:502: g422 */
t3=t2;
f_3241(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* posix-common.scm:512: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3220(t4,((C_word*)t0)[5],t3);}}

/* k2407 in file-access-time in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2409,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_flonum(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5172 in set-buffering-mode! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_5174(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5174,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5177,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[299]);
if(C_truep(t5)){
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_fix((C_word)_IOFBF);
f_5177(2,av2);}}
else{
t6=C_eqp(t3,lf[300]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
f_5177(2,av2);}}
else{
t7=C_eqp(t3,lf[301]);
if(C_truep(t7)){
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_fix((C_word)_IONBF);
f_5177(2,av2);}}
else{
/* posixwin.scm:1106: ##sys#error */
t8=*((C_word*)lf[54]+1);{
C_word av2[6];
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[297];
av2[3]=lf[302];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}}

/* k5175 in k5172 in set-buffering-mode! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5177(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5177,2,av);}
a=C_alloc(6);
t2=t1;
t3=C_i_check_exact_2(((C_word*)t0)[2],lf[297]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=C_slot(((C_word*)t0)[4],C_fix(7));
t6=C_eqp(lf[47],t5);
if(C_truep(t6)){
t7=C_setvbuf(((C_word*)t0)[4],t2,((C_word*)t0)[2]);
t8=t4;
f_5186(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
t7=t4;
f_5186(t7,C_SCHEME_TRUE);}}

/* k3441 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3443,2,av);}
a=C_alloc(4);
t2=t1;
t3=((C_word*)t0)[2];
f_3297(t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3444,a[2]=t2,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));}

/* f_3444 in k3441 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3444,3,av);}
/* posix-common.scm:528: irregex-match */
t3=*((C_word*)lf[93]+1);{
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

/* a2999 in k2938 in create-directory in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3000(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3000,5,av);}
if(C_truep(t3)){
/* posix-common.scm:460: make-pathname */
t5=*((C_word*)lf[87]+1);{
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

/* k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2403(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2403,2,av);}
a=C_alloc(48);
t2=C_mutate2((C_word*)lf[21]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate2((C_word*)lf[22]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2405,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[23]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2411,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[24]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2417,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate2((C_word*)lf[25]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2423,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate2((C_word*)lf[26]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2429,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate2((C_word*)lf[27]+1 /* (set! file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate2((C_word*)lf[35]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate2((C_word*)lf[36]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2532,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate2((C_word*)lf[37]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2542,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate2((C_word*)lf[38]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate2((C_word*)lf[39]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate2((C_word*)lf[40]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2572,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate2((C_word*)lf[41]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate2((C_word*)lf[42]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t17=C_mutate2((C_word*)lf[43]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t18=C_mutate2((C_word*)lf[44]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t19=C_mutate2((C_word*)lf[45]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2595,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6420,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:330: getter-with-setter */
t22=*((C_word*)lf[403]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t22;
av2[1]=t20;
av2[2]=t21;
av2[3]=*((C_word*)lf[45]+1);
av2[4]=lf[407];
((C_proc)(void*)(*((C_word*)t22+1)))(5,av2);}}

/* local-time->seconds in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3628,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3632,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:603: check-time-vector */
f_3519(t3,lf[115],t2);}

/* loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_3220(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3220,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[2]);
/* posix-common.scm:506: conc-loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3186(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3237,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
/* posix-common.scm:507: irregex-match */
t5=*((C_word*)lf[93]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,7)))){
C_save_and_reclaim((void*)f_5778,c,av);}
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
/* posixwin.scm:1264: %process */
f_5694(t1,lf[327],C_SCHEME_FALSE,t2,t5,t9,t13);}
else{
t14=C_i_cdr(t11);
/* posixwin.scm:1264: %process */
f_5694(t1,lf[327],C_SCHEME_FALSE,t2,t5,t9,t13);}}

/* k5774 in k5770 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5776,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_5737(2,av2);}}

/* k5770 in %process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5772,2,av);}
a=C_alloc(4);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5776,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:1256: ##sys#shell-command */
t4=*((C_word*)lf[315]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4780 in a4774 in k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4781,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4785,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:878: close-output-pipe */
t4=*((C_word*)lf[202]+1);{
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

/* k4783 in a4780 in a4774 in k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4785,2,av);}{
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

/* a3200 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3201,2,av);}
/* posix-common.scm:503: decompose-pathname */
t2=*((C_word*)lf[86]+1);{
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

/* k3598 in k3592 in seconds->string in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3600,2,av);}
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posix-common.scm:597: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
/* posix-common.scm:598: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[113];
av2[3]=lf[114];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3207(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3207,5,av);}
a=C_alloc(9);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3281,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t8=t3;
/* posix-common.scm:504: make-pathname */
t9=*((C_word*)lf[87]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
av2[3]=t8;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* posix-common.scm:504: make-pathname */
t8=*((C_word*)lf[87]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[96];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* a4789 in k4763 in with-output-to-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4790,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[209]+1));
t3=C_mutate2((C_word*)lf[209]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* create-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4795,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_fixnum_or(*((C_word*)lf[157]+1),*((C_word*)lf[159]+1)):C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4802,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_pipe(C_SCHEME_FALSE,t4);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4811,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:890: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t7;
tp(2,av2);}}
else{
/* posixwin.scm:892: values */{
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

/* ##sys#process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5561(C_word c,C_word *av){
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
C_word *a;
if(c<9) C_bad_min_argc_2(c,9,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-9)*C_SIZEOF_PAIR +28,c,3)))){
C_save_and_reclaim((void*)f_5561,c,av);}
a=C_alloc((c-9)*C_SIZEOF_PAIR+28);
t9=C_build_rest(&a,c,9,av);
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
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_i_car(t9));
t12=C_a_i_cons(&a,2,t3,t4);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5571,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t11)){
/* posixwin.scm:1220: string-intersperse */
t15=*((C_word*)lf[326]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t13;
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=lf[308];
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5655,a[2]=t17,a[3]=t21,a[4]=t19,a[5]=t18,a[6]=((C_word)li151),tmp=(C_word)a,a+=7,tmp));
t23=((C_word*)t21)[1];
f_5655(t23,t14,t12);}}

/* set-buffering-mode! in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5168,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+5);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=t2;
t6=C_i_check_port_2(t5,C_fix(0),C_SCHEME_TRUE,lf[297]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5174,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t4;
t9=t7;
f_5174(t9,C_u_i_car(t8));}
else{
t8=t7;
f_5174(t8,C_fix((C_word)BUFSIZ));}}

/* k5158 in terminal-size in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5160,2,av);}
if(C_truep(t1)){
/* posixwin.scm:1090: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
av2[3]=C_fix(0);
C_values(4,av2);}}
else{
/* posixwin.scm:1091: ##sys#error */
t2=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[295];
av2[3]=lf[296];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k2360 in k2356 in stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2362,2,av);}
t2=C_fstat(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_2337(2,av2);}}

/* k5576 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5578,2,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:1233: open-input-file* */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[9])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5588(2,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:1238: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5571(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,5)))){
C_save_and_reclaim((void *)f_5571,2,av);}
a=C_alloc(35);
t2=t1;
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=((*(int *)C_data_pointer(t3))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(1));
t6=((*(int *)C_data_pointer(t5))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t7=C_a_i_bytevector(&a,1,C_fix(1));
t8=((*(int *)C_data_pointer(t7))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t9=C_a_i_bytevector(&a,1,C_fix(1));
t10=((*(int *)C_data_pointer(t9))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5578,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t9,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=t7,a[10]=((C_word*)t0)[6],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5615,a[2]=t11,a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=t9,a[9]=t7,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm:1228: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[324]+1));
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[324]+1);
av2[1]=t12;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[325];
tp(6,av2);}}

/* k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4364(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4364,2,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4461,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:759: pathname-directory */
t6=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3407 in k3360 in k3416 in k3326 in k3317 in loop in k3302 in k3295 in k3292 in k3483 in k3480 in k3477 in k3474 in k3471 in k3468 in find-files in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in ... */
static void C_ccall f_3409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3409,2,av);}
/* posix-common.scm:548: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3306(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4367,2,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word)li98),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_4372(t5,((C_word*)t0)[9],C_fix(1));}

/* k4592 in open-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_4594,2,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posixwin.scm:810: check */
f_4545(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k2388 in file-stat in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_2390,2,av);}
a=C_alloc(30);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),*((C_word*)lf[19]+1),*((C_word*)lf[20]+1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5586 in k5576 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5588,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm:1234: open-output-file* */
t4=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[7])));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5592(2,av2);}}}

/* loop in k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_fcall f_4372(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4372,3,t0,t1,t2);}
a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4376,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4419,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=((C_word*)t0)[9],a[7]=((C_word)li97),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_4419(t8,t3,t4);}

/* k4559 in k4547 in check in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4561,2,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=t1;
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4374 in loop in k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4376,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm:772: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[172];
tp(4,av2);}}

/* open-input-pipe in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4563,c,av);}
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
t4=C_i_check_string_2(t2,lf[195]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[196]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[196]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4584,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:813: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[195];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[197]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:814: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[13]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[195];
tp(4,av2);}}
else{
/* posixwin.scm:798: ##sys#error */
t10=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[198];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* a4160 in a4154 in a4131 in a4104 in k4095 in k4089 in call-with-exec-args in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4161,2,av);}{
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

/* k3251 in k3247 in g422 in k3235 in loop in k3216 in k3209 in a3206 in conc-loop in glob in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3253,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5590 in k5586 in k5576 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5592,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:1236: open-input-file* */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* posixwin.scm:1232: values */{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
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

/* k5594 in k5590 in k5586 in k5576 in k5569 in process in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_5596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5596,2,av);}
/* posixwin.scm:1232: values */{
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
av2[4]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[5])));
av2[5]=t1;
C_values(6,av2);}}

/* k4378 in k4374 in loop in k4365 in k4362 in k4356 in k4353 in file-mkstemp in k3851 in k3515 in k2642 in k2401 in k2301 in k2298 in k2295 in k2292 in k2289 in k2286 */
static void C_ccall f_4380(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_4380,2,av);}
a=C_alloc(8);
t2=C_a_i_bitwise_ior(&a,2,C_a_i_bitwise_ior(&a,2,*((C_word*)lf[150]+1),*((C_word*)lf[153]+1)),*((C_word*)lf[155]+1));
t3=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IWRITE));
t4=C_open(t1,t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
if(C_truep(C_fixnum_lessp(((C_word*)t0)[2],((C_word*)t0)[3]))){
t6=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* posixwin.scm:777: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4372(t7,((C_word*)t0)[5],t6);}
else{
/* posixwin.scm:778: posix-error */
t6=lf[2];{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[10];
av2[3]=lf[183];
av2[4]=lf[185];
av2[5]=((C_word*)t0)[6];
f_2315(6,av2);}}}
else{
/* posixwin.scm:779: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=((C_word*)t0)[7];
C_values(4,av2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[469] = {
{"f_2378:posixwin_2escm",(void*)f_2378},
{"f_2371:posixwin_2escm",(void*)f_2371},
{"f_4751:posixwin_2escm",(void*)f_4751},
{"f_4756:posixwin_2escm",(void*)f_4756},
{"f_5488:posixwin_2escm",(void*)f_5488},
{"f_4584:posixwin_2escm",(void*)f_4584},
{"f_4761:posixwin_2escm",(void*)f_4761},
{"f_5838:posixwin_2escm",(void*)f_5838},
{"f_4765:posixwin_2escm",(void*)f_4765},
{"f_5492:posixwin_2escm",(void*)f_5492},
{"f_4195:posixwin_2escm",(void*)f_4195},
{"f_2820:posixwin_2escm",(void*)f_2820},
{"f_4199:posixwin_2escm",(void*)f_4199},
{"f_4770:posixwin_2escm",(void*)f_4770},
{"f_6185:posixwin_2escm",(void*)f_6185},
{"f_4775:posixwin_2escm",(void*)f_4775},
{"f_5465:posixwin_2escm",(void*)f_5465},
{"f_5460:posixwin_2escm",(void*)f_5460},
{"f_3211:posixwin_2escm",(void*)f_3211},
{"f_3218:posixwin_2escm",(void*)f_3218},
{"f_6197:posixwin_2escm",(void*)f_6197},
{"f_6191:posixwin_2escm",(void*)f_6191},
{"f_3427:posixwin_2escm",(void*)f_3427},
{"f_5475:posixwin_2escm",(void*)f_5475},
{"f_5471:posixwin_2escm",(void*)f_5471},
{"f_6389:posixwin_2escm",(void*)f_6389},
{"f_6380:posixwin_2escm",(void*)f_6380},
{"f_4577:posixwin_2escm",(void*)f_4577},
{"f_6167:posixwin_2escm",(void*)f_6167},
{"f_6161:posixwin_2escm",(void*)f_6161},
{"f_6179:posixwin_2escm",(void*)f_6179},
{"f_6173:posixwin_2escm",(void*)f_6173},
{"f_6366:posixwin_2escm",(void*)f_6366},
{"f_2817:posixwin_2escm",(void*)f_2817},
{"f_3642:posixwin_2escm",(void*)f_3642},
{"f_2804:posixwin_2escm",(void*)f_2804},
{"f_3853:posixwin_2escm",(void*)f_3853},
{"f_3855:posixwin_2escm",(void*)f_3855},
{"f_4946:posixwin_2escm",(void*)f_4946},
{"f_3632:posixwin_2escm",(void*)f_3632},
{"f_3636:posixwin_2escm",(void*)f_3636},
{"f_4940:posixwin_2escm",(void*)f_4940},
{"f_4952:posixwin_2escm",(void*)f_4952},
{"toplevel:posixwin_2escm",(void*)C_posix_toplevel},
{"f_5608:posixwin_2escm",(void*)f_5608},
{"f_5044:posixwin_2escm",(void*)f_5044},
{"f_5042:posixwin_2escm",(void*)f_5042},
{"f_5056:posixwin_2escm",(void*)f_5056},
{"f_5244:posixwin_2escm",(void*)f_5244},
{"f_4230:posixwin_2escm",(void*)f_4230},
{"f_4617:posixwin_2escm",(void*)f_4617},
{"f_4239:posixwin_2escm",(void*)f_4239},
{"f_5028:posixwin_2escm",(void*)f_5028},
{"f_5631:posixwin_2escm",(void*)f_5631},
{"f_4221:posixwin_2escm",(void*)f_4221},
{"f_4643:posixwin_2escm",(void*)f_4643},
{"f_5030:posixwin_2escm",(void*)f_5030},
{"f_5647:posixwin_2escm",(void*)f_5647},
{"f_4442:posixwin_2escm",(void*)f_4442},
{"f_5002:posixwin_2escm",(void*)f_5002},
{"f_4212:posixwin_2escm",(void*)f_4212},
{"f_4215:posixwin_2escm",(void*)f_4215},
{"f_5615:posixwin_2escm",(void*)f_5615},
{"f_6043:posixwin_2escm",(void*)f_6043},
{"f_5619:posixwin_2escm",(void*)f_5619},
{"f_6021:posixwin_2escm",(void*)f_6021},
{"f_5014:posixwin_2escm",(void*)f_5014},
{"f_5016:posixwin_2escm",(void*)f_5016},
{"f_6245:posixwin_2escm",(void*)f_6245},
{"f_4624:posixwin_2escm",(void*)f_4624},
{"f_5623:posixwin_2escm",(void*)f_5623},
{"f_5627:posixwin_2escm",(void*)f_5627},
{"f_6031:posixwin_2escm",(void*)f_6031},
{"f_6257:posixwin_2escm",(void*)f_6257},
{"f_6251:posixwin_2escm",(void*)f_6251},
{"f_6028:posixwin_2escm",(void*)f_6028},
{"f_6025:posixwin_2escm",(void*)f_6025},
{"f_4419:posixwin_2escm",(void*)f_4419},
{"f_2599:posixwin_2escm",(void*)f_2599},
{"f_6420:posixwin_2escm",(void*)f_6420},
{"f_6227:posixwin_2escm",(void*)f_6227},
{"f_2590:posixwin_2escm",(void*)f_2590},
{"f_2595:posixwin_2escm",(void*)f_2595},
{"f_4603:posixwin_2escm",(void*)f_4603},
{"f_6221:posixwin_2escm",(void*)f_6221},
{"f_6414:posixwin_2escm",(void*)f_6414},
{"f_6037:posixwin_2escm",(void*)f_6037},
{"f_2580:posixwin_2escm",(void*)f_2580},
{"f_6239:posixwin_2escm",(void*)f_6239},
{"f_6233:posixwin_2escm",(void*)f_6233},
{"f_2582:posixwin_2escm",(void*)f_2582},
{"f_6427:posixwin_2escm",(void*)f_6427},
{"f_6424:posixwin_2escm",(void*)f_6424},
{"f_2570:posixwin_2escm",(void*)f_2570},
{"f_6209:posixwin_2escm",(void*)f_6209},
{"f_2572:posixwin_2escm",(void*)f_2572},
{"f_4802:posixwin_2escm",(void*)f_4802},
{"f_6203:posixwin_2escm",(void*)f_6203},
{"f_2878:posixwin_2escm",(void*)f_2878},
{"f_6215:posixwin_2escm",(void*)f_6215},
{"f_2867:posixwin_2escm",(void*)f_2867},
{"f_2868:posixwin_2escm",(void*)f_2868},
{"f_3790:posixwin_2escm",(void*)f_3790},
{"f_2892:posixwin_2escm",(void*)f_2892},
{"f_3559:posixwin_2escm",(void*)f_3559},
{"f_2887:posixwin_2escm",(void*)f_2887},
{"f_2884:posixwin_2escm",(void*)f_2884},
{"f_3778:posixwin_2escm",(void*)f_3778},
{"f_3772:posixwin_2escm",(void*)f_3772},
{"f_3394:posixwin_2escm",(void*)f_3394},
{"f_3399:posixwin_2escm",(void*)f_3399},
{"f_3391:posixwin_2escm",(void*)f_3391},
{"f_3387:posixwin_2escm",(void*)f_3387},
{"f_3374:posixwin_2escm",(void*)f_3374},
{"f_3752:posixwin_2escm",(void*)f_3752},
{"f_3372:posixwin_2escm",(void*)f_3372},
{"f_3379:posixwin_2escm",(void*)f_3379},
{"f_3750:posixwin_2escm",(void*)f_3750},
{"f_3186:posixwin_2escm",(void*)f_3186},
{"f_3180:posixwin_2escm",(void*)f_3180},
{"f_4634:posixwin_2escm",(void*)f_4634},
{"f_3782:posixwin_2escm",(void*)f_3782},
{"f_3362:posixwin_2escm",(void*)f_3362},
{"f_4811:posixwin_2escm",(void*)f_4811},
{"f_3760:posixwin_2escm",(void*)f_3760},
{"f_5444:posixwin_2escm",(void*)f_5444},
{"f_5448:posixwin_2escm",(void*)f_5448},
{"f_3563:posixwin_2escm",(void*)f_3563},
{"f_6436:posixwin_2escm",(void*)f_6436},
{"f_5405:posixwin_2escm",(void*)f_5405},
{"f_3932:posixwin_2escm",(void*)f_3932},
{"f_3594:posixwin_2escm",(void*)f_3594},
{"f_3590:posixwin_2escm",(void*)f_3590},
{"f_5361:posixwin_2escm",(void*)f_5361},
{"f_2838:posixwin_2escm",(void*)f_2838},
{"f_2522:posixwin_2escm",(void*)f_2522},
{"f_2315:posixwin_2escm",(void*)f_2315},
{"f_2319:posixwin_2escm",(void*)f_2319},
{"f_3353:posixwin_2escm",(void*)f_3353},
{"f_2848:posixwin_2escm",(void*)f_2848},
{"f_3350:posixwin_2escm",(void*)f_3350},
{"f_2844:posixwin_2escm",(void*)f_2844},
{"f_5898:posixwin_2escm",(void*)f_5898},
{"f_2326:posixwin_2escm",(void*)f_2326},
{"f_3993:posixwin_2escm",(void*)f_3993},
{"f_3999:posixwin_2escm",(void*)f_3999},
{"f_2358:posixwin_2escm",(void*)f_2358},
{"f_4894:posixwin_2escm",(void*)f_4894},
{"f_2552:posixwin_2escm",(void*)f_2552},
{"f_2550:posixwin_2escm",(void*)f_2550},
{"f_3746:posixwin_2escm",(void*)f_3746},
{"f_3328:posixwin_2escm",(void*)f_3328},
{"f_3971:posixwin_2escm",(void*)f_3971},
{"f_3977:posixwin_2escm",(void*)f_3977},
{"f_3975:posixwin_2escm",(void*)f_3975},
{"f_5308:posixwin_2escm",(void*)f_5308},
{"f_2542:posixwin_2escm",(void*)f_2542},
{"f_2540:posixwin_2escm",(void*)f_2540},
{"f_3319:posixwin_2escm",(void*)f_3319},
{"f_2337:posixwin_2escm",(void*)f_2337},
{"f_2333:posixwin_2escm",(void*)f_2333},
{"f_3960:posixwin_2escm",(void*)f_3960},
{"f_3542:posixwin_2escm",(void*)f_3542},
{"f_3964:posixwin_2escm",(void*)f_3964},
{"f_3969:posixwin_2escm",(void*)f_3969},
{"f_2330:posixwin_2escm",(void*)f_2330},
{"f_3120:posixwin_2escm",(void*)f_3120},
{"f_5322:posixwin_2escm",(void*)f_5322},
{"f_5281:posixwin_2escm",(void*)f_5281},
{"f_2530:posixwin_2escm",(void*)f_2530},
{"f_3727:posixwin_2escm",(void*)f_3727},
{"f_2532:posixwin_2escm",(void*)f_2532},
{"f_3304:posixwin_2escm",(void*)f_3304},
{"f_3306:posixwin_2escm",(void*)f_3306},
{"f_3110:posixwin_2escm",(void*)f_3110},
{"f_3538:posixwin_2escm",(void*)f_3538},
{"f_5680:posixwin_2escm",(void*)f_5680},
{"f_5269:posixwin_2escm",(void*)f_5269},
{"f_3703:posixwin_2escm",(void*)f_3703},
{"f_3706:posixwin_2escm",(void*)f_3706},
{"f_5655:posixwin_2escm",(void*)f_5655},
{"f_3504:posixwin_2escm",(void*)f_3504},
{"f_3502:posixwin_2escm",(void*)f_3502},
{"f_4679:posixwin_2escm",(void*)f_4679},
{"f_4671:posixwin_2escm",(void*)f_4671},
{"f_2699:posixwin_2escm",(void*)f_2699},
{"f_4261:posixwin_2escm",(void*)f_4261},
{"f_4698:posixwin_2escm",(void*)f_4698},
{"f_4277:posixwin_2escm",(void*)f_4277},
{"f_2686:posixwin_2escm",(void*)f_2686},
{"f_5085:posixwin_2escm",(void*)f_5085},
{"f_2701:posixwin_2escm",(void*)f_2701},
{"f_4070:posixwin_2escm",(void*)f_4070},
{"f_4073:posixwin_2escm",(void*)f_4073},
{"f_5088:posixwin_2escm",(void*)f_5088},
{"f_2300:posixwin_2escm",(void*)f_2300},
{"f_2303:posixwin_2escm",(void*)f_2303},
{"f_4694:posixwin_2escm",(void*)f_4694},
{"f_4271:posixwin_2escm",(void*)f_4271},
{"f_5694:posixwin_2escm",(void*)f_5694},
{"f_5696:posixwin_2escm",(void*)f_5696},
{"f_4274:posixwin_2escm",(void*)f_4274},
{"f_4668:posixwin_2escm",(void*)f_4668},
{"f_4286:posixwin_2escm",(void*)f_4286},
{"f_4461:posixwin_2escm",(void*)f_4461},
{"f_5094:posixwin_2escm",(void*)f_5094},
{"f_4085:posixwin_2escm",(void*)f_4085},
{"f_4661:posixwin_2escm",(void*)f_4661},
{"f_5939:posixwin_2escm",(void*)f_5939},
{"f_4474:posixwin_2escm",(void*)f_4474},
{"f_4091:posixwin_2escm",(void*)f_4091},
{"f_5062:posixwin_2escm",(void*)f_5062},
{"f_4465:posixwin_2escm",(void*)f_4465},
{"f_4087:posixwin_2escm",(void*)f_4087},
{"f_2924:posixwin_2escm",(void*)f_2924},
{"f_4688:posixwin_2escm",(void*)f_4688},
{"f_4481:posixwin_2escm",(void*)f_4481},
{"f_5078:posixwin_2escm",(void*)f_5078},
{"f_5076:posixwin_2escm",(void*)f_5076},
{"f_6287:posixwin_2escm",(void*)f_6287},
{"f_6281:posixwin_2escm",(void*)f_6281},
{"f_4097:posixwin_2escm",(void*)f_4097},
{"f_4683:posixwin_2escm",(void*)f_4683},
{"f_6299:posixwin_2escm",(void*)f_6299},
{"f_3510:posixwin_2escm",(void*)f_3510},
{"f_3512:posixwin_2escm",(void*)f_3512},
{"f_6293:posixwin_2escm",(void*)f_6293},
{"f_3517:posixwin_2escm",(void*)f_3517},
{"f_3519:posixwin_2escm",(void*)f_3519},
{"f_4653:posixwin_2escm",(void*)f_4653},
{"f_4650:posixwin_2escm",(void*)f_4650},
{"f_2902:posixwin_2escm",(void*)f_2902},
{"f_3735:posixwin_2escm",(void*)f_3735},
{"f_5928:posixwin_2escm",(void*)f_5928},
{"f_6269:posixwin_2escm",(void*)f_6269},
{"f_6263:posixwin_2escm",(void*)f_6263},
{"f_6275:posixwin_2escm",(void*)f_6275},
{"f_2727:posixwin_2escm",(void*)f_2727},
{"f_2729:posixwin_2escm",(void*)f_2729},
{"f_6473:posixwin_2escm",(void*)f_6473},
{"f_5186:posixwin_2escm",(void*)f_5186},
{"f_4060:posixwin_2escm",(void*)f_4060},
{"f_2713:posixwin_2escm",(void*)f_2713},
{"f_2715:posixwin_2escm",(void*)f_2715},
{"f_6483:posixwin_2escm",(void*)f_6483},
{"f_5916:posixwin_2escm",(void*)f_5916},
{"f_5910:posixwin_2escm",(void*)f_5910},
{"f_6457:posixwin_2escm",(void*)f_6457},
{"f_6077:posixwin_2escm",(void*)f_6077},
{"f_6463:posixwin_2escm",(void*)f_6463},
{"f_6461:posixwin_2escm",(void*)f_6461},
{"f_3954:posixwin_2escm",(void*)f_3954},
{"f_3940:posixwin_2escm",(void*)f_3940},
{"f_3943:posixwin_2escm",(void*)f_3943},
{"f_3948:posixwin_2escm",(void*)f_3948},
{"f_2383:posixwin_2escm",(void*)f_2383},
{"f_4002:posixwin_2escm",(void*)f_4002},
{"f_6084:posixwin_2escm",(void*)f_6084},
{"f_4045:posixwin_2escm",(void*)f_4045},
{"f_4034:posixwin_2escm",(void*)f_4034},
{"f_4028:posixwin_2escm",(void*)f_4028},
{"f_5701:posixwin_2escm",(void*)f_5701},
{"f_5141:posixwin_2escm",(void*)f_5141},
{"f_4321:posixwin_2escm",(void*)f_4321},
{"f_4018:posixwin_2escm",(void*)f_4018},
{"f_4327:posixwin_2escm",(void*)f_4327},
{"f_4121:posixwin_2escm",(void*)f_4121},
{"f_4124:posixwin_2escm",(void*)f_4124},
{"f_4712:posixwin_2escm",(void*)f_4712},
{"f_4358:posixwin_2escm",(void*)f_4358},
{"f_4718:posixwin_2escm",(void*)f_4718},
{"f_4355:posixwin_2escm",(void*)f_4355},
{"f_4155:posixwin_2escm",(void*)f_4155},
{"f_2611:posixwin_2escm",(void*)f_2611},
{"f_4153:posixwin_2escm",(void*)f_4153},
{"f_4707:posixwin_2escm",(void*)f_4707},
{"f_5737:posixwin_2escm",(void*)f_5737},
{"f_4703:posixwin_2escm",(void*)f_4703},
{"f_4345:posixwin_2escm",(void*)f_4345},
{"f_4142:posixwin_2escm",(void*)f_4142},
{"f_5135:posixwin_2escm",(void*)f_5135},
{"f_4545:posixwin_2escm",(void*)f_4545},
{"f_4149:posixwin_2escm",(void*)f_4149},
{"f_5507:posixwin_2escm",(void*)f_5507},
{"f_4549:posixwin_2escm",(void*)f_4549},
{"f_4731:posixwin_2escm",(void*)f_4731},
{"f_5740:posixwin_2escm",(void*)f_5740},
{"f_4736:posixwin_2escm",(void*)f_4736},
{"f_5745:posixwin_2escm",(void*)f_5745},
{"f_2617:posixwin_2escm",(void*)f_2617},
{"f_5503:posixwin_2escm",(void*)f_5503},
{"f_6149:posixwin_2escm",(void*)f_6149},
{"f_6143:posixwin_2escm",(void*)f_6143},
{"f_4051:posixwin_2escm",(void*)f_4051},
{"f_4722:posixwin_2escm",(void*)f_4722},
{"f_6347:posixwin_2escm",(void*)f_6347},
{"f_4727:posixwin_2escm",(void*)f_4727},
{"f_4055:posixwin_2escm",(void*)f_4055},
{"f_6341:posixwin_2escm",(void*)f_6341},
{"f_5153:posixwin_2escm",(void*)f_5153},
{"f_6155:posixwin_2escm",(void*)f_6155},
{"f_6359:posixwin_2escm",(void*)f_6359},
{"f_4312:posixwin_2escm",(void*)f_4312},
{"f_6353:posixwin_2escm",(void*)f_6353},
{"f_4315:posixwin_2escm",(void*)f_4315},
{"f_5121:posixwin_2escm",(void*)f_5121},
{"f_4111:posixwin_2escm",(void*)f_4111},
{"f_4117:posixwin_2escm",(void*)f_4117},
{"f_6125:posixwin_2escm",(void*)f_6125},
{"f_6329:posixwin_2escm",(void*)f_6329},
{"f_6323:posixwin_2escm",(void*)f_6323},
{"f_4305:posixwin_2escm",(void*)f_4305},
{"f_4100:posixwin_2escm",(void*)f_4100},
{"f_6137:posixwin_2escm",(void*)f_6137},
{"f_4505:posixwin_2escm",(void*)f_4505},
{"f_4105:posixwin_2escm",(void*)f_4105},
{"f_6131:posixwin_2escm",(void*)f_6131},
{"f_6335:posixwin_2escm",(void*)f_6335},
{"f_2657:posixwin_2escm",(void*)f_2657},
{"f_4132:posixwin_2escm",(void*)f_4132},
{"f_4138:posixwin_2escm",(void*)f_4138},
{"f_5710:posixwin_2escm",(void*)f_5710},
{"f_6305:posixwin_2escm",(void*)f_6305},
{"f_2649:posixwin_2escm",(void*)f_2649},
{"f_2644:posixwin_2escm",(void*)f_2644},
{"f_2288:posixwin_2escm",(void*)f_2288},
{"f_6119:posixwin_2escm",(void*)f_6119},
{"f_6110:posixwin_2escm",(void*)f_6110},
{"f_6317:posixwin_2escm",(void*)f_6317},
{"f_6311:posixwin_2escm",(void*)f_6311},
{"f_5108:posixwin_2escm",(void*)f_5108},
{"f_2297:posixwin_2escm",(void*)f_2297},
{"f_2291:posixwin_2escm",(void*)f_2291},
{"f_2294:posixwin_2escm",(void*)f_2294},
{"f_3466:posixwin_2escm",(void*)f_3466},
{"f_3460:posixwin_2escm",(void*)f_3460},
{"f_5391:posixwin_2escm",(void*)f_5391},
{"f_3493:posixwin_2escm",(void*)f_3493},
{"f_3496:posixwin_2escm",(void*)f_3496},
{"f_3499:posixwin_2escm",(void*)f_3499},
{"f_3098:posixwin_2escm",(void*)f_3098},
{"f_3490:posixwin_2escm",(void*)f_3490},
{"f_4741:posixwin_2escm",(void*)f_4741},
{"f_3084:posixwin_2escm",(void*)f_3084},
{"f_4747:posixwin_2escm",(void*)f_4747},
{"f_5398:posixwin_2escm",(void*)f_5398},
{"f_3476:posixwin_2escm",(void*)f_3476},
{"f_3473:posixwin_2escm",(void*)f_3473},
{"f_3470:posixwin_2escm",(void*)f_3470},
{"f_3070:posixwin_2escm",(void*)f_3070},
{"f_3699:posixwin_2escm",(void*)f_3699},
{"f_3479:posixwin_2escm",(void*)f_3479},
{"f_3063:posixwin_2escm",(void*)f_3063},
{"f_3066:posixwin_2escm",(void*)f_3066},
{"f_3060:posixwin_2escm",(void*)f_3060},
{"f_4521:posixwin_2escm",(void*)f_4521},
{"f_3680:posixwin_2escm",(void*)f_3680},
{"f_3281:posixwin_2escm",(void*)f_3281},
{"f_3452:posixwin_2escm",(void*)f_3452},
{"f_3689:posixwin_2escm",(void*)f_3689},
{"f_2560:posixwin_2escm",(void*)f_2560},
{"f_2562:posixwin_2escm",(void*)f_2562},
{"f_3673:posixwin_2escm",(void*)f_3673},
{"f_4512:posixwin_2escm",(void*)f_4512},
{"f_4515:posixwin_2escm",(void*)f_4515},
{"f_3485:posixwin_2escm",(void*)f_3485},
{"f_3482:posixwin_2escm",(void*)f_3482},
{"f_2787:posixwin_2escm",(void*)f_2787},
{"f_2784:posixwin_2escm",(void*)f_2784},
{"f_3261:posixwin_2escm",(void*)f_3261},
{"f_2771:posixwin_2escm",(void*)f_2771},
{"f_2777:posixwin_2escm",(void*)f_2777},
{"f_2940:posixwin_2escm",(void*)f_2940},
{"f_5943:posixwin_2escm",(void*)f_5943},
{"f_5947:posixwin_2escm",(void*)f_5947},
{"f_2934:posixwin_2escm",(void*)f_2934},
{"f_5969:posixwin_2escm",(void*)f_5969},
{"f_4920:posixwin_2escm",(void*)f_4920},
{"f_2754:posixwin_2escm",(void*)f_2754},
{"f_2992:posixwin_2escm",(void*)f_2992},
{"f_2994:posixwin_2escm",(void*)f_2994},
{"f_3838:posixwin_2escm",(void*)f_3838},
{"f_3294:posixwin_2escm",(void*)f_3294},
{"f_3297:posixwin_2escm",(void*)f_3297},
{"f_2985:posixwin_2escm",(void*)f_2985},
{"f_5959:posixwin_2escm",(void*)f_5959},
{"f_3820:posixwin_2escm",(void*)f_3820},
{"f_5951:posixwin_2escm",(void*)f_5951},
{"f_2978:posixwin_2escm",(void*)f_2978},
{"f_5954:posixwin_2escm",(void*)f_5954},
{"f_3816:posixwin_2escm",(void*)f_3816},
{"f_4918:posixwin_2escm",(void*)f_4918},
{"f_4910:posixwin_2escm",(void*)f_4910},
{"f_3808:posixwin_2escm",(void*)f_3808},
{"f_4938:posixwin_2escm",(void*)f_4938},
{"f_4930:posixwin_2escm",(void*)f_4930},
{"f_2745:posixwin_2escm",(void*)f_2745},
{"f_2435:posixwin_2escm",(void*)f_2435},
{"f_2433:posixwin_2escm",(void*)f_2433},
{"f_4969:posixwin_2escm",(void*)f_4969},
{"f_4961:posixwin_2escm",(void*)f_4961},
{"f_2429:posixwin_2escm",(void*)f_2429},
{"f_2427:posixwin_2escm",(void*)f_2427},
{"f_2423:posixwin_2escm",(void*)f_2423},
{"f_2421:posixwin_2escm",(void*)f_2421},
{"f_2454:posixwin_2escm",(void*)f_2454},
{"f_3891:posixwin_2escm",(void*)f_3891},
{"f_2962:posixwin_2escm",(void*)f_2962},
{"f_3885:posixwin_2escm",(void*)f_3885},
{"f_3045:posixwin_2escm",(void*)f_3045},
{"f_3041:posixwin_2escm",(void*)f_3041},
{"f_4998:posixwin_2escm",(void*)f_4998},
{"f_2952:posixwin_2escm",(void*)f_2952},
{"f_2950:posixwin_2escm",(void*)f_2950},
{"f_2959:posixwin_2escm",(void*)f_2959},
{"f_3434:posixwin_2escm",(void*)f_3434},
{"f_3861:posixwin_2escm",(void*)f_3861},
{"f_3023:posixwin_2escm",(void*)f_3023},
{"f_3241:posixwin_2escm",(void*)f_3241},
{"f_2415:posixwin_2escm",(void*)f_2415},
{"f_3249:posixwin_2escm",(void*)f_3249},
{"f_2417:posixwin_2escm",(void*)f_2417},
{"f_3412:posixwin_2escm",(void*)f_3412},
{"f_2411:posixwin_2escm",(void*)f_2411},
{"f_3418:posixwin_2escm",(void*)f_3418},
{"f_5751:posixwin_2escm",(void*)f_5751},
{"f_2405:posixwin_2escm",(void*)f_2405},
{"f_3237:posixwin_2escm",(void*)f_3237},
{"f_2409:posixwin_2escm",(void*)f_2409},
{"f_5174:posixwin_2escm",(void*)f_5174},
{"f_5177:posixwin_2escm",(void*)f_5177},
{"f_3443:posixwin_2escm",(void*)f_3443},
{"f_3444:posixwin_2escm",(void*)f_3444},
{"f_3000:posixwin_2escm",(void*)f_3000},
{"f_2403:posixwin_2escm",(void*)f_2403},
{"f_3628:posixwin_2escm",(void*)f_3628},
{"f_3220:posixwin_2escm",(void*)f_3220},
{"f_5778:posixwin_2escm",(void*)f_5778},
{"f_5776:posixwin_2escm",(void*)f_5776},
{"f_5772:posixwin_2escm",(void*)f_5772},
{"f_4781:posixwin_2escm",(void*)f_4781},
{"f_4785:posixwin_2escm",(void*)f_4785},
{"f_3201:posixwin_2escm",(void*)f_3201},
{"f_3600:posixwin_2escm",(void*)f_3600},
{"f_3207:posixwin_2escm",(void*)f_3207},
{"f_4790:posixwin_2escm",(void*)f_4790},
{"f_4795:posixwin_2escm",(void*)f_4795},
{"f_5561:posixwin_2escm",(void*)f_5561},
{"f_5168:posixwin_2escm",(void*)f_5168},
{"f_5160:posixwin_2escm",(void*)f_5160},
{"f_2362:posixwin_2escm",(void*)f_2362},
{"f_5578:posixwin_2escm",(void*)f_5578},
{"f_5571:posixwin_2escm",(void*)f_5571},
{"f_4364:posixwin_2escm",(void*)f_4364},
{"f_3409:posixwin_2escm",(void*)f_3409},
{"f_4367:posixwin_2escm",(void*)f_4367},
{"f_4594:posixwin_2escm",(void*)f_4594},
{"f_2390:posixwin_2escm",(void*)f_2390},
{"f_5588:posixwin_2escm",(void*)f_5588},
{"f_4372:posixwin_2escm",(void*)f_4372},
{"f_4561:posixwin_2escm",(void*)f_4561},
{"f_4376:posixwin_2escm",(void*)f_4376},
{"f_4563:posixwin_2escm",(void*)f_4563},
{"f_4161:posixwin_2escm",(void*)f_4161},
{"f_3253:posixwin_2escm",(void*)f_3253},
{"f_5592:posixwin_2escm",(void*)f_5592},
{"f_5596:posixwin_2escm",(void*)f_5596},
{"f_4380:posixwin_2escm",(void*)f_4380},
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
S|  map		1
S|  for-each		2
o|eliminated procedure checks: 164 
o|specializations:
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (##sys#length list)
o|  2 (cdr pair)
o|  2 (string-ref string fixnum)
o|  3 (string-length string)
o|  3 (##sys#check-list (or pair list) *)
o|  3 (make-string fixnum)
o|  4 (##sys#check-open-port * *)
o|  9 (eqv? * (not float))
o|  12 (car pair)
(o e)|safe calls: 574 
(o e)|assignments to immediate values: 27 
o|dropping redundant toplevel assignment: process 
o|dropping redundant toplevel assignment: process* 
o|safe globals: (file-stat ##sys#stat ##sys#posix-error posix-error c1563) 
o|Removed `not' forms: 8 
o|contracted procedure: "(posix-common.scm:185) strerror64" 
o|inlining procedure: k2338 
o|inlining procedure: k2338 
o|inlining procedure: k2353 
o|inlining procedure: k2353 
o|inlining procedure: k2372 
o|inlining procedure: k2372 
o|inlining procedure: k2449 
o|inlining procedure: k2461 
o|inlining procedure: k2461 
o|inlining procedure: k2473 
o|inlining procedure: k2473 
o|inlining procedure: k2485 
o|inlining procedure: k2485 
o|inlining procedure: k2449 
o|inlining procedure: k2606 
o|inlining procedure: k2606 
o|inlining procedure: k2618 
o|inlining procedure: k2618 
o|inlining procedure: k2628 
o|inlining procedure: k2628 
o|inlining procedure: k2655 
o|contracted procedure: k2671 
o|inlining procedure: k2668 
o|inlining procedure: k2668 
o|substituted constant variable: a2681 
o|inlining procedure: k2655 
o|inlining procedure: k2688 
o|inlining procedure: k2688 
o|substituted constant variable: a2732 
o|inlining procedure: k2733 
o|inlining procedure: k2733 
o|contracted procedure: k2749 
o|inlining procedure: k2752 
o|inlining procedure: k2752 
o|inlining procedure: k2785 
o|inlining procedure: k2785 
o|inlining procedure: k2809 
o|inlining procedure: k2809 
o|substituted constant variable: a2830 
o|inlining procedure: k2849 
o|inlining procedure: k2849 
o|inlining procedure: k2870 
o|propagated global variable: r28716535 delete-file 
o|inlining procedure: k2870 
o|inlining procedure: k2862 
o|inlining procedure: k2894 
o|inlining procedure: k2894 
o|inlining procedure: k2862 
o|inlining procedure: k2932 
o|inlining procedure: k2932 
o|inlining procedure: k2954 
o|contracted procedure: "(posix-common.scm:463) g331332" 
o|inlining procedure: k2965 
o|inlining procedure: k2965 
o|inlining procedure: k2954 
o|inlining procedure: k3002 
o|inlining procedure: k3002 
o|contracted procedure: "(posix-common.scm:464) g349350" 
o|inlining procedure: k3010 
o|inlining procedure: k3010 
o|inlining procedure: k3071 
o|inlining procedure: k3071 
o|inlining procedure: k3086 
o|inlining procedure: k3086 
o|inlining procedure: k3127 
o|inlining procedure: k3127 
o|substituted constant variable: a3149 
o|substituted constant variable: a3151 
o|inlining procedure: k3188 
o|inlining procedure: k3188 
o|inlining procedure: k3222 
o|inlining procedure: k3222 
o|inlining procedure: k3275 
o|inlining procedure: k3275 
o|inlining procedure: k3283 
o|inlining procedure: k3283 
o|contracted procedure: "(posix-common.scm:558) find-files" 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|inlining procedure: k3329 
o|inlining procedure: k3329 
o|inlining procedure: k3348 
o|inlining procedure: k3348 
o|inlining procedure: k3357 
o|inlining procedure: k3389 
o|inlining procedure: k3389 
o|inlining procedure: k3357 
o|inlining procedure: k3407 
o|inlining procedure: k3407 
o|inlining procedure: k3422 
o|inlining procedure: k3422 
o|contracted procedure: k3449 
o|inlining procedure: k3454 
o|inlining procedure: k3454 
o|inlining procedure: k3524 
o|inlining procedure: k3524 
o|inlining procedure: k3601 
o|inlining procedure: k3601 
o|contracted procedure: "(posix-common.scm:595) ctime542" 
o|inlining procedure: k3637 
o|inlining procedure: k3637 
o|inlining procedure: k3681 
o|contracted procedure: "(posix-common.scm:618) strftime568" 
o|inlining procedure: k3667 
o|inlining procedure: k3667 
o|inlining procedure: k3681 
o|contracted procedure: "(posix-common.scm:620) asctime567" 
o|inlining procedure: k3654 
o|inlining procedure: k3654 
o|inlining procedure: k3783 
o|inlining procedure: k3792 
o|inlining procedure: k3792 
o|inlining procedure: k3783 
o|contracted procedure: "(posix-common.scm:644) get619" 
o|inlining procedure: k3893 
o|inlining procedure: k3893 
o|inlining procedure: k3979 
o|inlining procedure: k3979 
o|contracted procedure: "(posix-common.scm:712) c-string->allocated-pointer663" 
o|merged explicitly consed rest parameter: args675697 
o|consed rest parameter at call site: tmp22245 1 
o|inlining procedure: k4062 
o|inlining procedure: k4062 
o|inlining procedure: k4122 
o|inlining procedure: k4122 
o|inlining procedure: k4213 
o|inlining procedure: k4213 
o|inlining procedure: k4241 
o|inlining procedure: k4241 
o|inlining procedure: k4275 
o|inlining procedure: k4275 
o|inlining procedure: k4319 
o|inlining procedure: k4319 
o|inlining procedure: k4389 
o|inlining procedure: k4389 
o|inlining procedure: k4421 
o|inlining procedure: k4421 
o|contracted procedure: k4443 
o|inlining procedure: k4449 
o|inlining procedure: k4449 
o|inlining procedure: k4466 
o|inlining procedure: k4466 
o|inlining procedure: k4476 
o|inlining procedure: k4476 
o|inlining procedure: k4513 
o|inlining procedure: k4513 
o|inlining procedure: k4529 
o|inlining procedure: k4529 
o|inlining procedure: k4550 
o|inlining procedure: k4550 
o|inlining procedure: k4575 
o|inlining procedure: k4575 
o|inlining procedure: "(posixwin.scm:815) badmode893" 
o|substituted constant variable: a4599 
o|substituted constant variable: a4601 
o|inlining procedure: k4615 
o|inlining procedure: k4615 
o|inlining procedure: "(posixwin.scm:825) badmode893" 
o|substituted constant variable: a4639 
o|substituted constant variable: a4641 
o|substituted constant variable: a4646 
o|substituted constant variable: a4647 
o|inlining procedure: k4651 
o|inlining procedure: k4651 
o|substituted constant variable: a4664 
o|substituted constant variable: a4665 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4800 
o|inlining procedure: k4800 
o|inlining procedure: k4902 
o|inlining procedure: k4902 
o|inlining procedure: k4928 
o|inlining procedure: k4928 
o|inlining procedure: k4967 
o|contracted procedure: k4983 
o|inlining procedure: k4980 
o|inlining procedure: k4980 
o|substituted constant variable: a4993 
o|inlining procedure: k4967 
o|inlining procedure: k5003 
o|inlining procedure: k5003 
o|substituted constant variable: a5047 
o|contracted procedure: k5051 
o|inlining procedure: k5048 
o|inlining procedure: k5048 
o|inlining procedure: k5086 
o|inlining procedure: k5086 
o|contracted procedure: "(posixwin.scm:1081) ex01138" 
o|substituted constant variable: a5138 
o|contracted procedure: k5145 
o|inlining procedure: k5142 
o|inlining procedure: k5142 
o|inlining procedure: k5155 
o|inlining procedure: k5155 
o|substituted constant variable: a5171 
o|inlining procedure: k5181 
o|inlining procedure: k5181 
o|inlining procedure: k5191 
o|inlining procedure: k5191 
o|inlining procedure: k5204 
o|inlining procedure: k5204 
o|substituted constant variable: a5220 
o|substituted constant variable: a5222 
o|substituted constant variable: a5224 
o|inlining procedure: k5271 
o|inlining procedure: k5271 
o|contracted procedure: "(posixwin.scm:1143) needs-quoting?1171" 
o|inlining procedure: k5246 
o|inlining procedure: k5246 
o|inlining procedure: k5313 
o|inlining procedure: k5313 
o|inlining procedure: k5396 
o|inlining procedure: k5396 
o|inlining procedure: k5449 
o|inlining procedure: k5449 
o|inlining procedure: k5476 
o|inlining procedure: k5476 
o|substituted constant variable: g132713281335 
o|substituted constant variable: g132713281335 
o|substituted constant variable: g132713281335 
o|substituted constant variable: g132913301336 
o|substituted constant variable: g132913301336 
o|substituted constant variable: g132913301336 
o|substituted constant variable: g133113321337 
o|substituted constant variable: g133113321337 
o|substituted constant variable: g133113321337 
o|substituted constant variable: g133313341338 
o|substituted constant variable: g133313341338 
o|substituted constant variable: g133313341338 
o|inlining procedure: k5579 
o|inlining procedure: k5594 
o|inlining procedure: k5594 
o|inlining procedure: k5579 
o|contracted procedure: "(posixwin.scm:1227) c-process1249" 
o|inlining procedure: k5641 
o|inlining procedure: k5641 
o|inlining procedure: k5645 
o|inlining procedure: k5645 
o|inlining procedure: k5657 
o|inlining procedure: k5657 
o|inlining procedure: k5712 
o|inlining procedure: k5712 
o|inlining procedure: k5753 
o|inlining procedure: k5753 
o|inlining procedure: k5900 
o|inlining procedure: k5900 
o|inlining procedure: k5918 
o|inlining procedure: k5918 
o|inlining procedure: k5930 
o|inlining procedure: k5930 
o|inlining procedure: k5961 
o|inlining procedure: k5961 
o|contracted procedure: "(posixwin.scm:1457) bad-mmap?1473" 
o|inlining procedure: k6015 
o|inlining procedure: k6015 
o|contracted procedure: "(posixwin.scm:1456) mmap1472" 
o|contracted procedure: k6057 
o|inlining procedure: k6085 
o|inlining procedure: k6085 
o|contracted procedure: "(posixwin.scm:1466) munmap1510" 
o|inlining procedure: k6401 
o|inlining procedure: k6401 
o|inlining procedure: k6425 
o|inlining procedure: k6425 
o|inlining procedure: k6437 
o|inlining procedure: k6437 
o|inlining procedure: k6447 
o|inlining procedure: k6447 
o|inlining procedure: k6484 
o|inlining procedure: k6484 
o|contracted procedure: "(posix-common.scm:257) g115116" 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|replaced variables: 656 
o|removed binding forms: 462 
o|substituted constant variable: r23396494 
o|substituted constant variable: r24626500 
o|substituted constant variable: r24746502 
o|substituted constant variable: r24866504 
o|substituted constant variable: r24506506 
o|substituted constant variable: r26196510 
o|inlining procedure: k2655 
o|substituted constant variable: r26696516 
o|inlining procedure: k2655 
o|inlining procedure: k2655 
o|propagated global variable: g2993006536 delete-file 
o|inlining procedure: k2870 
o|inlining procedure: k2870 
o|propagated global variable: r28716826 delete-file 
o|propagated global variable: r28716826 delete-file 
o|converted assignments to bindings: (rmdir282) 
o|substituted constant variable: loc333 
o|substituted constant variable: loc333 
o|substituted constant variable: loc351 
o|substituted constant variable: loc351 
o|substituted constant variable: r30876563 
o|substituted constant variable: r31896567 
o|substituted constant variable: r32766573 
o|substituted constant variable: r32766573 
o|substituted constant variable: r32846577 
o|substituted constant variable: r32846577 
o|substituted constant variable: loc438 
o|substituted constant variable: r36686611 
o|substituted constant variable: r36686611 
o|substituted constant variable: r36556618 
o|substituted constant variable: r36556618 
o|substituted constant variable: r37846624 
o|substituted constant variable: r44676669 
o|substituted constant variable: r44676669 
o|substituted constant variable: r45306678 
o|removed side-effect free assignment to unused variable: badmode893 
o|inlining procedure: k4575 
o|inlining procedure: k4615 
o|inlining procedure: k4967 
o|substituted constant variable: r49816726 
o|inlining procedure: k4967 
o|inlining procedure: k4967 
o|inlining procedure: k5054 
o|substituted constant variable: r51436737 
o|substituted constant variable: r51926745 
o|substituted constant variable: r51926745 
o|folded constant expression: (fx< (quote -1) (quote 0)) 
o|substituted constant variable: r52476751 
o|substituted constant variable: r55956766 
o|substituted constant variable: r55956766 
o|substituted constant variable: c-pointer12521269 
o|substituted constant variable: c-pointer12521269 
o|substituted constant variable: c-pointer12521269 
o|substituted constant variable: r56426769 
o|substituted constant variable: r56426769 
o|substituted constant variable: r56426771 
o|substituted constant variable: r56426771 
o|inlining procedure: k6035 
o|substituted constant variable: r60166793 
o|substituted constant variable: r60166793 
o|converted assignments to bindings: (check1071) 
o|substituted constant variable: r64386806 
o|substituted constant variable: r64726813 
o|substituted constant variable: r64726813 
o|simplifications: ((let . 2)) 
o|replaced variables: 40 
o|removed binding forms: 684 
o|removed conditional forms: 1 
o|inlining procedure: k3130 
o|inlining procedure: k3844 
o|inlining procedure: k3844 
o|inlining procedure: k4071 
o|inlining procedure: k4290 
o|inlining procedure: k4290 
o|inlining procedure: k4338 
o|inlining procedure: k4338 
o|contracted procedure: k5509 
o|inlining procedure: k5795 
o|inlining procedure: k5855 
o|inlining procedure: k6047 
o|inlining procedure: k6047 
o|replaced variables: 19 
o|removed binding forms: 109 
o|substituted constant variable: r26566815 
o|substituted constant variable: r26566817 
o|substituted constant variable: r26566819 
o|substituted constant variable: r31316919 
o|substituted constant variable: r31316919 
o|substituted constant variable: r38456934 
o|contracted procedure: k3994 
o|substituted constant variable: r42916947 
o|substituted constant variable: r43396949 
o|substituted constant variable: r49686888 
o|substituted constant variable: r49686890 
o|substituted constant variable: r49686892 
o|substituted constant variable: r5510 
o|substituted constant variable: r60486965 
o|inlining procedure: k6398 
o|inlining procedure: k6398 
o|simplifications: ((let . 3)) 
o|replaced variables: 2 
o|removed binding forms: 22 
o|removed conditional forms: 4 
o|inlining procedure: k5127 
o|inlining procedure: k5127 
o|substituted constant variable: a5508 
o|substituted constant variable: r63997003 
o|replaced variables: 1 
o|removed binding forms: 15 
o|substituted constant variable: r51287039 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|simplifications: ((if . 61) (##core#call . 401)) 
o|  call simplifications:
o|    <
o|    ##sys#structure?
o|    ##sys#check-structure	2
o|    ##sys#make-structure	2
o|    ##sys#setslot
o|    +	2
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-pointer-argument	7
o|    string-length
o|    char-whitespace?
o|    *
o|    fx>=	2
o|    string-set!
o|    bitwise-ior	2
o|    fxior	3
o|    list	5
o|    ##sys#check-list	2
o|    add1
o|    ##sys#apply	2
o|    values	11
o|    ##sys#fudge
o|    vector-set!	2
o|    char=?
o|    ##sys#foreign-block-argument	2
o|    ##sys#foreign-integer-argument	4
o|    fx-	6
o|    ##sys#check-number	4
o|    ##sys#check-vector
o|    procedure?
o|    member
o|    fx+	10
o|    string-ref	3
o|    fx>
o|    cons	9
o|    ##sys#size	9
o|    ##sys#call-with-values	9
o|    not	5
o|    ##sys#check-string	18
o|    fx=	13
o|    zero?	2
o|    ##sys#null-pointer?	5
o|    pair?	15
o|    ##sys#check-exact	26
o|    ##sys#slot	19
o|    eq?	32
o|    cdr	20
o|    ##sys#eqv?	8
o|    null?	53
o|    car	34
o|    vector
o|    fixnum?	4
o|    string?
o|    fx<	13
o|    ##sys#foreign-fixnum-argument	8
o|    apply	9
o|contracted procedure: k2312 
o|contracted procedure: k2341 
o|contracted procedure: k2350 
o|contracted procedure: k2366 
o|contracted procedure: k2394 
o|contracted procedure: k2385 
o|contracted procedure: k2515 
o|contracted procedure: k2437 
o|contracted procedure: k2509 
o|contracted procedure: k2440 
o|contracted procedure: k2503 
o|contracted procedure: k2443 
o|contracted procedure: k2497 
o|contracted procedure: k2446 
o|contracted procedure: k2458 
o|contracted procedure: k2464 
o|contracted procedure: k2470 
o|contracted procedure: k2476 
o|contracted procedure: k2482 
o|contracted procedure: k2488 
o|contracted procedure: k2494 
o|contracted procedure: k2600 
o|contracted procedure: k2603 
o|contracted procedure: k2625 
o|contracted procedure: k2621 
o|contracted procedure: k2631 
o|contracted procedure: k2637 
o|contracted procedure: k2658 
o|contracted procedure: k2665 
o|contracted procedure: k2691 
o|contracted procedure: k2703 
o|contracted procedure: k2717 
o|contracted procedure: k2773 
o|contracted procedure: k2736 
o|contracted procedure: k2765 
o|contracted procedure: k2755 
o|contracted procedure: k2779 
o|contracted procedure: k2788 
o|contracted procedure: k2794 
o|contracted procedure: k2797 
o|contracted procedure: k2800 
o|contracted procedure: k2831 
o|contracted procedure: k2806 
o|contracted procedure: k2917 
o|contracted procedure: k2840 
o|contracted procedure: k2852 
o|contracted procedure: k2859 
o|contracted procedure: k2897 
o|contracted procedure: k2907 
o|contracted procedure: k2911 
o|contracted procedure: k3034 
o|contracted procedure: k2926 
o|contracted procedure: k2929 
o|contracted procedure: k3031 
o|contracted procedure: k2935 
o|contracted procedure: k2968 
o|contracted procedure: k3013 
o|contracted procedure: k3164 
o|contracted procedure: k3046 
o|contracted procedure: k3158 
o|contracted procedure: k3049 
o|contracted procedure: k3152 
o|contracted procedure: k3052 
o|contracted procedure: k3055 
o|contracted procedure: k3074 
o|contracted procedure: k3089 
o|contracted procedure: k3093 
o|contracted procedure: k3099 
o|contracted procedure: k3145 
o|contracted procedure: k3102 
o|contracted procedure: k3121 
o|contracted procedure: k3124 
o|contracted procedure: k3139 
o|contracted procedure: k3130 
o|contracted procedure: k3170 
o|contracted procedure: k3191 
o|contracted procedure: k3194 
o|contracted procedure: k3225 
o|contracted procedure: k3232 
o|contracted procedure: k3255 
o|contracted procedure: k3271 
o|contracted procedure: k3289 
o|contracted procedure: k3311 
o|contracted procedure: k3314 
o|contracted procedure: k3320 
o|contracted procedure: k3332 
o|contracted procedure: k3341 
o|contracted procedure: k3367 
o|contracted procedure: k3438 
o|contracted procedure: k3457 
o|contracted procedure: k3521 
o|contracted procedure: k3534 
o|contracted procedure: k3527 
o|contracted procedure: k3543 
o|contracted procedure: k3549 
o|contracted procedure: k3564 
o|contracted procedure: k3570 
o|contracted procedure: k3595 
o|contracted procedure: k3612 
o|contracted procedure: k3608 
o|contracted procedure: k3587 
o|contracted procedure: k3618 
o|contracted procedure: k3728 
o|contracted procedure: k3675 
o|contracted procedure: k3684 
o|contracted procedure: k3667 
o|contracted procedure: k3718 
o|contracted procedure: k3714 
o|contracted procedure: k3654 
o|contracted procedure: k3737 
o|contracted procedure: k3740 
o|contracted procedure: k3754 
o|contracted procedure: k3795 
o|contracted procedure: k3802 
o|contracted procedure: k3810 
o|contracted procedure: k3822 
o|contracted procedure: k3826 
o|contracted procedure: k3833 
o|contracted procedure: k3769 
o|contracted procedure: k3840 
o|contracted procedure: k3923 
o|contracted procedure: k3863 
o|contracted procedure: k3917 
o|contracted procedure: k3866 
o|contracted procedure: k3911 
o|contracted procedure: k3869 
o|contracted procedure: k3905 
o|contracted procedure: k3872 
o|contracted procedure: k3875 
o|contracted procedure: k3878 
o|contracted procedure: k3896 
o|contracted procedure: k3934 
o|contracted procedure: k3982 
o|contracted procedure: k3985 
o|contracted procedure: k4022 
o|contracted procedure: k3988 
o|contracted procedure: k4009 
o|contracted procedure: k4047 
o|contracted procedure: k4065 
o|contracted procedure: k4078 
o|contracted procedure: k40786941 
o|contracted procedure: k4092 
o|contracted procedure: k6376 
o|contracted procedure: k4192 
o|contracted procedure: k4200 
o|contracted procedure: k4203 
o|contracted procedure: k4206 
o|contracted procedure: k4216 
o|contracted procedure: k4225 
o|contracted procedure: k4232 
o|contracted procedure: k4244 
o|contracted procedure: k4250 
o|contracted procedure: k4263 
o|contracted procedure: k4266 
o|contracted procedure: k4281 
o|contracted procedure: k4296 
o|contracted procedure: k4307 
o|contracted procedure: k4316 
o|contracted procedure: k4322 
o|contracted procedure: k4331 
o|contracted procedure: k4347 
o|contracted procedure: k4350 
o|contracted procedure: k4359 
o|contracted procedure: k4382 
o|contracted procedure: k4386 
o|contracted procedure: k4392 
o|contracted procedure: k4398 
o|contracted procedure: k4405 
o|contracted procedure: k4415 
o|contracted procedure: k4424 
o|contracted procedure: k4427 
o|contracted procedure: k4434 
o|contracted procedure: k4452 
o|contracted procedure: k4470 
o|contracted procedure: k4486 
o|contracted procedure: k4492 
o|contracted procedure: k4499 
o|contracted procedure: k4507 
o|contracted procedure: k4516 
o|contracted procedure: k4532 
o|contracted procedure: k4553 
o|contracted procedure: k4565 
o|contracted procedure: k4578 
o|contracted procedure: k4588 
o|contracted procedure: k4605 
o|contracted procedure: k4618 
o|contracted procedure: k4628 
o|contracted procedure: k4654 
o|contracted procedure: k4672 
o|contracted procedure: k4816 
o|contracted procedure: k4797 
o|contracted procedure: k4806 
o|contracted procedure: k4852 
o|contracted procedure: k4896 
o|contracted procedure: k4899 
o|contracted procedure: k4905 
o|contracted procedure: k4922 
o|contracted procedure: k4925 
o|contracted procedure: k4970 
o|contracted procedure: k4977 
o|contracted procedure: k5006 
o|contracted procedure: k5018 
o|contracted procedure: k5032 
o|contracted procedure: k5070 
o|contracted procedure: k5057 
o|contracted procedure: k5080 
o|contracted procedure: k5089 
o|contracted procedure: k5098 
o|contracted procedure: k5101 
o|contracted procedure: k5104 
o|contracted procedure: k5130 
o|contracted procedure: k51187038 
o|contracted procedure: k51187043 
o|contracted procedure: k5149 
o|contracted procedure: k5178 
o|contracted procedure: k5198 
o|contracted procedure: k5194 
o|contracted procedure: k5201 
o|contracted procedure: k5207 
o|contracted procedure: k5213 
o|contracted procedure: k5225 
o|contracted procedure: k5237 
o|contracted procedure: k5249 
o|contracted procedure: k5266 
o|contracted procedure: k5255 
o|contracted procedure: k5262 
o|contracted procedure: k5354 
o|contracted procedure: k5283 
o|contracted procedure: k5348 
o|contracted procedure: k5286 
o|contracted procedure: k5342 
o|contracted procedure: k5289 
o|contracted procedure: k5336 
o|contracted procedure: k5292 
o|contracted procedure: k5330 
o|contracted procedure: k5295 
o|contracted procedure: k5324 
o|contracted procedure: k5298 
o|contracted procedure: k5301 
o|contracted procedure: k5310 
o|contracted procedure: k5316 
o|contracted procedure: k5437 
o|contracted procedure: k5363 
o|contracted procedure: k5431 
o|contracted procedure: k5366 
o|contracted procedure: k5425 
o|contracted procedure: k5369 
o|contracted procedure: k5419 
o|contracted procedure: k5372 
o|contracted procedure: k5413 
o|contracted procedure: k5375 
o|contracted procedure: k5407 
o|contracted procedure: k5378 
o|contracted procedure: k5381 
o|contracted procedure: k5384 
o|contracted procedure: k5393 
o|contracted procedure: k5399 
o|contracted procedure: k5493 
o|contracted procedure: k5688 
o|contracted procedure: k5563 
o|contracted procedure: k5566 
o|contracted procedure: k5513 
o|contracted procedure: k5517 
o|contracted procedure: k5521 
o|contracted procedure: k5525 
o|contracted procedure: k5529 
o|contracted procedure: k5551 
o|contracted procedure: k5558 
o|contracted procedure: k5633 
o|contracted procedure: k5637 
o|contracted procedure: k5648 
o|contracted procedure: k5660 
o|contracted procedure: k5663 
o|contracted procedure: k5666 
o|contracted procedure: k5674 
o|contracted procedure: k5682 
o|contracted procedure: k5698 
o|contracted procedure: k5715 
o|contracted procedure: k5725 
o|contracted procedure: k5729 
o|contracted procedure: k5732 
o|contracted procedure: k5831 
o|contracted procedure: k5780 
o|contracted procedure: k5825 
o|contracted procedure: k5783 
o|contracted procedure: k5819 
o|contracted procedure: k5786 
o|contracted procedure: k5813 
o|contracted procedure: k5789 
o|contracted procedure: k5807 
o|contracted procedure: k5792 
o|contracted procedure: k5801 
o|contracted procedure: k5795 
o|contracted procedure: k5891 
o|contracted procedure: k5840 
o|contracted procedure: k5885 
o|contracted procedure: k5843 
o|contracted procedure: k5879 
o|contracted procedure: k5846 
o|contracted procedure: k5873 
o|contracted procedure: k5849 
o|contracted procedure: k5867 
o|contracted procedure: k5852 
o|contracted procedure: k5861 
o|contracted procedure: k5855 
o|contracted procedure: k5912 
o|contracted procedure: k6015 
o|contracted procedure: k5986 
o|contracted procedure: k5990 
o|contracted procedure: k5994 
o|contracted procedure: k5998 
o|contracted procedure: k6002 
o|contracted procedure: k6006 
o|contracted procedure: k6053 
o|contracted procedure: k6079 
o|contracted procedure: k6088 
o|contracted procedure: k6099 
o|contracted procedure: k6067 
o|contracted procedure: k6071 
o|contracted procedure: k6102 
o|contracted procedure: k6112 
o|contracted procedure: k6382 
o|contracted procedure: k6407 
o|contracted procedure: k6391 
o|contracted procedure: k6394 
o|contracted procedure: k6416 
o|contracted procedure: k6428 
o|contracted procedure: k6444 
o|contracted procedure: k6440 
o|contracted procedure: k6450 
o|contracted procedure: k6465 
o|contracted procedure: k6487 
o|contracted procedure: k6478 
o|simplifications: ((if . 1) (let . 62)) 
o|removed binding forms: 333 
o|inlining procedure: k3540 
o|inlining procedure: k3561 
o|inlining procedure: "(posixwin.scm:809) mode892" 
o|inlining procedure: "(posixwin.scm:819) mode892" 
o|replaced variables: 185 
o|removed side-effect free assignment to unused variable: mode892 
o|replaced variables: 10 
o|removed binding forms: 90 
o|contracted procedure: k6032 
o|contracted procedure: k6095 
o|converted assignments to bindings: (check894) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 10 
o|contracted procedure: k4568 
o|contracted procedure: k4608 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop1174 0 
o|direct leaf routine/allocation: g13821389 0 
o|contracted procedure: k5274 
o|converted assignments to bindings: (loop1174) 
o|contracted procedure: "(posixwin.scm:1249) k5718" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: for-each-loop13811399 0 
o|converted assignments to bindings: (for-each-loop13811399) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k6082 k6026 k6041 %process1370 chkstrlst1377 map-loop13031320 k5473 call-with-exec-args k5172 k5184 k5083 mode1087 check1088 check1071 check894 k4479 loop864 suffix-loop877 loop875 k4313 k4197 list->c-string-buffer k4140 doloop702703 tmp12244 tmp22245 doloop683684 free-c-string-buffer scan628 loop625 check-time-vector k3292 k3295 loop450 g422423 loop414 conc-loop395 k3108 loop374 k2957 loop328 g289296 for-each-loop288305 rmdir282 k2782 mode204 check205 k2597 ##sys#stat) 
o|calls to known targets: 173 
o|unused rest argument: _446 f_3460 
o|unused rest argument: _445 f_3452 
o|unused rest argument: _486 f_3512 
o|identified direct recursive calls: f_3790 1 
o|identified direct recursive calls: f_5244 1 
o|identified direct recursive calls: f_5710 1 
o|unused rest argument: _15581562 f_6125 
o|unused rest argument: _15651569 f_6131 
o|unused rest argument: _15711575 f_6137 
o|unused rest argument: _15771581 f_6143 
o|unused rest argument: _15831587 f_6149 
o|unused rest argument: _15891593 f_6155 
o|unused rest argument: _15951599 f_6161 
o|unused rest argument: _16011605 f_6167 
o|unused rest argument: _16071611 f_6173 
o|unused rest argument: _16131617 f_6179 
o|unused rest argument: _16191623 f_6185 
o|unused rest argument: _16251629 f_6191 
o|unused rest argument: _16311635 f_6197 
o|unused rest argument: _16371641 f_6203 
o|unused rest argument: _16431647 f_6209 
o|unused rest argument: _16491653 f_6215 
o|unused rest argument: _16551659 f_6221 
o|unused rest argument: _16611665 f_6227 
o|unused rest argument: _16671671 f_6233 
o|unused rest argument: _16731677 f_6239 
o|unused rest argument: _16791683 f_6245 
o|unused rest argument: _16851689 f_6251 
o|unused rest argument: _16911695 f_6257 
o|unused rest argument: _16971701 f_6263 
o|unused rest argument: _17031707 f_6269 
o|unused rest argument: _17091713 f_6275 
o|unused rest argument: _17151719 f_6281 
o|unused rest argument: _17211725 f_6287 
o|unused rest argument: _17271731 f_6293 
o|unused rest argument: _17331737 f_6299 
o|unused rest argument: _17391743 f_6305 
o|unused rest argument: _17451749 f_6311 
o|unused rest argument: _17511755 f_6317 
o|unused rest argument: _17571761 f_6323 
o|unused rest argument: _17631767 f_6329 
o|unused rest argument: _17691773 f_6335 
o|unused rest argument: _17751779 f_6341 
o|unused rest argument: _17811785 f_6347 
o|unused rest argument: _17871791 f_6353 
o|unused rest argument: _17931797 f_6359 
o|fast box initializations: 19 
o|fast global references: 80 
o|fast global assignments: 8 
o|dropping unused closure argument: f_3932 
o|dropping unused closure argument: f_2844 
o|dropping unused closure argument: f_2333 
o|dropping unused closure argument: f_2686 
o|dropping unused closure argument: f_5694 
o|dropping unused closure argument: f_3519 
o|dropping unused closure argument: f_4545 
o|dropping unused closure argument: f_4051 
o|dropping unused closure argument: f_2649 
o|dropping unused closure argument: f_4920 
o|dropping unused closure argument: f_4961 
o|dropping unused closure argument: f_4998 
*/
/* end of file */

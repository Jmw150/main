/* Generated from file.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.0.0 (rev 12f2f2cc)
   linux-unix-gnu-x86-64 [ 64bit dload ptables ]
   command line: file.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file file.c -emit-import-library chicken.file
   unit: file
   uses: extras irregex pathname library
*/
#include "chicken.h"

#include <errno.h>

#define C_test_access(fn, m) C_fix(access(C_c_string(fn), C_unfix(m)))

/* For Windows */
#ifndef R_OK
# define R_OK 2
#endif
#ifndef W_OK
# define W_OK 4
#endif
#ifndef X_OK
# define X_OK 2
#endif

#define C_rename(old, new)  C_fix(rename(C_c_string(old), C_c_string(new)))
#define C_remove(str)       C_fix(remove(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#else
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str)))
#endif

#if !defined(_WIN32) || defined(__CYGWIN__)
# include <sys/types.h>
# include <dirent.h>
#else
struct dirent
{
    char *              d_name;
};

typedef struct
{
    struct _finddata_t  fdata;
    int                 handle;
    struct dirent       current;
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
#endif

#define C_opendir(s,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(s)))
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_foundfile(e,b,l)  (C_strlcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name, l), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

static C_word C_fcall C_u_i_symbolic_linkp(C_word path)
{
#if !defined(_WIN32) || defined(__CYGWIN__)
  struct stat buf;
  if (lstat(C_c_string(path), &buf) == 0)
    return C_mk_bool(S_ISLNK(buf.st_mode));
#endif
  return C_SCHEME_FALSE;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[108];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,45,101,120,105,115,116,115,63,32,110,97,109,101,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,116,101,115,116,45,97,99,99,101,115,115,32,102,105,108,101,110,97,109,101,32,97,99,99,32,108,111,99,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,114,101,97,100,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,119,114,105,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,101,99,117,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,105,114,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,48,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,29),40,97,49,48,53,54,32,100,105,114,50,51,48,32,102,105,108,101,50,51,50,32,101,120,116,50,51,52,41,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,11),40,114,109,100,105,114,32,100,105,114,41,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,8),40,103,50,54,55,32,102,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,54,32,103,50,55,51,41,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,35,114,101,110,97,109,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,111,112,121,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,109,111,118,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,9),40,97,49,54,49,50,32,112,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,7),40,97,49,55,51,48,41,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,8),40,103,52,55,55,32,109,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,102,110,115,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,49,56,50,54,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,97,49,56,50,48,32,101,120,118,97,114,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,55,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,49,56,55,53,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,14),40,116,109,112,50,55,50,51,32,97,114,103,115,41,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,7),40,97,49,56,54,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,9),40,97,49,56,49,52,32,107,41,0,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,28),40,97,49,55,51,54,32,100,105,114,52,52,57,32,102,105,108,52,53,49,32,101,120,116,52,53,51,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,17),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,102,105,108,101,35,103,108,111,98,32,46,32,112,97,116,104,115,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,50,48,48,53,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,48,49,48,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,50,48,51,48,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,105,114,32,102,115,32,114,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,10),40,102,95,50,48,56,50,32,120,41,0,0,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,12),40,102,95,50,48,57,48,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,12),40,102,95,50,48,57,56,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,50,49,48,51,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,50,49,48,54,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,7),40,97,50,49,48,57,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,50,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,49,56,32,120,32,121,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,7),40,97,50,49,49,53,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,12),40,102,95,50,49,50,54,32,46,32,95,41,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,51,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from getpid */
C_regparm static C_word C_fcall stub437(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from getpid */
C_regparm static C_word C_fcall stub428(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k750 */
C_regparm static C_word C_fcall stub135(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void C_fcall f_1009(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1016)
static void C_fcall f_1016(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word *av) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word *av) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word *av) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word *av) C_noret;
C_noret_decl(f_1104)
static void C_fcall f_1104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word *av) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word *av) C_noret;
C_noret_decl(f_1128)
static void C_fcall f_1128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1141)
static void C_ccall f_1141(C_word c,C_word *av) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word *av) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word *av) C_noret;
C_noret_decl(f_1153)
static void C_ccall f_1153(C_word c,C_word *av) C_noret;
C_noret_decl(f_1158)
static void C_fcall f_1158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word *av) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word *av) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word *av) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word *av) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word *av) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word *av) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word *av) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word *av) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word *av) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word *av) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word *av) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word *av) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word *av) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word *av) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word *av) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word *av) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word *av) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word *av) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word *av) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word *av) C_noret;
C_noret_decl(f_1344)
static void C_fcall f_1344(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word *av) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word *av) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word *av) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word *av) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word *av) C_noret;
C_noret_decl(f_1424)
static void C_ccall f_1424(C_word c,C_word *av) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word *av) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word *av) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word *av) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1473)
static void C_fcall f_1473(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word *av) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word *av) C_noret;
C_noret_decl(f_1556)
static void C_fcall f_1556(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word *av) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word *av) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1593)
static void C_fcall f_1593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word *av) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word *av) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word *av) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word *av) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word *av) C_noret;
C_noret_decl(f_1650)
static void C_fcall f_1650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word *av) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_1690)
static void C_ccall f_1690(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word *av) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word *av) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word *av) C_noret;
C_noret_decl(f_1716)
static void C_fcall f_1716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word *av) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word *av) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word *av) C_noret;
C_noret_decl(f_1756)
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word *av) C_noret;
C_noret_decl(f_1777)
static void C_fcall f_1777(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word *av) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word *av) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word *av) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word *av) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word *av) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word *av) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_fcall f_1865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word *av) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word *av) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word *av) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word *av) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_1926)
static void C_fcall f_1926(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_fcall f_1929(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_1938)
static void C_fcall f_1938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word *av) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word *av) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word *av) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word *av) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word *av) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word *av) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word *av) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word *av) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2053)
static void C_ccall f_2053(C_word c,C_word *av) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word *av) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word *av) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word *av) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word *av) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word *av) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word *av) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word *av) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word *av) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word *av) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word *av) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word *av) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word *av) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word *av) C_noret;
C_noret_decl(f_753)
static void C_fcall f_753(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word *av) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word *av) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word *av) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word *av) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word *av) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word *av) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word *av) C_noret;
C_noret_decl(f_794)
static void C_fcall f_794(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word *av) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word *av) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word *av) C_noret;
C_noret_decl(f_830)
static void C_ccall f_830(C_word c,C_word *av) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word *av) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word *av) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word *av) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_871)
static void C_ccall f_871(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_fcall f_885(C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word *av) C_noret;
C_noret_decl(f_911)
static void C_fcall f_911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word *av) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externexport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1009)
static void C_ccall trf_1009(C_word c,C_word *av) C_noret;
static void C_ccall trf_1009(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1009(t0,t1,t2);}

C_noret_decl(trf_1016)
static void C_ccall trf_1016(C_word c,C_word *av) C_noret;
static void C_ccall trf_1016(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1016(t0,t1);}

C_noret_decl(trf_1104)
static void C_ccall trf_1104(C_word c,C_word *av) C_noret;
static void C_ccall trf_1104(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1104(t0,t1);}

C_noret_decl(trf_1128)
static void C_ccall trf_1128(C_word c,C_word *av) C_noret;
static void C_ccall trf_1128(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1128(t0,t1,t2);}

C_noret_decl(trf_1158)
static void C_ccall trf_1158(C_word c,C_word *av) C_noret;
static void C_ccall trf_1158(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1158(t0,t1,t2);}

C_noret_decl(trf_1344)
static void C_ccall trf_1344(C_word c,C_word *av) C_noret;
static void C_ccall trf_1344(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1344(t0,t1,t2,t3);}

C_noret_decl(trf_1473)
static void C_ccall trf_1473(C_word c,C_word *av) C_noret;
static void C_ccall trf_1473(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1473(t0,t1,t2,t3);}

C_noret_decl(trf_1556)
static void C_ccall trf_1556(C_word c,C_word *av) C_noret;
static void C_ccall trf_1556(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1556(t0,t1);}

C_noret_decl(trf_1593)
static void C_ccall trf_1593(C_word c,C_word *av) C_noret;
static void C_ccall trf_1593(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1593(t0,t1);}

C_noret_decl(trf_1650)
static void C_ccall trf_1650(C_word c,C_word *av) C_noret;
static void C_ccall trf_1650(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1650(t0,t1);}

C_noret_decl(trf_1716)
static void C_ccall trf_1716(C_word c,C_word *av) C_noret;
static void C_ccall trf_1716(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1716(t0,t1,t2);}

C_noret_decl(trf_1756)
static void C_ccall trf_1756(C_word c,C_word *av) C_noret;
static void C_ccall trf_1756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1756(t0,t1,t2);}

C_noret_decl(trf_1777)
static void C_ccall trf_1777(C_word c,C_word *av) C_noret;
static void C_ccall trf_1777(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1777(t0,t1,t2);}

C_noret_decl(trf_1865)
static void C_ccall trf_1865(C_word c,C_word *av) C_noret;
static void C_ccall trf_1865(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1865(t0,t1);}

C_noret_decl(trf_1870)
static void C_ccall trf_1870(C_word c,C_word *av) C_noret;
static void C_ccall trf_1870(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1870(t0,t1,t2);}

C_noret_decl(trf_1926)
static void C_ccall trf_1926(C_word c,C_word *av) C_noret;
static void C_ccall trf_1926(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1926(t0,t1);}

C_noret_decl(trf_1929)
static void C_ccall trf_1929(C_word c,C_word *av) C_noret;
static void C_ccall trf_1929(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1929(t0,t1);}

C_noret_decl(trf_1938)
static void C_ccall trf_1938(C_word c,C_word *av) C_noret;
static void C_ccall trf_1938(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1938(t0,t1,t2,t3,t4);}

C_noret_decl(trf_753)
static void C_ccall trf_753(C_word c,C_word *av) C_noret;
static void C_ccall trf_753(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_753(t0,t1,t2,t3,t4);}

C_noret_decl(trf_794)
static void C_ccall trf_794(C_word c,C_word *av) C_noret;
static void C_ccall trf_794(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_794(t0,t1,t2,t3);}

C_noret_decl(trf_885)
static void C_ccall trf_885(C_word c,C_word *av) C_noret;
static void C_ccall trf_885(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_885(t0,t1);}

C_noret_decl(trf_911)
static void C_ccall trf_911(C_word c,C_word *av) C_noret;
static void C_ccall trf_911(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_911(t0,t1);}

/* k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1007,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1009,a[2]=t3,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1009(t5,((C_word*)t0)[2],t1);}

/* loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1009(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1009,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1016,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1049,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:272: directory-exists? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_1016(t4,C_SCHEME_FALSE);}}

/* k1014 in loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1016(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1016,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:273: chicken.pathname#pathname-directory */
t4=*((C_word*)lf[33]+1);{
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

/* k1017 in k1014 in loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1019,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1035,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* file.scm:261: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[31];
tp(4,av2);}}

/* k1033 in k1017 in k1014 in loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1035,2,av);}
a=C_alloc(3);
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* file.scm:262: posix-error */
f_753(((C_word*)t0)[2],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1040 in k1014 in loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1042,2,av);}
/* file.scm:273: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1009(t2,((C_word*)t0)[3],t1);}

/* k1047 in loop in k1005 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1049,2,av);}
t2=((C_word*)t0)[2];
f_1016(t2,C_i_not(t1));}

/* a1050 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1051,2,av);}
/* file.scm:270: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
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

/* a1056 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1057,5,av);}
if(C_truep(t3)){
/* file.scm:271: chicken.pathname#make-pathname */
t5=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1078 in k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1080,2,av);}
a=C_alloc(3);
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* file.scm:262: posix-error */
f_753(((C_word*)t0)[2],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,6)))){
C_save_and_reclaim((void*)f_1098,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1104,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_string_2(t2,lf[37]);
if(C_truep(t5)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1127,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:286: find-files */
t9=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[41];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[42];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(7,av2);}}
else{
/* file.scm:298: rmdir */
f_1104(t1,t2);}}

/* rmdir in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1104(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1104,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1108,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:281: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1106 in rmdir in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1108,2,av);}
a=C_alloc(3);
t2=C_rmdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* file.scm:283: posix-error */
f_753(((C_word*)t0)[2],lf[14],lf[37],lf[38],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1127(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1127,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1128,a[2]=((C_word*)t0)[2],a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1158,a[2]=t5,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1158(t7,t3,t1);}

/* g267 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1128(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1128,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1144,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=t3;
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1141,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* file.scm:258: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[37];
tp(4,av2);}}

/* k1139 in g267 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1141,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_symbolic_linkp(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1142 in g267 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1144,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:291: g277 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1150,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:293: directory-exists? */
t3=*((C_word*)lf[11]+1);{
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

/* k1148 in k1142 in g267 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1150,2,av);}
if(C_truep(t1)){
/* file.scm:291: g277 */
f_1104(((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=*((C_word*)lf[39]+1);
t3=*((C_word*)lf[39]+1);
/* file.scm:291: g277 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k1151 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1153,2,av);}
/* file.scm:297: rmdir */
f_1104(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop266 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1158(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1158,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1168,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* file.scm:290: g267 */
t5=((C_word*)t0)[3];
f_1128(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1166 in for-each-loop266 in k1125 in chicken.file#delete-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1168,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1158(t3,((C_word*)t0)[4],t2);}

/* chicken.file#delete-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1190(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1190,3,av);}
a=C_alloc(9);
t3=C_i_check_string_2(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1197,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1219,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* file.scm:305: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k1195 in chicken.file#delete-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1197,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1201 in k1217 in chicken.file#delete-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1203,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1214,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1208 in k1201 in k1217 in chicken.file#delete-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1210,2,av);}
/* file.scm:307: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[43];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1212 in k1201 in k1217 in chicken.file#delete-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1214,2,av);}
/* file.scm:309: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=t1;
tp(4,av2);}}

/* k1217 in chicken.file#delete-file in k739 in k736 in k733 in k730 */
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
t2=C_remove(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1203,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:306: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* chicken.file#delete-file* in k739 in k736 in k733 in k730 */
static void C_ccall f_1221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1221,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1228,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:313: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1226 in chicken.file#delete-file* in k739 in k736 in k733 in k730 */
static void C_ccall f_1228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1228,2,av);}
if(C_truep(t1)){
/* file.scm:313: delete-file */
t2=*((C_word*)lf[39]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_1233,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_check_string_2(t2,lf[48]);
t8=C_i_check_string_2(t3,lf[48]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1246,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1278,a[2]=t9,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t6))){
/* file.scm:318: file-exists? */
t11=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t9;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_1246(2,av2);}}}

/* k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1246,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:322: ##sys#make-c-string */
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
av2[3]=lf[48];
tp(4,av2);}}

/* k1247 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1249,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1253 in k1273 in k1269 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1255,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1260 in k1253 in k1273 in k1269 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1262,2,av);}
/* file.scm:325: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[48];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1264 in k1253 in k1273 in k1269 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1266,2,av);}
/* file.scm:327: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=t1;
tp(4,av2);}}

/* k1269 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1271,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1275,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:323: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[48];
tp(4,av2);}}

/* k1273 in k1269 in k1244 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1275,2,av);}
a=C_alloc(5);
t2=C_rename(((C_word*)t0)[2],t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1255,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:324: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k1276 in chicken.file#rename-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1278,2,av);}
if(C_truep(t1)){
/* file.scm:319: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=lf[51];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1246(2,av2);}}}

/* chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,4)))){
C_save_and_reclaim((void*)f_1295,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[53]);
t16=C_i_check_string_2(t3,lf[53]);
t17=C_i_check_number_2(t12,lf[53]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1320,a[2]=t12,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_i_greaterp(t12,C_fix(0)))){
t19=t18;{
C_word *av2=av;
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
f_1320(2,av2);}}
else{
/* file.scm:335: ##sys#error */
t19=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[53];
av2[3]=lf[64];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}
else{
/* file.scm:335: ##sys#error */
t19=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[53];
av2[3]=lf[64];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}

/* k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1320,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* file.scm:336: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1323,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1374,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:338: file-exists? */
t4=*((C_word*)lf[8]+1);{
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
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1326(2,av2);}}}

/* k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1326,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:340: scheme#open-input-file */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1329,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1332,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:341: scheme#open-output-file */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1332,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1335,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:342: scheme#make-string */
t4=*((C_word*)lf[58]+1);{
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

/* k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1335,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:343: chicken.io#read-string! */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1342,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1344(t5,((C_word*)t0)[6],t1,C_fix(0));}

/* loop in k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_fcall f_1344(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1344,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:347: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1360,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* file.scm:351: chicken.io#write-string */
t6=*((C_word*)lf[57]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=t2;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k1352 in loop in k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1354,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:348: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
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

/* k1355 in k1352 in loop in k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1357,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1358 in loop in k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1360,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:352: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1365 in k1358 in loop in k1340 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1367,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* file.scm:352: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1344(t3,((C_word*)t0)[5],t1,t2);}

/* k1372 in k1321 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1374,2,av);}
if(C_truep(t1)){
/* file.scm:339: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1326(2,av2);}}}

/* k1384 in k1318 in chicken.file#copy-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1386,2,av);}
if(C_truep(t1)){
/* file.scm:337: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1323(2,av2);}}}

/* chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,4)))){
C_save_and_reclaim((void*)f_1424,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
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
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_nullp(t9);
t11=(C_truep(t10)?C_fix(1024):C_i_car(t9));
t12=t11;
t13=C_i_nullp(t9);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t9));
t15=C_i_check_string_2(t2,lf[66]);
t16=C_i_check_string_2(t3,lf[66]);
t17=C_i_check_number_2(t12,lf[66]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1449,a[2]=t2,a[3]=t12,a[4]=t1,a[5]=t3,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t12))){
if(C_truep(C_i_greaterp(t12,C_fix(0)))){
t19=t18;{
C_word *av2=av;
av2[0]=t19;
av2[1]=C_SCHEME_UNDEFINED;
f_1449(2,av2);}}
else{
/* file.scm:359: ##sys#error */
t19=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[66];
av2[3]=lf[69];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}
else{
/* file.scm:359: ##sys#error */
t19=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[66];
av2[3]=lf[69];
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t19+1)))(5,av2);}}}

/* k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1449,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1518,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* file.scm:360: directory-exists? */
t4=*((C_word*)lf[11]+1);{
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

/* k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1452,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1506,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t0)[6]))){
/* file.scm:362: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1455(2,av2);}}}

/* k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1455,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:364: scheme#open-input-file */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1458,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1461,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:365: scheme#open-output-file */
t4=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[60];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1461,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:366: scheme#make-string */
t4=*((C_word*)lf[58]+1);{
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

/* k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1464,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:367: chicken.io#read-string! */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1471,2,av);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_1473(t5,((C_word*)t0)[7],t1,C_fix(0));}

/* loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_fcall f_1473(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1473,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1483,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* file.scm:371: scheme#close-input-port */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1492,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* file.scm:376: chicken.io#write-string */
t6=*((C_word*)lf[57]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k1481 in loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1483,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:372: scheme#close-output-port */
t3=*((C_word*)lf[54]+1);{
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

/* k1484 in k1481 in loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1486,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:373: delete-file */
t3=*((C_word*)lf[39]+1);{
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

/* k1487 in k1484 in k1481 in loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1489,2,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1490 in loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1492,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:377: chicken.io#read-string! */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1497 in k1490 in loop in k1469 in k1462 in k1459 in k1456 in k1453 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1499,2,av);}
t2=C_fixnum_plus(((C_word*)t0)[2],((C_word*)t0)[3]);
/* file.scm:377: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1473(t3,((C_word*)t0)[5],t1,t2);}

/* k1504 in k1450 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1506,2,av);}
if(C_truep(t1)){
/* file.scm:363: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=lf[67];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1455(2,av2);}}}

/* k1516 in k1447 in chicken.file#move-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1518,2,av);}
if(C_truep(t1)){
/* file.scm:361: ##sys#error */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[66];
av2[3]=lf[68];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1452(2,av2);}}}

/* tempdir in k739 in k736 in k733 in k730 */
static void C_fcall f_1556(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1556,2,t0,t1);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t2)){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1563,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:391: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[72]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[75];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k1561 in tempdir in k739 in k736 in k733 in k730 */
static void C_ccall f_1563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1563,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:392: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[74];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1568 in k1561 in tempdir in k739 in k736 in k733 in k730 */
static void C_ccall f_1570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1570,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:393: chicken.process-context#get-environment-variable */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[73];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1574 in k1568 in k1561 in tempdir in k739 in k736 in k733 in k730 */
static void C_ccall f_1576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1576,2,av);}
if(C_truep(t1)){
t2=t1;
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=lf[71];
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_1581,c,av);}
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
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[77]:C_i_car(t2));
t5=t4;
t6=C_i_check_string_2(t5,lf[78]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1593,a[2]=t8,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1593(t10,t1);}

/* loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_fcall f_1593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1593,2,t0,t1);}
a=C_alloc(10);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1618,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:404: tempdir */
t5=((C_word*)t0)[5];
f_1556(t5,t4);}

/* k1597 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1599,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:411: file-exists? */
t4=*((C_word*)lf[8]+1);{
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

/* k1603 in k1597 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1605,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:412: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1593(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1613,a[2]=((C_word*)t0)[4],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
/* file.scm:413: scheme#call-with-output-file */
t3=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* a1612 in k1603 in k1597 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1613,3,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1616 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1618,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1626,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1620 in k1616 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1622,2,av);}
/* file.scm:403: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1624 in k1616 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1626,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=stub428(C_SCHEME_UNDEFINED);
/* file.scm:409: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1628 in k1624 in k1616 in loop in chicken.file#create-temporary-file in k739 in k736 in k733 in k730 */
static void C_ccall f_1630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1630,2,av);}
/* file.scm:405: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[80];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1644,2,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1650,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1650(t5,t1);}

/* loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_fcall f_1650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1650,2,t0,t1);}
a=C_alloc(9);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1656,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1690,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:420: tempdir */
t5=((C_word*)t0)[4];
f_1556(t5,t4);}

/* k1654 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1656,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:426: file-exists? */
t4=*((C_word*)lf[8]+1);{
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

/* k1660 in k1654 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1662,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:427: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1650(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:428: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[83];
tp(4,av2);}}}

/* k1667 in k1660 in k1654 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1669,2,av);}
a=C_alloc(10);
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1680 in k1667 in k1660 in k1654 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1682,2,av);}
/* file.scm:431: ##sys#signal-hook */
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=lf[83];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1684 in k1667 in k1660 in k1654 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1686,2,av);}
/* file.scm:433: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[44]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[84];
av2[3]=t1;
tp(4,av2);}}

/* k1688 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1690,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1698,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1692 in k1688 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1694,2,av);}
/* file.scm:419: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
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

/* k1696 in k1688 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1698,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=stub437(C_SCHEME_UNDEFINED);
/* file.scm:425: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[81]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1700 in k1696 in k1688 in loop in chicken.file#create-temporary-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_1702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1702,2,av);}
/* file.scm:421: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[85];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1710,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1716,a[2]=t4,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1716(t6,t1,t2);}

/* conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_fcall f_1716(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1716,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1731,a[2]=t4,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1737,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp);
/* file.scm:444: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* a1730 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1731,2,av);}
/* file.scm:444: chicken.pathname#decompose-pathname */
t2=*((C_word*)lf[34]+1);{
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

/* a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1737(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1737,5,av);}
a=C_alloc(13);
t5=t2;
t6=(C_truep(t5)?t5:lf[87]);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
/* file.scm:446: chicken.pathname#make-pathname */
t11=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
/* file.scm:446: chicken.pathname#make-pathname */
t11=*((C_word*)lf[35]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[98];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}}

/* k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1744,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1815,a[2]=((C_word*)t0)[6],a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
/* file.scm:447: scheme#call-with-current-continuation */
t5=*((C_word*)lf[95]+1);{
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

/* k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1751,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* file.scm:447: g491 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1754,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1756(t5,((C_word*)t0)[6],t1);}

/* loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_fcall f_1756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1756,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
t4=C_i_cdr(((C_word*)t0)[2]);
/* file.scm:449: conc-loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1716(t5,t1,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1773,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t2);
/* file.scm:450: chicken.irregex#irregex-match */
t6=*((C_word*)lf[89]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1771 in loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1773,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp);
/* file.scm:449: g477 */
t3=t2;
f_1777(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* file.scm:454: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1756(t4,((C_word*)t0)[5],t3);}}

/* g477 in k1771 in loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_fcall f_1777(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1777,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1785,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:452: chicken.irregex#irregex-match-substring */
t5=*((C_word*)lf[88]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1783 in g477 in k1771 in loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1785,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1789,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cdr(((C_word*)t0)[3]);
/* file.scm:453: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1756(t5,t3,t4);}

/* k1787 in k1783 in g477 in k1771 in loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1789,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1795 in g477 in k1771 in loop in k1752 in k1749 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1797,2,av);}
/* file.scm:452: chicken.pathname#make-pathname */
t2=*((C_word*)lf[35]+1);{
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

/* a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1815,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1821,a[2]=t2,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* file.scm:447: chicken.condition#with-exception-handler */
t5=*((C_word*)lf[94]+1);{
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

/* a1820 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1821,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1827,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* file.scm:447: k488 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1826 in a1820 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1827,2,av);}
t2=C_i_structurep(((C_word*)t0)[2],lf[90]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_memq(lf[91],t3))){
if(C_truep(C_i_memq(lf[92],t3))){
if(C_truep(C_i_memq(lf[0],t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:447: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:447: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:447: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:447: chicken.condition#signal */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* a1862 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1863,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[3],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1722 */
t5=t2;
f_1865(t5,t4);}

/* tmp1722 in a1862 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_fcall f_1865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1865,2,t0,t1);}
/* file.scm:447: directory */
t2=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* tmp2723 in a1862 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_fcall f_1870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1870,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1876,a[2]=t2,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* file.scm:447: k488 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1875 in tmp2723 in a1862 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1876,2,av);}{
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

/* k1885 in a1862 in a1814 in k1742 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1887,2,av);}
a=C_alloc(3);
/* tmp2723 */
t2=((C_word*)t0)[2];
f_1870(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k1889 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1891,2,av);}
/* file.scm:446: chicken.irregex#irregex */
t2=*((C_word*)lf[96]+1);{
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

/* k1893 in a1736 in conc-loop in chicken.file#glob in k739 in k736 in k733 in k730 */
static void C_ccall f_1895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1895,2,av);}
/* file.scm:446: chicken.irregex#glob->sre */
t2=*((C_word*)lf[97]+1);{
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

/* chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1901,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1905,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2124,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t4;
av2[2]=lf[107];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1905,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2116,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=lf[106];
av2[3]=((C_word*)t0)[4];
av2[4]=t4;
tp(5,av2);}}

/* k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1908,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=lf[105];
av2[3]=((C_word*)t0)[5];
av2[4]=t4;
tp(5,av2);}}

/* k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_1911,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2110,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=lf[104];
av2[3]=((C_word*)t0)[6];
av2[4]=t4;
tp(5,av2);}}

/* k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1914,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2107,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=lf[41];
av2[3]=((C_word*)t0)[7];
av2[4]=t4;
tp(5,av2);}}

/* k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1917,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2104,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* file.scm:459: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[103]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=lf[42];
av2[3]=((C_word*)t0)[8];
av2[4]=t4;
tp(5,av2);}}

/* k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1920(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_1920,2,av);}
a=C_alloc(17);
t2=t1;
t3=C_i_check_string_2(((C_word*)t0)[2],lf[99]);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1926,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t7=t6;
f_1926(t7,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2090,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2098,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t8=t6;
f_1926(t8,t7);}
else{
t7=t6;
f_1926(t7,((C_word*)t0)[8]);}}}

/* k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_fcall f_1926(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1926,2,t0,t1);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t4=t3;
f_1929(t4,((C_word*)t0)[9]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2081,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:474: chicken.irregex#irregex */
t5=*((C_word*)lf[96]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_fcall f_1929(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_1929,2,t0,t1);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* file.scm:477: directory */
t4=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_1936,2,av);}
a=C_alloc(12);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1938,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li46),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_1938(t5,((C_word*)t0)[8],((C_word*)t0)[9],t1,((C_word*)t0)[10]);}

/* loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_fcall f_1938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1938,5,t0,t1,t2,t3,t4);}
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
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1951,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* file.scm:482: chicken.pathname#make-pathname */
t8=*((C_word*)lf[35]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1951,2,av);}
a=C_alloc(15);
t2=t1;
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=t3;
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* file.scm:484: directory-exists? */
t6=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_1960,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[100]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[101]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* file.scm:485: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1938(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2053,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:258: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[99];
tp(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* file.scm:496: pproc */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1980 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1982,2,av);}
/* file.scm:487: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1983 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1985,2,av);}
if(C_truep(t1)){
/* file.scm:487: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* file.scm:487: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1938(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_1994(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1994,2,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2006,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li44),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2031,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp);
/* file.scm:491: ##sys#dynamic-wind */
t11=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2041,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2044,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:495: pproc */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2002 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2004,2,av);}
/* file.scm:489: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a2005 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2006,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2010 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2011,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:493: directory */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2017 in a2010 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2019,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* file.scm:494: pproc */
t5=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2021 in k2017 in a2010 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 in ... */
static void C_ccall f_2023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2023,2,av);}
/* file.scm:492: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2024 in k2017 in a2010 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 in ... */
static void C_ccall f_2026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2026,2,av);}
if(C_truep(t1)){
/* file.scm:494: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* file.scm:492: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1938(t3,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],t2);}}

/* a2030 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2031,2,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2039 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2041,2,av);}
/* file.scm:495: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2042 in k1992 in k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2044,2,av);}
if(C_truep(t1)){
/* file.scm:495: action */
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
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[5];
/* file.scm:495: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1938(t3,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],t2);}}

/* k2051 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2053,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_symbolic_linkp(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2054 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2056,2,av);}
a=C_alloc(16);
t2=(C_truep(t1)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:487: pproc */
t5=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* file.scm:488: lproc */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2063 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2065,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:496: action */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
/* file.scm:497: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k2070 in k2063 in k1958 in k1949 in loop in k1934 in k1927 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2072,2,av);}
/* file.scm:496: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2079 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2081,2,av);}
a=C_alloc(4);
t2=t1;
t3=((C_word*)t0)[2];
f_1929(t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2082,a[2]=t2,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));}

/* f_2082 in k2079 in k1924 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2082,3,av);}
/* file.scm:475: chicken.irregex#irregex-match */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f_2090 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2090,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2098 in k1918 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2098,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2103 in k1915 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2104,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2106 in k1912 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2107,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2109 in k1909 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2110,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2112 in k1906 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2113,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2115 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2116,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2118,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2118 in a2115 in k1903 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2118,4,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2123 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2124,2,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2126 in a2123 in chicken.file#find-files in k739 in k736 in k733 in k730 */
static void C_ccall f_2126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2126,2,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k730 */
static void C_ccall f_732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_732,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k733 in k730 */
static void C_ccall f_735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_735,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k736 in k733 in k730 */
static void C_ccall f_738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_738,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k739 in k736 in k733 in k730 */
static void C_ccall f_741(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(83,c,6)))){
C_save_and_reclaim((void *)f_741,2,av);}
a=C_alloc(83);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.file#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_753,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[8]+1 /* (set! chicken.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_770,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file#directory-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[13] /* (set! chicken.file#test-access ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_794,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file#file-readable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_824,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file#file-writable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_830,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file#file-executable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_836,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file#directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_842,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file#create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file#delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1098,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[39]+1 /* (set! chicken.file#delete-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1190,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[46]+1 /* (set! chicken.file#delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1221,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[47]+1 /* (set! chicken.file#rename-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1233,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[52]+1 /* (set! chicken.file#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[65]+1 /* (set! chicken.file#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1424,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=lf[70];
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1556,a[2]=t20,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t23=C_mutate((C_word*)lf[76]+1 /* (set! chicken.file#create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1581,a[2]=t21,a[3]=t22,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t24=C_mutate((C_word*)lf[82]+1 /* (set! chicken.file#create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1644,a[2]=t21,a[3]=t22,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t25=C_mutate((C_word*)lf[86]+1 /* (set! chicken.file#glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1710,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1901,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t27=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t27;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t27+1)))(2,av2);}}

/* chicken.file#posix-error in k739 in k736 in k733 in k730 */
static void C_fcall f_753(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_753,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_757,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* file.scm:196: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k755 in chicken.file#posix-error in k739 in k736 in k733 in k730 */
static void C_ccall f_757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_757,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_768,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub135(t4,t5);
/* file.scm:193: ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);{
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

/* k762 in k755 in chicken.file#posix-error in k739 in k736 in k733 in k730 */
static void C_ccall f_764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_764,2,av);}{
C_word *av2;
if(c >= 7) {
  av2=av;
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

/* k766 in k755 in chicken.file#posix-error in k739 in k736 in k733 in k730 */
static void C_ccall f_768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_768,2,av);}
/* file.scm:197: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.file#file-exists? in k739 in k736 in k733 in k730 */
static void C_ccall f_770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_770,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_780,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:204: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[9];
tp(6,av2);}}

/* k778 in chicken.file#file-exists? in k739 in k736 in k733 in k730 */
static void C_ccall f_780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_780,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#directory-exists? in k739 in k736 in k733 in k730 */
static void C_ccall f_782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_782,3,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[12]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_792,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:208: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[12];
tp(6,av2);}}

/* k790 in chicken.file#directory-exists? in k739 in k736 in k733 in k730 */
static void C_ccall f_792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_792,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#test-access in k739 in k736 in k733 in k730 */
static void C_fcall f_794(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_794,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_802,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:219: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k800 in chicken.file#test-access in k739 in k736 in k733 in k730 */
static void C_ccall f_802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_802,2,av);}
a=C_alloc(5);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_821,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:221: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k819 in k800 in chicken.file#test-access in k739 in k736 in k733 in k730 */
static void C_ccall f_821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_821,2,av);}
a=C_alloc(3);
t2=C_fix((C_word)EACCES);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:223: posix-error */
f_753(((C_word*)t0)[2],lf[14],((C_word*)t0)[3],lf[15],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* chicken.file#file-readable? in k739 in k736 in k733 in k730 */
static void C_ccall f_824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_824,3,av);}
/* file.scm:225: test-access */
f_794(t1,t2,C_fix((C_word)R_OK),lf[18]);}

/* chicken.file#file-writable? in k739 in k736 in k733 in k730 */
static void C_ccall f_830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_830,3,av);}
/* file.scm:226: test-access */
f_794(t1,t2,C_fix((C_word)W_OK),lf[20]);}

/* chicken.file#file-executable? in k739 in k736 in k733 in k730 */
static void C_ccall f_836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_836,3,av);}
/* file.scm:227: test-access */
f_794(t1,t2,C_fix((C_word)X_OK),lf[22]);}

/* chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_842,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_846,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* file.scm:232: chicken.process-context#current-directory */
t5=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_846(2,av2);}}}

/* k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_846(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_846,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_nullp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=t6;
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=C_i_check_string_2(t2,lf[24]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_861,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t11;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_861,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:235: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
tp(2,av2);}}

/* k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_864,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* file.scm:236: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
tp(2,av2);}}

/* k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_867,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:239: ##sys#make-c-string */
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
av2[3]=lf[24];
tp(4,av2);}}

/* k869 in k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_871(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_871,2,av);}
a=C_alloc(10);
t2=C_opendir(t1,((C_word*)t0)[2]);
if(C_truep(C_null_pointerp(((C_word*)t0)[2]))){
/* file.scm:241: posix-error */
f_753(((C_word*)t0)[3],lf[14],lf[24],lf[25],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_885(t6,((C_word*)t0)[3]);}}

/* loop in k869 in k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_fcall f_885(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_885,2,t0,t1);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_899,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* file.scm:247: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* k897 in loop in k869 in k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_899(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_899,2,av);}
a=C_alloc(5);
t2=t1;
t3=C_i_string_ref(t2,C_fix(0));
t4=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t5=(C_truep(t4)?C_i_string_ref(t2,C_fix(1)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_eqp(C_make_character(46),t3);
if(C_truep(t7)){
t8=C_i_not(t5);
if(C_truep(t8)){
t9=t6;
f_911(t9,t8);}
else{
t9=C_eqp(C_make_character(46),t5);
if(C_truep(t9)){
t10=C_eqp(C_fix(2),((C_word*)t0)[2]);
t11=t6;
f_911(t11,(C_truep(t10)?t10:C_i_not(((C_word*)t0)[5])));}
else{
t10=t6;
f_911(t10,C_i_not(((C_word*)t0)[5]));}}}
else{
t8=t6;
f_911(t8,C_SCHEME_FALSE);}}

/* k909 in k897 in loop in k869 in k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_fcall f_911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_911,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:254: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_885(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_921,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:255: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_885(t3,t2);}}

/* k919 in k909 in k897 in loop in k869 in k865 in k862 in k859 in k844 in chicken.file#directory in k739 in k736 in k733 in k730 */
static void C_ccall f_921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_921,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,2)))){
C_save_and_reclaim((void*)f_981,c,av);}
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
t7=C_i_check_string_2(t2,lf[31]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_991,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_block_size(t2);
t10=C_eqp(C_fix(0),t9);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_997,a[2]=t1,a[3]=t2,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t10)){
t12=t11;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t10;
f_997(2,av2);}}
else{
/* file.scm:268: file-exists? */
t12=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}

/* k989 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_991,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k995 in chicken.file#create-directory in k739 in k736 in k733 in k730 */
static void C_ccall f_997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_997,2,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1051,a[2]=((C_word*)t0)[3],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1057,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* file.scm:270: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1080,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* file.scm:261: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[31];
tp(4,av2);}}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_file_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("file"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_file_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(553))){
C_save(t1);
C_rereclaim2(553*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,108);
lf[0]=C_h_intern(&lf[0],4, C_text("file"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.file#"));
lf[3]=C_h_intern(&lf[3],15, C_text("\003syssignal-hook"));
lf[4]=C_h_intern(&lf[4],20, C_text("scheme#string-append"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003 - "));
lf[6]=C_h_intern(&lf[6],17, C_text("\003syspeek-c-string"));
lf[7]=C_h_intern(&lf[7],16, C_text("\003sysupdate-errno"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.file#file-exists\077"));
lf[9]=C_h_intern(&lf[9],12, C_text("file-exists\077"));
lf[10]=C_h_intern(&lf[10],16, C_text("\003sysfile-exists\077"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file#directory-exists\077"));
lf[12]=C_h_intern(&lf[12],17, C_text("directory-exists\077"));
lf[14]=C_h_intern(&lf[14],11, C_text("\000file-error"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022cannot access file"));
lf[16]=C_h_intern(&lf[16],17, C_text("\003sysmake-c-string"));
lf[17]=C_h_intern(&lf[17],27, C_text("chicken.file#file-readable\077"));
lf[18]=C_h_intern(&lf[18],14, C_text("file-readable\077"));
lf[19]=C_h_intern(&lf[19],27, C_text("chicken.file#file-writable\077"));
lf[20]=C_h_intern(&lf[20],14, C_text("file-writable\077"));
lf[21]=C_h_intern(&lf[21],29, C_text("chicken.file#file-executable\077"));
lf[22]=C_h_intern(&lf[22],16, C_text("file-executable\077"));
lf[23]=C_h_intern(&lf[23],22, C_text("chicken.file#directory"));
lf[24]=C_h_intern(&lf[24],9, C_text("directory"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot open directory"));
lf[26]=C_h_intern(&lf[26],13, C_text("\003syssubstring"));
lf[27]=C_h_intern(&lf[27],16, C_text("\003sysmake-pointer"));
lf[28]=C_h_intern(&lf[28],15, C_text("\003sysmake-string"));
lf[29]=C_h_intern(&lf[29],41, C_text("chicken.process-context#current-directory"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file#create-directory"));
lf[31]=C_h_intern(&lf[31],16, C_text("create-directory"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot create directory"));
lf[33]=C_h_intern(&lf[33],35, C_text("chicken.pathname#pathname-directory"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.pathname#decompose-pathname"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.pathname#make-pathname"));
lf[36]=C_h_intern(&lf[36],29, C_text("chicken.file#delete-directory"));
lf[37]=C_h_intern(&lf[37],16, C_text("delete-directory"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot delete directory"));
lf[39]=C_h_intern(&lf[39],24, C_text("chicken.file#delete-file"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.file#find-files"));
lf[41]=C_h_intern(&lf[41],9, C_text("\000dotfiles"));
lf[42]=C_h_intern(&lf[42],16, C_text("\000follow-symlinks"));
lf[43]=C_h_intern(&lf[43],11, C_text("delete-file"));
lf[44]=C_h_intern(&lf[44],17, C_text("\003sysstring-append"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot delete file - "));
lf[46]=C_h_intern(&lf[46],25, C_text("chicken.file#delete-file\052"));
lf[47]=C_h_intern(&lf[47],24, C_text("chicken.file#rename-file"));
lf[48]=C_h_intern(&lf[48],11, C_text("rename-file"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\025cannot rename file - "));
lf[50]=C_h_intern(&lf[50],9, C_text("\003syserror"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[52]=C_h_intern(&lf[52],22, C_text("chicken.file#copy-file"));
lf[53]=C_h_intern(&lf[53],9, C_text("copy-file"));
lf[54]=C_h_intern(&lf[54],24, C_text("scheme#close-output-port"));
lf[55]=C_h_intern(&lf[55],23, C_text("scheme#close-input-port"));
lf[56]=C_h_intern(&lf[56],23, C_text("chicken.io#read-string!"));
lf[57]=C_h_intern(&lf[57],23, C_text("chicken.io#write-string"));
lf[58]=C_h_intern(&lf[58],18, C_text("scheme#make-string"));
lf[59]=C_h_intern(&lf[59],23, C_text("scheme#open-output-file"));
lf[60]=C_h_intern(&lf[60],7, C_text("\000binary"));
lf[61]=C_h_intern(&lf[61],22, C_text("scheme#open-input-file"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot copy directories"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid blocksize - not a positive integer"));
lf[65]=C_h_intern(&lf[65],22, C_text("chicken.file#move-file"));
lf[66]=C_h_intern(&lf[66],9, C_text("move-file"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000#newfile exists but clobber is false"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027cannot move directories"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid blocksize - not a positive integer"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004temp"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004/tmp"));
lf[72]=C_h_intern(&lf[72],48, C_text("chicken.process-context#get-environment-variable"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003TMP"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004TEMP"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006TMPDIR"));
lf[76]=C_h_intern(&lf[76],34, C_text("chicken.file#create-temporary-file"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003tmp"));
lf[78]=C_h_intern(&lf[78],21, C_text("create-temporary-file"));
lf[79]=C_h_intern(&lf[79],28, C_text("scheme#call-with-output-file"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[81]=C_h_intern(&lf[81],18, C_text("\003sysnumber->string"));
lf[82]=C_h_intern(&lf[82],39, C_text("chicken.file#create-temporary-directory"));
lf[83]=C_h_intern(&lf[83],26, C_text("create-temporary-directory"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000$cannot create temporary directory - "));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[86]=C_h_intern(&lf[86],17, C_text("chicken.file#glob"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[88]=C_h_intern(&lf[88],39, C_text("chicken.irregex#irregex-match-substring"));
lf[89]=C_h_intern(&lf[89],29, C_text("chicken.irregex#irregex-match"));
lf[90]=C_h_intern(&lf[90],9, C_text("condition"));
lf[91]=C_h_intern(&lf[91],3, C_text("exn"));
lf[92]=C_h_intern(&lf[92],3, C_text("i/o"));
lf[93]=C_h_intern(&lf[93],24, C_text("chicken.condition#signal"));
lf[94]=C_h_intern(&lf[94],40, C_text("chicken.condition#with-exception-handler"));
lf[95]=C_h_intern(&lf[95],37, C_text("scheme#call-with-current-continuation"));
lf[96]=C_h_intern(&lf[96],23, C_text("chicken.irregex#irregex"));
lf[97]=C_h_intern(&lf[97],25, C_text("chicken.irregex#glob->sre"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[99]=C_h_intern(&lf[99],10, C_text("find-files"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002.."));
lf[102]=C_h_intern(&lf[102],16, C_text("\003sysdynamic-wind"));
lf[103]=C_h_intern(&lf[103],15, C_text("\003sysget-keyword"));
lf[104]=C_h_intern(&lf[104],6, C_text("\000limit"));
lf[105]=C_h_intern(&lf[105],5, C_text("\000seed"));
lf[106]=C_h_intern(&lf[106],7, C_text("\000action"));
lf[107]=C_h_intern(&lf[107],5, C_text("\000test"));
C_register_lf2(lf,108,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_732,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[190] = {
{C_text("f_1007:file_2escm"),(void*)f_1007},
{C_text("f_1009:file_2escm"),(void*)f_1009},
{C_text("f_1016:file_2escm"),(void*)f_1016},
{C_text("f_1019:file_2escm"),(void*)f_1019},
{C_text("f_1035:file_2escm"),(void*)f_1035},
{C_text("f_1042:file_2escm"),(void*)f_1042},
{C_text("f_1049:file_2escm"),(void*)f_1049},
{C_text("f_1051:file_2escm"),(void*)f_1051},
{C_text("f_1057:file_2escm"),(void*)f_1057},
{C_text("f_1080:file_2escm"),(void*)f_1080},
{C_text("f_1098:file_2escm"),(void*)f_1098},
{C_text("f_1104:file_2escm"),(void*)f_1104},
{C_text("f_1108:file_2escm"),(void*)f_1108},
{C_text("f_1127:file_2escm"),(void*)f_1127},
{C_text("f_1128:file_2escm"),(void*)f_1128},
{C_text("f_1141:file_2escm"),(void*)f_1141},
{C_text("f_1144:file_2escm"),(void*)f_1144},
{C_text("f_1150:file_2escm"),(void*)f_1150},
{C_text("f_1153:file_2escm"),(void*)f_1153},
{C_text("f_1158:file_2escm"),(void*)f_1158},
{C_text("f_1168:file_2escm"),(void*)f_1168},
{C_text("f_1190:file_2escm"),(void*)f_1190},
{C_text("f_1197:file_2escm"),(void*)f_1197},
{C_text("f_1203:file_2escm"),(void*)f_1203},
{C_text("f_1210:file_2escm"),(void*)f_1210},
{C_text("f_1214:file_2escm"),(void*)f_1214},
{C_text("f_1219:file_2escm"),(void*)f_1219},
{C_text("f_1221:file_2escm"),(void*)f_1221},
{C_text("f_1228:file_2escm"),(void*)f_1228},
{C_text("f_1233:file_2escm"),(void*)f_1233},
{C_text("f_1246:file_2escm"),(void*)f_1246},
{C_text("f_1249:file_2escm"),(void*)f_1249},
{C_text("f_1255:file_2escm"),(void*)f_1255},
{C_text("f_1262:file_2escm"),(void*)f_1262},
{C_text("f_1266:file_2escm"),(void*)f_1266},
{C_text("f_1271:file_2escm"),(void*)f_1271},
{C_text("f_1275:file_2escm"),(void*)f_1275},
{C_text("f_1278:file_2escm"),(void*)f_1278},
{C_text("f_1295:file_2escm"),(void*)f_1295},
{C_text("f_1320:file_2escm"),(void*)f_1320},
{C_text("f_1323:file_2escm"),(void*)f_1323},
{C_text("f_1326:file_2escm"),(void*)f_1326},
{C_text("f_1329:file_2escm"),(void*)f_1329},
{C_text("f_1332:file_2escm"),(void*)f_1332},
{C_text("f_1335:file_2escm"),(void*)f_1335},
{C_text("f_1342:file_2escm"),(void*)f_1342},
{C_text("f_1344:file_2escm"),(void*)f_1344},
{C_text("f_1354:file_2escm"),(void*)f_1354},
{C_text("f_1357:file_2escm"),(void*)f_1357},
{C_text("f_1360:file_2escm"),(void*)f_1360},
{C_text("f_1367:file_2escm"),(void*)f_1367},
{C_text("f_1374:file_2escm"),(void*)f_1374},
{C_text("f_1386:file_2escm"),(void*)f_1386},
{C_text("f_1424:file_2escm"),(void*)f_1424},
{C_text("f_1449:file_2escm"),(void*)f_1449},
{C_text("f_1452:file_2escm"),(void*)f_1452},
{C_text("f_1455:file_2escm"),(void*)f_1455},
{C_text("f_1458:file_2escm"),(void*)f_1458},
{C_text("f_1461:file_2escm"),(void*)f_1461},
{C_text("f_1464:file_2escm"),(void*)f_1464},
{C_text("f_1471:file_2escm"),(void*)f_1471},
{C_text("f_1473:file_2escm"),(void*)f_1473},
{C_text("f_1483:file_2escm"),(void*)f_1483},
{C_text("f_1486:file_2escm"),(void*)f_1486},
{C_text("f_1489:file_2escm"),(void*)f_1489},
{C_text("f_1492:file_2escm"),(void*)f_1492},
{C_text("f_1499:file_2escm"),(void*)f_1499},
{C_text("f_1506:file_2escm"),(void*)f_1506},
{C_text("f_1518:file_2escm"),(void*)f_1518},
{C_text("f_1556:file_2escm"),(void*)f_1556},
{C_text("f_1563:file_2escm"),(void*)f_1563},
{C_text("f_1570:file_2escm"),(void*)f_1570},
{C_text("f_1576:file_2escm"),(void*)f_1576},
{C_text("f_1581:file_2escm"),(void*)f_1581},
{C_text("f_1593:file_2escm"),(void*)f_1593},
{C_text("f_1599:file_2escm"),(void*)f_1599},
{C_text("f_1605:file_2escm"),(void*)f_1605},
{C_text("f_1613:file_2escm"),(void*)f_1613},
{C_text("f_1618:file_2escm"),(void*)f_1618},
{C_text("f_1622:file_2escm"),(void*)f_1622},
{C_text("f_1626:file_2escm"),(void*)f_1626},
{C_text("f_1630:file_2escm"),(void*)f_1630},
{C_text("f_1644:file_2escm"),(void*)f_1644},
{C_text("f_1650:file_2escm"),(void*)f_1650},
{C_text("f_1656:file_2escm"),(void*)f_1656},
{C_text("f_1662:file_2escm"),(void*)f_1662},
{C_text("f_1669:file_2escm"),(void*)f_1669},
{C_text("f_1682:file_2escm"),(void*)f_1682},
{C_text("f_1686:file_2escm"),(void*)f_1686},
{C_text("f_1690:file_2escm"),(void*)f_1690},
{C_text("f_1694:file_2escm"),(void*)f_1694},
{C_text("f_1698:file_2escm"),(void*)f_1698},
{C_text("f_1702:file_2escm"),(void*)f_1702},
{C_text("f_1710:file_2escm"),(void*)f_1710},
{C_text("f_1716:file_2escm"),(void*)f_1716},
{C_text("f_1731:file_2escm"),(void*)f_1731},
{C_text("f_1737:file_2escm"),(void*)f_1737},
{C_text("f_1744:file_2escm"),(void*)f_1744},
{C_text("f_1751:file_2escm"),(void*)f_1751},
{C_text("f_1754:file_2escm"),(void*)f_1754},
{C_text("f_1756:file_2escm"),(void*)f_1756},
{C_text("f_1773:file_2escm"),(void*)f_1773},
{C_text("f_1777:file_2escm"),(void*)f_1777},
{C_text("f_1785:file_2escm"),(void*)f_1785},
{C_text("f_1789:file_2escm"),(void*)f_1789},
{C_text("f_1797:file_2escm"),(void*)f_1797},
{C_text("f_1815:file_2escm"),(void*)f_1815},
{C_text("f_1821:file_2escm"),(void*)f_1821},
{C_text("f_1827:file_2escm"),(void*)f_1827},
{C_text("f_1863:file_2escm"),(void*)f_1863},
{C_text("f_1865:file_2escm"),(void*)f_1865},
{C_text("f_1870:file_2escm"),(void*)f_1870},
{C_text("f_1876:file_2escm"),(void*)f_1876},
{C_text("f_1887:file_2escm"),(void*)f_1887},
{C_text("f_1891:file_2escm"),(void*)f_1891},
{C_text("f_1895:file_2escm"),(void*)f_1895},
{C_text("f_1901:file_2escm"),(void*)f_1901},
{C_text("f_1905:file_2escm"),(void*)f_1905},
{C_text("f_1908:file_2escm"),(void*)f_1908},
{C_text("f_1911:file_2escm"),(void*)f_1911},
{C_text("f_1914:file_2escm"),(void*)f_1914},
{C_text("f_1917:file_2escm"),(void*)f_1917},
{C_text("f_1920:file_2escm"),(void*)f_1920},
{C_text("f_1926:file_2escm"),(void*)f_1926},
{C_text("f_1929:file_2escm"),(void*)f_1929},
{C_text("f_1936:file_2escm"),(void*)f_1936},
{C_text("f_1938:file_2escm"),(void*)f_1938},
{C_text("f_1951:file_2escm"),(void*)f_1951},
{C_text("f_1960:file_2escm"),(void*)f_1960},
{C_text("f_1982:file_2escm"),(void*)f_1982},
{C_text("f_1985:file_2escm"),(void*)f_1985},
{C_text("f_1994:file_2escm"),(void*)f_1994},
{C_text("f_2004:file_2escm"),(void*)f_2004},
{C_text("f_2006:file_2escm"),(void*)f_2006},
{C_text("f_2011:file_2escm"),(void*)f_2011},
{C_text("f_2019:file_2escm"),(void*)f_2019},
{C_text("f_2023:file_2escm"),(void*)f_2023},
{C_text("f_2026:file_2escm"),(void*)f_2026},
{C_text("f_2031:file_2escm"),(void*)f_2031},
{C_text("f_2041:file_2escm"),(void*)f_2041},
{C_text("f_2044:file_2escm"),(void*)f_2044},
{C_text("f_2053:file_2escm"),(void*)f_2053},
{C_text("f_2056:file_2escm"),(void*)f_2056},
{C_text("f_2065:file_2escm"),(void*)f_2065},
{C_text("f_2072:file_2escm"),(void*)f_2072},
{C_text("f_2081:file_2escm"),(void*)f_2081},
{C_text("f_2082:file_2escm"),(void*)f_2082},
{C_text("f_2090:file_2escm"),(void*)f_2090},
{C_text("f_2098:file_2escm"),(void*)f_2098},
{C_text("f_2104:file_2escm"),(void*)f_2104},
{C_text("f_2107:file_2escm"),(void*)f_2107},
{C_text("f_2110:file_2escm"),(void*)f_2110},
{C_text("f_2113:file_2escm"),(void*)f_2113},
{C_text("f_2116:file_2escm"),(void*)f_2116},
{C_text("f_2118:file_2escm"),(void*)f_2118},
{C_text("f_2124:file_2escm"),(void*)f_2124},
{C_text("f_2126:file_2escm"),(void*)f_2126},
{C_text("f_732:file_2escm"),(void*)f_732},
{C_text("f_735:file_2escm"),(void*)f_735},
{C_text("f_738:file_2escm"),(void*)f_738},
{C_text("f_741:file_2escm"),(void*)f_741},
{C_text("f_753:file_2escm"),(void*)f_753},
{C_text("f_757:file_2escm"),(void*)f_757},
{C_text("f_764:file_2escm"),(void*)f_764},
{C_text("f_768:file_2escm"),(void*)f_768},
{C_text("f_770:file_2escm"),(void*)f_770},
{C_text("f_780:file_2escm"),(void*)f_780},
{C_text("f_782:file_2escm"),(void*)f_782},
{C_text("f_792:file_2escm"),(void*)f_792},
{C_text("f_794:file_2escm"),(void*)f_794},
{C_text("f_802:file_2escm"),(void*)f_802},
{C_text("f_821:file_2escm"),(void*)f_821},
{C_text("f_824:file_2escm"),(void*)f_824},
{C_text("f_830:file_2escm"),(void*)f_830},
{C_text("f_836:file_2escm"),(void*)f_836},
{C_text("f_842:file_2escm"),(void*)f_842},
{C_text("f_846:file_2escm"),(void*)f_846},
{C_text("f_861:file_2escm"),(void*)f_861},
{C_text("f_864:file_2escm"),(void*)f_864},
{C_text("f_867:file_2escm"),(void*)f_867},
{C_text("f_871:file_2escm"),(void*)f_871},
{C_text("f_885:file_2escm"),(void*)f_885},
{C_text("f_899:file_2escm"),(void*)f_899},
{C_text("f_911:file_2escm"),(void*)f_911},
{C_text("f_921:file_2escm"),(void*)f_921},
{C_text("f_981:file_2escm"),(void*)f_981},
{C_text("f_991:file_2escm"),(void*)f_991},
{C_text("f_997:file_2escm"),(void*)f_997},
{C_text("toplevel:file_2escm"),(void*)C_file_toplevel},
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
o|hiding unexported module binding: chicken.file#d 
o|hiding unexported module binding: chicken.file#define-alias 
o|hiding unexported module binding: chicken.file#posix-error 
o|hiding unexported module binding: chicken.file#test-access 
S|applied compiler syntax:
S|  for-each		1
o|eliminated procedure checks: 22 
o|specializations:
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (scheme#cdr pair)
o|  2 (scheme#number->string * *)
o|  2 (scheme#> * *)
o|  2 (scheme#integer? *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#string-length string)
o|  1 (scheme#make-string fixnum)
(o e)|safe calls: 200 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-file 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-directory 
o|safe globals: (chicken.file#find-files chicken.file#glob chicken.file#create-temporary-directory chicken.file#create-temporary-file chicken.file#move-file chicken.file#copy-file chicken.file#rename-file chicken.file#delete-file* chicken.file#delete-file chicken.file#delete-directory chicken.file#create-directory chicken.file#directory chicken.file#file-executable? chicken.file#file-writable? chicken.file#file-readable? chicken.file#test-access chicken.file#directory-exists? chicken.file#file-exists? chicken.file#posix-error) 
o|merged explicitly consed rest parameter: args142 
o|contracted procedure: "(file.scm:197) strerror132" 
o|inlining procedure: k775 
o|inlining procedure: k775 
o|inlining procedure: k787 
o|inlining procedure: k787 
o|inlining procedure: k806 
o|inlining procedure: k806 
o|consed rest parameter at call site: "(file.scm:223) chicken.file#posix-error" 4 
o|inlining procedure: k872 
o|consed rest parameter at call site: "(file.scm:241) chicken.file#posix-error" 4 
o|inlining procedure: k872 
o|inlining procedure: k887 
o|inlining procedure: k887 
o|inlining procedure: k928 
o|inlining procedure: k928 
o|substituted constant variable: a950 
o|substituted constant variable: a952 
o|inlining procedure: k989 
o|inlining procedure: k989 
o|inlining procedure: k1011 
o|contracted procedure: "(file.scm:274) g224225" 
o|inlining procedure: k1022 
o|inlining procedure: k1022 
o|consed rest parameter at call site: "(file.scm:262) chicken.file#posix-error" 4 
o|inlining procedure: k1011 
o|inlining procedure: k1059 
o|inlining procedure: k1059 
o|contracted procedure: "(file.scm:275) g242243" 
o|inlining procedure: k1067 
o|inlining procedure: k1067 
o|consed rest parameter at call site: "(file.scm:262) chicken.file#posix-error" 4 
o|inlining procedure: k1109 
o|inlining procedure: k1109 
o|consed rest parameter at call site: "(file.scm:283) chicken.file#posix-error" 4 
o|inlining procedure: k1130 
o|propagated global variable: r11312154 chicken.file#delete-file 
o|inlining procedure: k1130 
o|contracted procedure: "(file.scm:292) g283284" 
o|inlining procedure: k1122 
o|inlining procedure: k1160 
o|inlining procedure: k1160 
o|inlining procedure: k1122 
o|inlining procedure: k1195 
o|inlining procedure: k1195 
o|inlining procedure: k1223 
o|inlining procedure: k1223 
o|inlining procedure: k1247 
o|inlining procedure: k1247 
o|inlining procedure: k1346 
o|inlining procedure: k1346 
o|substituted constant variable: a1398 
o|inlining procedure: k1475 
o|inlining procedure: k1475 
o|substituted constant variable: a1530 
o|inlining procedure: k1558 
o|inlining procedure: k1558 
o|inlining procedure: k1571 
o|inlining procedure: k1571 
o|inlining procedure: k1600 
o|inlining procedure: k1600 
o|contracted procedure: "(file.scm:409) getpid427" 
o|substituted constant variable: a1636 
o|inlining procedure: k1657 
o|inlining procedure: k1657 
o|contracted procedure: "(file.scm:425) getpid436" 
o|substituted constant variable: a1708 
o|inlining procedure: k1718 
o|inlining procedure: k1718 
o|inlining procedure: k1758 
o|inlining procedure: k1758 
o|inlining procedure: k1832 
o|inlining procedure: k1832 
o|inlining procedure: k1841 
o|inlining procedure: k1841 
o|merged explicitly consed rest parameter: args489504 
o|consed rest parameter at call site: tmp2723 1 
o|inlining procedure: k1897 
o|inlining procedure: k1897 
o|inlining procedure: k1940 
o|inlining procedure: k1940 
o|inlining procedure: k1961 
o|inlining procedure: k1961 
o|inlining procedure: k1980 
o|inlining procedure: k1980 
o|inlining procedure: k1989 
o|inlining procedure: k2021 
o|inlining procedure: k2021 
o|inlining procedure: k1989 
o|inlining procedure: k2039 
o|inlining procedure: k2039 
o|contracted procedure: "(file.scm:486) g549550" 
o|inlining procedure: k2060 
o|inlining procedure: k2060 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|replaced variables: 227 
o|removed binding forms: 93 
o|substituted constant variable: r7762129 
o|substituted constant variable: r7882131 
o|substituted constant variable: r8882136 
o|substituted constant variable: loc226 
o|substituted constant variable: loc226 
o|substituted constant variable: loc244 
o|substituted constant variable: loc244 
o|propagated global variable: g2772782155 chicken.file#delete-file 
o|inlining procedure: k1130 
o|inlining procedure: k1130 
o|propagated global variable: r11312237 chicken.file#delete-file 
o|propagated global variable: r11312237 chicken.file#delete-file 
o|substituted constant variable: loc286 
o|converted assignments to bindings: (rmdir260) 
o|substituted constant variable: r12242173 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|inlining procedure: k1564 
o|substituted constant variable: r17192190 
o|substituted constant variable: r18332194 
o|substituted constant variable: r18422197 
o|substituted constant variable: r18982200 
o|substituted constant variable: r18982200 
o|substituted constant variable: loc552 
o|converted assignments to bindings: (tempdir400) 
o|simplifications: ((let . 2)) 
o|replaced variables: 11 
o|removed binding forms: 231 
o|inlining procedure: k931 
o|inlining procedure: k1276 
o|inlining procedure: k1372 
o|inlining procedure: k1390 
o|inlining procedure: k1390 
o|inlining procedure: k1504 
o|inlining procedure: k1522 
o|inlining procedure: k1522 
o|inlining procedure: k1632 
o|inlining procedure: k1704 
o|inlining procedure: k1835 
o|inlining procedure: k1835 
o|inlining procedure: k1835 
o|replaced variables: 8 
o|removed binding forms: 36 
o|substituted constant variable: r9322290 
o|substituted constant variable: r9322290 
o|substituted constant variable: r12772297 
o|substituted constant variable: r13732300 
o|substituted constant variable: r13912302 
o|substituted constant variable: r15052305 
o|substituted constant variable: r15232307 
o|substituted constant variable: r18362316 
o|substituted constant variable: r18362318 
o|substituted constant variable: r18362320 
o|simplifications: ((let . 2)) 
o|removed binding forms: 14 
o|removed conditional forms: 9 
o|removed binding forms: 9 
o|simplifications: ((if . 20) (##core#call . 111)) 
o|  call simplifications:
o|    chicken.base#fixnum?
o|    chicken.fixnum#fx<
o|    scheme#procedure?
o|    scheme#member
o|    ##sys#apply
o|    ##sys#structure?
o|    scheme#memv	3
o|    ##sys#check-number	2
o|    chicken.fixnum#fx+	3
o|    scheme#pair?	2
o|    ##sys#slot	5
o|    ##sys#call-with-values	2
o|    scheme#car	12
o|    scheme#null?	18
o|    scheme#cdr	8
o|    ##sys#null-pointer?	2
o|    ##sys#size	2
o|    scheme#string-ref
o|    chicken.fixnum#fx>
o|    scheme#eq?	6
o|    scheme#not	10
o|    scheme#cons	3
o|    chicken.fixnum#fx=	8
o|    ##sys#check-string	15
o|    ##sys#foreign-fixnum-argument
o|    scheme#apply
o|contracted procedure: k750 
o|contracted procedure: k772 
o|contracted procedure: k784 
o|contracted procedure: k796 
o|contracted procedure: k803 
o|contracted procedure: k812 
o|contracted procedure: k965 
o|contracted procedure: k847 
o|contracted procedure: k959 
o|contracted procedure: k850 
o|contracted procedure: k953 
o|contracted procedure: k853 
o|contracted procedure: k856 
o|contracted procedure: k875 
o|contracted procedure: k890 
o|contracted procedure: k894 
o|contracted procedure: k900 
o|contracted procedure: k946 
o|contracted procedure: k903 
o|contracted procedure: k922 
o|contracted procedure: k925 
o|contracted procedure: k940 
o|contracted procedure: k931 
o|contracted procedure: k971 
o|contracted procedure: k1091 
o|contracted procedure: k983 
o|contracted procedure: k986 
o|contracted procedure: k1088 
o|contracted procedure: k992 
o|contracted procedure: k1025 
o|contracted procedure: k1070 
o|contracted procedure: k1183 
o|contracted procedure: k1100 
o|contracted procedure: k1112 
o|contracted procedure: k1119 
o|contracted procedure: k1163 
o|contracted procedure: k1173 
o|contracted procedure: k1177 
o|contracted procedure: k1192 
o|contracted procedure: k1198 
o|contracted procedure: k1288 
o|contracted procedure: k1235 
o|contracted procedure: k1238 
o|contracted procedure: k1241 
o|contracted procedure: k1250 
o|contracted procedure: k1282 
o|contracted procedure: k1417 
o|contracted procedure: k1297 
o|contracted procedure: k1411 
o|contracted procedure: k1300 
o|contracted procedure: k1405 
o|contracted procedure: k1303 
o|contracted procedure: k1399 
o|contracted procedure: k1306 
o|contracted procedure: k1309 
o|contracted procedure: k1312 
o|contracted procedure: k1315 
o|contracted procedure: k1349 
o|contracted procedure: k1369 
o|contracted procedure: k1378 
o|contracted procedure: k1549 
o|contracted procedure: k1426 
o|contracted procedure: k1543 
o|contracted procedure: k1429 
o|contracted procedure: k1537 
o|contracted procedure: k1432 
o|contracted procedure: k1531 
o|contracted procedure: k1435 
o|contracted procedure: k1438 
o|contracted procedure: k1441 
o|contracted procedure: k1444 
o|contracted procedure: k1478 
o|contracted procedure: k1501 
o|contracted procedure: k1510 
o|contracted procedure: k1637 
o|contracted procedure: k1583 
o|contracted procedure: k1586 
o|contracted procedure: k1673 
o|contracted procedure: k1721 
o|contracted procedure: k1724 
o|contracted procedure: k1739 
o|contracted procedure: k1811 
o|contracted procedure: k1761 
o|contracted procedure: k1768 
o|contracted procedure: k1791 
o|contracted procedure: k1807 
o|contracted procedure: k1856 
o|contracted procedure: k1829 
o|contracted procedure: k1844 
o|contracted procedure: k1850 
o|contracted procedure: k1835 
o|contracted procedure: k1921 
o|contracted procedure: k1943 
o|contracted procedure: k1946 
o|contracted procedure: k1952 
o|contracted procedure: k1964 
o|contracted procedure: k1973 
o|contracted procedure: k1999 
o|contracted procedure: k2076 
o|contracted procedure: k2087 
o|contracted procedure: k2095 
o|simplifications: ((if . 1) (let . 17)) 
o|removed binding forms: 101 
o|replaced variables: 48 
o|removed binding forms: 22 
o|customizable procedures: (k1924 k1927 loop533 tmp1722 tmp2723 g477478 loop469 conc-loop446 loop434 tempdir400 loop425 loop381 loop345 g267274 for-each-loop266287 rmdir260 k1014 loop221 k909 loop187 chicken.file#test-access chicken.file#posix-error) 
o|calls to known targets: 71 
o|unused rest argument: _528 f_2090 
o|unused rest argument: _529 f_2098 
o|unused rest argument: _514 f_2126 
o|fast box initializations: 10 
o|fast global references: 8 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1104 
o|dropping unused closure argument: f_753 
o|dropping unused closure argument: f_794 
*/
/* end of file */

/* Generated from ../utils.scm by the CHICKEN compiler
   http://www.call-cc.org
   2019-02-08 01:29
   Version 4.13.0 (rev 68eeaaef)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-12-11 on yves.more-magic.net (Linux)
   command line: -ignore-repository ../utils.scm -:s500000 -output-file tmp.c -include-path /home/jordan/Downloads/chicken-4.13.0/tests/..
   unit: utils
*/

#include "chicken.h"


#if defined(_WIN32) && !defined(__CYGWIN__)
# include <windows.h>
# define C_HAS_MESSAGE_BOX 1
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort)
{
  int d = 0, r;
  int t = abort ? MB_YESNOCANCEL : MB_YESNO;

  switch(def) {
  case 0: d = MB_DEFBUTTON1; break;
  case 1: d = MB_DEFBUTTON2; break;
  case 2: d = MB_DEFBUTTON3;
  }

  r = MessageBox(NULL, msg, caption, t | MB_ICONQUESTION | d);

  switch(r) {
  case IDYES: return 1;
  case IDNO: return 0;
  default: return -1;
  }
}
#else
# define C_HAS_MESSAGE_BOX 0
static int
C_confirmation_dialog(char *msg, char *caption, int def, int abort) { return -1; }
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[91];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,54,52,32,46,32,97,114,103,115,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,52,49,57,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,54,57,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,103,49,48,50,32,99,49,49,51,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,57,54,32,103,49,48,56,49,49,57,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,56,53,32,46,32,116,109,112,56,52,56,54,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,54,53,50,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,97,54,52,54,32,101,120,50,48,48,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,6),40,97,54,54,55,41,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,54,55,57,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,19),40,97,54,55,51,32,46,32,97,114,103,115,49,57,52,50,48,51,41,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,54,54,49,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,97,54,52,48,32,107,49,57,51,49,57,57,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,55,48,57,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,12),40,97,55,48,51,32,101,120,49,56,55,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,97,55,49,56,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,55,51,48,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,19),40,97,55,50,52,32,46,32,97,114,103,115,49,56,49,49,56,56,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,55,49,50,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,14),40,97,54,57,55,32,107,49,56,48,49,56,54,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,54,56,56,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,55,56,56,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,49,51,54,32,46,32,116,109,112,49,51,53,49,51,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,18),40,102,95,56,51,52,32,103,50,50,54,50,50,55,50,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,36),40,115,99,97,110,45,105,110,112,117,116,45,108,105,110,101,115,32,114,120,50,49,49,32,46,32,116,109,112,50,49,48,50,49,50,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,101,116,45,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,57,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,31),40,121,101,115,45,111,114,45,110,111,63,32,115,116,114,50,53,56,32,46,32,116,109,112,50,53,55,50,53,57,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k857 */
C_regparm static C_word C_fcall stub244(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_truep(C_a3);
C_r=C_fix((C_word)C_confirmation_dialog(t0,t1,t2,t3));
return C_r;}

C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word *av) C_noret;
C_noret_decl(f_943)
static void C_fcall f_943(C_word t0,C_word t1) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_953)
static void C_fcall f_953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word *av) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word *av) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word *av) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word *av) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word *av) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word *av) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_fcall f_804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word *av) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word *av) C_noret;
C_noret_decl(f_453)
static void C_ccall f_453(C_word c,C_word *av) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word *av) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word *av) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word *av) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word *av) C_noret;
C_noret_decl(f_462)
static void C_fcall f_462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word *av) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word *av) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word *av) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word *av) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word *av) C_noret;
C_noret_decl(f_517)
static void C_ccall f_517(C_word c,C_word *av) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word *av) C_noret;
C_noret_decl(f_579)
static void C_ccall f_579(C_word c,C_word *av) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word *av) C_noret;
C_noret_decl(f_588)
static void C_ccall f_588(C_word c,C_word *av) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word *av) C_noret;
C_noret_decl(f_582)
static void C_ccall f_582(C_word c,C_word *av) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word *av) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word *av) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word *av) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word *av) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word *av) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word *av) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word *av) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word *av) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word *av) C_noret;
C_noret_decl(f_373)
static void C_ccall f_373(C_word c,C_word *av) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word *av) C_noret;
C_noret_decl(f_983)
static void C_ccall f_983(C_word c,C_word *av) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word *av) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word *av) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word *av) C_noret;
C_noret_decl(f_758)
static void C_ccall f_758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word *av) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word *av) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word *av) C_noret;
C_noret_decl(f_388)
static void C_ccall f_388(C_word c,C_word *av) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word *av) C_noret;
C_noret_decl(f_382)
static void C_ccall f_382(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word *av) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word *av) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word *av) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word *av) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594(C_word c,C_word *av) C_noret;
C_noret_decl(f_597)
static void C_ccall f_597(C_word c,C_word *av) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word *av) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_609)
static void C_ccall f_609(C_word c,C_word *av) C_noret;
C_noret_decl(f_600)
static void C_ccall f_600(C_word c,C_word *av) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word *av) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word *av) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word *av) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word *av) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word *av) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word *av) C_noret;
C_noret_decl(f_672)
static void C_ccall f_672(C_word c,C_word *av) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402(C_word c,C_word *av) C_noret;
C_noret_decl(f_492)
static void C_fcall f_492(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490(C_word c,C_word *av) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word *av) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word *av) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word *av) C_noret;
C_noret_decl(f_567)
static void C_ccall f_567(C_word c,C_word *av) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word *av) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word *av) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word *av) C_noret;
C_noret_decl(f_358)
static void C_ccall f_358(C_word c,C_word *av) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word *av) C_noret;
C_noret_decl(f_698)
static void C_ccall f_698(C_word c,C_word *av) C_noret;
C_noret_decl(f_887)
static void C_fcall f_887(C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word *av) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void C_fcall f_889(C_word t0,C_word t1) C_noret;
C_noret_decl(f_916)
static void C_fcall f_916(C_word t0,C_word t1) C_noret;
C_noret_decl(f_668)
static void C_ccall f_668(C_word c,C_word *av) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word *av) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word *av) C_noret;
C_noret_decl(f_361)
static void C_ccall f_361(C_word c,C_word *av) C_noret;
C_noret_decl(f_364)
static void C_ccall f_364(C_word c,C_word *av) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word *av) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word *av) C_noret;
C_noret_decl(f_436)
static void C_ccall f_436(C_word c,C_word *av) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word *av) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word *av) C_noret;
C_noret_decl(f_799)
static void C_fcall f_799(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_943)
static void C_ccall trf_943(C_word c,C_word *av) C_noret;
static void C_ccall trf_943(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_943(t0,t1);}

C_noret_decl(trf_953)
static void C_ccall trf_953(C_word c,C_word *av) C_noret;
static void C_ccall trf_953(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_953(t0,t1);}

C_noret_decl(trf_804)
static void C_ccall trf_804(C_word c,C_word *av) C_noret;
static void C_ccall trf_804(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_804(t0,t1);}

C_noret_decl(trf_462)
static void C_ccall trf_462(C_word c,C_word *av) C_noret;
static void C_ccall trf_462(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_462(t0,t1,t2);}

C_noret_decl(trf_492)
static void C_ccall trf_492(C_word c,C_word *av) C_noret;
static void C_ccall trf_492(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_492(t0,t1,t2);}

C_noret_decl(trf_887)
static void C_ccall trf_887(C_word c,C_word *av) C_noret;
static void C_ccall trf_887(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_887(t0,t1);}

C_noret_decl(trf_889)
static void C_ccall trf_889(C_word c,C_word *av) C_noret;
static void C_ccall trf_889(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_889(t0,t1);}

C_noret_decl(trf_916)
static void C_ccall trf_916(C_word c,C_word *av) C_noret;
static void C_ccall trf_916(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_916(t0,t1);}

C_noret_decl(trf_799)
static void C_ccall trf_799(C_word c,C_word *av) C_noret;
static void C_ccall trf_799(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_799(t0,t1);}

/* k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_947,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("../utils.scm:191: get-input");
t3=((C_word*)t0)[6];
f_889(t3,t2);}

/* loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_943(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_943,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_947,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_947(2,av2);}}
else{
t3=*((C_word*)lf[72]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1024,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("../utils.scm:188: ##sys#check-output-port");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[72]+1);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[74];
tp(5,av2);}}}

/* k389 in k386 in system* in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_391,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace("../utils.scm:46: ##sys#error");
t3=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[2];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_953,2,t0,t1);}
a=C_alloc(8);
if(C_truep(C_i_string_ci_equal_p(lf[69],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(lf[70],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[4])?C_i_string_ci_equal_p(lf[71],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t2)){
C_trace("../utils.scm:196: abort");
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[72]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_983,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:199: ##sys#check-output-port");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t5;
av2[2]=*((C_word*)lf[72]+1);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[74];
tp(5,av2);}}
else{
t4=*((C_word*)lf[72]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_995,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:200: ##sys#check-output-port");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t5;
av2[2]=*((C_word*)lf[72]+1);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[74];
tp(5,av2);}}}}}}

/* k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_950(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_950,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_953,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,lf[76]);
t6=t4;
f_953(t6,t5);}
else{
t5=(C_truep(((C_word*)t0)[5])?C_i_string_equal_p(lf[77],((C_word*)t3)[1]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_set_block_item(t3,0,((C_word*)t0)[5]);
t7=t4;
f_953(t7,t6);}
else{
t6=t4;
f_953(t6,C_SCHEME_UNDEFINED);}}}

/* k853 in k849 in k914 in get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_855,2,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub244(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k849 in k914 in get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_851,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[5]);
C_trace("../utils.scm:168: ##sys#make-c-string");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_855(2,av2);}}}

/* yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_874,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_get_keyword(lf[59],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[60],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_884,a[2]=t7,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:168: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t8;
av2[2]=lf[85];
av2[3]=t3;
av2[4]=t9;
tp(5,av2);}}

/* k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in ... */
static void C_ccall f_618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_618,2,av);}
a=C_alloc(11);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_627(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_689,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:100: on-exit");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[33]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k806 in loop in k797 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_808,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:124: rx");
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in ... */
static void C_ccall f_612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_612,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("../utils.scm:96: print");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=lf[35];
av2[3]=t2;
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_615(2,av2);}}}

/* k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in ... */
static void C_ccall f_615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_615,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("../utils.scm:97: system");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* loop in k797 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_804,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_808,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:122: read-line");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* a730 in a724 in a712 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in ... */
static void C_ccall f_731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_731,2,av);}{
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

/* k815 in k806 in loop in k797 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_817,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace("../utils.scm:125: loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_804(t2,((C_word*)t0)[2]);}}

/* k451 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_453,2,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
C_trace("../utils.scm:63: string-append");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[15]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t2;
tp(5,av2);}}

/* k744 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in ... */
static void C_ccall f_746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_746,2,av);}
C_trace("../utils.scm:87: ##sys#print");
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a679 in a673 in a661 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in ... */
static void C_ccall f_680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_680,2,av);}{
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

/* a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in ... */
static void C_ccall f_689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_689,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_698,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:101: call-with-current-continuation");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}

/* k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_543,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[22]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#peek-c-string");
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* g102 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_462,3,t0,t1,t2);}
a=C_alloc(2);
if(C_truep(C_i_char_equalp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_char_equalp(t2,C_make_character(0)))){
C_trace("../utils.scm:69: error");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[16]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t1;
av2[2]=lf[11];
av2[3]=lf[17];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_547,2,av);}
a=C_alloc(8);
t2=t1;
t3=*((C_word*)lf[23]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_550,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#peek-c-string");
t5=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a718 in a712 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_719,2,av);}
C_trace("../utils.scm:102: delete-file*");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a709 in a703 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_710,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a712 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in ... */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_713,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_719,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:101: ##sys#call-with-values");{
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

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_utils_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_utils_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(419))){
C_save(t1);
C_rereclaim2(419*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,91);
lf[0]=C_h_intern(&lf[0],7, C_text("system\052"));
lf[1]=C_h_intern(&lf[1],9, C_text("\003syserror"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\0003shell invocation failed with non-zero return status"));
lf[3]=C_h_intern(&lf[3],6, C_text("system"));
lf[4]=C_h_intern(&lf[4],7, C_text("sprintf"));
lf[5]=C_h_intern(&lf[5],8, C_text("read-all"));
lf[6]=C_h_intern(&lf[6],18, C_text("\003sysstandard-input"));
lf[7]=C_h_intern(&lf[7],20, C_text("\003sysread-string/port"));
lf[8]=C_h_intern(&lf[8],20, C_text("with-input-from-file"));
lf[9]=C_h_intern(&lf[9],7, C_text("\000binary"));
lf[10]=C_h_intern(&lf[10],5, C_text("port\077"));
lf[11]=C_h_intern(&lf[11],2, C_text("qs"));
lf[12]=C_h_intern(&lf[12],7, C_text("mingw32"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002\042\042"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004\047\134\047\047"));
lf[15]=C_h_intern(&lf[15],13, C_text("string-append"));
lf[16]=C_h_intern(&lf[16],5, C_text("error"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376B\000\0004NUL character can not be represented in shell string"));
lf[18]=C_h_intern(&lf[18],3, C_text("map"));
lf[19]=C_h_intern(&lf[19],18, C_text("string-concatenate"));
lf[20]=C_h_intern(&lf[20],16, C_text("\003sysstring->list"));
lf[21]=C_h_intern(&lf[21],14, C_text("build-platform"));
lf[22]=C_h_intern(&lf[22],20, C_text("compile-file-options"));
lf[23]=C_h_intern(&lf[23],4, C_text("load"));
lf[24]=C_h_intern(&lf[24],12, C_text("compile-file"));
lf[25]=C_h_intern(&lf[25],8, C_text("\000options"));
lf[26]=C_h_intern(&lf[26],12, C_text("\000output-file"));
lf[27]=C_h_intern(&lf[27],8, C_text("\000verbose"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003csc"));
lf[29]=C_h_intern(&lf[29],5, C_text("abort"));
lf[30]=C_h_intern(&lf[30],12, C_text("delete-file\052"));
lf[31]=C_h_intern(&lf[31],22, C_text("with-exception-handler"));
lf[32]=C_h_intern(&lf[32],30, C_text("call-with-current-continuation"));
lf[33]=C_h_intern(&lf[33],7, C_text("on-exit"));
lf[34]=C_h_intern(&lf[34],5, C_text("print"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[36]=C_h_intern(&lf[36],17, C_text("get-output-string"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[39]=C_h_intern(&lf[39],9, C_text("\003sysprint"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 -o "));
lf[41]=C_h_intern(&lf[41],16, C_text("\003syswrite-char-0"));
lf[42]=C_h_intern(&lf[42],18, C_text("string-intersperse"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004 -s "));
lf[44]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\042"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[46]=C_h_intern(&lf[46],21, C_text("\003syscheck-output-port"));
lf[47]=C_h_intern(&lf[47],18, C_text("open-output-string"));
lf[48]=C_h_intern(&lf[48],21, C_text("create-temporary-file"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002so"));
lf[50]=C_h_intern(&lf[50],12, C_text("file-exists\077"));
lf[51]=C_h_intern(&lf[51],13, C_text("make-pathname"));
lf[52]=C_h_intern(&lf[52],15, C_text("\003sysget-keyword"));
lf[53]=C_h_intern(&lf[53],5, C_text("\000load"));
lf[54]=C_h_intern(&lf[54],16, C_text("scan-input-lines"));
lf[55]=C_h_intern(&lf[55],9, C_text("read-line"));
lf[56]=C_h_intern(&lf[56],14, C_text("irregex-search"));
lf[57]=C_h_intern(&lf[57],7, C_text("irregex"));
lf[58]=C_h_intern(&lf[58],10, C_text("yes-or-no\077"));
lf[59]=C_h_intern(&lf[59],8, C_text("\000default"));
lf[60]=C_h_intern(&lf[60],6, C_text("\000title"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005abort"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017CHICKEN Runtime"));
lf[65]=C_h_intern(&lf[65],17, C_text("\003sysmake-c-string"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[68]=C_h_intern(&lf[68],16, C_text("string-trim-both"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005abort"));
lf[72]=C_h_intern(&lf[72],19, C_text("\003sysstandard-output"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000$Please enter \042yes\042, \042no\042 or \042abort\042."));
lf[74]=C_h_intern(&lf[74],6, C_text("printf"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\033Please enter \042yes\042 or \042no\042."));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005abort"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[78]=C_h_intern(&lf[78],12, C_text("flush-output"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002] "));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006/abort"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010 (yes/no"));
lf[84]=C_h_intern(&lf[84],5, C_text("reset"));
lf[85]=C_h_intern(&lf[85],6, C_text("\000abort"));
lf[86]=C_h_intern(&lf[86],17, C_text("\003syspeek-c-string"));
lf[87]=C_h_intern(&lf[87],14, C_text("make-parameter"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016"));
lf[89]=C_h_intern(&lf[89],17, C_text("register-feature!"));
lf[90]=C_h_intern(&lf[90],5, C_text("utils"));
C_register_lf2(lf,91,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k831 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_833,2,av);}
a=C_alloc(5);
t2=t1;
t3=*((C_word*)lf[56]+1);
t4=((C_word*)t0)[2];
f_799(t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_834,a[2]=t3,a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));}

/* f_834 in k831 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_834,3,av);}
C_trace("../utils.scm:120: g222223");
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_573,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("../utils.scm:86: build-platform");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t3;
tp(2,av2);}}

/* k515 in map-loop96 in k482 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_517(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_517,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_492(t6,((C_word*)t0)[5],t5);}

/* a724 in a712 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_725,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_731,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:101: k180");
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

/* k999 in k996 in k993 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in ... */
static void C_ccall f_1001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1001,2,av);}
C_trace("../utils.scm:200: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_579,2,av);}
a=C_alloc(14);
t2=t1;
t3=t2;
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
C_trace("../utils.scm:87: ##sys#check-output-port");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[4];
tp(5,av2);}}

/* k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_585,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_769,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:89: qs");
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[13];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in ... */
static void C_ccall f_588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_588,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace("../utils.scm:87: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[43];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_1033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1033,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(((C_word*)t0)[5])?lf[81]:lf[82]);
C_trace("../utils.scm:188: ##sys#print");
t4=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_582,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(C_truep(((C_word*)t0)[9])?lf[44]:lf[45]);
C_trace("../utils.scm:87: ##sys#print");
t4=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_1030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1030,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("../utils.scm:188: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_777,2,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[12]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("../utils.scm:87: open-output-string");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[47]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[47]+1);
av2[1]=t4;
tp(2,av2);}}

/* k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_1027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1027,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("../utils.scm:188: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_1024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1024,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("../utils.scm:188: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1040 in k1037 in k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in ... */
static void C_ccall f_1042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1042,2,av);}
C_trace("../utils.scm:190: flush-output");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[78]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[78]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +13,c,4)))){
C_save_and_reclaim((void*)f_551,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+13);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_get_keyword(lf[25],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[26],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_561,a[2]=t3,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t5,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_789,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:80: ##sys#get-keyword");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[52]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t8;
av2[2]=lf[53];
av2[3]=t3;
av2[4]=t9;
tp(5,av2);}}

/* k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_550(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_550,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_mutate2((C_word*)lf[24]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_551,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate2((C_word*)lf[54]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_792,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[58]+1 /* (set! yes-or-no? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k785 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_787,2,av);}
C_trace("../utils.scm:84: file-exists?");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a788 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_789,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in ... */
static void C_ccall f_1036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1036,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:188: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1037 in k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in ... */
static void C_ccall f_1039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1039,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=*((C_word*)lf[72]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1048,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:189: ##sys#check-output-port");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[46]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[72]+1);
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[74];
tp(5,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1042(2,av2);}}}

/* k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_376,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_373,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_370,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k981 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_983,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:199: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k984 in k981 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in ... */
static void C_ccall f_986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_986,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:199: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[73];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1049 in k1046 in k1037 in k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in ... */
static void C_ccall f_1051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1051,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:189: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k987 in k984 in k981 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in ... */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_989,2,av);}
C_trace("../utils.scm:199: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k936 in get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_938,2,av);}
C_trace("../utils.scm:185: string-trim-both");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[68]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[68]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k756 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in ... */
static void C_ccall f_758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_758,2,av);}
C_trace("../utils.scm:87: ##sys#print");
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1046 in k1037 in k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in ... */
static void C_ccall f_1048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1048,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:189: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=C_make_character(91);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k752 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in ... */
static void C_ccall f_754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_754,2,av);}
C_trace("../utils.scm:87: ##sys#print");
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_379,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_382,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:36: register-feature!");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[89]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t2;
av2[2]=lf[90];
tp(3,av2);}}

/* k386 in system* in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_388,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_391,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:44: system");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* system* in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,4)))){
C_save_and_reclaim((void*)f_384,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_388,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[4]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_382(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_382,2,av);}
a=C_alloc(12);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_384,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[5]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_402,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[11]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_432,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:77: make-parameter");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[87]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t5;
av2[2]=lf[88];
tp(3,av2);}}

/* k993 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_995,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:200: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k996 in k993 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in ... */
static void C_ccall f_998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_998,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:200: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[75];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k767 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 in ... */
static void C_ccall f_769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_769,2,av);}
C_trace("../utils.scm:87: ##sys#print");
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k760 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in ... */
static void C_ccall f_762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_762,2,av);}
C_trace("../utils.scm:90: string-intersperse");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[42]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k1052 in k1049 in k1046 in k1037 in k1034 in k1031 in k1028 in k1025 in k1022 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in ... */
static void C_ccall f_1054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1054,2,av);}
C_trace("../utils.scm:189: ##sys#print");
t2=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a1069 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_1070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1070,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[84]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k634 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in ... */
static void C_ccall f_636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_636,2,av);}
C_trace("../utils.scm:104: g197");
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in ... */
static void C_ccall f_594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_594,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("../utils.scm:87: ##sys#write-char-0");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[41]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[10];
tp(4,av2);}}

/* k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in ... */
static void C_ccall f_597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_597,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_754,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:93: qs");
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in ... */
static void C_ccall f_591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_591,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_758,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_762,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[12])){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=((C_word*)t0)[12];
f_762(2,av2);}}
else{
C_trace("../utils.scm:92: compile-file-options");
t5=*((C_word*)lf[22]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in ... */
static void C_ccall f_606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_606,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_truep(((C_word*)t0)[9])?lf[37]:lf[38]);
C_trace("../utils.scm:87: ##sys#print");
t4=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in ... */
static void C_ccall f_609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_609,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("../utils.scm:87: get-output-string");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[36]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}

/* k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in ... */
static void C_ccall f_600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_600,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("../utils.scm:87: ##sys#print");
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[40];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in ... */
static void C_ccall f_603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_603,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_746,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[4]);
C_trace("../utils.scm:94: qs");
t5=*((C_word*)lf[11]+1);{
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

/* k655 in a652 in a646 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in ... */
static void C_ccall f_657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_657,2,av);}
C_trace("../utils.scm:108: abort");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a652 in a646 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_653,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_657,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:107: delete-file*");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[30]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in k545 in ... */
static void C_ccall f_627(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_627,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)t0)[2])){
t2=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[4]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_636,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_641,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:104: call-with-current-continuation");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[32]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k482 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_484(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_484,2,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[18]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_492,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li4),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_492(t7,t3,t1);}

/* a673 in a661 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_674,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_680,a[2]=t2,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:104: k193");
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

/* k670 in a667 in a661 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in ... */
static void C_ccall f_672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_672,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* read-all in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_402,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[6]+1):C_i_car(t2));
t5=t4;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_412,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:53: port?");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t6;
av2[2]=t5;
tp(3,av2);}}

/* map-loop96 in k482 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_492(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_492,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_517,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("../utils.scm:66: g102");
t5=((C_word*)t0)[4];
f_462(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k488 in k482 in k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_490,2,av);}
C_trace("../utils.scm:65: string-concatenate");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a646 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in ... */
static void C_ccall f_647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_647,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_653,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:104: k193");
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in ... */
static void C_ccall f_641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_641,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_647,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
C_trace("../utils.scm:104: with-exception-handler");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
tp(4,av2);}}

/* a703 in a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in ... */
static void C_ccall f_704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_704,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:101: k180");
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k565 in k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_567,2,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[28]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_573(2,av2);}}
else{
C_trace("../utils.scm:85: create-temporary-file");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[48]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[48]+1);
av2[1]=t4;
av2[2]=lf[49];
tp(3,av2);}}}

/* k410 in read-all in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_412,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
C_trace("read-string/port");
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_420,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:55: with-input-from-file");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=lf[9];
tp(5,av2);}}}

/* k559 in compile-file in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_561(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_561,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_get_keyword(lf[27],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_567,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:84: make-pathname");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[51]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
tp(4,av2);}}

/* k353 */
static void C_ccall f_355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_355,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k356 in k353 */
static void C_ccall f_358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_358,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_361,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k691 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in ... */
static void C_ccall f_693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_693,2,av);}
C_trace("../utils.scm:101: g184");
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a697 in a688 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in k548 in ... */
static void C_ccall f_698(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_698,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_704,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_713,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp);
C_trace("../utils.scm:101: with-exception-handler");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[31]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
tp(4,av2);}}

/* k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_887(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_887,2,t0,t1);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_889,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_943(t7,((C_word*)t0)[6]);}

/* k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_884,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_mk_bool(C_HAS_MESSAGE_BOX))){
t4=C_fudge(C_fix(4));
t5=t3;
f_887(t5,C_i_not(t4));}
else{
t4=t3;
f_887(t4,C_SCHEME_FALSE);}}

/* a419 in k410 in read-all in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_420,2,av);}
C_trace("read-string/port");
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=*((C_word*)lf[6]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_889(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_889,2,t0,t1);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:lf[64]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_916,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[6],lf[66]))){
t6=t5;
f_916(t6,C_fix(0));}
else{
t6=C_i_string_ci_equal_p(((C_word*)t0)[6],lf[67]);
t7=t5;
f_916(t7,(C_truep(t6)?C_fix(1):C_fix(2)));}}
else{
t6=t5;
f_916(t6,C_fix(3));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_938,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:185: read-line");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[55]+1));
C_word av2[2];
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k914 in get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_916(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_916,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=t1;
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_851,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
C_trace("../utils.scm:168: ##sys#make-c-string");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[65]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_851(2,av2);}}}

/* a667 in a661 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in ... */
static void C_ccall f_668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_668,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_672,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:109: load-file");
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* a661 in a640 in k625 in k616 in k613 in k610 in k607 in k604 in k601 in k598 in k595 in k592 in k589 in k586 in k583 in k580 in k577 in k775 in k571 in k565 in k559 in compile-file in ... */
static void C_ccall f_662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_662,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_674,a[2]=((C_word*)t0)[4],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
C_trace("../utils.scm:104: ##sys#call-with-values");{
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

/* k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_367,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_370,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k359 in k356 in k353 */
static void C_ccall f_361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_361,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_364,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k362 in k359 in k356 in k353 */
static void C_ccall f_364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_364,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k894 in get-input in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_896,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[61];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(t1,C_fix(1));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[62]:lf[63]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_432,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_436,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace("../utils.scm:60: build-platform");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[21]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_436(2,av2);}}}

/* k434 in qs in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_436(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_436,2,av);}
a=C_alloc(24);
t2=C_eqp(t1,lf[12]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=t3;
t5=C_eqp(t1,lf[12]);
t6=(C_truep(t5)?lf[13]:lf[14]);
t7=t6;
t8=C_a_i_string(&a,1,t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_453,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_462,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_484,a[2]=t10,a[3]=t13,a[4]=t15,a[5]=t14,tmp=(C_word)a,a+=6,tmp);
C_trace("string->list");
t17=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}

/* k975 in k951 in k948 in k945 in loop in k885 in k882 in yes-or-no? in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_977,2,av);}
C_trace("../utils.scm:201: loop");
t2=((C_word*)((C_word*)t0)[2])[1];
f_943(t2,((C_word*)t0)[3]);}

/* scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_ccall f_792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_792,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[6]+1):C_i_car(t3));
t6=t5;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_799,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(t2))){
t8=t7;
f_799(t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_833,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("../utils.scm:120: irregex");
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[57]+1));
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t8;
av2[2]=t2;
tp(3,av2);}}}

/* k797 in scan-input-lines in k548 in k545 in k541 in k380 in k377 in k374 in k371 in k368 in k365 in k362 in k359 in k356 in k353 */
static void C_fcall f_799(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_799,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_804,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_804(t6,((C_word*)t0)[3]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[113] = {
{C_text("f_947:_2e_2e_2futils_2escm"),(void*)f_947},
{C_text("f_943:_2e_2e_2futils_2escm"),(void*)f_943},
{C_text("f_391:_2e_2e_2futils_2escm"),(void*)f_391},
{C_text("f_953:_2e_2e_2futils_2escm"),(void*)f_953},
{C_text("f_950:_2e_2e_2futils_2escm"),(void*)f_950},
{C_text("f_855:_2e_2e_2futils_2escm"),(void*)f_855},
{C_text("f_851:_2e_2e_2futils_2escm"),(void*)f_851},
{C_text("f_874:_2e_2e_2futils_2escm"),(void*)f_874},
{C_text("f_618:_2e_2e_2futils_2escm"),(void*)f_618},
{C_text("f_808:_2e_2e_2futils_2escm"),(void*)f_808},
{C_text("f_612:_2e_2e_2futils_2escm"),(void*)f_612},
{C_text("f_615:_2e_2e_2futils_2escm"),(void*)f_615},
{C_text("f_804:_2e_2e_2futils_2escm"),(void*)f_804},
{C_text("f_731:_2e_2e_2futils_2escm"),(void*)f_731},
{C_text("f_817:_2e_2e_2futils_2escm"),(void*)f_817},
{C_text("f_453:_2e_2e_2futils_2escm"),(void*)f_453},
{C_text("f_746:_2e_2e_2futils_2escm"),(void*)f_746},
{C_text("f_680:_2e_2e_2futils_2escm"),(void*)f_680},
{C_text("f_689:_2e_2e_2futils_2escm"),(void*)f_689},
{C_text("f_543:_2e_2e_2futils_2escm"),(void*)f_543},
{C_text("f_462:_2e_2e_2futils_2escm"),(void*)f_462},
{C_text("f_547:_2e_2e_2futils_2escm"),(void*)f_547},
{C_text("f_719:_2e_2e_2futils_2escm"),(void*)f_719},
{C_text("f_710:_2e_2e_2futils_2escm"),(void*)f_710},
{C_text("f_713:_2e_2e_2futils_2escm"),(void*)f_713},
{C_text("toplevel:_2e_2e_2futils_2escm"),(void*)C_utils_toplevel},
{C_text("f_833:_2e_2e_2futils_2escm"),(void*)f_833},
{C_text("f_834:_2e_2e_2futils_2escm"),(void*)f_834},
{C_text("f_573:_2e_2e_2futils_2escm"),(void*)f_573},
{C_text("f_517:_2e_2e_2futils_2escm"),(void*)f_517},
{C_text("f_725:_2e_2e_2futils_2escm"),(void*)f_725},
{C_text("f_1001:_2e_2e_2futils_2escm"),(void*)f_1001},
{C_text("f_579:_2e_2e_2futils_2escm"),(void*)f_579},
{C_text("f_585:_2e_2e_2futils_2escm"),(void*)f_585},
{C_text("f_588:_2e_2e_2futils_2escm"),(void*)f_588},
{C_text("f_1033:_2e_2e_2futils_2escm"),(void*)f_1033},
{C_text("f_582:_2e_2e_2futils_2escm"),(void*)f_582},
{C_text("f_1030:_2e_2e_2futils_2escm"),(void*)f_1030},
{C_text("f_777:_2e_2e_2futils_2escm"),(void*)f_777},
{C_text("f_1027:_2e_2e_2futils_2escm"),(void*)f_1027},
{C_text("f_1024:_2e_2e_2futils_2escm"),(void*)f_1024},
{C_text("f_1042:_2e_2e_2futils_2escm"),(void*)f_1042},
{C_text("f_551:_2e_2e_2futils_2escm"),(void*)f_551},
{C_text("f_550:_2e_2e_2futils_2escm"),(void*)f_550},
{C_text("f_787:_2e_2e_2futils_2escm"),(void*)f_787},
{C_text("f_789:_2e_2e_2futils_2escm"),(void*)f_789},
{C_text("f_1036:_2e_2e_2futils_2escm"),(void*)f_1036},
{C_text("f_1039:_2e_2e_2futils_2escm"),(void*)f_1039},
{C_text("f_376:_2e_2e_2futils_2escm"),(void*)f_376},
{C_text("f_373:_2e_2e_2futils_2escm"),(void*)f_373},
{C_text("f_370:_2e_2e_2futils_2escm"),(void*)f_370},
{C_text("f_983:_2e_2e_2futils_2escm"),(void*)f_983},
{C_text("f_986:_2e_2e_2futils_2escm"),(void*)f_986},
{C_text("f_1051:_2e_2e_2futils_2escm"),(void*)f_1051},
{C_text("f_989:_2e_2e_2futils_2escm"),(void*)f_989},
{C_text("f_938:_2e_2e_2futils_2escm"),(void*)f_938},
{C_text("f_758:_2e_2e_2futils_2escm"),(void*)f_758},
{C_text("f_1048:_2e_2e_2futils_2escm"),(void*)f_1048},
{C_text("f_754:_2e_2e_2futils_2escm"),(void*)f_754},
{C_text("f_379:_2e_2e_2futils_2escm"),(void*)f_379},
{C_text("f_388:_2e_2e_2futils_2escm"),(void*)f_388},
{C_text("f_384:_2e_2e_2futils_2escm"),(void*)f_384},
{C_text("f_382:_2e_2e_2futils_2escm"),(void*)f_382},
{C_text("f_995:_2e_2e_2futils_2escm"),(void*)f_995},
{C_text("f_998:_2e_2e_2futils_2escm"),(void*)f_998},
{C_text("f_769:_2e_2e_2futils_2escm"),(void*)f_769},
{C_text("f_762:_2e_2e_2futils_2escm"),(void*)f_762},
{C_text("f_1054:_2e_2e_2futils_2escm"),(void*)f_1054},
{C_text("f_1070:_2e_2e_2futils_2escm"),(void*)f_1070},
{C_text("f_636:_2e_2e_2futils_2escm"),(void*)f_636},
{C_text("f_594:_2e_2e_2futils_2escm"),(void*)f_594},
{C_text("f_597:_2e_2e_2futils_2escm"),(void*)f_597},
{C_text("f_591:_2e_2e_2futils_2escm"),(void*)f_591},
{C_text("f_606:_2e_2e_2futils_2escm"),(void*)f_606},
{C_text("f_609:_2e_2e_2futils_2escm"),(void*)f_609},
{C_text("f_600:_2e_2e_2futils_2escm"),(void*)f_600},
{C_text("f_603:_2e_2e_2futils_2escm"),(void*)f_603},
{C_text("f_657:_2e_2e_2futils_2escm"),(void*)f_657},
{C_text("f_653:_2e_2e_2futils_2escm"),(void*)f_653},
{C_text("f_627:_2e_2e_2futils_2escm"),(void*)f_627},
{C_text("f_484:_2e_2e_2futils_2escm"),(void*)f_484},
{C_text("f_674:_2e_2e_2futils_2escm"),(void*)f_674},
{C_text("f_672:_2e_2e_2futils_2escm"),(void*)f_672},
{C_text("f_402:_2e_2e_2futils_2escm"),(void*)f_402},
{C_text("f_492:_2e_2e_2futils_2escm"),(void*)f_492},
{C_text("f_490:_2e_2e_2futils_2escm"),(void*)f_490},
{C_text("f_647:_2e_2e_2futils_2escm"),(void*)f_647},
{C_text("f_641:_2e_2e_2futils_2escm"),(void*)f_641},
{C_text("f_704:_2e_2e_2futils_2escm"),(void*)f_704},
{C_text("f_567:_2e_2e_2futils_2escm"),(void*)f_567},
{C_text("f_412:_2e_2e_2futils_2escm"),(void*)f_412},
{C_text("f_561:_2e_2e_2futils_2escm"),(void*)f_561},
{C_text("f_355:_2e_2e_2futils_2escm"),(void*)f_355},
{C_text("f_358:_2e_2e_2futils_2escm"),(void*)f_358},
{C_text("f_693:_2e_2e_2futils_2escm"),(void*)f_693},
{C_text("f_698:_2e_2e_2futils_2escm"),(void*)f_698},
{C_text("f_887:_2e_2e_2futils_2escm"),(void*)f_887},
{C_text("f_884:_2e_2e_2futils_2escm"),(void*)f_884},
{C_text("f_420:_2e_2e_2futils_2escm"),(void*)f_420},
{C_text("f_889:_2e_2e_2futils_2escm"),(void*)f_889},
{C_text("f_916:_2e_2e_2futils_2escm"),(void*)f_916},
{C_text("f_668:_2e_2e_2futils_2escm"),(void*)f_668},
{C_text("f_662:_2e_2e_2futils_2escm"),(void*)f_662},
{C_text("f_367:_2e_2e_2futils_2escm"),(void*)f_367},
{C_text("f_361:_2e_2e_2futils_2escm"),(void*)f_361},
{C_text("f_364:_2e_2e_2futils_2escm"),(void*)f_364},
{C_text("f_896:_2e_2e_2futils_2escm"),(void*)f_896},
{C_text("f_432:_2e_2e_2futils_2escm"),(void*)f_432},
{C_text("f_436:_2e_2e_2futils_2escm"),(void*)f_436},
{C_text("f_977:_2e_2e_2futils_2escm"),(void*)f_977},
{C_text("f_792:_2e_2e_2futils_2escm"),(void*)f_792},
{C_text("f_799:_2e_2e_2futils_2escm"),(void*)f_799},
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
S|  printf		4
S|  sprintf		1
S|  map		1
o|eliminated procedure checks: 32 
o|Removed `not' forms: 3 
o|contracted procedure: k778 
o|contracted procedure: k812 
o|contracted procedure: "(../utils.scm:173) dialog239" 
o|contracted procedure: k917 
o|propagated global variable: out312316 ##sys#standard-output 
o|propagated global variable: out320324 ##sys#standard-output 
o|propagated global variable: out291295 ##sys#standard-output 
o|propagated global variable: out281285 ##sys#standard-output 
o|replaced variables: 124 
o|removed binding forms: 61 
o|converted assignments to bindings: (get-input265) 
o|simplifications: ((let . 1)) 
o|replaced variables: 4 
o|removed binding forms: 100 
o|replaced variables: 1 
o|removed binding forms: 3 
o|removed binding forms: 1 
o|simplifications: ((if . 15) (##core#call . 53)) 
o|  call simplifications:
o|    ##sys#fudge
o|    not
o|    string=?
o|    string-ci=?	5
o|    ##sys#foreign-string-argument	2
o|    ##sys#foreign-fixnum-argument
o|    eqv?	2
o|    procedure?
o|    eof-object?	2
o|    ##sys#get-keyword	5
o|    ##sys#call-with-values	2
o|    ##sys#apply	2
o|    eq?	3
o|    string->list
o|    ##sys#check-list
o|    pair?
o|    cons	2
o|    ##sys#setslot
o|    ##sys#slot	3
o|    char=?	2
o|    string	3
o|    null?	3
o|    car	3
o|    read-string	2
o|    apply
o|    zero?	2
o|contracted procedure: k395 
o|contracted procedure: k425 
o|contracted procedure: k404 
o|contracted procedure: k528 
o|contracted procedure: k437 
o|contracted procedure: k525 
o|contracted procedure: k440 
o|contracted procedure: k447 
o|contracted procedure: k455 
o|contracted procedure: k459 
o|contracted procedure: k467 
o|contracted procedure: k473 
o|contracted procedure: k485 
o|contracted procedure: k497 
o|contracted procedure: k500 
o|contracted procedure: k503 
o|contracted procedure: k511 
o|contracted procedure: k519 
o|contracted procedure: k531 
o|contracted procedure: k553 
o|contracted procedure: k556 
o|contracted procedure: k562 
o|contracted procedure: k568 
o|contracted procedure: k574 
o|contracted procedure: k622 
o|contracted procedure: k631 
o|contracted procedure: k740 
o|contracted procedure: k748 
o|contracted procedure: k771 
o|contracted procedure: k839 
o|contracted procedure: k794 
o|contracted procedure: k825 
o|contracted procedure: k828 
o|contracted procedure: k876 
o|contracted procedure: k879 
o|contracted procedure: k900 
o|contracted procedure: k906 
o|contracted procedure: k910 
o|contracted procedure: k857 
o|contracted procedure: k864 
o|contracted procedure: k871 
o|contracted procedure: k923 
o|contracted procedure: k929 
o|contracted procedure: k957 
o|contracted procedure: k963 
o|contracted procedure: k969 
o|contracted procedure: k1008 
o|contracted procedure: k1015 
o|contracted procedure: k1059 
o|contracted procedure: k1066 
o|simplifications: ((let . 10)) 
o|removed binding forms: 50 
o|replaced variables: 20 
o|removed binding forms: 11 
o|customizable procedures: (k885 get-input265 k951 loop280 k914 k797 loop231 g102111 map-loop96118) 
o|calls to known targets: 27 
o|fast box initializations: 5 
*/
/* end of file */

/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:51
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: utils.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -explicit-use -no-trace -output-file utils.c
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

static C_TLS C_word lf[89];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,25),40,115,121,115,116,101,109,42,32,102,115,116,114,54,52,32,46,32,97,114,103,115,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,6),40,97,54,49,48,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,97,108,108,32,46,32,102,105,108,101,54,57,41,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,11),40,103,49,48,50,32,99,49,49,51,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,57,54,32,103,49,48,56,49,49,57,41,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,113,115,32,115,116,114,56,53,32,46,32,116,109,112,56,52,56,54,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,6),40,97,56,51,57,41,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,12),40,97,56,51,51,32,101,120,50,48,48,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,53,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,97,56,54,49,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,20),40,116,109,112,50,53,52,56,32,97,114,103,115,49,57,52,50,48,51,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,97,56,52,56,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,14),40,97,56,50,55,32,107,49,57,51,49,57,57,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,97,56,57,56,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,12),40,97,56,57,50,32,101,120,49,56,55,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,53,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,6),40,97,57,49,52,41,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,116,109,112,50,53,52,54,32,97,114,103,115,49,56,49,49,56,56,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,6),40,97,57,48,49,41,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,14),40,97,56,56,54,32,107,49,56,48,49,56,54,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,6),40,97,56,55,55,41,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,6),40,97,57,56,48,41,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,111,109,112,105,108,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,49,51,54,32,46,32,116,109,112,49,51,53,49,51,55,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,19),40,102,95,49,48,50,54,32,103,50,50,54,50,50,55,50,51,48,41,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,36),40,115,99,97,110,45,105,110,112,117,116,45,108,105,110,101,115,32,114,120,50,49,49,32,46,32,116,109,112,50,49,48,50,49,50,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,11),40,103,101,116,45,105,110,112,117,116,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,7),40,97,49,50,54,53,41,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,31),40,121,101,115,45,111,114,45,110,111,63,32,115,116,114,50,53,56,32,46,32,116,109,112,50,53,55,50,53,57,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1049 */
C_regparm static C_word C_fcall stub244(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_truep(C_a3);
C_r=C_fix((C_word)C_confirmation_dialog(t0,t1,t2,t3));
return C_r;}

C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word *av) C_noret;
C_noret_decl(f_679)
static void C_fcall f_679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word *av) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word *av) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word *av) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word *av) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word *av) C_noret;
C_noret_decl(f_653)
static void C_fcall f_653(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1112)
static void C_fcall f_1112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_fcall f_1081(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word *av) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word *av) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word *av) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word *av) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word *av) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_1139)
static void C_fcall f_1139(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word *av) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word *av) C_noret;
C_noret_decl(f_961)
static void C_ccall f_961(C_word c,C_word *av) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word *av) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word *av) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word *av) C_noret;
C_noret_decl(f_560)
static void C_ccall f_560(C_word c,C_word *av) C_noret;
C_noret_decl(f_566)
static void C_ccall f_566(C_word c,C_word *av) C_noret;
C_noret_decl(f_569)
static void C_ccall f_569(C_word c,C_word *av) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word *av) C_noret;
C_noret_decl(f_1079)
static void C_fcall f_1079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_fcall f_996(C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_fcall f_991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word *av) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word *av) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word *av) C_noret;
C_noret_decl(f_557)
static void C_ccall f_557(C_word c,C_word *av) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word *av) C_noret;
C_noret_decl(f_1043)
static void C_ccall f_1043(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word *av) C_noret;
C_noret_decl(f_904)
static void C_fcall f_904(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word *av) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word *av) C_noret;
C_noret_decl(f_909)
static void C_fcall f_909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word *av) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word *av) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word *av) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word *av) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word *av) C_noret;
C_noret_decl(f_754)
static void C_ccall f_754(C_word c,C_word *av) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word *av) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_fcall f_851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word *av) C_noret;
C_noret_decl(f_856)
static void C_fcall f_856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word *av) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word *av) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word *av) C_noret;
C_noret_decl(f_581)
static void C_ccall f_581(C_word c,C_word *av) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word *av) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word *av) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word *av) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word *av) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word *av) C_noret;
C_noret_decl(f_578)
static void C_ccall f_578(C_word c,C_word *av) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word *av) C_noret;
C_noret_decl(f_748)
static void C_ccall f_748(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word *av) C_noret;
C_noret_decl(f_1194)
static void C_ccall f_1194(C_word c,C_word *av) C_noret;
C_noret_decl(f_734)
static void C_ccall f_734(C_word c,C_word *av) C_noret;
C_noret_decl(f_730)
static void C_ccall f_730(C_word c,C_word *av) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word *av) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word *av) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word *av) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word *av) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word *av) C_noret;
C_noret_decl(f_1149)
static void C_fcall f_1149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word *av) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word *av) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word *av) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word *av) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word *av) C_noret;
C_noret_decl(f_704)
static void C_ccall f_704(C_word c,C_word *av) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word *av) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word *av) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word *av) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word *av) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word *av) C_noret;

C_noret_decl(trf_679)
static void C_ccall trf_679(C_word c,C_word *av) C_noret;
static void C_ccall trf_679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_679(t0,t1,t2);}

C_noret_decl(trf_653)
static void C_ccall trf_653(C_word c,C_word *av) C_noret;
static void C_ccall trf_653(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_653(t0,t1,t2);}

C_noret_decl(trf_1112)
static void C_ccall trf_1112(C_word c,C_word *av) C_noret;
static void C_ccall trf_1112(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1112(t0,t1);}

C_noret_decl(trf_1081)
static void C_ccall trf_1081(C_word c,C_word *av) C_noret;
static void C_ccall trf_1081(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1081(t0,t1);}

C_noret_decl(trf_1139)
static void C_ccall trf_1139(C_word c,C_word *av) C_noret;
static void C_ccall trf_1139(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1139(t0,t1);}

C_noret_decl(trf_1079)
static void C_ccall trf_1079(C_word c,C_word *av) C_noret;
static void C_ccall trf_1079(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1079(t0,t1);}

C_noret_decl(trf_996)
static void C_ccall trf_996(C_word c,C_word *av) C_noret;
static void C_ccall trf_996(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_996(t0,t1);}

C_noret_decl(trf_991)
static void C_ccall trf_991(C_word c,C_word *av) C_noret;
static void C_ccall trf_991(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_991(t0,t1);}

C_noret_decl(trf_904)
static void C_ccall trf_904(C_word c,C_word *av) C_noret;
static void C_ccall trf_904(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_904(t0,t1);}

C_noret_decl(trf_909)
static void C_ccall trf_909(C_word c,C_word *av) C_noret;
static void C_ccall trf_909(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_909(t0,t1,t2);}

C_noret_decl(trf_851)
static void C_ccall trf_851(C_word c,C_word *av) C_noret;
static void C_ccall trf_851(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_851(t0,t1);}

C_noret_decl(trf_856)
static void C_ccall trf_856(C_word c,C_word *av) C_noret;
static void C_ccall trf_856(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_856(t0,t1,t2);}

C_noret_decl(trf_1149)
static void C_ccall trf_1149(C_word c,C_word *av) C_noret;
static void C_ccall trf_1149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1149(t0,t1);}

/* k821 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in ... */
static void C_ccall f_823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_823,2,av);}
/* utils.scm:104: g197 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* map-loop96 in k672 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_679(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_679,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_704,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* utils.scm:66: g102 */
t5=((C_word*)t0)[4];
f_653(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1183 in k1180 in k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1185,2,av);}
/* utils.scm:199: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1180 in k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1182,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:199: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[72];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k944 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 in ... */
static void C_ccall f_946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_946,2,av);}
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);{
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

/* k1248 in k1245 in k1233 in k1230 in k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1250,2,av);}
/* utils.scm:189: ##sys#print */
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1171 in k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1173,2,av);}
/* utils.scm:201: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1139(t2,((C_word*)t0)[3]);}

/* k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in ... */
static void C_ccall f_814(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_814,2,av);}
a=C_alloc(8);
if(C_truep(((C_word*)t0)[2])){
t2=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:((C_word*)t0)[4]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_828,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:104: call-with-current-continuation */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g102 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_653(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_653,3,t0,t1,t2);}
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
/* utils.scm:69: error */
t4=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[11];
av2[3]=lf[17];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k1110 in get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_1112(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_1112,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[4];
t5=t1;
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1043,a[2]=t5,a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t8=C_i_foreign_string_argumentp(t3);
/* utils.scm:168: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[63]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t7;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_1043(2,av2);}}}

/* get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_1081(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1081,2,t0,t1);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1088,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:lf[62]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1112,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(C_i_string_ci_equal_p(((C_word*)t0)[6],lf[64]))){
t6=t5;
f_1112(t6,C_fix(0));}
else{
t6=C_i_string_ci_equal_p(((C_word*)t0)[6],lf[65]);
t7=t5;
f_1112(t7,(C_truep(t6)?C_fix(1):C_fix(2)));}}
else{
t6=t5;
f_1112(t6,C_fix(3));}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1134,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:185: read-line */
t3=*((C_word*)lf[53]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1086 in get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1088,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(t1,C_fix(1));
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(C_truep(t3)?lf[60]:lf[61]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k880 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in ... */
static void C_ccall f_882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_882,2,av);}
/* utils.scm:101: g184 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k642 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_644,2,av);}
a=C_alloc(2);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
/* utils.scm:63: string-append */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in ... */
static void C_ccall f_887(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_887,3,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_893,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li18),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:101: with-exception-handler */
t5=*((C_word*)lf[30]+1);{
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

/* a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in ... */
static void C_ccall f_878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_878,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:101: call-with-current-continuation */
t4=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k871 in a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_ccall f_873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_873,2,av);}
a=C_alloc(3);
/* tmp2548 */
t2=((C_word*)t0)[2];
f_856(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k977 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_979,2,av);}
/* utils.scm:84: file-exists? */
t2=*((C_word*)lf[48]+1);{
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

/* loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_1139(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_1139,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1143,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1143(2,av2);}}
else{
t3=*((C_word*)lf[70]+1);
t4=*((C_word*)lf[70]+1);
t5=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1223,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:188: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t6;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[70]+1);
tp(4,av2);}}}

/* k1132 in get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1134,2,av);}
/* utils.scm:185: string-trim-both */
t2=*((C_word*)lf[66]+1);{
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

/* k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in ... */
static void C_ccall f_805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_805,2,av);}
a=C_alloc(11);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_814(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_878,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:100: on-exit */
t5=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in ... */
static void C_ccall f_802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_802,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* utils.scm:97: system */
t3=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k959 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_961,2,av);}
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);{
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

/* k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_969,2,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[12]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* utils.scm:87: open-output-string */
t5=*((C_word*)lf[45]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_623,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_627,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* utils.scm:60: build-platform */
t5=*((C_word*)lf[20]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_car(t3);
f_627(2,av2);}}}

/* scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_984,c,av);}
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
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_991,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(t2))){
t8=t7;
f_991(t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:120: irregex */
t9=*((C_word*)lf[55]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* a980 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_981,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k561 in k558 in k555 in k552 */
static void C_ccall f_563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_563,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k558 in k555 in k552 */
static void C_ccall f_560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_560,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_566,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_569,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:36: register-feature! */
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1076,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_mk_bool(C_HAS_MESSAGE_BOX))){
t4=C_fudge(C_fix(4));
t5=t3;
f_1079(t5,C_i_not(t4));}
else{
t4=t3;
f_1079(t4,C_SCHEME_FALSE);}}

/* k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_1079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_1079,2,t0,t1);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1081,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_1139(t7,((C_word*)t0)[6]);}

/* loop in k989 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_996(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_996,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1000,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm:122: read-line */
t3=*((C_word*)lf[53]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k989 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_991(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_991,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_996,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li23),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_996(t6,((C_word*)t0)[3]);}

/* a610 in k601 in read-all in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_611,2,av);}
/* read-string/port */
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

/* k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_627(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_627,2,av);}
a=C_alloc(24);
t2=C_eqp(t1,lf[12]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=t3;
t5=C_eqp(t1,lf[12]);
t6=(C_truep(t5)?lf[13]:lf[14]);
t7=t6;
t8=C_a_i_string(&a,1,t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_644,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_653,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_674,a[2]=t10,a[3]=t13,a[4]=t15,a[5]=t14,tmp=(C_word)a,a+=6,tmp);
/* string->list */
t17=*((C_word*)lf[19]+1);{
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

/* k936 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in ... */
static void C_ccall f_938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_938,2,av);}
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);{
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

/* k555 in k552 */
static void C_ccall f_557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_557,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k552 */
static void C_ccall f_554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_554,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1041 in k1110 in get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1043,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_i_foreign_string_argumentp(((C_word*)t0)[5]);
/* utils.scm:168: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[63]+1));
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=stub244(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,t4,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a901 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in ... */
static void C_ccall f_902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_902,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[2],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_909,a[2]=((C_word*)t0)[3],a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_926,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1545 */
t5=t2;
f_904(t5,t4);}

/* tmp1545 in a901 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_fcall f_904(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_904,2,t0,t1);}
/* utils.scm:102: delete-file* */
t2=*((C_word*)lf[29]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1045 in k1041 in k1110 in get-input in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1047,2,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=stub244(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,t2,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k601 in read-all in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_603,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
/* read-string/port */
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_611,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:55: with-input-from-file */
t3=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=lf[9];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* tmp2546 in a901 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_fcall f_909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_909,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_915,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:101: k180 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k924 in a901 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_ccall f_926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_926,2,av);}
a=C_alloc(3);
/* tmp2546 */
t2=((C_word*)t0)[2];
f_909(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k948 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_950,2,av);}
/* utils.scm:87: ##sys#print */
t2=*((C_word*)lf[36]+1);{
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

/* k952 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_954,2,av);}
/* utils.scm:90: string-intersperse */
t2=*((C_word*)lf[41]+1);{
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

/* k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_760,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:86: build-platform */
t4=*((C_word*)lf[20]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_766,2,av);}
a=C_alloc(14);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[4]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
/* utils.scm:87: ##sys#print */
t6=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[43];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* utils.scm:87: ##sys#print */
t6=*((C_word*)lf[36]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_754,2,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[27]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[3])){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_760(2,av2);}}
else{
/* utils.scm:85: create-temporary-file */
t5=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* a861 in tmp2548 in a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in ... */
static void C_ccall f_862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_862,2,av);}{
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

/* k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1226,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[81];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1223,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);{
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

/* tmp1547 in a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_fcall f_851(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_851,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_855,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:109: load-file */
t3=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k853 in tmp1547 in a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in ... */
static void C_ccall f_855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_855,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* tmp2548 in a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_fcall f_856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_856,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=t2,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
/* utils.scm:104: k193 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1229,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);{
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
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k1236 in k1233 in k1230 in k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1238,2,av);}
/* utils.scm:190: flush-output */
t2=*((C_word*)lf[76]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_1066,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_get_keyword(lf[57],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[58],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1076,a[2]=t7,a[3]=t2,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1266,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:168: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t8;
av2[2]=lf[83];
av2[3]=t3;
av2[4]=t9;
tp(5,av2);}}

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
if(C_unlikely(!C_demand_2(405))){
C_save(t1);
C_rereclaim2(405*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,89);
lf[0]=C_h_intern(&lf[0],7,"system\052");
lf[1]=C_h_intern(&lf[1],9,"\003syserror");
lf[2]=C_decode_literal(C_heaptop,"\376B\000\0003shell invocation failed with non-zero return status");
lf[3]=C_h_intern(&lf[3],6,"system");
lf[4]=C_h_intern(&lf[4],7,"sprintf");
lf[5]=C_h_intern(&lf[5],8,"read-all");
lf[6]=C_h_intern(&lf[6],18,"\003sysstandard-input");
lf[7]=C_h_intern(&lf[7],20,"\003sysread-string/port");
lf[8]=C_h_intern(&lf[8],20,"with-input-from-file");
lf[9]=C_h_intern(&lf[9],7,"\000binary");
lf[10]=C_h_intern(&lf[10],5,"port\077");
lf[11]=C_h_intern(&lf[11],2,"qs");
lf[12]=C_h_intern(&lf[12],7,"mingw32");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\002\042\042");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\004\047\134\047\047");
lf[15]=C_h_intern(&lf[15],13,"string-append");
lf[16]=C_h_intern(&lf[16],5,"error");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\0004NUL character can not be represented in shell string");
lf[18]=C_h_intern(&lf[18],18,"string-concatenate");
lf[19]=C_h_intern(&lf[19],16,"\003sysstring->list");
lf[20]=C_h_intern(&lf[20],14,"build-platform");
lf[21]=C_h_intern(&lf[21],20,"compile-file-options");
lf[22]=C_h_intern(&lf[22],4,"load");
lf[23]=C_h_intern(&lf[23],12,"compile-file");
lf[24]=C_h_intern(&lf[24],8,"\000options");
lf[25]=C_h_intern(&lf[25],12,"\000output-file");
lf[26]=C_h_intern(&lf[26],8,"\000verbose");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\003csc");
lf[28]=C_h_intern(&lf[28],5,"abort");
lf[29]=C_h_intern(&lf[29],12,"delete-file\052");
lf[30]=C_h_intern(&lf[30],22,"with-exception-handler");
lf[31]=C_h_intern(&lf[31],30,"call-with-current-continuation");
lf[32]=C_h_intern(&lf[32],7,"on-exit");
lf[33]=C_h_intern(&lf[33],5,"print");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[35]=C_h_intern(&lf[35],17,"get-output-string");
lf[36]=C_h_intern(&lf[36],9,"\003sysprint");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\004 -o ");
lf[40]=C_h_intern(&lf[40],16,"\003syswrite-char-0");
lf[41]=C_h_intern(&lf[41],18,"string-intersperse");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\004 -s ");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[45]=C_h_intern(&lf[45],18,"open-output-string");
lf[46]=C_h_intern(&lf[46],21,"create-temporary-file");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[48]=C_h_intern(&lf[48],12,"file-exists\077");
lf[49]=C_h_intern(&lf[49],13,"make-pathname");
lf[50]=C_h_intern(&lf[50],15,"\003sysget-keyword");
lf[51]=C_h_intern(&lf[51],5,"\000load");
lf[52]=C_h_intern(&lf[52],16,"scan-input-lines");
lf[53]=C_h_intern(&lf[53],9,"read-line");
lf[54]=C_h_intern(&lf[54],14,"irregex-search");
lf[55]=C_h_intern(&lf[55],7,"irregex");
lf[56]=C_h_intern(&lf[56],10,"yes-or-no\077");
lf[57]=C_h_intern(&lf[57],8,"\000default");
lf[58]=C_h_intern(&lf[58],6,"\000title");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\017CHICKEN Runtime");
lf[63]=C_h_intern(&lf[63],17,"\003sysmake-c-string");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[66]=C_h_intern(&lf[66],16,"string-trim-both");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\003yes");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[70]=C_h_intern(&lf[70],19,"\003sysstandard-output");
lf[71]=C_h_intern(&lf[71],6,"printf");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000$Please enter \042yes\042, \042no\042 or \042abort\042.");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\033Please enter \042yes\042 or \042no\042.");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\005abort");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[76]=C_h_intern(&lf[76],12,"flush-output");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002] ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\006/abort");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\010 (yes/no");
lf[82]=C_h_intern(&lf[82],5,"reset");
lf[83]=C_h_intern(&lf[83],6,"\000abort");
lf[84]=C_h_intern(&lf[84],17,"\003syspeek-c-string");
lf[85]=C_h_intern(&lf[85],14,"make-parameter");
lf[86]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\003-O2\376\003\000\000\002\376B\000\000\003-d2\376\377\016");
lf[87]=C_h_intern(&lf[87],17,"register-feature!");
lf[88]=C_h_intern(&lf[88],5,"utils");
C_register_lf2(lf,89,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1233 in k1230 in k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1235(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1235,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=*((C_word*)lf[70]+1);
t4=*((C_word*)lf[70]+1);
t5=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1247,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm:189: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t6;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[70]+1);
tp(4,av2);}}
else{
/* utils.scm:190: flush-output */
t3=*((C_word*)lf[76]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1230 in k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1232,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:188: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k579 in k576 in system* in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_581,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* utils.scm:46: ##sys#error */
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

/* k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in ... */
static void C_ccall f_796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_796,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* utils.scm:87: get-output-string */
t3=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in ... */
static void C_ccall f_793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_793,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[37];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[38];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in ... */
static void C_ccall f_790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_790,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_938,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* utils.scm:94: qs */
t4=*((C_word*)lf[11]+1);{
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
else{
/* utils.scm:94: qs */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_572(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_572,2,av);}
a=C_alloc(12);
t2=C_mutate2((C_word*)lf[0]+1 /* (set! system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_574,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate2((C_word*)lf[5]+1 /* (set! read-all ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate2((C_word*)lf[11]+1 /* (set! qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm:77: make-parameter */
t6=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[86];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* system* in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,4)))){
C_save_and_reclaim((void*)f_574,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_578,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
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

/* k576 in system* in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_578,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_581,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:44: system */
t4=*((C_word*)lf[3]+1);{
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

/* k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in ... */
static void C_ccall f_799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_799,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* utils.scm:96: print */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[34];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_802(2,av2);}}}

/* k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_748(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_748,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_i_get_keyword(lf[26],((C_word*)t0)[2],C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_754,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* utils.scm:84: make-pathname */
t7=*((C_word*)lf[49]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1023 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1025,2,av);}
a=C_alloc(5);
t2=t1;
t3=*((C_word*)lf[54]+1);
t4=((C_word*)t0)[2];
f_991(t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1026,a[2]=t3,a[3]=t2,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));}

/* f_1026 in k1023 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1026,3,av);}
/* utils.scm:120: g222223 */
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
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1192 in k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1194,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:200: ##sys#print */
t3=*((C_word*)lf[36]+1);{
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

/* k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_734,2,av);}
a=C_alloc(8);
t2=t1;
t3=*((C_word*)lf[22]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_737,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[84]+1);{
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

/* k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_730,2,av);}
a=C_alloc(6);
t2=C_mutate2((C_word*)lf[21]+1 /* (set! compile-file-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[84]+1);{
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

/* k1195 in k1192 in k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1197,2,av);}
/* utils.scm:200: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_737(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_737,2,av);}
a=C_alloc(12);
t2=t1;
t3=C_mutate2((C_word*)lf[23]+1 /* (set! compile-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li22),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate2((C_word*)lf[52]+1 /* (set! scan-input-lines ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate2((C_word*)lf[56]+1 /* (set! yes-or-no? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1066,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +13,c,4)))){
C_save_and_reclaim((void*)f_738,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+13);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=C_i_get_keyword(lf[24],t3,C_SCHEME_FALSE);
t5=t4;
t6=C_i_get_keyword(lf[25],t3,C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_748,a[2]=t3,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t5,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:80: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[50]+1));
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t8;
av2[2]=lf[51];
av2[3]=t3;
av2[4]=t9;
tp(5,av2);}}

/* a898 in a892 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_ccall f_899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_899,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a892 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in ... */
static void C_ccall f_893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_893,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_899,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* utils.scm:101: k180 */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1143,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm:191: get-input */
t3=((C_word*)t0)[6];
f_1081(t3,t2);}

/* read-all in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_593,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_603,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:53: port? */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_781,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* utils.scm:87: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[10];
tp(4,av2);}}

/* k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1146(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1146,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1149,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_eofp(((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,lf[74]);
t6=t4;
f_1149(t6,t5);}
else{
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_i_string_equal_p(lf[75],((C_word*)t3)[1]))){
t5=C_set_block_item(t3,0,((C_word*)t0)[5]);
t6=t4;
f_1149(t6,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1149(t6,t5);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t4;
f_1149(t6,t5);}}}

/* k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 in ... */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_787,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_784,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_946,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:93: qs */
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

/* k1147 in k1144 in k1141 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_fcall f_1149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1149,2,t0,t1);}
a=C_alloc(8);
if(C_truep(C_i_string_ci_equal_p(lf[67],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(lf[68],((C_word*)((C_word*)t0)[2])[1]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[4])?C_i_string_ci_equal_p(lf[69],((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* utils.scm:196: abort */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1173,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=*((C_word*)lf[70]+1);
t5=*((C_word*)lf[70]+1);
t6=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1182,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:199: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t7;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[70]+1);
tp(4,av2);}}
else{
t4=*((C_word*)lf[70]+1);
t5=*((C_word*)lf[70]+1);
t6=C_i_check_port_2(*((C_word*)lf[70]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[71]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1194,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm:200: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[40]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t7;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[70]+1);
tp(4,av2);}}}}}}

/* k998 in loop in k989 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1000,2,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:124: rx */
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
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* a848 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in ... */
static void C_ccall f_849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_849,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_856,a[2]=((C_word*)t0)[4],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_873,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1547 */
t5=t2;
f_851(t5,t4);}

/* a914 in tmp2546 in a901 in a886 in a877 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in ... */
static void C_ccall f_915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_915,2,av);}{
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

/* k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_772,2,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_961,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:89: qs */
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

/* k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_775,2,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* utils.scm:87: ##sys#print */
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_778,2,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_950,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_954,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[12])){
/* utils.scm:90: string-intersperse */
t5=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* utils.scm:92: compile-file-options */
t5=*((C_word*)lf[21]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1007 in k998 in loop in k989 in scan-input-lines in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1009,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* utils.scm:125: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_996(t2,((C_word*)t0)[2]);}}

/* a1265 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1266,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=*((C_word*)lf[82]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k842 in a839 in a833 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in ... */
static void C_ccall f_844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_844,2,av);}
/* utils.scm:108: abort */
t2=*((C_word*)lf[28]+1);{
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

/* a839 in a833 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in ... */
static void C_ccall f_840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_840,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_844,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:107: delete-file* */
t3=*((C_word*)lf[29]+1);{
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

/* k702 in map-loop96 in k672 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_704,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_679(t6,((C_word*)t0)[5],t5);}

/* a833 in a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in ... */
static void C_ccall f_834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_834,3,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_840,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* utils.scm:104: k193 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k672 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_674(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_674,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_679,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li4),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_679(t6,t2,t1);}

/* k675 in k672 in k625 in qs in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_677,2,av);}
/* utils.scm:65: string-concatenate */
t2=*((C_word*)lf[18]+1);{
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

/* a827 in k812 in k803 in k800 in k797 in k794 in k791 in k788 in k785 in k782 in k779 in k776 in k773 in k770 in k764 in k967 in k758 in k752 in k746 in compile-file in k735 in k732 in ... */
static void C_ccall f_828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_828,3,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_834,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li11),tmp=(C_word)a,a+=6,tmp);
/* utils.scm:104: with-exception-handler */
t5=*((C_word*)lf[30]+1);{
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

/* k1245 in k1233 in k1230 in k1227 in k1224 in k1221 in loop in k1077 in k1074 in yes-or-no? in k735 in k732 in k728 in k570 in k567 in k564 in k561 in k558 in k555 in k552 */
static void C_ccall f_1247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1247,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm:189: ##sys#print */
t3=*((C_word*)lf[36]+1);{
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

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[107] = {
{"f_823:utils_2escm",(void*)f_823},
{"f_679:utils_2escm",(void*)f_679},
{"f_1185:utils_2escm",(void*)f_1185},
{"f_1182:utils_2escm",(void*)f_1182},
{"f_946:utils_2escm",(void*)f_946},
{"f_1250:utils_2escm",(void*)f_1250},
{"f_1173:utils_2escm",(void*)f_1173},
{"f_814:utils_2escm",(void*)f_814},
{"f_653:utils_2escm",(void*)f_653},
{"f_1112:utils_2escm",(void*)f_1112},
{"f_1081:utils_2escm",(void*)f_1081},
{"f_1088:utils_2escm",(void*)f_1088},
{"f_882:utils_2escm",(void*)f_882},
{"f_644:utils_2escm",(void*)f_644},
{"f_887:utils_2escm",(void*)f_887},
{"f_878:utils_2escm",(void*)f_878},
{"f_873:utils_2escm",(void*)f_873},
{"f_979:utils_2escm",(void*)f_979},
{"f_1139:utils_2escm",(void*)f_1139},
{"f_1134:utils_2escm",(void*)f_1134},
{"f_805:utils_2escm",(void*)f_805},
{"f_802:utils_2escm",(void*)f_802},
{"f_961:utils_2escm",(void*)f_961},
{"f_969:utils_2escm",(void*)f_969},
{"f_623:utils_2escm",(void*)f_623},
{"f_984:utils_2escm",(void*)f_984},
{"f_981:utils_2escm",(void*)f_981},
{"f_563:utils_2escm",(void*)f_563},
{"f_560:utils_2escm",(void*)f_560},
{"f_566:utils_2escm",(void*)f_566},
{"f_569:utils_2escm",(void*)f_569},
{"f_1076:utils_2escm",(void*)f_1076},
{"f_1079:utils_2escm",(void*)f_1079},
{"f_996:utils_2escm",(void*)f_996},
{"f_991:utils_2escm",(void*)f_991},
{"f_611:utils_2escm",(void*)f_611},
{"f_627:utils_2escm",(void*)f_627},
{"f_938:utils_2escm",(void*)f_938},
{"f_557:utils_2escm",(void*)f_557},
{"f_554:utils_2escm",(void*)f_554},
{"f_1043:utils_2escm",(void*)f_1043},
{"f_902:utils_2escm",(void*)f_902},
{"f_904:utils_2escm",(void*)f_904},
{"f_1047:utils_2escm",(void*)f_1047},
{"f_603:utils_2escm",(void*)f_603},
{"f_909:utils_2escm",(void*)f_909},
{"f_926:utils_2escm",(void*)f_926},
{"f_950:utils_2escm",(void*)f_950},
{"f_954:utils_2escm",(void*)f_954},
{"f_760:utils_2escm",(void*)f_760},
{"f_766:utils_2escm",(void*)f_766},
{"f_754:utils_2escm",(void*)f_754},
{"f_862:utils_2escm",(void*)f_862},
{"f_1226:utils_2escm",(void*)f_1226},
{"f_1223:utils_2escm",(void*)f_1223},
{"f_851:utils_2escm",(void*)f_851},
{"f_855:utils_2escm",(void*)f_855},
{"f_856:utils_2escm",(void*)f_856},
{"f_1229:utils_2escm",(void*)f_1229},
{"f_1238:utils_2escm",(void*)f_1238},
{"f_1066:utils_2escm",(void*)f_1066},
{"toplevel:utils_2escm",(void*)C_utils_toplevel},
{"f_1235:utils_2escm",(void*)f_1235},
{"f_1232:utils_2escm",(void*)f_1232},
{"f_581:utils_2escm",(void*)f_581},
{"f_796:utils_2escm",(void*)f_796},
{"f_793:utils_2escm",(void*)f_793},
{"f_790:utils_2escm",(void*)f_790},
{"f_572:utils_2escm",(void*)f_572},
{"f_574:utils_2escm",(void*)f_574},
{"f_578:utils_2escm",(void*)f_578},
{"f_799:utils_2escm",(void*)f_799},
{"f_748:utils_2escm",(void*)f_748},
{"f_1025:utils_2escm",(void*)f_1025},
{"f_1026:utils_2escm",(void*)f_1026},
{"f_1194:utils_2escm",(void*)f_1194},
{"f_734:utils_2escm",(void*)f_734},
{"f_730:utils_2escm",(void*)f_730},
{"f_1197:utils_2escm",(void*)f_1197},
{"f_737:utils_2escm",(void*)f_737},
{"f_738:utils_2escm",(void*)f_738},
{"f_899:utils_2escm",(void*)f_899},
{"f_893:utils_2escm",(void*)f_893},
{"f_1143:utils_2escm",(void*)f_1143},
{"f_593:utils_2escm",(void*)f_593},
{"f_781:utils_2escm",(void*)f_781},
{"f_1146:utils_2escm",(void*)f_1146},
{"f_787:utils_2escm",(void*)f_787},
{"f_784:utils_2escm",(void*)f_784},
{"f_1149:utils_2escm",(void*)f_1149},
{"f_1000:utils_2escm",(void*)f_1000},
{"f_849:utils_2escm",(void*)f_849},
{"f_915:utils_2escm",(void*)f_915},
{"f_772:utils_2escm",(void*)f_772},
{"f_775:utils_2escm",(void*)f_775},
{"f_778:utils_2escm",(void*)f_778},
{"f_1009:utils_2escm",(void*)f_1009},
{"f_1266:utils_2escm",(void*)f_1266},
{"f_844:utils_2escm",(void*)f_844},
{"f_840:utils_2escm",(void*)f_840},
{"f_704:utils_2escm",(void*)f_704},
{"f_834:utils_2escm",(void*)f_834},
{"f_674:utils_2escm",(void*)f_674},
{"f_677:utils_2escm",(void*)f_677},
{"f_828:utils_2escm",(void*)f_828},
{"f_1247:utils_2escm",(void*)f_1247},
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
o|specializations:
o|  2 (eqv? (not float) *)
o|  2 (##sys#call-with-values (procedure () *) *)
o|  5 (##sys#check-output-port * * *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (char=? char char)
o|  2 (zero? fixnum)
(o e)|safe calls: 88 
o|Removed `not' forms: 3 
o|inlining procedure: k582 
o|inlining procedure: k582 
o|inlining procedure: k598 
o|inlining procedure: k598 
o|inlining procedure: k655 
o|inlining procedure: k655 
o|substituted constant variable: a665 
o|inlining procedure: k681 
o|inlining procedure: k681 
o|substituted constant variable: a768 
o|substituted constant variable: a769 
o|inlining procedure: k806 
o|merged explicitly consed rest parameter: args194203 
o|consed rest parameter at call site: tmp2548 1 
o|merged explicitly consed rest parameter: args181188 
o|consed rest parameter at call site: tmp2546 1 
o|inlining procedure: k806 
o|inlining procedure: k932 
o|inlining procedure: k932 
o|inlining procedure: k940 
o|inlining procedure: k940 
o|inlining procedure: k952 
o|inlining procedure: k952 
o|inlining procedure: k963 
o|inlining procedure: k963 
o|contracted procedure: k970 
o|contracted procedure: k1004 
o|inlining procedure: k1001 
o|inlining procedure: k1001 
o|inlining procedure: k1083 
o|inlining procedure: k1095 
o|inlining procedure: k1095 
o|substituted constant variable: a1102 
o|substituted constant variable: a1104 
o|contracted procedure: "(utils.scm:173) dialog239" 
o|contracted procedure: k1113 
o|inlining procedure: k1116 
o|inlining procedure: k1116 
o|inlining procedure: k1083 
o|inlining procedure: k1150 
o|inlining procedure: k1150 
o|inlining procedure: k1162 
o|inlining procedure: k1162 
o|propagated global variable: out312316 ##sys#standard-output 
o|substituted constant variable: a1178 
o|substituted constant variable: a1179 
o|propagated global variable: out312316 ##sys#standard-output 
o|propagated global variable: out320324 ##sys#standard-output 
o|substituted constant variable: a1190 
o|substituted constant variable: a1191 
o|propagated global variable: out320324 ##sys#standard-output 
o|inlining procedure: k1208 
o|inlining procedure: k1208 
o|propagated global variable: out281285 ##sys#standard-output 
o|substituted constant variable: a1219 
o|substituted constant variable: a1220 
o|propagated global variable: out291295 ##sys#standard-output 
o|substituted constant variable: a1243 
o|substituted constant variable: a1244 
o|inlining procedure: k1236 
o|propagated global variable: out291295 ##sys#standard-output 
o|inlining procedure: k1236 
o|inlining procedure: k1255 
o|inlining procedure: k1255 
o|propagated global variable: out281285 ##sys#standard-output 
o|replaced variables: 116 
o|removed binding forms: 54 
o|substituted constant variable: r8071277 
o|substituted constant variable: r9331278 
o|substituted constant variable: r9331278 
o|substituted constant variable: r9331280 
o|substituted constant variable: r9331280 
o|substituted constant variable: r9641290 
o|substituted constant variable: r9641290 
o|substituted constant variable: r9641292 
o|substituted constant variable: r9641292 
o|substituted constant variable: r10021294 
o|substituted constant variable: r10961297 
o|substituted constant variable: r10961298 
o|substituted constant variable: r11171299 
o|substituted constant variable: r11511302 
o|propagated global variable: out312316 ##sys#standard-output 
o|propagated global variable: out320324 ##sys#standard-output 
o|propagated global variable: out281285 ##sys#standard-output 
o|propagated global variable: out291295 ##sys#standard-output 
o|substituted constant variable: r12561318 
o|substituted constant variable: r12561318 
o|substituted constant variable: r12561320 
o|substituted constant variable: r12561320 
o|converted assignments to bindings: (get-input265) 
o|simplifications: ((let . 1)) 
o|replaced variables: 13 
o|removed binding forms: 122 
o|replaced variables: 1 
o|removed binding forms: 31 
o|inlining procedure: k1211 
o|removed binding forms: 1 
o|substituted constant variable: r12121343 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 10) (##core#call . 49)) 
o|  call simplifications:
o|    ##sys#fudge
o|    not
o|    string=?
o|    string-ci=?	5
o|    ##sys#foreign-string-argument	2
o|    ##sys#foreign-fixnum-argument
o|    procedure?
o|    eof-object?	2
o|    ##sys#get-keyword	5
o|    ##sys#apply	2
o|    string->list
o|    pair?
o|    cons	2
o|    ##sys#setslot
o|    ##sys#slot	3
o|    char=?
o|    string	3
o|    null?	3
o|    car	3
o|    read-string	2
o|    apply
o|    eq?	7
o|contracted procedure: k585 
o|contracted procedure: k616 
o|contracted procedure: k595 
o|contracted procedure: k715 
o|contracted procedure: k628 
o|contracted procedure: k712 
o|contracted procedure: k631 
o|contracted procedure: k638 
o|contracted procedure: k646 
o|contracted procedure: k650 
o|contracted procedure: k658 
o|contracted procedure: k684 
o|contracted procedure: k687 
o|contracted procedure: k690 
o|contracted procedure: k698 
o|contracted procedure: k706 
o|contracted procedure: k718 
o|contracted procedure: k740 
o|contracted procedure: k743 
o|contracted procedure: k749 
o|contracted procedure: k755 
o|contracted procedure: k761 
o|contracted procedure: k809 
o|contracted procedure: k818 
o|contracted procedure: k1031 
o|contracted procedure: k986 
o|contracted procedure: k1017 
o|contracted procedure: k1020 
o|contracted procedure: k1068 
o|contracted procedure: k1071 
o|contracted procedure: k1092 
o|contracted procedure: k1098 
o|contracted procedure: k1106 
o|contracted procedure: k1049 
o|contracted procedure: k1056 
o|contracted procedure: k1063 
o|contracted procedure: k1119 
o|contracted procedure: k1125 
o|contracted procedure: k1153 
o|contracted procedure: k1159 
o|contracted procedure: k1165 
o|contracted procedure: k1204 
o|contracted procedure: k1211 
o|contracted procedure: k1262 
o|simplifications: ((let . 10)) 
o|removed binding forms: 44 
o|inlining procedure: k1045 
o|replaced variables: 18 
o|substituted constant variable: r10461382 
o|substituted constant variable: r10461382 
o|removed binding forms: 10 
o|removed binding forms: 2 
o|customizable procedures: (k1077 get-input265 k1147 loop280 k1110 k989 loop231 tmp1545 tmp2546 tmp1547 tmp2548 g102111 map-loop96118) 
o|calls to known targets: 29 
o|fast box initializations: 5 
*/
/* end of file */

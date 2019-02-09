/* Generated from chicken-install.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: chicken-install.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -local -no-trace -output-file chicken-install.c
   used units: library eval chicken_2dsyntax srfi_2d1 posix data_2dstructures utils irregex ports extras srfi_2d13 files
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d13_toplevel)
C_externimport void C_ccall C_srfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[456];
static double C_possibly_force_alignment;


C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word *av) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word *av) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word *av) C_noret;
C_noret_decl(f_5641)
static void C_fcall f_5641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_fcall f_4988(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word *av) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word *av) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_fcall f_2685(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word *av) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word *av) C_noret;
C_noret_decl(f_6595)
static void C_ccall f_6595(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word *av) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word *av) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word *av) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word *av) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5042)
static void C_fcall f_5042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6829)
static void C_ccall f_6829(C_word c,C_word *av) C_noret;
C_noret_decl(f_2527)
static void C_fcall f_2527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f8110)
static void C_ccall f8110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6818)
static void C_ccall f_6818(C_word c,C_word *av) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word *av) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word *av) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word *av) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word *av) C_noret;
C_noret_decl(f_5018)
static void C_ccall f_5018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6170)
static void C_fcall f_6170(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word *av) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_fcall f_5026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word *av) C_noret;
C_noret_decl(f_5022)
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word *av) C_noret;
C_noret_decl(f_6802)
static void C_ccall f_6802(C_word c,C_word *av) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word *av) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word *av) C_noret;
C_noret_decl(f8133)
static void C_ccall f8133(C_word c,C_word *av) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word *av) C_noret;
C_noret_decl(f_6878)
static void C_ccall f_6878(C_word c,C_word *av) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word *av) C_noret;
C_noret_decl(f8148)
static void C_ccall f8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_fcall f_3241(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f8138)
static void C_ccall f8138(C_word c,C_word *av) C_noret;
C_noret_decl(f8191)
static void C_ccall f8191(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f8181)
static void C_ccall f8181(C_word c,C_word *av) C_noret;
C_noret_decl(f_4584)
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f8196)
static void C_ccall f8196(C_word c,C_word *av) C_noret;
C_noret_decl(f8171)
static void C_ccall f8171(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word *av) C_noret;
C_noret_decl(f8186)
static void C_ccall f8186(C_word c,C_word *av) C_noret;
C_noret_decl(f8161)
static void C_ccall f8161(C_word c,C_word *av) C_noret;
C_noret_decl(f8176)
static void C_ccall f8176(C_word c,C_word *av) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_2973)
static void C_fcall f_2973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word *av) C_noret;
C_noret_decl(f8166)
static void C_ccall f8166(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_6180)
static void C_ccall f_6180(C_word c,C_word *av) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443(C_word c,C_word *av) C_noret;
C_noret_decl(f_6430)
static void C_ccall f_6430(C_word c,C_word *av) C_noret;
C_noret_decl(f_6433)
static void C_ccall f_6433(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word *av) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word *av) C_noret;
C_noret_decl(f8143)
static void C_ccall f8143(C_word c,C_word *av) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word *av) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word *av) C_noret;
C_noret_decl(f8154)
static void C_ccall f8154(C_word c,C_word *av) C_noret;
C_noret_decl(f_7605)
static void C_ccall f_7605(C_word c,C_word *av) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word *av) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word *av) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word *av) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_5568)
static void C_fcall f_5568(C_word t0) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word *av) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6001)
static void C_ccall f_6001(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word *av) C_noret;
C_noret_decl(f_6024)
static void C_ccall f_6024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word *av) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word *av) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word *av) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word *av) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word *av) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_6392)
static void C_fcall f_6392(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7137)
static void C_ccall f_7137(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void C_fcall f_3605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word *av) C_noret;
C_noret_decl(f_3617)
static void C_fcall f_3617(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3629)
static void C_fcall f_3629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word *av) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word *av) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5376)
static void C_ccall f_5376(C_word c,C_word *av) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_fcall f_5920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word *av) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word *av) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word *av) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5967)
static void C_fcall f_5967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word *av) C_noret;
C_noret_decl(f_6384)
static void C_ccall f_6384(C_word c,C_word *av) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5964)
static void C_fcall f_5964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word *av) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word *av) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word *av) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word *av) C_noret;
C_noret_decl(f_5352)
static void C_fcall f_5352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word *av) C_noret;
C_noret_decl(f_3303)
static void C_fcall f_3303(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_5905)
static void C_ccall f_5905(C_word c,C_word *av) C_noret;
C_noret_decl(f_5903)
static void C_ccall f_5903(C_word c,C_word *av) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word *av) C_noret;
C_noret_decl(f_7597)
static void C_ccall f_7597(C_word c,C_word *av) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_fcall f_4204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_7578)
static void C_ccall f_7578(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_7572)
static void C_ccall f_7572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_fcall f_3124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word *av) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word *av) C_noret;
C_noret_decl(f_7563)
static void C_ccall f_7563(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word *av) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word *av) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word *av) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word *av) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_7553)
static void C_ccall f_7553(C_word c,C_word *av) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word *av) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_7298)
static void C_fcall f_7298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_6365)
static void C_ccall f_6365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3114)
static void C_fcall f_3114(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word *av) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word *av) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word *av) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word *av) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word *av) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_5981)
static void C_ccall f_5981(C_word c,C_word *av) C_noret;
C_noret_decl(f_5720)
static C_word C_fcall f_5720(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static C_word C_fcall f_5739(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word *av) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word *av) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word *av) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word *av) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7462)
static void C_ccall f_7462(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6462)
static void C_ccall f_6462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word *av) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word *av) C_noret;
C_noret_decl(f_6469)
static void C_ccall f_6469(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_2776)
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_5755)
static void C_fcall f_5755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word *av) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_fcall f_3881(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word *av) C_noret;
C_noret_decl(f_6487)
static void C_ccall f_6487(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word *av) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_6493)
static void C_ccall f_6493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_fcall f_6200(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word *av) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4430)
static void C_fcall f_4430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word *av) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_6279)
static void C_ccall f_6279(C_word c,C_word *av) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2580)
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word *av) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_fcall f_3070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word *av) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word *av) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f8208)
static void C_ccall f8208(C_word c,C_word *av) C_noret;
C_noret_decl(f8201)
static void C_ccall f8201(C_word c,C_word *av) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word *av) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word *av) C_noret;
C_noret_decl(f_6062)
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word *av) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word *av) C_noret;
C_noret_decl(f8213)
static void C_ccall f8213(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void C_fcall f_6250(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word *av) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word *av) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word *av) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2821)
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word *av) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4690)
static void C_fcall f_4690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3331)
static void C_fcall f_3331(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word *av) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word *av) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word *av) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_fcall f_3022(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word *av) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word *av) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word *av) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word *av) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_6500)
static void C_ccall f_6500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6502)
static void C_fcall f_6502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_fcall f_4080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3041)
static C_word C_fcall f_3041(C_word t0,C_word t1);
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_fcall f_4138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word *av) C_noret;
C_noret_decl(f_6906)
static void C_ccall f_6906(C_word c,C_word *av) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6962)
static void C_ccall f_6962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f8098)
static void C_ccall f8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7336)
static void C_fcall f_7336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6976)
static void C_ccall f_6976(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word *av) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_3491)
static void C_fcall f_3491(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3544)
static void C_fcall f_3544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_7085)
static void C_ccall f_7085(C_word c,C_word *av) C_noret;
C_noret_decl(f_2866)
static void C_fcall f_2866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4440)
static void C_ccall f_4440(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word *av) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word *av) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word *av) C_noret;
C_noret_decl(f_7307)
static void C_ccall f_7307(C_word c,C_word *av) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4250)
static void C_fcall f_4250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word *av) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word *av) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7533)
static void C_ccall f_7533(C_word c,C_word *av) C_noret;
C_noret_decl(f_7530)
static void C_ccall f_7530(C_word c,C_word *av) C_noret;
C_noret_decl(f_6329)
static void C_fcall f_6329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7527)
static void C_ccall f_7527(C_word c,C_word *av) C_noret;
C_noret_decl(f_7524)
static void C_ccall f_7524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word *av) C_noret;
C_noret_decl(f_6544)
static void C_ccall f_6544(C_word c,C_word *av) C_noret;
C_noret_decl(f_7582)
static void C_ccall f_7582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_fcall f_3717(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_fcall f_4607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_fcall f_3763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word *av) C_noret;
C_noret_decl(f_7446)
static void C_fcall f_7446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7442)
static void C_ccall f_7442(C_word c,C_word *av) C_noret;
C_noret_decl(f_7226)
static void C_ccall f_7226(C_word c,C_word *av) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word *av) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word *av) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word *av) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word *av) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word *av) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word *av) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_2460)
static void C_fcall f_2460(C_word t0) C_noret;
C_noret_decl(f_7429)
static void C_ccall f_7429(C_word c,C_word *av) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word *av) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word *av) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_4517)
static void C_fcall f_4517(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word *av) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word *av) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word *av) C_noret;
C_noret_decl(f_7416)
static void C_fcall f_7416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3726)
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4542)
static void C_fcall f_4542(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_fcall f_4633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_fcall f_6147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5476)
static void C_fcall f_5476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4478)
static void C_ccall f_4478(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word *av) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word *av) C_noret;
C_noret_decl(f_6604)
static void C_fcall f_6604(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word *av) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word *av) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word *av) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word *av) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word *av) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6660)
static void C_fcall f_6660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3250)
static void C_fcall f_3250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word *av) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word *av) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word *av) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word *av) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word *av) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word *av) C_noret;
C_noret_decl(f_5417)
static void C_fcall f_5417(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word *av) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word *av) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6102)
static void C_ccall f_6102(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word *av) C_noret;
C_noret_decl(f_5069)
static void C_fcall f_5069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word *av) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word *av) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word *av) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_fcall f_4791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word *av) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3208)
static void C_fcall f_3208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word *av) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word *av) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word *av) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word *av) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3989)
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word *av) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word *av) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word *av) C_noret;
C_noret_decl(f_7399)
static void C_ccall f_7399(C_word c,C_word *av) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_7373)
static void C_ccall f_7373(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_fcall f_5087(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2566)
static void C_fcall f_2566(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6559)
static void C_ccall f_6559(C_word c,C_word *av) C_noret;
C_noret_decl(f_6556)
static void C_ccall f_6556(C_word c,C_word *av) C_noret;

C_noret_decl(trf_5641)
static void C_ccall trf_5641(C_word c,C_word *av) C_noret;
static void C_ccall trf_5641(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5641(t0,t1,t2);}

C_noret_decl(trf_4988)
static void C_ccall trf_4988(C_word c,C_word *av) C_noret;
static void C_ccall trf_4988(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4988(t0,t1);}

C_noret_decl(trf_2685)
static void C_ccall trf_2685(C_word c,C_word *av) C_noret;
static void C_ccall trf_2685(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2685(t0,t1,t2);}

C_noret_decl(trf_2729)
static void C_ccall trf_2729(C_word c,C_word *av) C_noret;
static void C_ccall trf_2729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2729(t0,t1,t2);}

C_noret_decl(trf_5042)
static void C_ccall trf_5042(C_word c,C_word *av) C_noret;
static void C_ccall trf_5042(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5042(t0,t1,t2);}

C_noret_decl(trf_2527)
static void C_ccall trf_2527(C_word c,C_word *av) C_noret;
static void C_ccall trf_2527(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2527(t0,t1);}

C_noret_decl(trf_6170)
static void C_ccall trf_6170(C_word c,C_word *av) C_noret;
static void C_ccall trf_6170(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6170(t0,t1);}

C_noret_decl(trf_5026)
static void C_ccall trf_5026(C_word c,C_word *av) C_noret;
static void C_ccall trf_5026(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5026(t0,t1);}

C_noret_decl(trf_5022)
static void C_ccall trf_5022(C_word c,C_word *av) C_noret;
static void C_ccall trf_5022(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5022(t0,t1,t2,t3);}

C_noret_decl(trf_3241)
static void C_ccall trf_3241(C_word c,C_word *av) C_noret;
static void C_ccall trf_3241(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3241(t0,t1);}

C_noret_decl(trf_4584)
static void C_ccall trf_4584(C_word c,C_word *av) C_noret;
static void C_ccall trf_4584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4584(t0,t1,t2);}

C_noret_decl(trf_2973)
static void C_ccall trf_2973(C_word c,C_word *av) C_noret;
static void C_ccall trf_2973(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2973(t0,t1);}

C_noret_decl(trf_2942)
static void C_ccall trf_2942(C_word c,C_word *av) C_noret;
static void C_ccall trf_2942(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2942(t0,t1,t2);}

C_noret_decl(trf_5568)
static void C_ccall trf_5568(C_word c,C_word *av) C_noret;
static void C_ccall trf_5568(C_word c,C_word *av){
C_word t0=av[0];
f_5568(t0);}

C_noret_decl(trf_6392)
static void C_ccall trf_6392(C_word c,C_word *av) C_noret;
static void C_ccall trf_6392(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6392(t0,t1,t2,t3);}

C_noret_decl(trf_3605)
static void C_ccall trf_3605(C_word c,C_word *av) C_noret;
static void C_ccall trf_3605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3605(t0,t1);}

C_noret_decl(trf_3617)
static void C_ccall trf_3617(C_word c,C_word *av) C_noret;
static void C_ccall trf_3617(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3617(t0,t1);}

C_noret_decl(trf_3629)
static void C_ccall trf_3629(C_word c,C_word *av) C_noret;
static void C_ccall trf_3629(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3629(t0,t1);}

C_noret_decl(trf_5920)
static void C_ccall trf_5920(C_word c,C_word *av) C_noret;
static void C_ccall trf_5920(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5920(t0,t1,t2);}

C_noret_decl(trf_5967)
static void C_ccall trf_5967(C_word c,C_word *av) C_noret;
static void C_ccall trf_5967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5967(t0,t1);}

C_noret_decl(trf_5964)
static void C_ccall trf_5964(C_word c,C_word *av) C_noret;
static void C_ccall trf_5964(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5964(t0,t1);}

C_noret_decl(trf_5352)
static void C_ccall trf_5352(C_word c,C_word *av) C_noret;
static void C_ccall trf_5352(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5352(t0,t1);}

C_noret_decl(trf_3303)
static void C_ccall trf_3303(C_word c,C_word *av) C_noret;
static void C_ccall trf_3303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3303(t0,t1);}

C_noret_decl(trf_4204)
static void C_ccall trf_4204(C_word c,C_word *av) C_noret;
static void C_ccall trf_4204(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4204(t0,t1,t2);}

C_noret_decl(trf_3124)
static void C_ccall trf_3124(C_word c,C_word *av) C_noret;
static void C_ccall trf_3124(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3124(t0,t1);}

C_noret_decl(trf_7298)
static void C_ccall trf_7298(C_word c,C_word *av) C_noret;
static void C_ccall trf_7298(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7298(t0,t1);}

C_noret_decl(trf_3114)
static void C_ccall trf_3114(C_word c,C_word *av) C_noret;
static void C_ccall trf_3114(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3114(t0,t1);}

C_noret_decl(trf_3091)
static void C_ccall trf_3091(C_word c,C_word *av) C_noret;
static void C_ccall trf_3091(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3091(t0,t1,t2);}

C_noret_decl(trf_2776)
static void C_ccall trf_2776(C_word c,C_word *av) C_noret;
static void C_ccall trf_2776(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2776(t0,t1,t2);}

C_noret_decl(trf_5755)
static void C_ccall trf_5755(C_word c,C_word *av) C_noret;
static void C_ccall trf_5755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5755(t0,t1,t2);}

C_noret_decl(trf_3881)
static void C_ccall trf_3881(C_word c,C_word *av) C_noret;
static void C_ccall trf_3881(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3881(t0,t1,t2);}

C_noret_decl(trf_6200)
static void C_ccall trf_6200(C_word c,C_word *av) C_noret;
static void C_ccall trf_6200(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6200(t0,t1,t2);}

C_noret_decl(trf_4430)
static void C_ccall trf_4430(C_word c,C_word *av) C_noret;
static void C_ccall trf_4430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4430(t0,t1,t2);}

C_noret_decl(trf_5789)
static void C_ccall trf_5789(C_word c,C_word *av) C_noret;
static void C_ccall trf_5789(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5789(t0,t1,t2);}

C_noret_decl(trf_2580)
static void C_ccall trf_2580(C_word c,C_word *av) C_noret;
static void C_ccall trf_2580(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2580(t0,t1,t2);}

C_noret_decl(trf_3070)
static void C_ccall trf_3070(C_word c,C_word *av) C_noret;
static void C_ccall trf_3070(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3070(t0,t1,t2);}

C_noret_decl(trf_6062)
static void C_ccall trf_6062(C_word c,C_word *av) C_noret;
static void C_ccall trf_6062(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6062(t0,t1,t2);}

C_noret_decl(trf_6250)
static void C_ccall trf_6250(C_word c,C_word *av) C_noret;
static void C_ccall trf_6250(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6250(t0,t1,t2);}

C_noret_decl(trf_2821)
static void C_ccall trf_2821(C_word c,C_word *av) C_noret;
static void C_ccall trf_2821(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2821(t0,t1,t2);}

C_noret_decl(trf_4100)
static void C_ccall trf_4100(C_word c,C_word *av) C_noret;
static void C_ccall trf_4100(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4100(t0,t1,t2);}

C_noret_decl(trf_3475)
static void C_ccall trf_3475(C_word c,C_word *av) C_noret;
static void C_ccall trf_3475(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3475(t0,t1,t2);}

C_noret_decl(trf_4690)
static void C_ccall trf_4690(C_word c,C_word *av) C_noret;
static void C_ccall trf_4690(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4690(t0,t1);}

C_noret_decl(trf_3331)
static void C_ccall trf_3331(C_word c,C_word *av) C_noret;
static void C_ccall trf_3331(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3331(t0,t1);}

C_noret_decl(trf_3022)
static void C_ccall trf_3022(C_word c,C_word *av) C_noret;
static void C_ccall trf_3022(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3022(t0,t1);}

C_noret_decl(trf_6502)
static void C_ccall trf_6502(C_word c,C_word *av) C_noret;
static void C_ccall trf_6502(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6502(t0,t1,t2);}

C_noret_decl(trf_4080)
static void C_ccall trf_4080(C_word c,C_word *av) C_noret;
static void C_ccall trf_4080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4080(t0,t1,t2);}

C_noret_decl(trf_4138)
static void C_ccall trf_4138(C_word c,C_word *av) C_noret;
static void C_ccall trf_4138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4138(t0,t1,t2);}

C_noret_decl(trf_7336)
static void C_ccall trf_7336(C_word c,C_word *av) C_noret;
static void C_ccall trf_7336(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7336(t0,t1,t2);}

C_noret_decl(trf_3491)
static void C_ccall trf_3491(C_word c,C_word *av) C_noret;
static void C_ccall trf_3491(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3491(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3544)
static void C_ccall trf_3544(C_word c,C_word *av) C_noret;
static void C_ccall trf_3544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3544(t0,t1,t2);}

C_noret_decl(trf_2866)
static void C_ccall trf_2866(C_word c,C_word *av) C_noret;
static void C_ccall trf_2866(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2866(t0,t1);}

C_noret_decl(trf_4250)
static void C_ccall trf_4250(C_word c,C_word *av) C_noret;
static void C_ccall trf_4250(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4250(t0,t1);}

C_noret_decl(trf_6329)
static void C_ccall trf_6329(C_word c,C_word *av) C_noret;
static void C_ccall trf_6329(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6329(t0,t1);}

C_noret_decl(trf_3717)
static void C_ccall trf_3717(C_word c,C_word *av) C_noret;
static void C_ccall trf_3717(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3717(t0,t1);}

C_noret_decl(trf_4607)
static void C_ccall trf_4607(C_word c,C_word *av) C_noret;
static void C_ccall trf_4607(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4607(t0,t1,t2);}

C_noret_decl(trf_3763)
static void C_ccall trf_3763(C_word c,C_word *av) C_noret;
static void C_ccall trf_3763(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3763(t0,t1);}

C_noret_decl(trf_7446)
static void C_ccall trf_7446(C_word c,C_word *av) C_noret;
static void C_ccall trf_7446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7446(t0,t1,t2);}

C_noret_decl(trf_2460)
static void C_ccall trf_2460(C_word c,C_word *av) C_noret;
static void C_ccall trf_2460(C_word c,C_word *av){
C_word t0=av[0];
f_2460(t0);}

C_noret_decl(trf_4517)
static void C_ccall trf_4517(C_word c,C_word *av) C_noret;
static void C_ccall trf_4517(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4517(t0,t1,t2);}

C_noret_decl(trf_7416)
static void C_ccall trf_7416(C_word c,C_word *av) C_noret;
static void C_ccall trf_7416(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7416(t0,t1);}

C_noret_decl(trf_3726)
static void C_ccall trf_3726(C_word c,C_word *av) C_noret;
static void C_ccall trf_3726(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3726(t0,t1,t2);}

C_noret_decl(trf_4542)
static void C_ccall trf_4542(C_word c,C_word *av) C_noret;
static void C_ccall trf_4542(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4542(t0,t1);}

C_noret_decl(trf_4633)
static void C_ccall trf_4633(C_word c,C_word *av) C_noret;
static void C_ccall trf_4633(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4633(t0,t1);}

C_noret_decl(trf_6147)
static void C_ccall trf_6147(C_word c,C_word *av) C_noret;
static void C_ccall trf_6147(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6147(t0,t1,t2);}

C_noret_decl(trf_5476)
static void C_ccall trf_5476(C_word c,C_word *av) C_noret;
static void C_ccall trf_5476(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5476(t0,t1,t2);}

C_noret_decl(trf_6604)
static void C_ccall trf_6604(C_word c,C_word *av) C_noret;
static void C_ccall trf_6604(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6604(t0,t1,t2);}

C_noret_decl(trf_6660)
static void C_ccall trf_6660(C_word c,C_word *av) C_noret;
static void C_ccall trf_6660(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6660(t0,t1);}

C_noret_decl(trf_3250)
static void C_ccall trf_3250(C_word c,C_word *av) C_noret;
static void C_ccall trf_3250(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3250(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5417)
static void C_ccall trf_5417(C_word c,C_word *av) C_noret;
static void C_ccall trf_5417(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5417(t0,t1,t2,t3);}

C_noret_decl(trf_5069)
static void C_ccall trf_5069(C_word c,C_word *av) C_noret;
static void C_ccall trf_5069(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5069(t0,t1);}

C_noret_decl(trf_4791)
static void C_ccall trf_4791(C_word c,C_word *av) C_noret;
static void C_ccall trf_4791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4791(t0,t1);}

C_noret_decl(trf_3208)
static void C_ccall trf_3208(C_word c,C_word *av) C_noret;
static void C_ccall trf_3208(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3208(t0,t1);}

C_noret_decl(trf_3989)
static void C_ccall trf_3989(C_word c,C_word *av) C_noret;
static void C_ccall trf_3989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3989(t0,t1,t2);}

C_noret_decl(trf_3999)
static void C_ccall trf_3999(C_word c,C_word *av) C_noret;
static void C_ccall trf_3999(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3999(t0,t1);}

C_noret_decl(trf_5087)
static void C_ccall trf_5087(C_word c,C_word *av) C_noret;
static void C_ccall trf_5087(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5087(t0,t1);}

C_noret_decl(trf_2566)
static void C_ccall trf_2566(C_word c,C_word *av) C_noret;
static void C_ccall trf_2566(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2566(t0,t1,t2);}

/* k6551 in k6548 in k6542 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_6553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6553,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:885: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[356];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6548 in k6542 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6550,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_length(((C_word*)t0)[5]);
/* chicken-install.scm:885: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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

/* k7379 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_7381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7381,2,av);}
/* string->list */
t2=C_fast_retrieve(lf[436]);{
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

/* for-each-loop1379 in a5626 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_fcall f_5641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5641,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5651,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5633,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:722: write */
t7=*((C_word*)lf[238]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7139 in k7135 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_7141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7141,2,av);}
t2=C_mutate2(&lf[35] /* (set! main#*override* ...) */,t1);
t3=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:1017: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6392(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_4988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4988,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:590: retrieve */
f_4250(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k5631 in for-each-loop1379 in a5626 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5633,2,av);}
/* chicken-install.scm:722: newline */
t2=*((C_word*)lf[236]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6572(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6572,2,av);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6602,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6604,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_6604(t11,t7,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:902: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[368];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* a5667 in k5664 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_5668(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5668,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5676,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(t2);
/* chicken-install.scm:718: symbol->string */
t6=*((C_word*)lf[205]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5664 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_5666,2,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5668,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:706: sort */
t3=C_fast_retrieve(lf[241]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6580 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6582,2,av);}
t2=C_mutate2(&lf[78] /* (set! main#*eggs+dirs+vers* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6430(2,av2);}}

/* k5649 in for-each-loop1379 in a5626 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5651,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5641(t3,((C_word*)t0)[4],t2);}

/* g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_2685(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2685,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2689,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2716,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:161: list-index */
t5=C_fast_retrieve(lf[350]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2678 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2680,2,av);}
t2=C_mutate2(&lf[22] /* (set! main#*mappings* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_4991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4991,2,av);}
a=C_alloc(7);
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5512,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:592: topological-sort */
t4=C_fast_retrieve(lf[351]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[79],"main#\052dependencies\052");
av2[3]=*((C_word*)lf[352]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2687 in g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2689,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2692(2,av2);}}
else{
/* chicken-install.scm:162: broken */
t4=((C_word*)t0)[4];
f_2566(t4,t3,((C_word*)t0)[5]);}}

/* k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_4997(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_4997,2,av);}
a=C_alloc(19);
t2=t1;
t3=C_u_i_length(t2);
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5009,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5476(t13,t9,t2);}

/* k6593 in map-loop1614 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6595,2,av);}
a=C_alloc(9);
t2=C_a_i_list2(&a,2,lf[366],lf[367]);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5678 in k5674 in a5667 in k5664 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5680,2,av);}
/* chicken-install.scm:718: string<? */
t2=*((C_word*)lf[240]+1);{
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

/* k2752 in map-loop299 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2754,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2729(t6,((C_word*)t0)[5],t5);}

/* k5674 in a5667 in k5664 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5676,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:718: symbol->string */
t5=*((C_word*)lf[205]+1);{
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

/* map-loop299 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_2729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2729,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:160: g305 */
t5=((C_word*)t0)[4];
f_2685(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7008 in k6994 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_7010(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7010,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[26],"main#\052csc-nonfeatures\052"));
t3=C_mutate2(&lf[26] /* (set! main#*csc-nonfeatures* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:990: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k2725 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2727,2,av);}
/* chicken-install.scm:158: append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[22],"main#\052mappings\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1305))){
C_save(t1);
C_rereclaim2(1305*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,456);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\016setup.defaults");
lf[16]=C_h_intern(&lf[16],4,"http");
lf[41]=C_h_intern(&lf[41],7,"sprintf");
lf[42]=C_h_intern(&lf[42],13,"make-pathname");
lf[43]=C_h_intern(&lf[43],17,"get-output-string");
lf[44]=C_h_intern(&lf[44],9,"\003sysprint");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\010chicken/");
lf[46]=C_h_intern(&lf[46],18,"open-output-string");
lf[47]=C_h_intern(&lf[47],17,"\003syspeek-c-string");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\014lib/chicken/");
lf[49]=C_h_intern(&lf[49],15,"repository-path");
lf[54]=C_h_intern(&lf[54],7,"chicken");
lf[55]=C_h_intern(&lf[55],15,"chicken-version");
lf[56]=C_h_intern(&lf[56],7,"version");
lf[57]=C_h_intern(&lf[57],8,"->string");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\0050.0.0");
lf[59]=C_h_intern(&lf[59],20,"with-input-from-file");
lf[60]=C_h_intern(&lf[60],4,"read");
lf[61]=C_h_intern(&lf[61],12,"file-exists\077");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[63]=C_h_intern(&lf[63],31,"\003syscanonicalize-extension-path");
lf[64]=C_h_intern(&lf[64],11,"ext-version");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[66]=C_h_intern(&lf[66],24,"\003syscore-library-modules");
lf[67]=C_h_intern(&lf[67],23,"\003syscore-syntax-modules");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\007chicken");
lf[70]=C_h_intern(&lf[70],5,"error");
lf[71]=C_h_intern(&lf[71],13,"string-append");
lf[72]=C_decode_literal(C_heaptop,"\376B\000\000JYour CHICKEN version is not recent enough to use this extension - version ");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\025 or newer is required");
lf[74]=C_h_intern(&lf[74],20,"setup-api#version>=\077");
lf[75]=C_h_intern(&lf[75],7,"warning");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\0007invalid dependency syntax in extension meta information");
lf[77]=C_h_intern(&lf[77],2,"or");
lf[83]=C_h_intern(&lf[83],4,"exit");
lf[84]=C_h_intern(&lf[84],5,"print");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000,Could not determine a source of extensions. ");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000.Please specify a valid location and transport.");
lf[87]=C_h_intern(&lf[87],19,"with-output-to-port");
lf[88]=C_h_intern(&lf[88],18,"\003sysstandard-error");
lf[89]=C_h_intern(&lf[89],5,"local");
lf[90]=C_h_intern(&lf[90],9,"transport");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\027missing transport entry");
lf[92]=C_h_intern(&lf[92],8,"location");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\026missing location entry");
lf[94]=C_h_intern(&lf[94],17,"current-directory");
lf[95]=C_h_intern(&lf[95],18,"absolute-pathname\077");
lf[97]=C_h_intern(&lf[97],7,"depends");
lf[98]=C_h_intern(&lf[98],19,"\003sysstandard-output");
lf[99]=C_h_intern(&lf[99],6,"printf");
lf[100]=C_h_intern(&lf[100],8,"for-each");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\001\011");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[103]=C_h_intern(&lf[103],5,"needs");
lf[104]=C_h_intern(&lf[104],6,"append");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000$ dependencies as reported in .meta:\012");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\003Egg");
lf[109]=C_h_intern(&lf[109],15,"foreign-depends");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\007Foreign");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\034fetching meta information...");
lf[113]=C_h_intern(&lf[113],7,"reverse");
lf[114]=C_h_intern(&lf[114],12,"test-depends");
lf[115]=C_h_intern(&lf[115],3,"map");
lf[116]=C_h_intern(&lf[116],26,"setup-api#remove-extension");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000)removing previously installed extension `");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\012 upgrade: ");
lf[120]=C_h_intern(&lf[120],18,"string-intersperse");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[122]=C_h_intern(&lf[122],6,"unzip1");
lf[123]=C_h_intern(&lf[123],10,"yes-or-no\077");
lf[124]=C_h_intern(&lf[124],8,"\000default");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\002no");
lf[126]=C_h_intern(&lf[126],6,"\000abort");
lf[127]=C_h_intern(&lf[127],21,"setup-api#abort-setup");
lf[128]=C_h_intern(&lf[128],18,"string-concatenate");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000:The following installed extensions are outdated, because `");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\033\047 requires later versions:\012");
lf[131]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\0000\012Do you want to replace the existing extensions\077\376\377\016");
lf[132]=C_h_intern(&lf[132],16,"\003syswrite-char-0");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\036\047 overrides required version `");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\003\077\077\077");
lf[137]=C_h_intern(&lf[137],4,"conc");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\002 (");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[142]=C_h_intern(&lf[142],21,"extension-information");
lf[143]=C_h_intern(&lf[143],14,"string->symbol");
lf[144]=C_h_intern(&lf[144],10,"filter-map");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\012 missing: ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\033checking dependencies for `");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000)extension is not targeted for this system");
lf[151]=C_h_intern(&lf[151],8,"platform");
lf[152]=C_h_intern(&lf[152],8,"feature\077");
lf[153]=C_h_intern(&lf[153],3,"and");
lf[154]=C_h_intern(&lf[154],5,"every");
lf[155]=C_h_intern(&lf[155],3,"any");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[157]=C_h_intern(&lf[157],3,"not");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid `platform\047 property");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\027checking platform for `");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\005\047 ...");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\013extension `");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\024\047 has no .meta file ");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000!- assuming it has no dependencies");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\004meta");
lf[165]=C_h_intern(&lf[165],6,"delete");
lf[166]=C_h_intern(&lf[166],3,"eq\077");
lf[167]=C_h_intern(&lf[167],9,"condition");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\023TCP connect timeout");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\023HTTP protocol error");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[173]=C_h_intern(&lf[173],19,"print-error-message");
lf[174]=C_decode_literal(C_heaptop,"\376B\000\000\015Server error:");
lf[175]=C_h_intern(&lf[175],5,"abort");
lf[176]=C_h_intern(&lf[176],3,"exn");
lf[177]=C_h_intern(&lf[177],20,"setup-download-error");
lf[178]=C_h_intern(&lf[178],10,"http-fetch");
lf[179]=C_h_intern(&lf[179],3,"net");
lf[180]=C_h_intern(&lf[180],33,"setup-download#retrieve-extension");
lf[181]=C_h_intern(&lf[181],8,"\000version");
lf[182]=C_h_intern(&lf[182],12,"\000destination");
lf[183]=C_h_intern(&lf[183],6,"\000tests");
lf[184]=C_h_intern(&lf[184],9,"\000username");
lf[185]=C_h_intern(&lf[185],9,"\000password");
lf[186]=C_h_intern(&lf[186],6,"\000trunk");
lf[187]=C_h_intern(&lf[187],11,"\000proxy-host");
lf[188]=C_h_intern(&lf[188],11,"\000proxy-port");
lf[189]=C_h_intern(&lf[189],16,"\000proxy-user-pass");
lf[190]=C_h_intern(&lf[190],6,"\000clean");
lf[191]=C_h_intern(&lf[191],22,"with-exception-handler");
lf[192]=C_h_intern(&lf[192],30,"call-with-current-continuation");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\014 located at ");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\036extension or version not found");
lf[197]=C_h_intern(&lf[197],9,"directory");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000&\047 overrides explicitly given version `");
lf[199]=C_decode_literal(C_heaptop,"\376B\000\000\020\047 of extension `");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\011version `");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\014overriding: ");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\016retrieving ...");
lf[203]=C_h_intern(&lf[203],26,"setup-api#remove-directory");
lf[204]=C_h_intern(&lf[204],34,"setup-download#temporary-directory");
lf[205]=C_h_intern(&lf[205],14,"symbol->string");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\035internal error - bad egg spec");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\007mapped ");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\004 to ");
lf[209]=C_h_intern(&lf[209],5,"lset=");
lf[210]=C_h_intern(&lf[210],17,"delete-duplicates");
lf[211]=C_h_intern(&lf[211],4,"find");
lf[212]=C_h_intern(&lf[212],10,"append-map");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000/shell command terminated with nonzero exit code");
lf[215]=C_h_intern(&lf[215],6,"system");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\037/usr/bin/env DYLD_LIBRARY_PATH=");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[221]=C_h_intern(&lf[221],2,"qs");
lf[222]=C_h_intern(&lf[222],6,"macosx");
lf[223]=C_h_intern(&lf[223],24,"get-environment-variable");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\021DYLD_LIBRARY_PATH");
lf[225]=C_h_intern(&lf[225],16,"software-version");
lf[227]=C_h_intern(&lf[227],23,"irregex-match-substring");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\012proxy_auth");
lf[229]=C_h_intern(&lf[229],13,"irregex-match");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\033(http://)\077([^:]+):\077([0-9]\052)");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\007unknown");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\005trunk");
lf[235]=C_h_intern(&lf[235],25,"\003sysimplicit-exit-handler");
lf[236]=C_h_intern(&lf[236],7,"newline");
lf[237]=C_h_intern(&lf[237],19,"setup-api#copy-file");
lf[238]=C_h_intern(&lf[238],5,"write");
lf[239]=C_h_intern(&lf[239],19,"with-output-to-file");
lf[240]=C_h_intern(&lf[240],8,"string<\077");
lf[241]=C_h_intern(&lf[241],4,"sort");
lf[242]=C_h_intern(&lf[242],18,"\003sysmodule-exports");
lf[243]=C_h_intern(&lf[243],6,"syntax");
lf[244]=C_h_intern(&lf[244],5,"value");
lf[245]=C_h_intern(&lf[245],6,"print\052");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[247]=C_h_intern(&lf[247],15,"\003sysmodule-name");
lf[248]=C_h_intern(&lf[248],16,"\003sysmodule-table");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\023generating database");
lf[250]=C_h_intern(&lf[250],20,"\003syswarnings-enabled");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\027Failed to import from `");
lf[252]=C_h_intern(&lf[252],6,"import");
lf[253]=C_h_intern(&lf[253],4,"eval");
lf[254]=C_h_intern(&lf[254],24,"pathname-strip-extension");
lf[255]=C_h_intern(&lf[255],24,"pathname-strip-directory");
lf[256]=C_h_intern(&lf[256],16,"\003sysdynamic-wind");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\034loading import libraries ...");
lf[258]=C_h_intern(&lf[258],26,"create-temporary-directory");
lf[259]=C_h_intern(&lf[259],4,"glob");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\014\052.import.scm");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\013\052.import.so");
lf[262]=C_h_intern(&lf[262],2,"pp");
lf[263]=C_h_intern(&lf[263],6,"cadadr");
lf[264]=C_h_intern(&lf[264],37,"setup-download#gather-egg-information");
lf[265]=C_h_intern(&lf[265],7,"display");
lf[266]=C_h_intern(&lf[266],30,"setup-download#list-extensions");
lf[267]=C_h_intern(&lf[267],6,"\000quiet");
lf[268]=C_h_intern(&lf[268],16,"change-directory");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\023~a -s run.scm ~a ~a");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000$\012nevertheless trying to continue ...");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\007testing");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\014 extension `");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\011\047 failed:");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\015tests/run.scm");
lf[276]=C_h_intern(&lf[276],10,"directory\077");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[278]=C_decode_literal(C_heaptop,"\376B\000\000\005tests");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\012installing");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\034-e \042(setup-error-handling)\042 ");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(sudo-install #t)\042");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(keep-intermediates #t)\042");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\035 -e \042(setup-install-mode #f)\042");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(host-extension #t)\042");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\032 -e \042(deployment-mode #t)\042");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\006 -bnq ");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\0009-e \042(require-library setup-api)\042 -e \042(import setup-api)\042 ");
lf[294]=C_h_intern(&lf[294],19,"setup-api#shellpath");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\006.setup");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\031 -e \042(extra-nonfeatures \047");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\002)\042");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\026 -e \042(extra-features \047");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[303]=C_h_intern(&lf[303],16,"string-translate");
lf[304]=C_h_intern(&lf[304],18,"normalize-pathname");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\027 -e \042(runtime-prefix \134\042");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\004\134\042)\042");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\033 -e \042(destination-prefix \134\042");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[310]=C_h_intern(&lf[310],22,"setup-api#sudo-install");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042))\042");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\005\134\042 \134\042");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000$-e \042(extension-name-and-version \047(\134\042");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\014-setup-mode ");
lf[316]=C_h_intern(&lf[316],1,"\052");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\001o");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\002so");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\003dll");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[321]=C_h_intern(&lf[321],3,"seq");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[323]=C_h_intern(&lf[323],12,"delete-file\052");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[325]=C_h_intern(&lf[325],10,"find-files");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[327]=C_h_intern(&lf[327],5,"\000test");
lf[328]=C_h_intern(&lf[328],7,"\000action");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\033deleting stale binaries ...");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\033deleting stale binaries ...");
lf[331]=C_h_intern(&lf[331],12,"dynamic-wind");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\036changing current directory to ");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\031installing for target ...");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\005xcopy");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\047copying sources for target installation");
lf[339]=C_decode_literal(C_heaptop,"\376B\000\000\013installing ");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\026aborting installation.");
lf[342]=C_h_intern(&lf[342],17,"\003sysstring-append");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000@You specified `-no-install\047, but this extension has dependencies");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000C that are required for building.\012Do you still want to install them\077");
lf[345]=C_h_intern(&lf[345],4,"iota");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000\016install order:");
lf[347]=C_h_intern(&lf[347],7,"fprintf");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000\002\012\012");
lf[349]=C_decode_literal(C_heaptop,"\376B\000\000\030\012Unresolved dependency: ");
lf[350]=C_h_intern(&lf[350],10,"list-index");
lf[351]=C_h_intern(&lf[351],16,"topological-sort");
lf[352]=C_h_intern(&lf[352],8,"string=\077");
lf[353]=C_h_intern(&lf[353],6,"remove");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000;no default location defined - please use `-location\047 option");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000=no default transport defined - please use `-transport\047 option");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\0009 currently installed extensions - do you want to proceed\077");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\030About to re-install all ");
lf[358]=C_h_intern(&lf[358],6,"equal\077");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[360]=C_h_intern(&lf[360],8,"egg-name");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000Dinstalled extension has no information about which egg it belongs to");
lf[362]=C_h_intern(&lf[362],13,"pathname-file");
lf[363]=C_h_intern(&lf[363],9,"read-file");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\001\052");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\012setup-info");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[367]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[368]=C_decode_literal(C_heaptop,"\376B\000\000\033no setup-scripts to process");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\007\052.setup");
lf[370]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid entry in defaults file");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000$\047 does not match setup-API version (");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000\026version of installed `");
lf[373]=C_h_intern(&lf[373],6,"server");
lf[374]=C_h_intern(&lf[374],8,"split-at");
lf[375]=C_h_intern(&lf[375],2,"->");
lf[376]=C_h_intern(&lf[376],5,"alias");
lf[377]=C_h_intern(&lf[377],7,"string\077");
lf[378]=C_h_intern(&lf[378],8,"override");
lf[379]=C_h_intern(&lf[379],4,"hack");
lf[380]=C_h_intern(&lf[380],12,"chicken-home");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000B`-deploy\047 only makes sense in combination with `-prefix DIRECTORY`");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\005-help");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\012gusage: chicken-install [OPTION | EXTENSION[:VERSION]] ...\012\012  -h   -help    "
"                show this message and exit\012       -version                 show "
"version and exit\012       -force                   don\047t ask, install even if vers"
"ions don\047t match\012  -k   -keep                    keep temporary files\012  -x   -ke"
"ep-installed          install only if not already installed\012       -reinstall   "
"            reinstall all currently installed extensions\012  -l   -location LOCATI"
"ON       install from given location instead of default\012  -t   -transport TRANSP"
"ORT     use given transport instead of default\012       -proxy HOST[:PORT]       d"
"ownload via HTTP proxy\012  -s   -sudo                    use external command to e"
"levate privileges for filesystem operations\012  -r   -retrieve                only"
" retrieve egg into current directory, don\047t install\012  -n   -no-install          "
"    do not install, just build (implies `-keep\047)\012  -p   -prefix PREFIX          "
" change installation prefix to PREFIX\012       -no-install-deps         do not ins"
"tall dependencies\012       -list                    list extensions available over"
" selected transport and location\012       -host                    when cross-comp"
"iling, compile extension only for host\012       -target                  when cros"
"s-compiling, compile extension only for target\012       -test                    r"
"un included test-cases, if available\012       -username USER           set usernam"
"e for transports that require this\012       -password PASS           set password "
"for transports that require this\012  -i   -init DIRECTORY          initialize empt"
"y alternative repository\012  -u   -update-db               update export database\012"
"       -repository              print path used for egg installation\012       -dep"
"loy                  build extensions for deployment\012       -trunk              "
"     build trunk instead of tagged version (only local)\012  -D   -feature FEATURE "
"        features to pass to sub-invocations of `csc\047\012       -debug              "
"     enable full display of error message information\012       -keep-going        "
"      continue installation even if dependency fails\012       -scan DIRECTORY     "
"     scan local directory for highest available egg versions\012       -override FI"
"LENAME       override versions for installed eggs with information from file\012   "
"    -csi FILENAME            use given pathname for invocations of \042csi\042\012       "
"-show-depends            display a list of egg dependencies for the given egg(s)"
"\012       -show-foreign-depends    display a list of foreign dependencies for the "
"given egg(s)\012\012chicken-install recognizes the SUDO, http_proxy and proxy_auth env"
"ironment variables, if set.\012");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\013-repository");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\006-force");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\002-k");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\005-keep");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\002-s");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\005-sudo");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\002-r");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\011-retrieve");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\002-l");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\011-location");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\002-t");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\012-transport");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\002-p");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\007-prefix");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\020-no-install-deps");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\002-n");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-install");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\010-version");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\002-u");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\012-update-db");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\002-i");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\005-init");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\004copy");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\005cp -r");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\010~a ~a ~a");
lf[409]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014setup-api.so\376\003\000\000\002\376B\000\000\023setup-api.import.so\376\003\000\000\002\376B\000\000\021setup-download.so\376\003"
"\000\000\002\376B\000\000\030setup-download.import.so\376\003\000\000\002\376B\000\000\021chicken.import.so\376\003\000\000\002\376B\000\000\021lolevel.imp"
"ort.so\376\003\000\000\002\376B\000\000\020srfi-1.import.so\376\003\000\000\002\376B\000\000\020srfi-4.import.so\376\003\000\000\002\376B\000\000\031data-structu"
"res.import.so\376\003\000\000\002\376B\000\000\017ports.import.so\376\003\000\000\002\376B\000\000\017files.import.so\376\003\000\000\002\376B\000\000\017posix.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-13.import.so\376\003\000\000\002\376B\000\000\021srfi-69.import.so\376\003\000\000\002\376B\000\000\020extras.i"
"mport.so\376\003\000\000\002\376B\000\000\021srfi-14.import.so\376\003\000\000\002\376B\000\000\015tcp.import.so\376\003\000\000\002\376B\000\000\021foreign.impo"
"rt.so\376\003\000\000\002\376B\000\000\021srfi-18.import.so\376\003\000\000\002\376B\000\000\017utils.import.so\376\003\000\000\002\376B\000\000\015csi.import.so"
"\376\003\000\000\002\376B\000\000\021irregex.import.so\376\003\000\000\002\376B\000\000\010types.db\376\377\016");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\032copying required files to ");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[412]=C_h_intern(&lf[412],16,"create-directory");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\006-proxy");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\002-D");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\010-feature");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\013-no-feature");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\005-test");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\005-host");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000\007-target");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\006-debug");
lf[421]=C_decode_literal(C_heaptop,"\376B\000\000\007-deploy");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\011-username");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\005-scan");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\000\011-override");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\002-x");
lf[426]=C_decode_literal(C_heaptop,"\376B\000\000\017-keep-installed");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\012-reinstall");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\006-trunk");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\013-keep-going");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\005-list");
lf[431]=C_decode_literal(C_heaptop,"\376B\000\000\004-csi");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\011-password");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\015-show-depends");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\025-show-foreign-depends");
lf[435]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000k\376\003\000\000\002\376\377\012\000\000l\376\003\000\000\002\376\377\012\000\000t\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\003\000\000\002\376\377\012\000\000r\376\003\000"
"\000\002\376\377\012\000\000n\376\003\000\000\002\376\377\012\000\000v\376\003\000\000\002\376\377\012\000\000i\376\003\000\000\002\376\377\012\000\000u\376\003\000\000\002\376\377\012\000\000D\376\377\016");
lf[436]=C_h_intern(&lf[436],16,"\003sysstring->list");
lf[437]=C_h_intern(&lf[437],9,"substring");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000\005setup");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[440]=C_h_intern(&lf[440],18,"pathname-directory");
lf[441]=C_h_intern(&lf[441],18,"pathname-extension");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\002-h");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\006--help");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\012http_proxy");
lf[445]=C_h_intern(&lf[445],7,"irregex");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\014([^:]+):(.+)");
lf[447]=C_h_intern(&lf[447],22,"command-line-arguments");
lf[448]=C_h_intern(&lf[448],17,"register-feature!");
lf[449]=C_h_intern(&lf[449],15,"chicken-install");
lf[450]=C_h_intern(&lf[450],14,"\000cross-chicken");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\003bin");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\016CHICKEN_PREFIX");
lf[453]=C_h_intern(&lf[453],11,"\003sysrequire");
lf[454]=C_h_intern(&lf[454],9,"setup-api");
lf[455]=C_h_intern(&lf[455],14,"setup-download");
C_register_lf2(lf,456,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2369,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_5697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5697,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:711: print* */
t4=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[246];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5327 in k5316 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_ccall f_5329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5329,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,3,((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8110,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[41]+1);
av2[3]=lf[336];
av2[4]=t3;
C_apply(5,av2);}}

/* a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5690(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5690,3,av);}
a=C_alloc(4);
t3=C_i_cdr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5697,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:710: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[247]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[247]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* a2702 in k2690 in k2687 in g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2703,4,av);}
a=C_alloc(3);
t4=C_i_cdr(t3);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5316 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in ... */
static void C_ccall f_5318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5318,2,av);}
a=C_alloc(5);
t2=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[334]:lf[335]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5329,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:629: make-pathname */
t5=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[337];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a2715 in g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2716,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_eqp(lf[375],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6402,2,av);}
a=C_alloc(11);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6412,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:875: repo-path */
f_2460(t2);}
else{
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5950,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5962,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:687: repo-path */
f_2460(t5);}
else{
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t2=((C_word*)t0)[3];
t3=((C_word*)((C_word*)t0)[5])[1];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6139,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:752: setup-download#gather-egg-information */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[264]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[264]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:132: chicken-home */
t6=C_fast_retrieve(lf[380]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in ... */
static void C_ccall f_5046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5046,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:634: current-directory */
t3=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in ... */
static void C_ccall f_5041(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,4)))){
C_save_and_reclaim((void *)f_5041,2,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5258,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[32],"main#\052target-extension\052"))?C_retrieve2(lf[31],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5294,a[2]=t10,a[3]=t12,a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5301,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5307,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t12,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:661: ##sys#dynamic-wind */
t16=*((C_word*)lf[256]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=t3;
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}
else{
/* chicken-install.scm:664: setup */
t5=t2;
f_5042(t5,t3,((C_word*)t0)[7]);}}

/* setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_fcall f_5042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5042,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5046,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:633: print */
t4=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[332];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in ... */
static void C_ccall f_5049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5049,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5251,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:635: dynamic-wind */
t6=C_fast_retrieve(lf[331]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[6];
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2513 in k2510 in k2507 in k2501 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_2515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2515,2,av);}
/* chicken-install.scm:119: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[27],"main#\052prefix\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2510 in k2507 in k2501 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_2512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2512,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:121: get-output-string */
t3=C_fast_retrieve(lf[43]);{
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

/* k6823 in k6816 in k6800 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6825,2,av);}
/* chicken-install.scm:957: normalize-pathname */
t2=C_fast_retrieve(lf[304]);{
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

/* k6827 in k6816 in k6800 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6829,2,av);}
/* chicken-install.scm:958: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#get-prefix in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_2527(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_2527,2,t1,t2);}
a=C_alloc(3);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=(C_truep(C_retrieve2(lf[30],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[31],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(t4)){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[47]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_TARGET_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
if(C_truep(C_retrieve2(lf[27],"main#\052prefix\052"))){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_retrieve2(lf[27],"main#\052prefix\052");
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[47]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_TARGET_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}
else{
t6=C_retrieve2(lf[27],"main#\052prefix\052");
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_retrieve2(lf[27],"main#\052prefix\052");
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6427(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_6427,2,av);}
a=C_alloc(25);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[4])[1]))){
if(C_truep(C_retrieve2(lf[36],"main#\052reinstall\052"))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6487,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6231,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6233,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6283,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6287,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6291,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:782: repo-path */
f_2460(t10);}
else{
t4=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t4)){
t5=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6430(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6572,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:892: glob */
t6=C_fast_retrieve(lf[259]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[369];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6430(2,av2);}}}

/* f8110 in k5327 in k5316 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in ... */
static void C_ccall f8110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8110,2,av);}
/* chicken-install.scm:801: $system */
f_6170(((C_word*)t0)[2],t1);}

/* k6816 in k6800 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6818,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6809(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6829,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:958: current-directory */
t4=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6410 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6412,2,av);}
/* chicken-install.scm:875: print */
t2=*((C_word*)lf[84]+1);{
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

/* k6175 in k6172 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6177,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:764: system */
t3=C_fast_retrieve(lf[215]);{
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

/* k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5012(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_5012,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=*((C_word*)lf[88]+1);
t5=*((C_word*)lf[88]+1);
t6=C_i_check_port_2(*((C_word*)lf[88]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[347]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5458,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:598: ##sys#print */
t8=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[349];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[88]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5015(2,av2);}}}

/* k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5015,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:601: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[346];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5018,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:602: pp */
t3=C_fast_retrieve(lf[262]);{
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

/* main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_6170(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6170,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6174,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))){
/* chicken-install.scm:756: string-append */
t4=*((C_word*)lf[71]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[217];
av2[3]=t2;
av2[4]=lf[218];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6196,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6221,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:757: software-version */
t6=C_fast_retrieve(lf[225]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6172 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6174,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6177,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:763: print */
t4=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[216];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6194 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6196,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6200,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:755: g1492 */
t3=t2;
f_6200(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6174(2,av2);}}}

/* k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in ... */
static void C_ccall f_5035(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5035,2,av);}
a=C_alloc(13);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5318,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:625: print */
t7=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[338];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5041(2,av2);}}}

/* k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in ... */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5032,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[32],"main#\052target-extension\052"))){
if(C_truep(C_retrieve2(lf[31],"main#\052host-extension\052"))){
/* chicken-install.scm:622: create-temporary-directory */
t3=C_fast_retrieve(lf[258]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5035(2,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5035(2,av2);}}}

/* k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in ... */
static void C_fcall f_5026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_5026,2,t0,t1);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[5])?C_SCHEME_FALSE:t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5352,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5368,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5372,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[342]);
C_word av2[4];
av2[0]=*((C_word*)lf[342]+1);
av2[1]=t7;
av2[2]=lf[343];
av2[3]=lf[344];
tp(4,av2);}}
else{
t6=t5;
f_5352(t6,C_SCHEME_FALSE);}}
else{
t5=t3;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5029(2,av2);}}}

/* k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5021,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5412,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:670: iota */
t5=C_fast_retrieve(lf[345]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[6];
av2[4]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_fcall f_5022(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5022,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5026,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:606: find */
t7=C_fast_retrieve(lf[211]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=t4;
f_5026(t5,C_SCHEME_FALSE);}}

/* k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5029,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_caddr(((C_word*)t0)[2]);
/* chicken-install.scm:619: print */
t5=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[339];
av2[3]=t3;
av2[4]=C_make_character(58);
av2[5]=t4;
av2[6]=lf[340];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}

/* a5220 in a5208 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_5221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5221,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:641: k1137 */
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

/* k6800 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6802,2,av);}
a=C_alloc(10);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6818,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:955: absolute-pathname? */
t6=C_fast_retrieve(lf[95]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a5226 in a5220 in a5208 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_5227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5227,2,av);}{
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

/* k6807 in k6800 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6809,2,av);}
t2=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:959: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6392(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* a5053 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in ... */
static void C_ccall f_5054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5054,2,av);}
/* chicken-install.scm:637: change-directory */
t2=C_fast_retrieve(lf[268]);{
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

/* f8133 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8133,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
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

/* a5214 in a5208 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_5215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5215,2,av);}
/* chicken-install.scm:641: tmp1127 */
t2=((C_word*)t0)[2];
f_5069(t2,t1);}

/* k6876 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6878,2,av);}
/* chicken-install.scm:968: print */
t2=*((C_word*)lf[84]+1);{
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

/* k6869 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6871,2,av);}
/* chicken-install.scm:969: exit */
t2=C_fast_retrieve(lf[83]);{
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

/* f8148 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8148,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3241(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_3241,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3250,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3250(t6,((C_word*)t0)[3],t2,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t3=((C_word*)t0)[2];
t4=C_u_i_length(t3);
t5=C_eqp(C_fix(2),t4);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_stringp(t6);
if(C_truep(t7)){
t8=t2;
f_3331(t8,t7);}
else{
t8=((C_word*)t0)[2];
t9=C_u_i_car(t8);
t10=t2;
f_3331(t10,C_i_symbolp(t9));}}
else{
t6=t2;
f_3331(t6,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3331(t3,C_SCHEME_FALSE);}}}

/* k2690 in k2687 in g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_2692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2692,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2703,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:163: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k4560 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4562,2,av);}
/* chicken-install.scm:502: warning */
t2=C_fast_retrieve(lf[75]);{
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

/* a2696 in k2690 in k2687 in g305 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2697,2,av);}
/* chicken-install.scm:163: split-at */
t2=C_fast_retrieve(lf[374]);{
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

/* f8138 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8138,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f8191 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8191,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2935 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2937,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2942,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2942(t5,((C_word*)t0)[3],t1);}

/* k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_4333(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4333,2,av);}
a=C_alloc(5);
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052");
t3=C_i_check_list_2(C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"),lf[100]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4584,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4584(t7,((C_word*)t0)[2],C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));}}

/* f8181 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8181,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_4584,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4594,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=C_i_car(t6);
if(C_truep(C_i_member(t7,C_retrieve2(lf[80],"main#\052checked\052")))){
t8=C_SCHEME_UNDEFINED;
t9=t5;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_u_i_car(t6);
t9=C_a_i_cons(&a,2,t8,C_retrieve2(lf[80],"main#\052checked\052"));
t10=C_mutate2(&lf[80] /* (set! main#*checked* ...) */,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4351,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t12=C_i_cadr(t6);
t13=C_u_i_car(t6);
/* chicken-install.scm:464: make-pathname */
t14=C_fast_retrieve(lf[42]);{
C_word av2[5];
av2[0]=t14;
av2[1]=t11;
av2[2]=t12;
av2[3]=t13;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2902 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2904,2,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
/* chicken-install.scm:181: append */
t3=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[39],"main#\052hacks\052");
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f8196 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8196,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f8171 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8171,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3233 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3235,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:249: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
/* chicken-install.scm:250: ->string */
t2=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_5009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5009,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:596: list-index */
t4=C_fast_retrieve(lf[350]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[157]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f8186 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8186,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f8161 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8161,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f8176 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8176,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4592 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_4594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4594,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4584(t3,((C_word*)t0)[4],t2);}

/* main#resolve-location in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_2973(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2973,2,t1,t2);}
t3=C_i_assoc(t2,C_retrieve2(lf[29],"main#\052aliases\052"));
if(C_truep(t3)){
t4=t1;
t5=C_i_cdr(t3);
/* chicken-install.scm:191: resolve-location */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t4=t2;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2969 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_2971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2971,2,av);}
/* chicken-install.scm:132: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[2],"main#constant163");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* f8166 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8166,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* for-each-loop260 in k2935 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_2942(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2942,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:137: g261 */
t5=((C_word*)t0)[3];
f_2580(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6994 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6996,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:989: string->symbol */
t4=*((C_word*)lf[143]+1);{
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

/* k2950 in for-each-loop260 in k2935 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2952,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2942(t3,((C_word*)t0)[4],t2);}

/* k6178 in k6175 in k6172 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_6180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6180,2,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-install.scm:766: error */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[214];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6441 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6443,2,av);}
/* chicken-install.scm:912: display */
t2=*((C_word*)lf[265]+1);{
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

/* k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6430,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6433(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6469,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[15],"main#\052default-transport\052"))){
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t4=C_SCHEME_UNDEFINED;
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
f_6433(2,av2);}}
else{
/* chicken-install.scm:909: error */
t4=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[354];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* chicken-install.scm:906: error */
t4=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[355];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6433,2,av);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6443,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[15],"main#\052default-transport\052");
t4=C_retrieve2(lf[14],"main#\052default-location\052");
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6299,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:786: with-default-sources */
f_3717(t2,t5);}
else{
if(C_truep(C_retrieve2(lf[37],"main#\052show-depends\052"))){
/* chicken-install.scm:916: show-depends */
f_4080(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[97]));}
else{
if(C_truep(C_retrieve2(lf[38],"main#\052show-foreign-depends\052"))){
/* chicken-install.scm:918: show-depends */
f_4080(((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1],C_a_i_list(&a,1,lf[109]));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6462,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6466,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:920: reverse */
t4=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}}

/* k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_2967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2967,2,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2937,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:183: read-file */
t4=C_fast_retrieve(lf[363]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052"));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2378,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* f8143 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8143,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2373 in k2370 in k2367 */
static void C_ccall f_2375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2375,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k2370 in k2367 */
static void C_ccall f_2372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2372,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* f8154 in k3080 in k3076 in g412 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f8154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8154,2,av);}
/* chicken-install.scm:801: $system */
f_6170(((C_word*)t0)[2],t1);}

/* k7603 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_7605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7605,2,av);}
/* chicken-install.scm:315: setup-api#shellpath */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[294]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[294]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7607 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_7609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7609,2,av);}
/* chicken-install.scm:315: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[4],"main#\052program-path\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2367 */
static void C_ccall f_2369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2369,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2396,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d13_toplevel(2,av2);}}

/* k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2399,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_files_toplevel(2,av2);}}

/* k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2390,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_ports_toplevel(2,av2);}}

/* k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2393,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2387,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2381,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2384,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utils_toplevel(2,av2);}}

/* main#cleanup in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_5568(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5568,1,t1);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:683: setup-download#temporary-directory */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[204]);
C_word av2[2];
av2[0]=*((C_word*)lf[204]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k3165 in k3128 in k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3167,2,av);}
/* chicken-install.scm:231: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3158 in k3131 in k3128 in k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3160,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:233: with-input-from-file */
t2=C_fast_retrieve(lf[59]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[60]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3136(2,av2);}}}

/* k5553 in a5550 in k5537 in k5534 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_5555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5555,2,av);}
/* chicken-install.scm:678: delete-file* */
t2=C_fast_retrieve(lf[323]);{
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

/* a5550 in k5537 in k5534 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_5551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5551,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:677: print* */
t5=*((C_word*)lf[245]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[324];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3174 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3176,2,av);}
t2=C_i_member(t1,C_fast_retrieve(lf[66]));
t3=((C_word*)t0)[2];
f_3124(t3,(C_truep(t2)?t2:C_i_member(t1,C_fast_retrieve(lf[67]))));}

/* k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_5587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5587,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:689: create-temporary-directory */
t4=C_fast_retrieve(lf[258]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* same? in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6001,4,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6021,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:733: canonical */
f_5967(t4,t2);}

/* k5573 in main#cleanup in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5575,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:684: setup-api#remove-directory */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[203]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5389 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in ... */
static void C_ccall f_5391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5391,2,av);}
t2=((C_word*)t0)[2];
f_5026(t2,C_i_not(t1));}

/* k6019 in same? in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6021,2,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:733: canonical */
f_5967(t4,((C_word*)t0)[4]);}

/* k6025 in k6022 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6027,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6022 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6024,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6027,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:744: lset= */
t5=C_fast_retrieve(lf[209]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_5593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5593,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:691: print */
t4=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[257];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5599,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:704: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[249];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_5596(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_5596,2,av);}
a=C_alloc(20);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5823,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5943,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:692: ##sys#dynamic-wind */
t10=*((C_word*)lf[256]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5590,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5593,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:690: make-pathname */
t4=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_retrieve2(lf[0],"main#constant159");
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a5392 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in ... */
static void C_ccall f_5393(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5393,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
t5=C_i_car(((C_word*)t0)[2]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_i_equalp(t4,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t2;
t4=C_i_car(((C_word*)t0)[2]);
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_i_equalp(t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6041 in a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6043(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6043,2,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[57]);
t9=C_i_cdr(t3);
t10=C_i_check_list_2(t9,lf[115]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6062,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6062(t14,t2,t9);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4895 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in ... */
static void C_ccall f_4897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4897,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:561: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[300];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6028 in k6022 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6030,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-install.scm:745: print */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[207];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[208];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6039,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6043,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6102,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:738: find */
t5=C_fast_retrieve(lf[211]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_retrieve2(lf[22],"main#\052mappings\052");
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6035 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6037,2,av);}
/* chicken-install.scm:735: delete-duplicates */
t2=C_fast_retrieve(lf[210]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4880 in k4874 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in ... */
static void C_ccall f_4882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4882,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:564: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[26],"main#\052csc-nonfeatures\052");
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4883 in k4880 in k4874 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in ... */
static void C_ccall f_4885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4885,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:564: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[296];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4886 in k4883 in k4880 in k4874 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4888,2,av);}
/* chicken-install.scm:564: get-output-string */
t2=C_fast_retrieve(lf[43]);{
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

/* a3675 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_3676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3676,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:317: ##sys#call-with-values */{
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

/* k4717 in k4688 in loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4719,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:521: fail */
t2=((C_word*)t0)[2];
f_4633(t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3606 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3608,2,av);}
/* chicken-install.scm:333: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[168];
C_values(4,av2);}}

/* loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_fcall f_6392(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6392,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
if(C_truep(C_retrieve2(lf[27],"main#\052prefix\052"))){
t6=C_SCHEME_UNDEFINED;
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
f_6402(2,av2);}}
else{
/* chicken-install.scm:873: error */
t6=*((C_word*)lf[70]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[381];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6402(2,av2);}}}
else{
t5=C_i_car(t2);
t6=t5;
t7=C_i_string_equal_p(t6,lf[382]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6660,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t7)){
t9=t8;
f_6660(t9,t7);}
else{
t9=C_u_i_string_equal_p(t6,lf[442]);
if(C_truep(t9)){
t10=t8;
f_6660(t10,t9);}
else{
t10=C_u_i_string_equal_p(t6,lf[443]);
t11=t8;
f_6660(t11,t10);}}}}

/* k7135 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_7137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7137,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:1016: read-file */
t4=C_fast_retrieve(lf[363]);{
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

/* k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_fcall f_3605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3605,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:332: print */
t3=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[169];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[176],((C_word*)t0)[4]);
t4=t2;
f_3617(t4,(C_truep(t3)?C_i_memv(lf[178],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3617(t3,C_SCHEME_FALSE);}}}

/* k4701 in k4688 in loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4703,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-install.scm:519: fail */
t2=((C_word*)t0)[3];
f_4633(t2,((C_word*)t0)[2]);}}

/* k3615 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_fcall f_3617(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3617,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:335: print */
t3=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[171];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_memv(lf[176],((C_word*)t0)[4]);
t4=t2;
f_3629(t4,(C_truep(t3)?C_i_memv(lf[177],((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3629(t3,C_SCHEME_FALSE);}}}

/* k3627 in k3615 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_3629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3629,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:338: print */
t4=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[174];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];
/* chicken-install.scm:342: abort */
t3=C_fast_retrieve(lf[175]);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k3393 in k3389 in k3361 in k3408 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_3395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3395,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:285: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
C_values(4,av2);}}

/* k3618 in k3615 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_3620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3620,2,av);}
/* chicken-install.scm:336: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[170];
C_values(4,av2);}}

/* k7109 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_7111(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7111,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1013: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_6392(t7,((C_word*)t0)[5],t6,((C_word*)((C_word*)t0)[6])[1]);}

/* k3389 in k3361 in k3408 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3391,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3395,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:287: ->string */
t5=C_fast_retrieve(lf[57]);{
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

/* k5374 in k5370 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in ... */
static void C_ccall f_5376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5376,2,av);}
/* chicken-install.scm:611: yes-or-no? */
t2=C_fast_retrieve(lf[123]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[126];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5370 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_ccall f_5372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5372,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5376,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:615: setup-api#abort-setup */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[127]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[127]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3630 in k3627 in k3615 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3632,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:339: print-error-message */
t3=C_fast_retrieve(lf[173]);{
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

/* k3361 in k3408 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3363,2,av);}
a=C_alloc(4);
if(C_truep(C_u_i_string_equal_p(lf[69],t1))){
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
/* chicken-install.scm:278: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:280: string-append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[72];
av2[3]=t3;
av2[4]=lf[73];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:287: ->string */
t5=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_fcall f_5920(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5920,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5930,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5834,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:695: pathname-strip-directory */
t7=C_fast_retrieve(lf[255]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3633 in k3630 in k3627 in k3615 in k3603 in a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3635,2,av);}
/* chicken-install.scm:340: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[172];
C_values(4,av2);}}

/* a5517 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5518,3,av);}
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=C_u_i_car(t3);
/* chicken-install.scm:588: ext-version */
f_3114(t1,t4);}
else{
t3=t2;
/* chicken-install.scm:588: ext-version */
f_3114(t1,t3);}}

/* k3374 in k3361 in k3408 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_3376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3376,2,av);}
/* chicken-install.scm:279: error */
t2=*((C_word*)lf[70]+1);{
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

/* a5910 in a5904 in a5884 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_ccall f_5911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5911,2,av);}{
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

/* k6015 in k6019 in same? in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_6017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6017,2,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_equalp(((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5510 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5512,2,av);}
/* chicken-install.scm:592: reverse */
t2=*((C_word*)lf[113]+1);{
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

/* k5514 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5516,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4988(t3,t2);}

/* k5166 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_5168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5168,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:650: directory? */
t3=C_fast_retrieve(lf[276]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5082(2,av2);}}}

/* k6738 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6740(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6740,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[14] /* (set! main#*default-location* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:946: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k5928 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5930,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5920(t3,((C_word*)t0)[4],t2);}

/* canonical in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_5967(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_5967,2,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:728: symbol->string */
t4=*((C_word*)lf[205]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t3=t2;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-install.scm:731: error */
t3=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[206];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}}}

/* a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_5185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5185,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:641: with-exception-handler */
t5=C_fast_retrieve(lf[191]);{
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

/* k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_6384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6384,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7524,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:868: get-environment-variable */
t5=C_fast_retrieve(lf[223]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[444];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5178 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_5180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5180,2,av);}
/* chicken-install.scm:641: g1141 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k5960 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_5962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5962,2,av);}
/* chicken-install.scm:687: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[261];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_5964(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_5964,2,t1,t2);}
a=C_alloc(21);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5967,tmp=(C_word)a,a+=2,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6001,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6024,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6037,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6039,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:736: append-map */
t12=C_fast_retrieve(lf[212]);{
C_word av2[4];
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}

/* k5366 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5368,2,av);}
t2=((C_word*)t0)[2];
f_5352(t2,C_i_not(t1));}

/* k5956 in k5948 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_5958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5958,2,av);}
/* chicken-install.scm:688: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[260];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a3681 in a3675 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_3682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3682,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3690,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))){
/* chicken-install.scm:322: current-directory */
t3=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3690(2,av2);}}}

/* k5172 in k5166 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5174,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:651: file-exists? */
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5082(2,av2);}}}

/* k5952 in k5948 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5954,2,av);}
/* chicken-install.scm:687: glob */
t2=C_fast_retrieve(lf[259]);{
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

/* k5948 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_5950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5950,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5958,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:688: repo-path */
f_2460(t4);}

/* k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_6387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6387,2,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6392,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6392(t5,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST);}

/* k6708 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6710,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:939: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6392(t4,((C_word*)t0)[4],t3,((C_word*)((C_word*)t0)[5])[1]);}

/* k5353 in k5350 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in ... */
static void C_ccall f_5355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5355,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:617: cleanup */
f_5568(t2);}

/* k5356 in k5353 in k5350 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in ... */
static void C_ccall f_5358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5358,2,av);}
/* chicken-install.scm:618: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5350 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_fcall f_5352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5352,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:616: print */
t3=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[341];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
f_5029(2,av2);}}}

/* k3688 in a3681 in a3675 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_3690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,24)))){
C_save_and_reclaim((void *)f_3690,2,av);}
t2=C_retrieve2(lf[9],"main#\052retrieve-only\052");
t3=(C_truep(C_retrieve2(lf[9],"main#\052retrieve-only\052"))?C_SCHEME_FALSE:C_i_not(C_retrieve2(lf[5],"main#\052keep\052")));
/* chicken-install.scm:319: setup-download#retrieve-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2;
if(c >= 25) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(25);
}
av2[0]=*((C_word*)lf[180]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=lf[181];
av2[6]=((C_word*)t0)[6];
av2[7]=lf[182];
av2[8]=t1;
av2[9]=lf[183];
av2[10]=C_retrieve2(lf[8],"main#\052run-tests\052");
av2[11]=lf[184];
av2[12]=C_retrieve2(lf[11],"main#\052username\052");
av2[13]=lf[185];
av2[14]=C_retrieve2(lf[12],"main#\052password\052");
av2[15]=lf[186];
av2[16]=C_retrieve2(lf[24],"main#\052trunk\052");
av2[17]=lf[187];
av2[18]=C_retrieve2(lf[18],"main#\052proxy-host\052");
av2[19]=lf[188];
av2[20]=C_retrieve2(lf[19],"main#\052proxy-port\052");
av2[21]=lf[189];
av2[22]=C_retrieve2(lf[20],"main#\052proxy-user-pass\052");
av2[23]=lf[190];
av2[24]=t3;
tp(25,av2);}}

/* k3301 in a3281 in scan in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_fcall f_3303(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3303,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[2])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
/* chicken-install.scm:263: scan */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3250(t3,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
/* chicken-install.scm:263: scan */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3250(t4,((C_word*)t0)[5],((C_word*)t0)[6],t1,t3);}}

/* a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4390(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4390,4,av);}
a=C_alloc(8);
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=t3;
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4395,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:474: apply-mappings */
f_5964(t7,((C_word*)t5)[1]);}

/* k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_4395(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4395,2,av);}
a=C_alloc(14);
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_car(((C_word*)t0)[3]);
t4=t3;
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4509,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:482: append */
t10=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* a5904 in a5884 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5905,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5911,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:694: k1272 */
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

/* k5901 in a5890 in a5884 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_ccall f_5903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5903,2,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,lf[252],t1);
/* chicken-install.scm:702: eval */
t3=C_fast_retrieve(lf[253]);{
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

/* a7590 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_7591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_7591,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7597,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1085: k1792 */
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

/* a5306 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_ccall f_5307(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5307,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate2(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a7596 in a7590 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_7597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7597,2,av);}{
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

/* k4212 in for-each-loop705 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4214,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4204(t3,((C_word*)t0)[4],t2);}

/* for-each-loop705 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_fcall f_4204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4204,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4214,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:427: g706 */
t5=((C_word*)t0)[3];
f_4100(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a3594 in a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_3595(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3595,2,av);}
a=C_alloc(5);
t2=C_i_structurep(((C_word*)t0)[2],lf[167]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3605,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=C_i_memv(lf[176],t4);
t7=t5;
f_3605(t7,(C_truep(t6)?C_i_memv(lf[179],t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3605(t6,C_SCHEME_FALSE);}}

/* a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_7578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7578,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7582,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7589,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1091: command-line-arguments */
t4=C_fast_retrieve(lf[447]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4033,2,av);}
/* chicken-install.scm:410: warning */
t2=C_fast_retrieve(lf[75]);{
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

/* a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_7572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7572,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7578,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7591,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1085: ##sys#call-with-values */{
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

/* k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_4030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4030,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:411: get-output-string */
t3=C_fast_retrieve(lf[43]);{
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

/* k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_3124,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
/* chicken-install.scm:227: chicken-version */
t2=C_fast_retrieve(lf[55]);{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:230: ##sys#canonicalize-extension-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[63]);
C_word av2[4];
av2[0]=*((C_word*)lf[63]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[64];
tp(4,av2);}}}

/* k6350 in k6343 in k6337 in main#setup-proxy in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6352,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[20] /* (set! main#*proxy-user-pass* ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:852: irregex-match-substring */
t4=C_fast_retrieve(lf[227]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4901 in k4895 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4903,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:561: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[25],"main#\052csc-features\052");
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4904 in k4901 in k4895 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in ... */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4906,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:561: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4907 in k4904 in k4901 in k4895 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in ... */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4909,2,av);}
/* chicken-install.scm:561: get-output-string */
t2=C_fast_retrieve(lf[43]);{
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

/* k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4027,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:411: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[132]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[132]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4022 in k4019 in k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_4024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4024,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[5]);
/* chicken-install.scm:411: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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

/* k7558 in k7555 in a7552 in a7546 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_7560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7560,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7563,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1089: cleanup */
f_5568(t2);}

/* k7561 in k7558 in k7555 in a7552 in a7546 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_7563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7563,2,av);}
if(C_truep(C_retrieve2(lf[21],"main#\052running-test\052"))){
/* chicken-install.scm:1090: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
/* chicken-install.scm:1090: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k3804 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3806,2,av);}
t2=C_i_cadr(t1);
/* chicken-install.scm:357: resolve-location */
f_2973(((C_word*)t0)[2],t2);}

/* k4741 in k4688 in loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4743,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-install.scm:523: fail */
t2=((C_word*)t0)[3];
f_4633(t2,((C_word*)t0)[2]);}}

/* k4019 in k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4021,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:411: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[198];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3131 in k3128 in k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3133,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3136,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3160,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:232: file-exists? */
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3134 in k3131 in k3128 in k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3136,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=t1;
t4=C_i_assq(lf[56],t3);
if(C_truep(t4)){
t5=C_i_cadr(t4);
/* chicken-install.scm:237: ->string */
t6=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=lf[58];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3128 in k3122 in main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3130,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3167,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:231: repo-path */
f_2460(t4);}

/* k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_4357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4357,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:466: with-input-from-file */
t3=C_fast_retrieve(lf[59]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[60]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:503: string-append */
t4=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[161];
av2[3]=t3;
av2[4]=lf[162];
av2[5]=lf[163];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_4351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4351,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:465: file-exists? */
t4=C_fast_retrieve(lf[61]);{
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

/* a5942 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5943,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[250]));
t3=C_mutate2((C_word*)lf[250]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7555 in a7552 in a7546 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_7557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7557,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1088: print-error-message */
t3=C_fast_retrieve(lf[173]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[88]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_4015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4015,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:411: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[199];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4016 in k4013 in k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4018,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:411: ##sys#print */
t3=*((C_word*)lf[44]+1);{
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

/* a7552 in a7546 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_7553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7553,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7557,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1087: newline */
t3=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[88]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a3588 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_3589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3589,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:317: k555 */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6354 in k6350 in k6343 in k6337 in main#setup-proxy in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_6356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_6356,2,av);}
a=C_alloc(4);
t2=C_mutate2(&lf[18] /* (set! main#*proxy-host* ...) */,t1);
t3=C_a_i_string_to_number(&a,2,((C_word*)t0)[2],C_fix(10));
if(C_truep(t3)){
t4=C_mutate2(&lf[19] /* (set! main#*proxy-port* ...) */,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=lf[19] /* main#*proxy-port* */ =C_fix(80);;
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_3583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3583,3,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:317: with-exception-handler */
t5=C_fast_retrieve(lf[191]);{
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

/* k4010 in k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4012,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[7]);
/* chicken-install.scm:411: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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

/* k3099 in for-each-loop411 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3101,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3091(t3,((C_word*)t0)[4],t2);}

/* k4922 in k4919 in k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4924,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:557: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[302];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_fcall f_7298(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7298,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7307,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7381,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1050: substring */
t5=*((C_word*)lf[437]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8213,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t5=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7482,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:1058: pathname-extension */
t3=C_fast_retrieve(lf[441]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4925 in k4922 in k4919 in k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in ... */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4927,2,av);}
/* chicken-install.scm:557: get-output-string */
t2=C_fast_retrieve(lf[43]);{
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

/* k4919 in k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in ... */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4921,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4934,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4938,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:558: normalize-pathname */
t5=C_fast_retrieve(lf[304]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4004 in k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4006,2,av);}
a=C_alloc(8);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:411: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[200];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3080 in k3076 in g412 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3082,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8154,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[41]+1);
av2[3]=lf[408];
av2[4]=t3;
C_apply(5,av2);}}

/* k3084 in g412 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3086,2,av);}
/* chicken-install.scm:218: setup-api#shellpath */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[294]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[294]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* main#info->egg in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6365(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6365,3,av);}
t3=C_i_cdr(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[232]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[233]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[234]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t4=t2;
t5=C_u_i_car(t4);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=t2;
t5=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5711(C_word c,C_word *av){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5711,5,av);}
a=C_alloc(21);
t5=t3;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t4,lf[115]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5734,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5789,a[2]=t10,a[3]=t8,a[4]=t14,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5789(t16,t12,t4);}

/* k3552 in for-each-loop507 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3554,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3544(t3,((C_word*)t0)[4],t2);}

/* a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_3822(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3822,5,av);}
a=C_alloc(9);
t5=t2;
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:375: ##sys#call-with-values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}
else{
/* chicken-install.scm:374: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[193];
C_values(4,av2);}}}

/* main#ext-version in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3114(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3114,2,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,lf[54]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3124,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3124(t5,t3);}
else{
t5=C_i_equalp(t2,lf[65]);
if(C_truep(t5)){
t6=t4;
f_3124(t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:224: ->string */
t7=C_fast_retrieve(lf[57]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4915,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:557: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[305];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_4374(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4374,2,av);}
a=C_alloc(4);
if(C_truep(C_retrieve2(lf[28],"main#\052no-install-deps\052"))){
/* chicken-install.scm:472: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_END_OF_LIST;
av2[3]=C_SCHEME_END_OF_LIST;
C_values(4,av2);}}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=t1;
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3474,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(
  /* chicken-install.scm:243: deps */
  f_3041(lf[97],((C_word*)t0)[3])
);
t7=(
  /* chicken-install.scm:244: deps */
  f_3041(lf[103],((C_word*)t0)[3])
);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
t8=(
  /* chicken-install.scm:245: deps */
  f_3041(lf[114],((C_word*)t0)[3])
);
/* chicken-install.scm:242: append */
t9=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* chicken-install.scm:242: append */
t8=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}}

/* a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_3837(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3837,2,av);}
a=C_alloc(9);
t2=t1;
t3=((C_word*)t0)[2];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[5];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3583,a[2]=t3,a[3]=t5,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:317: call-with-current-continuation */
t9=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* for-each-loop411 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_3091(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3091,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3101,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:216: g412 */
t5=((C_word*)t0)[3];
f_3070(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5700,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5711,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:712: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a5704 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5705,2,av);}
/* chicken-install.scm:712: ##sys#module-exports */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k4945 in k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in ... */
static void C_ccall f_4947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4947,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4960,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4964,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:553: normalize-pathname */
t5=C_fast_retrieve(lf[304]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in ... */
static void C_ccall f_4941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4941,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:552: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[308];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a5300 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_ccall f_5301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5301,2,av);}
/* chicken-install.scm:663: setup */
t2=((C_word*)t0)[2];
f_5042(t2,t1,((C_word*)t0)[3]);}

/* k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_7482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7482,2,av);}
a=C_alloc(7);
if(C_truep(C_i_equalp(lf[438],t1))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1059: pathname-file */
t3=C_fast_retrieve(lf[362]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1073: irregex-match */
t3=C_fast_retrieve(lf[229]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5732 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5734(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_5734,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[115]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5753,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5755,a[2]=t7,a[3]=t5,a[4]=t11,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_5755(t13,t9,((C_word*)t0)[3]);}

/* a3842 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_3843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3843,4,av);}
if(C_truep(t2)){
/* chicken-install.scm:377: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_values(4,av2);}}
else{
/* chicken-install.scm:378: next */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}

/* k4932 in k4919 in k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4934,2,av);}
/* chicken-install.scm:557: ##sys#print */
t2=*((C_word*)lf[44]+1);{
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

/* k4936 in k4919 in k4913 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4938,2,av);}
if(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))){
/* chicken-install.scm:528: string-translate */
t2=C_fast_retrieve(lf[303]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(92);
av2[4]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=t1;
/* chicken-install.scm:557: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k5979 in canonical in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_5981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5981,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,t1,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g1328 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static C_word C_fcall f_5720(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[243],((C_word*)t0)[2]));}

/* k7250 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_7252(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7252,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[12] /* (set! main#*password* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1040: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* g1355 in k5732 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static C_word C_fcall f_5739(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_car(t1);
return(C_a_i_list3(&a,3,t2,lf[244],((C_word*)t0)[2]));}

/* a5196 in a5190 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_5197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5197,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5201,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:641: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
av2[3]=lf[272];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4962 in k4945 in k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_4964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4964,2,av);}
if(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))){
/* chicken-install.scm:528: string-translate */
t2=C_fast_retrieve(lf[303]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(92);
av2[4]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=t1;
/* chicken-install.scm:552: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* a5190 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_5191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5191,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5197,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:641: k1137 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4958 in k4945 in k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_4960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4960,2,av);}
/* chicken-install.scm:552: ##sys#print */
t2=*((C_word*)lf[44]+1);{
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

/* k7464 in k7460 in g1787 in k7440 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_7466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7466,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1075: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6392(t3,((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k6771 in k6767 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6773,2,av);}
t2=C_mutate2(&lf[15] /* (set! main#*default-transport* ...) */,t1);
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=C_u_i_cdr(t4);
/* chicken-install.scm:950: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6392(t6,((C_word*)t0)[4],t5,((C_word*)((C_word*)t0)[5])[1]);}

/* k7460 in g1787 in k7440 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_7462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7462,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7466,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1079: irregex-match-substring */
t4=C_fast_retrieve(lf[227]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5751 in k5732 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5753,2,av);}
/* chicken-install.scm:713: append */
t2=*((C_word*)lf[104]+1);{
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

/* k3861 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_3863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3863,2,av);}
/* chicken-install.scm:381: string-concatenate */
t2=C_fast_retrieve(lf[128]);{
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

/* k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6462(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6462,2,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4988,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[6],"main#\052keep-existing\052"))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5518,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:587: remove */
t8=C_fast_retrieve(lf[353]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t6=t5;
f_4988(t6,C_SCHEME_UNDEFINED);}}

/* k4951 in k4948 in k4945 in k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in ... */
static void C_ccall f_4953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4953,2,av);}
/* chicken-install.scm:552: get-output-string */
t2=C_fast_retrieve(lf[43]);{
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

/* k4948 in k4945 in k4939 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_4950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4950,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:552: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6467 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6469,2,av);}
if(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6433(2,av2);}}
else{
/* chicken-install.scm:909: error */
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[354];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6233,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6279,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:772: read-file */
t4=C_fast_retrieve(lf[363]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6464 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6466,2,av);}
/* chicken-install.scm:920: apply-mappings */
f_5964(((C_word*)t0)[2],t1);}

/* k6767 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6769,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:949: string->symbol */
t4=*((C_word*)lf[143]+1);{
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

/* g350 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2776,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2783,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
t6=C_eqp(C_fix(2),t5);
if(C_truep(t6)){
/* chicken-install.scm:171: every */
t7=C_fast_retrieve(lf[154]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=*((C_word*)lf[377]+1);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t3;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_2783(2,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_2783(2,av2);}}}

/* k6229 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6231,2,av);}
/* chicken-install.scm:769: delete-duplicates */
t2=C_fast_retrieve(lf[210]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[358]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2769 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2771,2,av);}
t2=C_mutate2(&lf[29] /* (set! main#*aliases* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3873,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3968,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:388: string->symbol */
t5=*((C_word*)lf[143]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3869 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3871,2,av);}
/* chicken-install.scm:382: append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1349 in k5732 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_fcall f_5755(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5755,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-install.scm:715: g1355 */
  f_5739(C_a_i(&a,9),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4369,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:470: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4366,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:469: print */
t4=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[148];
av2[3]=t3;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_4363(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4363,2,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[30],"main#\052cross-chicken\052"))){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
f_4366(2,av2);}}
else{
t6=C_i_assq(lf[151],((C_word*)t0)[3]);
t7=t6;
if(C_truep(t7)){
t8=C_i_cadr(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4655,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t2;
av2[2]=t8;
f_4655(3,av2);}}
else{
t8=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_4366(2,av2);}}}}

/* k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4360,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_u_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:467: print */
t5=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[159];
av2[3]=t4;
av2[4]=lf[160];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2421(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2421,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[4] /* (set! main#*program-path* ...) */,t1);
t3=lf[5] /* main#*keep* */ =C_SCHEME_FALSE;;
t4=lf[6] /* main#*keep-existing* */ =C_SCHEME_FALSE;;
t5=lf[7] /* main#*force* */ =C_SCHEME_FALSE;;
t6=lf[8] /* main#*run-tests* */ =C_SCHEME_FALSE;;
t7=lf[9] /* main#*retrieve-only* */ =C_SCHEME_FALSE;;
t8=lf[10] /* main#*no-install* */ =C_SCHEME_FALSE;;
t9=lf[11] /* main#*username* */ =C_SCHEME_FALSE;;
t10=lf[12] /* main#*password* */ =C_SCHEME_FALSE;;
t11=lf[13] /* main#*default-sources* */ =C_SCHEME_END_OF_LIST;;
t12=lf[14] /* main#*default-location* */ =C_SCHEME_FALSE;;
t13=C_mutate2(&lf[15] /* (set! main#*default-transport* ...) */,lf[16]);
t14=C_mutate2(&lf[17] /* (set! main#*windows-shell* ...) */,C_mk_bool(C_WINDOWS_SHELL));
t15=lf[18] /* main#*proxy-host* */ =C_SCHEME_FALSE;;
t16=lf[19] /* main#*proxy-port* */ =C_SCHEME_FALSE;;
t17=lf[20] /* main#*proxy-user-pass* */ =C_SCHEME_FALSE;;
t18=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t19=lf[22] /* main#*mappings* */ =C_SCHEME_END_OF_LIST;;
t20=lf[23] /* main#*deploy* */ =C_SCHEME_FALSE;;
t21=lf[24] /* main#*trunk* */ =C_SCHEME_FALSE;;
t22=lf[25] /* main#*csc-features* */ =C_SCHEME_END_OF_LIST;;
t23=lf[26] /* main#*csc-nonfeatures* */ =C_SCHEME_END_OF_LIST;;
t24=lf[27] /* main#*prefix* */ =C_SCHEME_FALSE;;
t25=lf[28] /* main#*no-install-deps* */ =C_SCHEME_FALSE;;
t26=lf[29] /* main#*aliases* */ =C_SCHEME_END_OF_LIST;;
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:102: feature? */
t28=C_fast_retrieve(lf[152]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=lf[450];
((C_proc)(void*)(*((C_word*)t28+1)))(3,av2);}}

/* g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in ... */
static void C_fcall f_3881(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3881,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3885,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_i_cadr(t2);
t5=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_equalp(t4,t5))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3895,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:392: open-output-string */
t7=C_fast_retrieve(lf[46]);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3883 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in ... */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3885,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3576 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3578,2,av);}
/* chicken-install.scm:317: g559 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3572(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_3572,2,av);}
a=C_alloc(19);
t2=C_mutate2(&lf[81] /* (set! main#*csi* ...) */,t1);
t3=C_mutate2(&lf[82] /* (set! main#with-default-sources ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3717,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2(&lf[96] /* (set! main#show-depends ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4080,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate2(&lf[111] /* (set! main#retrieve ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4250,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate2(&lf[106] /* (set! main#cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5568,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate2(&lf[147] /* (set! main#apply-mappings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5964,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate2(&lf[213] /* (set! main#$system ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6170,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate2(&lf[226] /* (set! main#setup-proxy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6329,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate2(&lf[231] /* (set! main#info->egg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6365,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1083: register-feature! */
t12=C_fast_retrieve(lf[448]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[449];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in ... */
static void C_ccall f_4973(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4973,2,av);}
a=C_alloc(11);
t2=(C_truep(t1)?lf[282]:lf[283]);
t3=t2;
t4=(C_truep(C_retrieve2(lf[5],"main#\052keep\052"))?lf[284]:lf[285]);
t5=t4;
t6=(C_truep(C_retrieve2(lf[10],"main#\052no-install\052"))?(C_truep(((C_word*)t0)[2])?lf[286]:lf[287]):lf[286]);
t7=t6;
t8=(C_truep(C_retrieve2(lf[31],"main#\052host-extension\052"))?lf[288]:lf[289]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t5,a[8]=t7,a[9]=t9,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-install.scm:550: get-prefix */
f_2527(t10,C_SCHEME_END_OF_LIST);}

/* k3503 in loop in k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3505,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:302: reverse */
t4=*((C_word*)lf[113]+1);{
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

/* k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6487,2,av);}
a=C_alloc(9);
t2=t1;
t3=C_retrieve2(lf[7],"main#\052force\052");
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_retrieve2(lf[7],"main#\052force\052");
f_6493(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6544,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:885: open-output-string */
t6=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in ... */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3895,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:392: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[135];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3507 in k3503 in loop in k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_3509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3509,2,av);}
/* chicken-install.scm:302: values */{
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

/* k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_4408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4408,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:493: unzip1 */
t3=C_fast_retrieve(lf[122]);{
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
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6491 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6493(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6493,2,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[231],"main#info->egg");
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6502,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6502(t11,t7,((C_word*)t0)[4]);}
else{
/* chicken-install.scm:890: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_4402(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_4402,2,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t3=C_retrieve2(lf[7],"main#\052force\052");
if(C_truep(C_retrieve2(lf[7],"main#\052force\052"))){
t4=C_retrieve2(lf[7],"main#\052force\052");
t5=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_retrieve2(lf[7],"main#\052force\052");
f_4408(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4468,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3863,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_i_car(((C_word*)t0)[4]);
t8=C_a_i_list3(&a,3,lf[129],t7,lf[130]);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3871,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3873,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:386: filter-map */
t12=C_fast_retrieve(lf[144]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4408(2,av2);}}}

/* k6289 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6291,2,av);}
/* chicken-install.scm:782: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[364];
av2[4]=lf[365];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* g1492 in k6194 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_fcall f_6200(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6200,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6208,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:761: qs */
t4=C_fast_retrieve(lf[221]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2781 in g350 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2783,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-install.scm:173: broken */
t2=((C_word*)t0)[4];
f_2566(t2,((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* k6206 in g1492 in k6194 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_6208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6208,2,av);}
/* chicken-install.scm:760: string-append */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=t1;
av2[4]=lf[220];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a6298 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,15)))){
C_save_and_reclaim((void *)f_6299,5,av);}
if(C_truep(t2)){
/* chicken-install.scm:789: setup-download#list-extensions */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[266]);
C_word *av2;
if(c >= 16) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(16);
}
av2[0]=*((C_word*)lf[266]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=lf[267];
av2[5]=C_SCHEME_TRUE;
av2[6]=lf[184];
av2[7]=C_retrieve2(lf[11],"main#\052username\052");
av2[8]=lf[185];
av2[9]=C_retrieve2(lf[12],"main#\052password\052");
av2[10]=lf[187];
av2[11]=C_retrieve2(lf[18],"main#\052proxy-host\052");
av2[12]=lf[188];
av2[13]=C_retrieve2(lf[19],"main#\052proxy-port\052");
av2[14]=lf[189];
av2[15]=C_retrieve2(lf[20],"main#\052proxy-user-pass\052");
tp(16,av2);}}
else{
/* chicken-install.scm:797: next */
t5=t4;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}

/* for-each-loop862 in k4412 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in ... */
static void C_fcall f_4430(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4430,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4440,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=t4;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4419,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:497: print */
t8=*((C_word*)lf[84]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[117];
av2[3]=t6;
av2[4]=lf[118];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2415,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-install.scm:75: make-pathname */
t3=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[451];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2418(2,av2);}}}

/* k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2418,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t1;
f_2421(2,av2);}}
else{
/* ##sys#peek-c-string */
t3=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* map-loop1322 in a5710 in k5698 in k5695 in a5689 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5789,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* chicken-install.scm:714: g1328 */
  f_5720(C_a_i(&a,9),((C_word*)t0)[2],t3)
);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2449(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_2449,2,av);}
a=C_alloc(24);
t2=lf[30] /* main#*cross-chicken* */ =t1;;
t3=lf[31] /* main#*host-extension* */ =C_retrieve2(lf[30],"main#\052cross-chicken\052");;
t4=lf[32] /* main#*target-extension* */ =C_retrieve2(lf[30],"main#\052cross-chicken\052");;
t5=lf[33] /* main#*debug-setup* */ =C_SCHEME_FALSE;;
t6=lf[34] /* main#*keep-going* */ =C_SCHEME_FALSE;;
t7=lf[35] /* main#*override* */ =C_SCHEME_END_OF_LIST;;
t8=lf[36] /* main#*reinstall* */ =C_SCHEME_FALSE;;
t9=lf[37] /* main#*show-depends* */ =C_SCHEME_FALSE;;
t10=lf[38] /* main#*show-foreign-depends* */ =C_SCHEME_FALSE;;
t11=lf[39] /* main#*hacks* */ =C_SCHEME_END_OF_LIST;;
t12=C_mutate2(&lf[40] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2460,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate2(&lf[50] /* (set! main#get-prefix ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2527,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate2(&lf[51] /* (set! main#resolve-location ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2973,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate2(&lf[52] /* (set! main#deps ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3041,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate2(&lf[53] /* (set! main#ext-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3114,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate2(&lf[68] /* (set! main#check-dependency ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3208,tmp=(C_word)a,a+=2,tmp));
t18=lf[78] /* main#*eggs+dirs+vers* */ =C_SCHEME_END_OF_LIST;;
t19=lf[79] /* main#*dependencies* */ =C_SCHEME_END_OF_LIST;;
t20=lf[80] /* main#*checked* */ =C_SCHEME_END_OF_LIST;;
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7605,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7609,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t24=*((C_word*)lf[47]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t24;
av2[1]=t23;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t24+1)))(4,av2);}}

/* k6270 in k6277 in a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6272,2,av);}
/* chicken-install.scm:778: warning */
t2=C_fast_retrieve(lf[75]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[361];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3066,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:215: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[410];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[411];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_3069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3069,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3091,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3091(t6,((C_word*)t0)[5],lf[409]);}

/* k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3060,2,av);}
a=C_alloc(6);
t2=t1;
t3=(C_truep(C_retrieve2(lf[17],"main#\052windows-shell\052"))?lf[406]:lf[407]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3066,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:214: create-directory */
t6=C_fast_retrieve(lf[412]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6277 in a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6279(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6279,2,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_i_assq(lf[56],t2);
t4=(C_truep(t3)?C_i_cadr(t3):lf[359]);
t5=t4;
t6=C_i_assq(lf[360],t2);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6250,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:771: g1513 */
t8=t7;
f_6250(t8,((C_word*)t0)[2],t6);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6272,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:780: pathname-file */
t9=C_fast_retrieve(lf[362]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_2584,2,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[56]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
if(C_truep(C_i_pairp(t5))){
t6=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_nequalp(t6,C_fix(1)))){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:146: open-output-string */
t8=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
/* chicken-install.scm:143: broken */
t6=((C_word*)t0)[4];
f_2566(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t4=C_eqp(t2,lf[373]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_cdr(t6);
t8=C_a_i_list1(&a,1,t7);
/* chicken-install.scm:155: append */
t9=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t5;
av2[2]=C_retrieve2(lf[13],"main#\052default-sources\052");
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t5=C_eqp(t2,lf[115]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t12=((C_word*)t0)[2];
t13=C_u_i_cdr(t12);
t14=C_i_check_list_2(t13,lf[115]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2729,a[2]=t9,a[3]=t17,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_2729(t19,t15,t13);}
else{
t6=C_eqp(t2,lf[376]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=((C_word*)t0)[2];
t14=C_u_i_cdr(t13);
t15=C_i_check_list_2(t14,lf[115]);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2821,a[2]=t10,a[3]=t18,a[4]=t12,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_2821(t20,t16,t14);}
else{
t7=C_eqp(t2,lf[378]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2866,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t10=((C_word*)t0)[2];
t11=C_u_i_cdr(t10);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cadr(((C_word*)t0)[2]);
t13=t9;
f_2866(t13,C_i_stringp(t12));}
else{
t12=t9;
f_2866(t12,C_SCHEME_FALSE);}}
else{
t8=C_eqp(t2,lf[379]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:181: eval */
t12=C_fast_retrieve(lf[253]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
/* chicken-install.scm:182: broken */
t9=((C_word*)t0)[4];
f_2566(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}}}}}}}

/* g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_fcall f_2580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2580,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t2))){
t4=t2;
t5=C_u_i_length(t4);
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2584(2,av2);}}
else{
/* chicken-install.scm:140: broken */
t6=((C_word*)t0)[2];
f_2566(t6,t3,t2);}}
else{
/* chicken-install.scm:140: broken */
t4=((C_word*)t0)[2];
f_2566(t4,t3,t2);}}

/* k2662 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2664,2,av);}
t2=C_mutate2(&lf[13] /* (set! main#*default-sources* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6281 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6283,2,av);}
/* chicken-install.scm:770: filter-map */
t2=C_fast_retrieve(lf[144]);{
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

/* k3076 in g412 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3078,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:218: setup-api#shellpath */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[294]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[294]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* g412 in k3067 in k3064 in k3058 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_3070(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3070,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3078,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:218: make-pathname */
t5=C_fast_retrieve(lf[42]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6285 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6287,2,av);}
/* chicken-install.scm:782: glob */
t2=C_fast_retrieve(lf[259]);{
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

/* k2571 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_2573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2573,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_pairp(C_retrieve2(lf[13],"main#\052default-sources\052"));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2631 in k2628 in k2625 in k2622 in k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2633,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:146: get-output-string */
t3=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2634 in k2631 in k2628 in k2625 in k2622 in k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_2636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2636,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:145: error */
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2628 in k2625 in k2622 in k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_2630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2630,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:146: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[132]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[132]+1);
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2402,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[453]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[453]+1);
av2[1]=t2;
av2[2]=lf[455];
tp(3,av2);}}

/* k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2405,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:27: ##sys#require */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[453]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[453]+1);
av2[1]=t2;
av2[2]=lf[454];
tp(3,av2);}}

/* k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2408,2,av);}
a=C_alloc(3);
t2=C_mutate2(&lf[0] /* (set! main#constant159 ...) */,lf[1]);
t3=C_mutate2(&lf[2] /* (set! main#constant163 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:74: get-environment-variable */
t5=C_fast_retrieve(lf[223]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[452];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f8208 in k7311 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f8208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8208,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f8201 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f8201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8201,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5100 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_5102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5102,2,av);}
/* chicken-install.scm:654: g1168 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_5107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5107,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:654: with-exception-handler */
t5=C_fast_retrieve(lf[191]);{
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

/* map-loop1435 in k6041 in a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_fcall f_6062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6062,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6087,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:740: g1441 */
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

/* k5127 in k5124 in k5121 in a5118 in a5112 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in ... */
static void C_ccall f_5129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5129,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5124 in k5121 in a5118 in a5112 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in ... */
static void C_ccall f_5126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5126,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:654: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5121 in a5118 in a5112 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in ... */
static void C_ccall f_5123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5123,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:654: print-error-message */
t3=C_fast_retrieve(lf[173]);{
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

/* f8213 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f8213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8213,2,av);}
/* chicken-install.scm:845: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* g1513 in k6277 in a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_6250(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6250,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cadr(t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6262,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:776: ->string */
t6=C_fast_retrieve(lf[57]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* a5148 in a5142 in a5130 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in ... */
static void C_ccall f_5149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5149,2,av);}{
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

/* k6085 in map-loop1435 in k6041 in a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_6087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6087,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6062(t6,((C_word*)t0)[5],t5);}

/* k6260 in g1513 in k6277 in a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_6262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6262,2,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5142 in a5130 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5143,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5149,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:654: k1164 */
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

/* a5136 in a5130 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in ... */
static void C_ccall f_5137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5137,2,av);}
/* chicken-install.scm:654: tmp1154 */
t2=((C_word*)t0)[2];
f_5087(t2,t1);}

/* k6266 in k6277 in a6232 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6268,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2844 in map-loop344 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2846,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2821(t6,((C_word*)t0)[5],t5);}

/* a5130 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in ... */
static void C_ccall f_5131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5131,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:654: ##sys#call-with-values */{
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

/* k3345 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3347,2,av);}
/* chicken-install.scm:274: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}

/* k2817 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2819,2,av);}
/* chicken-install.scm:168: append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[29],"main#\052aliases\052");
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop344 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2821,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:170: g350 */
t5=((C_word*)t0)[4];
f_2776(t5,t3,t4);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4105 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_4107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4107,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[4],lf[97]);
if(C_truep(t3)){
t4=(
  /* chicken-install.scm:432: deps */
  f_3041(lf[103],t1)
);
t5=(
  /* chicken-install.scm:432: deps */
  f_3041(((C_word*)t0)[4],t1)
);
/* chicken-install.scm:432: append */
t6=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-install.scm:433: deps */
t4=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=(
  /* chicken-install.scm:433: deps */
  f_3041(((C_word*)t0)[4],t1)
);
f_4113(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4104,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4181,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:430: file-exists? */
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4100,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4104,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(t2);
t5=t2;
t6=C_u_i_car(t5);
/* chicken-install.scm:429: make-pathname */
t7=C_fast_retrieve(lf[42]);{
C_word av2[5];
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t6;
av2[4]=lf[105];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* g508 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3475,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:298: h */
t4=t2;{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* k4688 in loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_fcall f_4690(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4690,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:519: loop */
t4=((C_word*)((C_word*)t0)[5])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
f_4655(3,av2);}}
else{
t2=((C_word*)t0)[4];
t3=C_u_i_car(t2);
t4=C_eqp(lf[153],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[4];
t7=C_u_i_cdr(t6);
/* chicken-install.scm:521: every */
t8=C_fast_retrieve(lf[154]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=((C_word*)t0)[4];
t6=C_u_i_car(t5);
t7=C_eqp(lf[77],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[4];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:523: any */
t11=C_fast_retrieve(lf[155]);{
C_word av2[4];
av2[0]=t11;
av2[1]=t8;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t8=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:524: error */
t9=*((C_word*)lf[70]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[156];
av2[3]=((C_word*)t0)[7];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_3474(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3474,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3475,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=C_retrieve2(lf[39],"main#\052hacks\052");
t6=C_i_check_list_2(C_retrieve2(lf[39],"main#\052hacks\052"),lf[100]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3486,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3544,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_3544(t11,t7,C_retrieve2(lf[39],"main#\052hacks\052"));}

/* k3017 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3019,2,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,2,lf[92],t1);
t3=C_a_i_list(&a,2,lf[90],C_retrieve2(lf[15],"main#\052default-transport\052"));
t4=C_a_i_list(&a,2,t2,t3);
t5=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3331(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3331,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* chicken-install.scm:272: ext-version */
f_3114(t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:290: warning */
t3=C_fast_retrieve(lf[75]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[76];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2615,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:146: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[372];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3334,2,av);}
a=C_alloc(8);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3414,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(((C_word*)t0)[3]);
/* chicken-install.scm:275: ->string */
t6=C_fast_retrieve(lf[57]);{
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* chicken-install.scm:274: ->string */
t6=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_3486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3486,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3491,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3491(t5,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k6525 in map-loop1583 in k6491 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_6527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6527,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6502(t6,((C_word*)t0)[5],t5);}

/* k3478 in g508 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_3480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3480,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4123 in k4111 in k4105 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4125,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[100]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4138(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6219 in main#$system in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6221,2,av);}
t2=C_eqp(t1,lf[222]);
if(C_truep(t2)){
/* chicken-install.scm:758: get-environment-variable */
t3=C_fast_retrieve(lf[223]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[224];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6196(2,av2);}}}

/* k3020 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3022(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,2)))){
C_save_and_reclaim_args((void *)trf_3022,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:199: current-directory */
t3=C_fast_retrieve(lf[94]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[14],"main#\052default-location\052");
t3=C_retrieve2(lf[14],"main#\052default-location\052");
t4=C_a_i_list(&a,2,lf[92],C_retrieve2(lf[14],"main#\052default-location\052"));
t5=C_a_i_list(&a,2,lf[90],C_retrieve2(lf[15],"main#\052default-transport\052"));
t6=C_a_i_list(&a,2,t4,t5);
t7=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_list(&a,1,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3027 in k3020 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3029,2,av);}
/* chicken-install.scm:199: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[14],"main#\052default-location\052");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2625 in k2622 in k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_2627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2627,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:146: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(1);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2622 in k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_2624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2624,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:146: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[371];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2619 in k2613 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_2621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2621,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:146: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],"main#constant163");
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_4099(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4099,2,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052");
t4=C_i_check_list_2(C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"),lf[100]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4204,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4204(t9,t5,C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));}

/* k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_4096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4096,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:423: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4111 in k4105 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_4113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4113,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4125,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];
t5=C_u_i_car(t4);
/* chicken-install.scm:435: print */
t6=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
av2[3]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6927 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6929,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:979: setup-proxy */
f_6329(t2,t3);}

/* k3037 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3039,2,av);}
t2=((C_word*)t0)[2];
f_3022(t2,C_i_not(t1));}

/* k6498 in k6491 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6500,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
f_6430(2,av2);}}

/* map-loop1583 in k6491 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_6502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6502,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:889: g1589 */
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

/* k4146 in for-each-loop722 in k4123 in k4111 in k4105 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_4148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4148,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4138(t3,((C_word*)t0)[4],t2);}

/* k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4087,2,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_i_nullp(t2);
t4=(C_truep(t3)?lf[97]:C_i_car(t2));
t5=t4;
t6=*((C_word*)lf[98]+1);
t7=*((C_word*)lf[98]+1);
t8=C_i_check_port_2(*((C_word*)lf[98]+1),C_SCHEME_FALSE,C_SCHEME_TRUE,lf[99]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4096,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(t5,lf[97]);
if(C_truep(t10)){
/* chicken-install.scm:423: ##sys#print */
t11=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=lf[108];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[98]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t11=C_eqp(t5,lf[109]);
if(C_truep(t11)){
/* chicken-install.scm:423: ##sys#print */
t12=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t9;
av2[2]=lf[110];
av2[3]=C_SCHEME_FALSE;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
/* chicken-install.scm:423: ##sys#print */
t13=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t9;
av2[2]=t12;
av2[3]=C_SCHEME_FALSE;
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}

/* main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_4080(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4080,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4084,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:421: print */
t5=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[112];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* main#deps in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static C_word C_fcall f_3041(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t3=C_i_assq(t1,t2);
if(C_truep(t3)){
t4=C_i_cdr(t3);
return((C_truep(t4)?t4:C_SCHEME_END_OF_LIST));}
else{
return(C_SCHEME_END_OF_LIST);}}

/* k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4084,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:422: retrieve */
f_4250(t2,((C_word*)t0)[4]);}

/* for-each-loop722 in k4123 in k4111 in k4105 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_fcall f_4138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4138,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4148,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:436: g738 */
t5=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[101];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6903(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6903,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:210: repo-path */
f_2460(t6);}

/* k6904 in k6901 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6906,2,av);}
/* chicken-install.scm:976: exit */
t2=C_fast_retrieve(lf[83]);{
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

/* k6930 in k6927 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6932,2,av);}
t2=C_i_cddr(((C_word*)t0)[2]);
/* chicken-install.scm:980: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6392(t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[5])[1]);}

/* k5540 in k5537 in k5534 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5542,2,av);}
/* chicken-install.scm:679: newline */
t2=*((C_word*)lf[236]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6960 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6962,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:984: string->symbol */
t4=*((C_word*)lf[143]+1);{
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

/* k5537 in k5534 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in ... */
static void C_ccall f_5539(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,6)))){
C_save_and_reclaim((void *)f_5539,2,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,2,lf[316],lf[155]);
t4=C_a_i_list(&a,5,lf[77],lf[317],lf[318],lf[319],lf[320]);
t5=C_a_i_list(&a,4,lf[321],t3,lf[322],t4);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5551,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:675: find-files */
t7=C_fast_retrieve(lf[325]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t2;
av2[2]=lf[326];
av2[3]=lf[327];
av2[4]=t5;
av2[5]=lf[328];
av2[6]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}

/* f8098 in tmp1154 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in ... */
static void C_ccall f8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8098,2,av);}
/* chicken-install.scm:801: $system */
f_6170(((C_word*)t0)[2],t1);}

/* k5534 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in ... */
static void C_ccall f_5536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5536,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:674: print* */
t3=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[329];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* map-loop1751 in k7311 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_7336(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7336,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7330 in k7311 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_7332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7332,2,av);}
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
/* chicken-install.scm:1052: append */
t4=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6974 in k6960 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_6976(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6976,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[25],"main#\052csc-features\052"));
t3=C_mutate2(&lf[25] /* (set! main#*csc-features* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:985: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k4412 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_4414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4414,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4430,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4430(t6,t2,((C_word*)t0)[3]);}

/* k4417 in for-each-loop862 in k4412 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in ... */
static void C_ccall f_4419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4419,2,av);}
/* chicken-install.scm:498: setup-api#remove-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k7311 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_7313(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_7313,2,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7332,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7336,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_7336(t11,t7,((C_word*)t0)[6]);}
else{
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8208,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t4=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4411,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4455,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:494: string-intersperse */
t5=C_fast_retrieve(lf[120]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[121];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* loop in k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_3491(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_3491,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3505,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:302: reverse */
t6=*((C_word*)lf[113]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=t5;
t7=t2;
t8=C_u_i_cdr(t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3524,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:303: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
C_call_with_values(4,av2);}}}

/* for-each-loop507 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_3544(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3544,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3554,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* chicken-install.scm:295: g508 */
t5=((C_word*)t0)[3];
f_3475(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2861 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2863,2,av);}
t2=C_mutate2(&lf[35] /* (set! main#*override* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7083 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_7085(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7085,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[11] /* (set! main#*username* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1009: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k2864 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_2866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2866,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
/* chicken-install.scm:178: read-file */
t3=C_fast_retrieve(lf[363]);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_mutate2(&lf[35] /* (set! main#*override* ...) */,t3);
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4438 in for-each-loop862 in k4412 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in ... */
static void C_ccall f_4440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4440,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4430(t3,((C_word*)t0)[4],t2);}

/* a3517 in loop in k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3518,2,av);}
/* chicken-install.scm:305: check-dependency */
f_3208(t1,((C_word*)t0)[2]);}

/* a3523 in loop in k3484 in k3472 in a4373 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_3524(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3524,4,av);}
a=C_alloc(6);
t4=(C_truep(t2)?C_a_i_cons(&a,2,t2,((C_word*)t0)[2]):((C_word*)t0)[2]);
if(C_truep(t3)){
t5=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* chicken-install.scm:306: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3491(t6,t1,((C_word*)t0)[5],t4,t5);}
else{
t5=((C_word*)t0)[3];
/* chicken-install.scm:306: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3491(t6,t1,((C_word*)t0)[5],t4,t5);}}

/* k4423 in k4412 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in ... */
static void C_ccall f_4425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4425,2,av);}
/* chicken-install.scm:500: retrieve */
f_4250(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7318 in k7311 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_7320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7320,2,av);}
/* chicken-install.scm:1052: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6392(t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);}

/* k4297 in k4294 in a4291 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_4299,2,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));
t4=C_mutate2(&lf[78] /* (set! main#*eggs+dirs+vers* ...) */,t3);
t5=((C_word*)t0)[5];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4294 in a4291 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_4296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4296,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:456: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[194];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[195];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* a4291 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_4292(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4292,4,av);}
a=C_alloc(9);
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4296,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_i_not(t4);
if(C_truep(t7)){
if(C_truep(t7)){
/* chicken-install.scm:455: error */
t8=*((C_word*)lf[70]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[196];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t6;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_4296(2,av2);}}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4323,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:454: directory */
t9=C_fast_retrieve(lf[197]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_4286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_4286,2,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3822,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:371: with-default-sources */
f_3717(t1,t4);}

/* k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_4281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4281,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:450: ##sys#call-with-values */{
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

/* k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_7307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7307,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7373,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1051: every */
t5=C_fast_retrieve(lf[154]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4270 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_4272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4272,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_mutate2(&lf[78] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_4254(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4254,2,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t2,lf[100]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4607(t8,t4,t2);}

/* main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_4250(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4250,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4254,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:442: print */
t4=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[202];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6343 in k6337 in main#setup-proxy in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6345,2,av);}
a=C_alloc(5);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6352,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:851: get-environment-variable */
t4=C_fast_retrieve(lf[223]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[228];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6337 in main#setup-proxy in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_6339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6339,2,av);}
a=C_alloc(4);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:850: irregex-match-substring */
t4=C_fast_retrieve(lf[227]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(3);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7537 in k7531 in k7528 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_7539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7539,2,av);}
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7534 in k7531 in k7528 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7536,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7531 in k7528 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_7533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7533,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7536,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7539,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[235]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[235]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7528 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_7530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7530,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1085: g1796 */
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* main#setup-proxy in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_6329(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6329,2,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_stringp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6339,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:849: irregex-match */
t4=C_fast_retrieve(lf[229]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[230];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_7527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7527,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7541,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:1085: call-with-current-continuation */
t4=*((C_word*)lf[192]+1);{
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

/* k7522 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_7524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7524,2,av);}
/* chicken-install.scm:868: setup-proxy */
f_6329(((C_word*)t0)[2],t1);}

/* a3704 in a3675 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3705,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3711,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:317: k555 */
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

/* k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_7589(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7589,2,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=t1;
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6384,a[2]=t11,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:867: irregex */
t13=C_fast_retrieve(lf[445]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[446];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}

/* k6542 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6544,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:885: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[357];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7580 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_7582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7582,2,av);}
/* chicken-install.scm:1092: cleanup */
f_5568(((C_word*)t0)[2]);}

/* k4615 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_4617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4617,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4607(t3,((C_word*)t0)[4],t2);}

/* main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3717(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_3717,2,t1,t2);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3721,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(C_truep(C_retrieve2(lf[14],"main#\052default-location\052"))?C_retrieve2(lf[15],"main#\052default-transport\052"):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3022,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_retrieve2(lf[15],"main#\052default-transport\052"),lf[89]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:198: absolute-pathname? */
t10=C_fast_retrieve(lf[95]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_retrieve2(lf[14],"main#\052default-location\052");
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t9=t7;
f_3022(t9,C_SCHEME_FALSE);}}
else{
t6=C_retrieve2(lf[13],"main#\052default-sources\052");
t7=t4;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_retrieve2(lf[13],"main#\052default-sources\052");
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* a3710 in a3704 in a3675 in a3582 in a3836 in a3821 in a4285 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_ccall f_3711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3711,2,av);}{
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

/* k2488 in k2485 in k2479 in k2475 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2490,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:117: get-output-string */
t3=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2491 in k2488 in k2485 in k2479 in k2475 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_2493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2493,2,av);}
/* chicken-install.scm:117: make-pathname */
t2=C_fast_retrieve(lf[42]);{
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

/* for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_fcall f_4607(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_4607,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4617,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_assoc(t4,C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));
if(C_truep(t6)){
t7=t5;
t8=t6;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4272,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:448: delete */
t10=C_fast_retrieve(lf[165]);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=t8;
av2[3]=C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052");
av2[4]=*((C_word*)lf[166]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t7=C_i_pairp(t4);
t8=(C_truep(t7)?C_u_i_car(t4):t4);
t9=t8;
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4281,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t11=t10;
t12=t4;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3982,a[2]=t12,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t12))){
t14=C_u_i_car(t12);
/* chicken-install.scm:406: string->symbol */
t15=*((C_word*)lf[143]+1);{
C_word av2[3];
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
/* chicken-install.scm:406: string->symbol */
t14=*((C_word*)lf[143]+1);{
C_word av2[3];
av2[0]=t14;
av2[1]=t13;
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_4509(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4509,2,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[115]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4517(t7,t3,t1);}

/* a3767 in k3761 in k3758 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_3768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3768,2,av);}
t2=C_eqp(lf[89],((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
/* chicken-install.scm:367: trying-sources */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3726(t4,t1,t3);}
else{
t3=C_i_set_car(((C_word*)t0)[3],C_SCHEME_FALSE);
t4=C_i_cdr(((C_word*)t0)[3]);
/* chicken-install.scm:367: trying-sources */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3726(t5,t1,t4);}}

/* k3761 in k3758 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_fcall f_3763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3763,2,t0,t1);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3768,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:362: proc */
t4=((C_word*)t0)[4];{
C_word av2[5];
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k3758 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3760,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_assq(lf[90],((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=t3;
f_3763(t6,C_i_cadr(t4));}
else{
/* chicken-install.scm:361: error */
t6=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[91];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k2479 in k2475 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2481,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:117: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[45];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* g1787 in k7440 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_7446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7446,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:1078: irregex-match-substring */
t6=C_fast_retrieve(lf[227]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k7440 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_7442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7442,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:923: g1787 */
t3=t2;
f_7446(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1]);
/* chicken-install.scm:1081: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6392(t5,((C_word*)t0)[5],t3,t4);}}

/* k7224 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_7226(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7226,2,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate2(&lf[81] /* (set! main#*csi* ...) */,t2);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
/* chicken-install.scm:1036: loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6392(t7,((C_word*)t0)[4],t6,((C_word*)((C_word*)t0)[5])[1]);}

/* k2485 in k2479 in k2475 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_2487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2487,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:117: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)C_BINARY_VERSION);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4453 in k4409 in k4406 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4455,2,av);}
/* chicken-install.scm:494: print */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[119];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7434 in k7427 in k7418 in k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_7436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7436,2,av);}
/* chicken-install.scm:1068: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5118 in a5112 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in ... */
static void C_ccall f_5119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5119,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5123,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:654: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[271];
av2[3]=lf[272];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4663 in loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_4665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4665,2,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-install.scm:515: fail */
t2=((C_word*)t0)[3];
f_4633(t2,((C_word*)t0)[2]);}}

/* k2475 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2477,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:117: open-output-string */
t4=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4483 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_4485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4485,2,av);}
/* chicken-install.scm:485: print */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a7546 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_7547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7547,3,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7553,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1085: k1792 */
t4=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a5112 in a5106 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5113,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5119,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:654: k1164 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_2460(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2460,1,t1);}
a=C_alloc(6);
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
t2=C_retrieve2(lf[27],"main#\052prefix\052");
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_retrieve2(lf[27],"main#\052prefix\052");
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[30],"main#\052cross-chicken\052"))?C_i_not(C_retrieve2(lf[31],"main#\052host-extension\052")):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2477,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[47]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[27],"main#\052prefix\052"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:121: open-output-string */
t4=C_fast_retrieve(lf[46]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-install.scm:122: repository-path */
t3=C_fast_retrieve(lf[49]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k7427 in k7418 in k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_7429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7429,2,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_7416(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],lf[439]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7436,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:1068: current-directory */
t3=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_7541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7541,3,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7547,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7572,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1085: with-exception-handler */
t5=C_fast_retrieve(lf[191]);{
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

/* k7421 in k7418 in k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_7423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7423,2,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_7416(t2,C_a_i_list2(&a,2,t1,lf[439]));}

/* k3423 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3425,2,av);}
/* chicken-install.scm:293: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}

/* k7418 in k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_7420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7420,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7429,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:1066: absolute-pathname? */
t5=C_fast_retrieve(lf[95]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-install.scm:1069: current-directory */
t4=C_fast_retrieve(lf[94]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_4515(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4515,2,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_retrieve2(lf[79],"main#\052dependencies\052"));
t4=C_mutate2(&lf[79] /* (set! main#*dependencies* ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4478,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4485,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:485: string-intersperse */
t8=C_fast_retrieve(lf[120]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=lf[146];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4402(2,av2);}}}

/* map-loop829 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_fcall f_4517(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4517,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_car(t4);
t6=t3;
f_4542(t6,t5);}
else{
t5=t3;
f_4542(t5,t4);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5465 in k5462 in k5459 in k5456 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_ccall f_5467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5467,2,av);}
/* chicken-install.scm:600: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5462 in k5459 in k5456 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5464,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:599: cleanup */
f_5568(t2);}

/* k5459 in k5456 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5461,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:598: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[348];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7414 in k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_fcall f_7416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7416,2,t0,t1);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1),C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));
t3=C_mutate2(&lf[78] /* (set! main#*eggs+dirs+vers* ...) */,t2);
t4=((C_word*)t0)[3];
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* chicken-install.scm:1072: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6392(t7,((C_word*)t0)[6],t5,t6);}

/* trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3726,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3738,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:348: proc */
t4=((C_word*)t0)[2];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t3=C_i_car(t2);
t4=t3;
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3760,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=C_i_assq(lf[92],t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3806,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=C_i_cadr(t6);
/* chicken-install.scm:357: resolve-location */
f_2973(t5,t8);}
else{
/* chicken-install.scm:359: error */
t8=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[93];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=t2;
t6=C_u_i_cdr(t5);
/* chicken-install.scm:368: trying-sources */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}}}

/* k5456 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5458,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_list_ref(((C_word*)t0)[4],((C_word*)t0)[5]);
/* chicken-install.scm:598: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3721,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3726(t5,((C_word*)t0)[3],t1);}

/* k4466 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_4468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4468,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:492: setup-api#abort-setup */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[127]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[127]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4540 in map-loop829 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_fcall f_4542(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4542,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_4517(t6,((C_word*)t0)[5],t5);}

/* fail in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_fcall f_4633(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4633,2,t0,t1);}
/* chicken-install.scm:510: error */
t2=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[150];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a3737 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3738,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3747,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:350: with-output-to-port */
t4=C_fast_retrieve(lf[87]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[88]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* for-each-loop1466 in k6137 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_fcall f_6147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6147,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6157,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=C_i_car(t4);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6136,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:751: cadadr */
t9=*((C_word*)lf[263]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* map-loop1050 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_fcall f_5476(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5476,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_assoc(t3,C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052"));
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t5);
t8=C_slot(t2,C_fix(1));
t10=t1;
t11=t8;
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4476 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_4478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4478,2,av);}
/* chicken-install.scm:486: retrieve */
f_4250(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}

/* k4470 in k4466 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4472,2,av);}
/* chicken-install.scm:489: yes-or-no? */
t2=C_fast_retrieve(lf[123]);{
C_word *av2;
if(c >= 7) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[124];
av2[4]=lf[125];
av2[5]=lf[126];
av2[6]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3790 in k3758 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_3792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3792,2,av);}
t2=((C_word*)t0)[2];
f_3763(t2,C_i_cadr(t1));}

/* k6600 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6602,2,av);}
/* chicken-install.scm:895: append */
t2=*((C_word*)lf[104]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[78],"main#\052eggs+dirs+vers\052");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1614 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_fcall f_6604(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6604,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6629,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=t3;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6595,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:898: pathname-file */
t7=C_fast_retrieve(lf[362]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5293 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5294,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[23],"main#\052deploy\052"));
t3=C_mutate2(((C_word *)((C_word*)t0)[3])+1,C_retrieve2(lf[27],"main#\052prefix\052"));
t4=C_mutate2(&lf[23] /* (set! main#*deploy* ...) */,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate2(&lf[27] /* (set! main#*prefix* ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6637 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6639,2,av);}
/* chicken-install.scm:903: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6155 in for-each-loop1466 in k6137 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6157,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6147(t3,((C_word*)t0)[4],t2);}

/* k3408 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3410,2,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* chicken-install.scm:288: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_u_i_car(t3);
/* chicken-install.scm:276: ->string */
t5=C_fast_retrieve(lf[57]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k3412 in k3332 in k3329 in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3414,2,av);}
/* chicken-install.scm:275: setup-api#version>=? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[74]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6627 in map-loop1614 in k6570 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in ... */
static void C_ccall f_6629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6629,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_6604(t6,((C_word*)t0)[5],t5);}

/* k4856 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4858(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4858,2,av);}
a=C_alloc(18);
t2=t1;
t3=(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[290]:lf[291]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=t4,tmp=(C_word)a,a+=15,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:568: string-append */
t7=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[13];
av2[3]=lf[295];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in ... */
static void C_ccall f_4854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_4854,2,av);}
a=C_alloc(17);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[26],"main#\052csc-nonfeatures\052")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:564: open-output-string */
t5=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[298];
f_4858(2,av2);}}}

/* a3746 in a3737 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_3747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3747,2,av);}
/* chicken-install.scm:352: print */
t2=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[85];
av2[3]=lf[86];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_4850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4850,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4854,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[25],"main#\052csc-features\052")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4897,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:561: open-output-string */
t5=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[301];
f_4854(2,av2);}}}

/* k3740 in a3737 in trying-sources in k3719 in main#with-default-sources in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3742,2,av);}
/* chicken-install.scm:354: exit */
t2=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* loop in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_ccall f_4655(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4655,3,av);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4665,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:515: feature? */
t4=C_fast_retrieve(lf[152]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4690,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(t2);
t5=C_eqp(lf[157],t4);
if(C_truep(t5)){
t6=t2;
t7=C_u_i_cdr(t6);
t8=t3;
f_4690(t8,C_i_pairp(t7));}
else{
t6=t3;
f_4690(t6,C_SCHEME_FALSE);}}
else{
t3=C_i_cadr(((C_word*)t0)[4]);
/* chicken-install.scm:517: error */
t4=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[158];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k6137 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_6139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6139,2,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[100]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6147,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6147(t6,((C_word*)t0)[2],t1);}

/* k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in ... */
static void C_ccall f_4847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_4847,2,av);}
a=C_alloc(16);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4915,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:557: open-output-string */
t5=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[306];
f_4850(2,av2);}}}

/* k6134 in for-each-loop1466 in k6137 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_6136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6136,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* chicken-install.scm:751: pp */
t3=C_fast_retrieve(lf[262]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in ... */
static void C_ccall f_4843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4843,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-install.scm:555: get-prefix */
f_2527(t3,C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in ... */
static void C_ccall f_4840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4840,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4941,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:552: open-output-string */
t5=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=lf[309];
f_4843(2,av2);}}}

/* k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in ... */
static void C_ccall f_3922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3922,2,av);}
/* chicken-install.scm:391: warning */
t2=C_fast_retrieve(lf[75]);{
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

/* a3281 in scan in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3282(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3282,4,av);}
a=C_alloc(7);
t4=t3;
t5=(C_truep(t2)?C_SCHEME_FALSE:C_i_not(t4));
if(C_truep(t5)){
/* chicken-install.scm:262: values */{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t6=C_i_cdr(((C_word*)t0)[2]);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3303,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t9=((C_word*)t0)[5];
t10=t8;
f_3303(t10,(C_truep(t9)?((C_word*)t0)[5]:t2));}
else{
t9=t8;
f_3303(t9,((C_word*)t0)[5]);}}}

/* k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in ... */
static void C_ccall f_4820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4820,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:546: setup-api#sudo-install */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[310]);
C_word *av2=av; /* Re-use our own argvector */
av2[0]=*((C_word*)lf[310]+1);
av2[1]=t3;
tp(2,av2);}}

/* a5282 in k5265 in k5256 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in ... */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5283,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[31],"main#\052host-extension\052"));
t3=C_mutate2(&lf[31] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in ... */
static void C_fcall f_6660(C_word t0,C_word t1){
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
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6660,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8133,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t4=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[384]))){
t2=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:930: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_6392(t5,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[385]))){
t2=lf[7] /* main#*force* */ =C_SCHEME_TRUE;;
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:933: loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_6392(t5,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[7])[1]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[386]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[387]));
if(C_truep(t3)){
t4=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t5=((C_word*)t0)[5];
t6=C_u_i_cdr(t5);
/* chicken-install.scm:936: loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_6392(t7,((C_word*)t0)[2],t6,((C_word*)((C_word*)t0)[7])[1]);}
else{
t4=C_u_i_string_equal_p(((C_word*)t0)[3],lf[388]);
t5=(C_truep(t4)?t4:C_u_i_string_equal_p(((C_word*)t0)[3],lf[389]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6710,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:938: setup-api#sudo-install */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[310]);
C_word av2[3];
av2[0]=*((C_word*)lf[310]+1);
av2[1]=t6;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t6=C_u_i_string_equal_p(((C_word*)t0)[3],lf[390]);
t7=(C_truep(t6)?t6:C_u_i_string_equal_p(((C_word*)t0)[3],lf[391]));
if(C_truep(t7)){
t8=lf[9] /* main#*retrieve-only* */ =C_SCHEME_TRUE;;
t9=((C_word*)t0)[5];
t10=C_u_i_cdr(t9);
/* chicken-install.scm:942: loop */
t11=((C_word*)((C_word*)t0)[6])[1];
f_6392(t11,((C_word*)t0)[2],t10,((C_word*)((C_word*)t0)[7])[1]);}
else{
t8=C_u_i_string_equal_p(((C_word*)t0)[3],lf[392]);
t9=(C_truep(t8)?t8:C_u_i_string_equal_p(((C_word*)t0)[3],lf[393]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t11=((C_word*)t0)[5];
t12=C_u_i_cdr(t11);
if(C_truep(C_i_pairp(t12))){
t13=t10;{
C_word av2[2];
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
f_6740(2,av2);}}
else{
t13=t10;
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8138,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t15=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}}
else{
t10=C_u_i_string_equal_p(((C_word*)t0)[3],lf[394]);
t11=(C_truep(t10)?t10:C_u_i_string_equal_p(((C_word*)t0)[3],lf[395]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t13=((C_word*)t0)[5];
t14=C_u_i_cdr(t13);
if(C_truep(C_i_pairp(t14))){
t15=t12;{
C_word av2[2];
av2[0]=t15;
av2[1]=C_SCHEME_UNDEFINED;
f_6769(2,av2);}}
else{
t15=t12;
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8143,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t17=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t17;
av2[1]=t16;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}
else{
t12=C_u_i_string_equal_p(((C_word*)t0)[3],lf[396]);
t13=(C_truep(t12)?t12:C_u_i_string_equal_p(((C_word*)t0)[3],lf[397]));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6802,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t15=((C_word*)t0)[5];
t16=C_u_i_cdr(t15);
if(C_truep(C_i_pairp(t16))){
t17=t14;{
C_word av2[2];
av2[0]=t17;
av2[1]=C_SCHEME_UNDEFINED;
f_6802(2,av2);}}
else{
t17=t14;
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8148,a[2]=t17,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t19=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t19;
av2[1]=t18;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t19+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[398]))){
t14=lf[28] /* main#*no-install-deps* */ =C_SCHEME_TRUE;;
t15=((C_word*)t0)[5];
t16=C_u_i_cdr(t15);
/* chicken-install.scm:962: loop */
t17=((C_word*)((C_word*)t0)[6])[1];
f_6392(t17,((C_word*)t0)[2],t16,((C_word*)((C_word*)t0)[7])[1]);}
else{
t14=C_u_i_string_equal_p(((C_word*)t0)[3],lf[399]);
t15=(C_truep(t14)?t14:C_u_i_string_equal_p(((C_word*)t0)[3],lf[400]));
if(C_truep(t15)){
t16=lf[5] /* main#*keep* */ =C_SCHEME_TRUE;;
t17=lf[10] /* main#*no-install* */ =C_SCHEME_TRUE;;
t18=((C_word*)t0)[5];
t19=C_u_i_cdr(t18);
/* chicken-install.scm:966: loop */
t20=((C_word*)((C_word*)t0)[6])[1];
f_6392(t20,((C_word*)t0)[2],t19,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[401]))){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6878,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:968: chicken-version */
t18=C_fast_retrieve(lf[55]);{
C_word av2[2];
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t16=C_u_i_string_equal_p(((C_word*)t0)[3],lf[402]);
t17=(C_truep(t16)?t16:C_u_i_string_equal_p(((C_word*)t0)[3],lf[403]));
if(C_truep(t17)){
t18=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t19=((C_word*)t0)[5];
t20=C_u_i_cdr(t19);
/* chicken-install.scm:972: loop */
t21=((C_word*)((C_word*)t0)[6])[1];
f_6392(t21,((C_word*)t0)[2],t20,((C_word*)((C_word*)t0)[7])[1]);}
else{
t18=C_u_i_string_equal_p(((C_word*)t0)[3],lf[404]);
t19=(C_truep(t18)?t18:C_u_i_string_equal_p(((C_word*)t0)[3],lf[405]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t21=((C_word*)t0)[5];
t22=C_u_i_cdr(t21);
if(C_truep(C_i_pairp(t22))){
t23=t20;{
C_word av2[2];
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
f_6903(2,av2);}}
else{
t23=t20;
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8161,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t25=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t25;
av2[1]=t24;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[413],((C_word*)t0)[3]))){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6929,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t21=((C_word*)t0)[5];
t22=C_u_i_cdr(t21);
if(C_truep(C_i_pairp(t22))){
t23=t20;{
C_word av2[2];
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
f_6929(2,av2);}}
else{
t23=t20;
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8166,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t25=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t25;
av2[1]=t24;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}}
else{
t20=C_u_i_string_equal_p(lf[414],((C_word*)t0)[3]);
t21=(C_truep(t20)?t20:C_u_i_string_equal_p(lf[415],((C_word*)t0)[3]));
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6962,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
f_6962(2,av2);}}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8171,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t27=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[416],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6996,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
f_6996(2,av2);}}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8176,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t27=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[417],((C_word*)t0)[3]))){
t22=lf[8] /* main#*run-tests* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:993: loop */
t25=((C_word*)((C_word*)t0)[6])[1];
f_6392(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[418],((C_word*)t0)[3]))){
t22=lf[32] /* main#*target-extension* */ =C_SCHEME_FALSE;;
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:996: loop */
t25=((C_word*)((C_word*)t0)[6])[1];
f_6392(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[419],((C_word*)t0)[3]))){
t22=lf[31] /* main#*host-extension* */ =C_SCHEME_FALSE;;
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:999: loop */
t25=((C_word*)((C_word*)t0)[6])[1];
f_6392(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[420],((C_word*)t0)[3]))){
t22=lf[33] /* main#*debug-setup* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:1002: loop */
t25=((C_word*)((C_word*)t0)[6])[1];
f_6392(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[421],((C_word*)t0)[3]))){
t22=lf[23] /* main#*deploy* */ =C_SCHEME_TRUE;;
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
/* chicken-install.scm:1005: loop */
t25=((C_word*)((C_word*)t0)[6])[1];
f_6392(t25,((C_word*)t0)[2],t24,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[422],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7085,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
f_7085(2,av2);}}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8181,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t27=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[423],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7111,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
f_7111(2,av2);}}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8186,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t27=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[424],((C_word*)t0)[3]))){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7137,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t23=((C_word*)t0)[5];
t24=C_u_i_cdr(t23);
if(C_truep(C_i_pairp(t24))){
t25=t22;{
C_word av2[2];
av2[0]=t25;
av2[1]=C_SCHEME_UNDEFINED;
f_7137(2,av2);}}
else{
t25=t22;
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8191,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t27=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}}
else{
t22=C_u_i_string_equal_p(lf[425],((C_word*)t0)[3]);
t23=(C_truep(t22)?t22:C_u_i_string_equal_p(lf[426],((C_word*)t0)[3]));
if(C_truep(t23)){
t24=lf[6] /* main#*keep-existing* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1020: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[427],((C_word*)t0)[3]))){
t24=lf[36] /* main#*reinstall* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1023: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[428],((C_word*)t0)[3]))){
t24=lf[24] /* main#*trunk* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1026: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[429],((C_word*)t0)[3]))){
t24=lf[34] /* main#*keep-going* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1029: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[430],((C_word*)t0)[3]))){
t24=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1032: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[431],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7226,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;{
C_word av2[2];
av2[0]=t27;
av2[1]=C_SCHEME_UNDEFINED;
f_7226(2,av2);}}
else{
t27=t24;
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8196,a[2]=t27,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t29=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t29;
av2[1]=t28;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t29+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[432],((C_word*)t0)[3]))){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7252,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
if(C_truep(C_i_pairp(t26))){
t27=t24;{
C_word av2[2];
av2[0]=t27;
av2[1]=C_SCHEME_UNDEFINED;
f_7252(2,av2);}}
else{
t27=t24;
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8201,a[2]=t27,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:804: print */
t29=*((C_word*)lf[84]+1);{
C_word av2[3];
av2[0]=t29;
av2[1]=t28;
av2[2]=lf[383];
((C_proc)(void*)(*((C_word*)t29+1)))(3,av2);}}}
else{
if(C_truep(C_u_i_string_equal_p(lf[433],((C_word*)t0)[3]))){
t24=lf[37] /* main#*show-depends* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1043: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep(C_u_i_string_equal_p(lf[434],((C_word*)t0)[3]))){
t24=lf[38] /* main#*show-foreign-depends* */ =C_SCHEME_TRUE;;
t25=((C_word*)t0)[5];
t26=C_u_i_cdr(t25);
/* chicken-install.scm:1046: loop */
t27=((C_word*)((C_word*)t0)[6])[1];
f_6392(t27,((C_word*)t0)[2],t26,((C_word*)((C_word*)t0)[7])[1]);}
else{
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t25=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t25,C_fix(0)))){
t26=C_i_string_ref(((C_word*)t0)[3],C_fix(0));
t27=t24;
f_7298(t27,C_u_i_char_equalp(C_make_character(45),t26));}
else{
t26=t24;
f_7298(t26,C_SCHEME_FALSE);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in ... */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4814,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:544: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[311];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in ... */
static void C_ccall f_4817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4817,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:544: get-output-string */
t3=C_fast_retrieve(lf[43]);{
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

/* scan in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3250(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_3250,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
if(C_truep(t4)){
/* chicken-install.scm:255: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t4;
C_values(4,av2);}}
else{
if(C_truep(t3)){
t5=t3;
/* chicken-install.scm:255: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t4;
C_values(4,av2);}}
else{
/* chicken-install.scm:255: values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t4;
C_values(4,av2);}}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3272,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3282,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:260: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4811,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-install.scm:544: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in ... */
static void C_ccall f_3907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3907,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[6];
t4=C_u_i_car(t3);
/* chicken-install.scm:392: ##sys#print */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a5276 in k5265 in k5256 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in ... */
static void C_ccall f_5277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5277,2,av);}
/* chicken-install.scm:668: setup */
t2=((C_word*)t0)[2];
f_5042(t2,t1,((C_word*)t0)[3]);}

/* k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in ... */
static void C_ccall f_3901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3901,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
/* chicken-install.scm:392: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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

/* a5271 in k5265 in k5256 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in ... */
static void C_ccall f_5272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5272,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_retrieve2(lf[31],"main#\052host-extension\052"));
t3=C_mutate2(&lf[31] /* (set! main#*host-extension* ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in ... */
static void C_ccall f_3904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3904,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:392: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[134];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_4805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4805,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:544: ##sys#print */
t3=*((C_word*)lf[44]+1);{
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
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_4808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4808,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:544: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[312];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5425 in for-each-loop1095 in k5410 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_ccall f_5427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5427,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5417(t4,((C_word*)t0)[5],t2,t3);}

/* k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in ... */
static void C_ccall f_3916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3916,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:392: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[132]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[132]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in ... */
static void C_ccall f_3919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3919,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:392: get-output-string */
t3=C_fast_retrieve(lf[43]);{
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

/* k3908 in k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in ... */
static void C_ccall f_3910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3910,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:392: ##sys#print */
t3=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[133];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3911 in k3908 in k3905 in k3902 in k3899 in k3893 in g625 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in ... */
static void C_ccall f_3913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3913,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=C_u_i_cdr(t3);
/* chicken-install.scm:392: ##sys#print */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5834,2,av);}
a=C_alloc(4);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:696: pathname-strip-extension */
t4=C_fast_retrieve(lf[254]);{
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

/* k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_5837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5837,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:697: pathname-strip-extension */
t3=C_fast_retrieve(lf[254]);{
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

/* a3271 in scan in k3239 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_3272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3272,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* chicken-install.scm:260: check-dependency */
f_3208(t1,t2);}

/* k5410 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_ccall f_5412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5412,2,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5417,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5417(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* for-each-loop1095 in k5410 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in ... */
static void C_fcall f_5417(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5417,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5427,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
/* chicken-install.scm:603: g1096 */
t9=((C_word*)t0)[3];
f_5022(t9,t6,t7,t8);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* a5822 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5823,2,av);}
t2=C_mutate2(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[250]));
t3=C_mutate2((C_word*)lf[250]+1 /* (set! ##sys#warnings-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_5828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5828,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5920,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5920(t5,t1,((C_word*)t0)[2]);}

/* k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_5076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5076,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[8],"main#\052run-tests\052"))){
if(C_truep(((C_word*)t0)[5])){
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5082(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5168,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:649: file-exists? */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[278];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5082(2,av2);}}}

/* a6101 in a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 in ... */
static void C_ccall f_6102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6102,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
/* chicken-install.scm:738: find */
t5=C_fast_retrieve(lf[211]);{
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

/* a6107 in a6101 in a6038 in main#apply-mappings in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6108,3,av);}
/* chicken-install.scm:738: g1428 */
t3=((C_word*)((C_word*)t0)[2])[1];{
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
f_6001(4,av2);}}

/* k5841 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5843,2,av);}
/* chicken-install.scm:694: g1276 */
t2=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5840,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:694: call-with-current-continuation */
t5=*((C_word*)lf[192]+1);{
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

/* k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in ... */
static void C_ccall f_5064(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5064,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t6=t2;
t7=t3;
t8=t4;
t9=t5;
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4791,a[2]=t9,a[3]=t6,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t11=C_retrieve2(lf[23],"main#\052deploy\052");
if(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))){
t12=C_retrieve2(lf[23],"main#\052deploy\052");
t13=t10;
f_4791(t13,(C_truep(C_retrieve2(lf[23],"main#\052deploy\052"))?lf[314]:lf[315]));}
else{
if(C_truep(C_retrieve2(lf[30],"main#\052cross-chicken\052"))){
t12=C_retrieve2(lf[31],"main#\052host-extension\052");
t13=t10;
f_4791(t13,(C_truep(C_retrieve2(lf[31],"main#\052host-extension\052"))?lf[315]:lf[314]));}
else{
t12=t10;
f_4791(t12,lf[315]);}}}

/* tmp1127 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_fcall f_5069(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5069,2,t0,t1);}
/* chicken-install.scm:646: $system */
f_6170(t1,((C_word*)t0)[2]);}

/* k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in ... */
static void C_ccall f_5067(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5067,2,av);}
a=C_alloc(16);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5069,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[34],"main#\052keep-going\052"))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5180,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5185,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:641: call-with-current-continuation */
t9=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-install.scm:641: tmp1127 */
t7=t5;
f_5069(t7,t6);}}

/* a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in ... */
static void C_ccall f_5060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5060,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[30],"main#\052cross-chicken\052"))){
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5536,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:673: print* */
t5=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[330];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5064(2,av2);}}}

/* a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5848,3,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5854,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:694: with-exception-handler */
t5=C_fast_retrieve(lf[191]);{
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

/* k5265 in k5256 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in ... */
static void C_ccall f_5267(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_5267,2,av);}
a=C_alloc(16);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5272,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:667: ##sys#dynamic-wind */
t9=*((C_word*)lf[256]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k5872 in k5866 in a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in ... */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5874,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:701: ##sys#print */
t3=*((C_word*)lf[44]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5096 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_5098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5098,2,av);}
t2=lf[21] /* main#*running-test* */ =C_SCHEME_FALSE;;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5875 in k5872 in k5866 in a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in ... */
static void C_ccall f_5877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5877,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:701: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[132]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[132]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in ... */
static void C_fcall f_4791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4791,2,t0,t1);}
a=C_alloc(8);
t2=t1;
t3=(C_truep(C_retrieve2(lf[33],"main#\052debug-setup\052"))?lf[280]:lf[281]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-install.scm:544: open-output-string */
t6=C_fast_retrieve(lf[46]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in ... */
static void C_ccall f_4799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4799,2,av);}
a=C_alloc(10);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t3,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* chicken-install.scm:544: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[313];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5256 in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in k6400 in loop in k6385 in ... */
static void C_ccall f_5258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5258,2,av);}
a=C_alloc(5);
t2=(C_truep(C_retrieve2(lf[32],"main#\052target-extension\052"))?C_retrieve2(lf[31],"main#\052host-extension\052"):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:666: print */
t4=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a5250 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in k6460 in k6431 in k6428 in k6425 in ... */
static void C_ccall f_5251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5251,2,av);}
/* chicken-install.scm:659: change-directory */
t2=C_fast_retrieve(lf[268]);{
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

/* a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5860,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5868,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:701: open-output-string */
t3=C_fast_retrieve(lf[46]);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5866 in a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in ... */
static void C_ccall f_5868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5868,2,av);}
a=C_alloc(7);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-install.scm:701: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[251];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_fcall f_3208(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3208,2,t1,t2);}
a=C_alloc(8);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t3:C_i_stringp(t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3235,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:249: ext-version */
f_3114(t6,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3241,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_listp(t2))){
t6=C_i_car(t2);
t7=t5;
f_3241(t7,C_eqp(lf[77],t6));}
else{
t6=t5;
f_3241(t6,C_SCHEME_FALSE);}}}

/* k5202 in k5199 in a5196 in a5190 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in ... */
static void C_ccall f_5204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5204,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:641: print */
t3=*((C_word*)lf[84]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5199 in a5196 in a5190 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_ccall f_5201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5201,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:641: print-error-message */
t3=C_fast_retrieve(lf[173]);{
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

/* a5208 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_5209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5209,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5221,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:641: ##sys#call-with-values */{
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

/* k5205 in k5202 in k5199 in a5196 in a5190 in a5184 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in ... */
static void C_ccall f_5207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5207,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5884 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5885,2,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5905,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:694: ##sys#call-with-values */{
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

/* k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in ... */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3982,2,av);}
a=C_alloc(4);
t2=t1;
t3=C_i_assq(t2,C_retrieve2(lf[35],"main#\052override\052"));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:405: g656 */
t5=t4;
f_3989(t5,((C_word*)t0)[3],t3);}
else{
t4=C_i_pairp(((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=(C_truep(t4)?C_u_i_cdr(((C_word*)t0)[2]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in ... */
static void C_fcall f_3989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3989,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3993,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3999,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t5=C_i_cadr(t2);
t6=C_u_i_cdr(((C_word*)t0)[2]);
t7=C_i_equalp(t5,t6);
t8=t4;
f_3999(t8,C_i_not(t7));}
else{
t5=t4;
f_3999(t5,C_SCHEME_FALSE);}}

/* k5881 in k5878 in k5875 in k5872 in k5866 in a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in ... */
static void C_ccall f_5883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5883,2,av);}
/* chicken-install.scm:699: print-error-message */
t2=C_fast_retrieve(lf[173]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[88]+1);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5878 in k5875 in k5872 in k5866 in a5859 in a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5880,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:701: get-output-string */
t3=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3223 in main#check-dependency in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3225,2,av);}
/* chicken-install.scm:249: values */{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}

/* k3991 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_3993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3993,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3997 in g656 in k3980 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_fcall f_3999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3999,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:411: open-output-string */
t3=C_fast_retrieve(lf[46]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* chicken-install.scm:415: print */
t2=*((C_word*)lf[84]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[201];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k4874 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in ... */
static void C_ccall f_4876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4876,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:564: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[297];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4868 in k4856 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4870,2,av);}
/* chicken-install.scm:568: setup-api#shellpath */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[294]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[294]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k4321 in a4291 in k4279 in for-each-loop760 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_4323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4323,2,av);}
if(C_truep(C_i_nullp(t1))){
/* chicken-install.scm:455: error */
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[196];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_4296(2,av2);}}}

/* k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_3968(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3968,2,av);}
a=C_alloc(5);
t2=C_i_assq(t1,C_retrieve2(lf[35],"main#\052override\052"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:387: g625 */
t4=t3;
f_3881(t4,((C_word*)t0)[3],t2);}
else{
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[2];
t7=C_u_i_car(t6);
/* chicken-install.scm:398: extension-information */
t8=C_fast_retrieve(lf[142]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t5;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3960 in k3966 in a3872 in k4400 in k4513 in k4507 in k4393 in a4389 in k4367 in k4364 in k4361 in k4358 in k4355 in k4349 in for-each-loop802 in k4331 in k4252 in main#retrieve in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_3962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_3962,2,av);}
t2=C_i_assq(lf[56],t1);
t3=(C_truep(t2)?C_i_cadr(t2):lf[136]);
t4=((C_word*)t0)[2];
t5=C_u_i_cdr(t4);
/* chicken-install.scm:396: conc */
t6=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 10) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(10);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[139];
av2[5]=t3;
av2[6]=lf[140];
av2[7]=t5;
av2[8]=lf[141];
av2[9]=C_make_character(10);
((C_proc)(void*)(*((C_word*)t6+1)))(10,av2);}}

/* k4864 in k4856 in k4852 in k4848 in k4845 in k4841 in k4838 in k4971 in k4818 in k4815 in k4812 in k4809 in k4806 in k4803 in k4797 in k4789 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in ... */
static void C_ccall f_4866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,18)))){
C_save_and_reclaim((void *)f_4866,2,av);}
/* chicken-install.scm:532: conc */
t2=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 19) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(19);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[81],"main#\052csi\052");
av2[3]=lf[292];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[293];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[8];
av2[11]=((C_word*)t0)[9];
av2[12]=((C_word*)t0)[10];
av2[13]=((C_word*)t0)[11];
av2[14]=((C_word*)t0)[12];
av2[15]=((C_word*)t0)[13];
av2[16]=((C_word*)t0)[14];
av2[17]=C_make_character(32);
av2[18]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(19,av2);}}

/* a5853 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in ... */
static void C_ccall f_5854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5854,3,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5860,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:694: k1272 */
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4179 in k4102 in g706 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in ... */
static void C_ccall f_4181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4181,2,av);}
if(C_truep(t1)){
/* chicken-install.scm:430: with-input-from-file */
t2=C_fast_retrieve(lf[59]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[60]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_4107(2,av2);}}}

/* k7397 in k7480 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_7399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7399,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7416,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7420,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:1064: pathname-directory */
t5=C_fast_retrieve(lf[440]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_5602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5602,2,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5666,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5690,tmp=(C_word)a,a+=2,tmp);
/* chicken-install.scm:707: append-map */
t5=C_fast_retrieve(lf[212]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=C_fast_retrieve(lf[248]);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_5605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5605,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:719: newline */
t4=*((C_word*)lf[236]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in ... */
static void C_ccall f_5608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5608,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:720: with-output-to-file */
t4=C_fast_retrieve(lf[239]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a7372 in k7305 in k7296 in k6658 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in ... */
static void C_ccall f_7373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7373,3,av);}
t3=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_i_memq(t2,lf[435]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2507 in k2501 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2509,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_fudge(C_fix(42));
/* chicken-install.scm:121: ##sys#print */
t4=*((C_word*)lf[44]+1);{
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

/* k2501 in main#repo-path in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2367 */
static void C_ccall f_2503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2503,2,av);}
a=C_alloc(5);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[41]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:121: ##sys#print */
t6=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4197 in k4194 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in ... */
static void C_ccall f_4199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4199,2,av);}
/* chicken-install.scm:439: exit */
t2=C_fast_retrieve(lf[83]);{
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

/* k4194 in k4097 in k4094 in k4085 in k4082 in main#show-depends in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in ... */
static void C_ccall f_4196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4196,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:438: cleanup */
f_5568(t2);}

/* k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in k4986 in ... */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5082,2,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=lf[21] /* main#*running-test* */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-install.scm:653: current-directory */
t4=C_fast_retrieve(lf[94]);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in k4989 in ... */
static void C_ccall f_5086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5086,2,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[34],"main#\052keep-going\052"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5102,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-install.scm:654: call-with-current-continuation */
t6=*((C_word*)lf[192]+1);{
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
/* chicken-install.scm:654: tmp1154 */
t4=t2;
f_5087(t4,t3);}}

/* tmp1154 in k5084 in k5080 in k5074 in k5065 in k5062 in a5059 in k5047 in k5044 in setup in k5039 in k5033 in k5030 in k5027 in k5024 in g1096 in k5019 in k5016 in k5013 in k5010 in k5007 in k4995 in ... */
static void C_fcall f_5087(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_5087,2,t0,t1);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=t1;
t4=C_a_i_list(&a,3,C_retrieve2(lf[81],"main#\052csi\052"),((C_word*)t0)[3],t2);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8098,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[41]+1);
av2[3]=lf[269];
av2[4]=t4;
C_apply(5,av2);}}

/* k5619 in k5609 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5621,2,av);}
/* chicken-install.scm:723: setup-api#copy-file */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[237]);
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[237]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k5623 in k5609 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5625,2,av);}
/* chicken-install.scm:723: make-pathname */
t2=C_fast_retrieve(lf[42]);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[0],"main#constant159");
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2894 in k2582 in g261 in k2965 in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in ... */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2896,2,av);}
t2=C_mutate2(&lf[39] /* (set! main#*hacks* ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5626 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5627,2,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5641,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5641(t5,t1,((C_word*)t0)[2]);}

/* k5609 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in ... */
static void C_ccall f_5611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5611,2,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5625,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:723: repo-path */
f_2460(t4);}

/* k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2388 in ... */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2564,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2566,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2967,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken-install.scm:135: file-exists? */
t6=C_fast_retrieve(lf[61]);{
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

/* k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in ... */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5614,2,av);}
/* chicken-install.scm:724: setup-api#remove-directory */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[203]);
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a5890 in a5884 in a5847 in k5838 in k5835 in k5832 in for-each-loop1258 in a5827 in k5594 in k5591 in k5588 in k5585 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in ... */
static void C_ccall f_5891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5891,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5903,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:702: string->symbol */
t3=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* broken in k2562 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in ... */
static void C_fcall f_2566(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2566,3,t0,t1,t2);}
/* chicken-install.scm:134: error */
t3=*((C_word*)lf[70]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[370];
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6557 in k6554 in k6551 in k6548 in k6542 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in ... */
static void C_ccall f_6559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6559,2,av);}
/* chicken-install.scm:884: yes-or-no? */
t2=C_fast_retrieve(lf[123]);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[126];
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6554 in k6551 in k6548 in k6542 in k6485 in k6425 in k6400 in loop in k6385 in k6382 in k7587 in a7577 in a7571 in a7540 in k7525 in k3570 in k2447 in k2419 in k2416 in k2413 in k2406 in k2403 in ... */
static void C_ccall f_6556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6556,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-install.scm:885: get-output-string */
t3=C_fast_retrieve(lf[43]);{
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

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[585] = {
{"f_6553:chicken_2dinstall_2escm",(void*)f_6553},
{"f_6550:chicken_2dinstall_2escm",(void*)f_6550},
{"f_7381:chicken_2dinstall_2escm",(void*)f_7381},
{"f_5641:chicken_2dinstall_2escm",(void*)f_5641},
{"f_7141:chicken_2dinstall_2escm",(void*)f_7141},
{"f_4988:chicken_2dinstall_2escm",(void*)f_4988},
{"f_5633:chicken_2dinstall_2escm",(void*)f_5633},
{"f_6572:chicken_2dinstall_2escm",(void*)f_6572},
{"f_5668:chicken_2dinstall_2escm",(void*)f_5668},
{"f_5666:chicken_2dinstall_2escm",(void*)f_5666},
{"f_6582:chicken_2dinstall_2escm",(void*)f_6582},
{"f_5651:chicken_2dinstall_2escm",(void*)f_5651},
{"f_2685:chicken_2dinstall_2escm",(void*)f_2685},
{"f_2680:chicken_2dinstall_2escm",(void*)f_2680},
{"f_4991:chicken_2dinstall_2escm",(void*)f_4991},
{"f_2689:chicken_2dinstall_2escm",(void*)f_2689},
{"f_4997:chicken_2dinstall_2escm",(void*)f_4997},
{"f_6595:chicken_2dinstall_2escm",(void*)f_6595},
{"f_5680:chicken_2dinstall_2escm",(void*)f_5680},
{"f_2754:chicken_2dinstall_2escm",(void*)f_2754},
{"f_5676:chicken_2dinstall_2escm",(void*)f_5676},
{"f_2729:chicken_2dinstall_2escm",(void*)f_2729},
{"f_7010:chicken_2dinstall_2escm",(void*)f_7010},
{"f_2727:chicken_2dinstall_2escm",(void*)f_2727},
{"toplevel:chicken_2dinstall_2escm",(void*)C_toplevel},
{"f_5697:chicken_2dinstall_2escm",(void*)f_5697},
{"f_5329:chicken_2dinstall_2escm",(void*)f_5329},
{"f_5690:chicken_2dinstall_2escm",(void*)f_5690},
{"f_2703:chicken_2dinstall_2escm",(void*)f_2703},
{"f_5318:chicken_2dinstall_2escm",(void*)f_5318},
{"f_2716:chicken_2dinstall_2escm",(void*)f_2716},
{"f_6402:chicken_2dinstall_2escm",(void*)f_6402},
{"f_5046:chicken_2dinstall_2escm",(void*)f_5046},
{"f_5041:chicken_2dinstall_2escm",(void*)f_5041},
{"f_5042:chicken_2dinstall_2escm",(void*)f_5042},
{"f_5049:chicken_2dinstall_2escm",(void*)f_5049},
{"f_2515:chicken_2dinstall_2escm",(void*)f_2515},
{"f_2512:chicken_2dinstall_2escm",(void*)f_2512},
{"f_6825:chicken_2dinstall_2escm",(void*)f_6825},
{"f_6829:chicken_2dinstall_2escm",(void*)f_6829},
{"f_2527:chicken_2dinstall_2escm",(void*)f_2527},
{"f_6427:chicken_2dinstall_2escm",(void*)f_6427},
{"f8110:chicken_2dinstall_2escm",(void*)f8110},
{"f_6818:chicken_2dinstall_2escm",(void*)f_6818},
{"f_6412:chicken_2dinstall_2escm",(void*)f_6412},
{"f_6177:chicken_2dinstall_2escm",(void*)f_6177},
{"f_5012:chicken_2dinstall_2escm",(void*)f_5012},
{"f_5015:chicken_2dinstall_2escm",(void*)f_5015},
{"f_5018:chicken_2dinstall_2escm",(void*)f_5018},
{"f_6170:chicken_2dinstall_2escm",(void*)f_6170},
{"f_6174:chicken_2dinstall_2escm",(void*)f_6174},
{"f_6196:chicken_2dinstall_2escm",(void*)f_6196},
{"f_5035:chicken_2dinstall_2escm",(void*)f_5035},
{"f_5032:chicken_2dinstall_2escm",(void*)f_5032},
{"f_5026:chicken_2dinstall_2escm",(void*)f_5026},
{"f_5021:chicken_2dinstall_2escm",(void*)f_5021},
{"f_5022:chicken_2dinstall_2escm",(void*)f_5022},
{"f_5029:chicken_2dinstall_2escm",(void*)f_5029},
{"f_5221:chicken_2dinstall_2escm",(void*)f_5221},
{"f_6802:chicken_2dinstall_2escm",(void*)f_6802},
{"f_5227:chicken_2dinstall_2escm",(void*)f_5227},
{"f_6809:chicken_2dinstall_2escm",(void*)f_6809},
{"f_5054:chicken_2dinstall_2escm",(void*)f_5054},
{"f8133:chicken_2dinstall_2escm",(void*)f8133},
{"f_5215:chicken_2dinstall_2escm",(void*)f_5215},
{"f_6878:chicken_2dinstall_2escm",(void*)f_6878},
{"f_6871:chicken_2dinstall_2escm",(void*)f_6871},
{"f8148:chicken_2dinstall_2escm",(void*)f8148},
{"f_3241:chicken_2dinstall_2escm",(void*)f_3241},
{"f_2692:chicken_2dinstall_2escm",(void*)f_2692},
{"f_4562:chicken_2dinstall_2escm",(void*)f_4562},
{"f_2697:chicken_2dinstall_2escm",(void*)f_2697},
{"f8138:chicken_2dinstall_2escm",(void*)f8138},
{"f8191:chicken_2dinstall_2escm",(void*)f8191},
{"f_2937:chicken_2dinstall_2escm",(void*)f_2937},
{"f_4333:chicken_2dinstall_2escm",(void*)f_4333},
{"f8181:chicken_2dinstall_2escm",(void*)f8181},
{"f_4584:chicken_2dinstall_2escm",(void*)f_4584},
{"f_2904:chicken_2dinstall_2escm",(void*)f_2904},
{"f8196:chicken_2dinstall_2escm",(void*)f8196},
{"f8171:chicken_2dinstall_2escm",(void*)f8171},
{"f_3235:chicken_2dinstall_2escm",(void*)f_3235},
{"f_5009:chicken_2dinstall_2escm",(void*)f_5009},
{"f8186:chicken_2dinstall_2escm",(void*)f8186},
{"f8161:chicken_2dinstall_2escm",(void*)f8161},
{"f8176:chicken_2dinstall_2escm",(void*)f8176},
{"f_4594:chicken_2dinstall_2escm",(void*)f_4594},
{"f_2973:chicken_2dinstall_2escm",(void*)f_2973},
{"f_2971:chicken_2dinstall_2escm",(void*)f_2971},
{"f8166:chicken_2dinstall_2escm",(void*)f8166},
{"f_2942:chicken_2dinstall_2escm",(void*)f_2942},
{"f_6996:chicken_2dinstall_2escm",(void*)f_6996},
{"f_2952:chicken_2dinstall_2escm",(void*)f_2952},
{"f_6180:chicken_2dinstall_2escm",(void*)f_6180},
{"f_6443:chicken_2dinstall_2escm",(void*)f_6443},
{"f_6430:chicken_2dinstall_2escm",(void*)f_6430},
{"f_6433:chicken_2dinstall_2escm",(void*)f_6433},
{"f_2967:chicken_2dinstall_2escm",(void*)f_2967},
{"f_2378:chicken_2dinstall_2escm",(void*)f_2378},
{"f8143:chicken_2dinstall_2escm",(void*)f8143},
{"f_2375:chicken_2dinstall_2escm",(void*)f_2375},
{"f_2372:chicken_2dinstall_2escm",(void*)f_2372},
{"f8154:chicken_2dinstall_2escm",(void*)f8154},
{"f_7605:chicken_2dinstall_2escm",(void*)f_7605},
{"f_7609:chicken_2dinstall_2escm",(void*)f_7609},
{"f_2369:chicken_2dinstall_2escm",(void*)f_2369},
{"f_2396:chicken_2dinstall_2escm",(void*)f_2396},
{"f_2399:chicken_2dinstall_2escm",(void*)f_2399},
{"f_2390:chicken_2dinstall_2escm",(void*)f_2390},
{"f_2393:chicken_2dinstall_2escm",(void*)f_2393},
{"f_2387:chicken_2dinstall_2escm",(void*)f_2387},
{"f_2381:chicken_2dinstall_2escm",(void*)f_2381},
{"f_2384:chicken_2dinstall_2escm",(void*)f_2384},
{"f_5568:chicken_2dinstall_2escm",(void*)f_5568},
{"f_3167:chicken_2dinstall_2escm",(void*)f_3167},
{"f_3160:chicken_2dinstall_2escm",(void*)f_3160},
{"f_5555:chicken_2dinstall_2escm",(void*)f_5555},
{"f_5551:chicken_2dinstall_2escm",(void*)f_5551},
{"f_3176:chicken_2dinstall_2escm",(void*)f_3176},
{"f_5587:chicken_2dinstall_2escm",(void*)f_5587},
{"f_6001:chicken_2dinstall_2escm",(void*)f_6001},
{"f_5575:chicken_2dinstall_2escm",(void*)f_5575},
{"f_5391:chicken_2dinstall_2escm",(void*)f_5391},
{"f_6021:chicken_2dinstall_2escm",(void*)f_6021},
{"f_6027:chicken_2dinstall_2escm",(void*)f_6027},
{"f_6024:chicken_2dinstall_2escm",(void*)f_6024},
{"f_5593:chicken_2dinstall_2escm",(void*)f_5593},
{"f_5599:chicken_2dinstall_2escm",(void*)f_5599},
{"f_5596:chicken_2dinstall_2escm",(void*)f_5596},
{"f_5590:chicken_2dinstall_2escm",(void*)f_5590},
{"f_5393:chicken_2dinstall_2escm",(void*)f_5393},
{"f_6043:chicken_2dinstall_2escm",(void*)f_6043},
{"f_4897:chicken_2dinstall_2escm",(void*)f_4897},
{"f_6030:chicken_2dinstall_2escm",(void*)f_6030},
{"f_6039:chicken_2dinstall_2escm",(void*)f_6039},
{"f_6037:chicken_2dinstall_2escm",(void*)f_6037},
{"f_4882:chicken_2dinstall_2escm",(void*)f_4882},
{"f_4885:chicken_2dinstall_2escm",(void*)f_4885},
{"f_4888:chicken_2dinstall_2escm",(void*)f_4888},
{"f_3676:chicken_2dinstall_2escm",(void*)f_3676},
{"f_4719:chicken_2dinstall_2escm",(void*)f_4719},
{"f_3608:chicken_2dinstall_2escm",(void*)f_3608},
{"f_6392:chicken_2dinstall_2escm",(void*)f_6392},
{"f_7137:chicken_2dinstall_2escm",(void*)f_7137},
{"f_3605:chicken_2dinstall_2escm",(void*)f_3605},
{"f_4703:chicken_2dinstall_2escm",(void*)f_4703},
{"f_3617:chicken_2dinstall_2escm",(void*)f_3617},
{"f_3629:chicken_2dinstall_2escm",(void*)f_3629},
{"f_3395:chicken_2dinstall_2escm",(void*)f_3395},
{"f_3620:chicken_2dinstall_2escm",(void*)f_3620},
{"f_7111:chicken_2dinstall_2escm",(void*)f_7111},
{"f_3391:chicken_2dinstall_2escm",(void*)f_3391},
{"f_5376:chicken_2dinstall_2escm",(void*)f_5376},
{"f_5372:chicken_2dinstall_2escm",(void*)f_5372},
{"f_3632:chicken_2dinstall_2escm",(void*)f_3632},
{"f_3363:chicken_2dinstall_2escm",(void*)f_3363},
{"f_5920:chicken_2dinstall_2escm",(void*)f_5920},
{"f_3635:chicken_2dinstall_2escm",(void*)f_3635},
{"f_5518:chicken_2dinstall_2escm",(void*)f_5518},
{"f_3376:chicken_2dinstall_2escm",(void*)f_3376},
{"f_5911:chicken_2dinstall_2escm",(void*)f_5911},
{"f_6017:chicken_2dinstall_2escm",(void*)f_6017},
{"f_5512:chicken_2dinstall_2escm",(void*)f_5512},
{"f_5516:chicken_2dinstall_2escm",(void*)f_5516},
{"f_5168:chicken_2dinstall_2escm",(void*)f_5168},
{"f_6740:chicken_2dinstall_2escm",(void*)f_6740},
{"f_5930:chicken_2dinstall_2escm",(void*)f_5930},
{"f_5967:chicken_2dinstall_2escm",(void*)f_5967},
{"f_5185:chicken_2dinstall_2escm",(void*)f_5185},
{"f_6384:chicken_2dinstall_2escm",(void*)f_6384},
{"f_5180:chicken_2dinstall_2escm",(void*)f_5180},
{"f_5962:chicken_2dinstall_2escm",(void*)f_5962},
{"f_5964:chicken_2dinstall_2escm",(void*)f_5964},
{"f_5368:chicken_2dinstall_2escm",(void*)f_5368},
{"f_5958:chicken_2dinstall_2escm",(void*)f_5958},
{"f_3682:chicken_2dinstall_2escm",(void*)f_3682},
{"f_5174:chicken_2dinstall_2escm",(void*)f_5174},
{"f_5954:chicken_2dinstall_2escm",(void*)f_5954},
{"f_5950:chicken_2dinstall_2escm",(void*)f_5950},
{"f_6387:chicken_2dinstall_2escm",(void*)f_6387},
{"f_6710:chicken_2dinstall_2escm",(void*)f_6710},
{"f_5355:chicken_2dinstall_2escm",(void*)f_5355},
{"f_5358:chicken_2dinstall_2escm",(void*)f_5358},
{"f_5352:chicken_2dinstall_2escm",(void*)f_5352},
{"f_3690:chicken_2dinstall_2escm",(void*)f_3690},
{"f_3303:chicken_2dinstall_2escm",(void*)f_3303},
{"f_4390:chicken_2dinstall_2escm",(void*)f_4390},
{"f_4395:chicken_2dinstall_2escm",(void*)f_4395},
{"f_5905:chicken_2dinstall_2escm",(void*)f_5905},
{"f_5903:chicken_2dinstall_2escm",(void*)f_5903},
{"f_7591:chicken_2dinstall_2escm",(void*)f_7591},
{"f_5307:chicken_2dinstall_2escm",(void*)f_5307},
{"f_7597:chicken_2dinstall_2escm",(void*)f_7597},
{"f_4214:chicken_2dinstall_2escm",(void*)f_4214},
{"f_4204:chicken_2dinstall_2escm",(void*)f_4204},
{"f_3595:chicken_2dinstall_2escm",(void*)f_3595},
{"f_7578:chicken_2dinstall_2escm",(void*)f_7578},
{"f_4033:chicken_2dinstall_2escm",(void*)f_4033},
{"f_7572:chicken_2dinstall_2escm",(void*)f_7572},
{"f_4030:chicken_2dinstall_2escm",(void*)f_4030},
{"f_3124:chicken_2dinstall_2escm",(void*)f_3124},
{"f_6352:chicken_2dinstall_2escm",(void*)f_6352},
{"f_4903:chicken_2dinstall_2escm",(void*)f_4903},
{"f_4906:chicken_2dinstall_2escm",(void*)f_4906},
{"f_4909:chicken_2dinstall_2escm",(void*)f_4909},
{"f_4027:chicken_2dinstall_2escm",(void*)f_4027},
{"f_4024:chicken_2dinstall_2escm",(void*)f_4024},
{"f_7560:chicken_2dinstall_2escm",(void*)f_7560},
{"f_7563:chicken_2dinstall_2escm",(void*)f_7563},
{"f_3806:chicken_2dinstall_2escm",(void*)f_3806},
{"f_4743:chicken_2dinstall_2escm",(void*)f_4743},
{"f_4021:chicken_2dinstall_2escm",(void*)f_4021},
{"f_3133:chicken_2dinstall_2escm",(void*)f_3133},
{"f_3136:chicken_2dinstall_2escm",(void*)f_3136},
{"f_3130:chicken_2dinstall_2escm",(void*)f_3130},
{"f_4357:chicken_2dinstall_2escm",(void*)f_4357},
{"f_4351:chicken_2dinstall_2escm",(void*)f_4351},
{"f_5943:chicken_2dinstall_2escm",(void*)f_5943},
{"f_7557:chicken_2dinstall_2escm",(void*)f_7557},
{"f_4015:chicken_2dinstall_2escm",(void*)f_4015},
{"f_4018:chicken_2dinstall_2escm",(void*)f_4018},
{"f_7553:chicken_2dinstall_2escm",(void*)f_7553},
{"f_3589:chicken_2dinstall_2escm",(void*)f_3589},
{"f_6356:chicken_2dinstall_2escm",(void*)f_6356},
{"f_3583:chicken_2dinstall_2escm",(void*)f_3583},
{"f_4012:chicken_2dinstall_2escm",(void*)f_4012},
{"f_3101:chicken_2dinstall_2escm",(void*)f_3101},
{"f_4924:chicken_2dinstall_2escm",(void*)f_4924},
{"f_7298:chicken_2dinstall_2escm",(void*)f_7298},
{"f_4927:chicken_2dinstall_2escm",(void*)f_4927},
{"f_4921:chicken_2dinstall_2escm",(void*)f_4921},
{"f_4006:chicken_2dinstall_2escm",(void*)f_4006},
{"f_3082:chicken_2dinstall_2escm",(void*)f_3082},
{"f_3086:chicken_2dinstall_2escm",(void*)f_3086},
{"f_6365:chicken_2dinstall_2escm",(void*)f_6365},
{"f_5711:chicken_2dinstall_2escm",(void*)f_5711},
{"f_3554:chicken_2dinstall_2escm",(void*)f_3554},
{"f_3822:chicken_2dinstall_2escm",(void*)f_3822},
{"f_3114:chicken_2dinstall_2escm",(void*)f_3114},
{"f_4915:chicken_2dinstall_2escm",(void*)f_4915},
{"f_4374:chicken_2dinstall_2escm",(void*)f_4374},
{"f_3837:chicken_2dinstall_2escm",(void*)f_3837},
{"f_3091:chicken_2dinstall_2escm",(void*)f_3091},
{"f_5700:chicken_2dinstall_2escm",(void*)f_5700},
{"f_5705:chicken_2dinstall_2escm",(void*)f_5705},
{"f_4947:chicken_2dinstall_2escm",(void*)f_4947},
{"f_4941:chicken_2dinstall_2escm",(void*)f_4941},
{"f_5301:chicken_2dinstall_2escm",(void*)f_5301},
{"f_7482:chicken_2dinstall_2escm",(void*)f_7482},
{"f_5734:chicken_2dinstall_2escm",(void*)f_5734},
{"f_3843:chicken_2dinstall_2escm",(void*)f_3843},
{"f_4934:chicken_2dinstall_2escm",(void*)f_4934},
{"f_4938:chicken_2dinstall_2escm",(void*)f_4938},
{"f_5981:chicken_2dinstall_2escm",(void*)f_5981},
{"f_5720:chicken_2dinstall_2escm",(void*)f_5720},
{"f_7252:chicken_2dinstall_2escm",(void*)f_7252},
{"f_5739:chicken_2dinstall_2escm",(void*)f_5739},
{"f_5197:chicken_2dinstall_2escm",(void*)f_5197},
{"f_4964:chicken_2dinstall_2escm",(void*)f_4964},
{"f_5191:chicken_2dinstall_2escm",(void*)f_5191},
{"f_4960:chicken_2dinstall_2escm",(void*)f_4960},
{"f_7466:chicken_2dinstall_2escm",(void*)f_7466},
{"f_6773:chicken_2dinstall_2escm",(void*)f_6773},
{"f_7462:chicken_2dinstall_2escm",(void*)f_7462},
{"f_5753:chicken_2dinstall_2escm",(void*)f_5753},
{"f_3863:chicken_2dinstall_2escm",(void*)f_3863},
{"f_6462:chicken_2dinstall_2escm",(void*)f_6462},
{"f_4953:chicken_2dinstall_2escm",(void*)f_4953},
{"f_4950:chicken_2dinstall_2escm",(void*)f_4950},
{"f_6469:chicken_2dinstall_2escm",(void*)f_6469},
{"f_6233:chicken_2dinstall_2escm",(void*)f_6233},
{"f_6466:chicken_2dinstall_2escm",(void*)f_6466},
{"f_6769:chicken_2dinstall_2escm",(void*)f_6769},
{"f_2776:chicken_2dinstall_2escm",(void*)f_2776},
{"f_6231:chicken_2dinstall_2escm",(void*)f_6231},
{"f_2771:chicken_2dinstall_2escm",(void*)f_2771},
{"f_3873:chicken_2dinstall_2escm",(void*)f_3873},
{"f_3871:chicken_2dinstall_2escm",(void*)f_3871},
{"f_5755:chicken_2dinstall_2escm",(void*)f_5755},
{"f_4369:chicken_2dinstall_2escm",(void*)f_4369},
{"f_4366:chicken_2dinstall_2escm",(void*)f_4366},
{"f_4363:chicken_2dinstall_2escm",(void*)f_4363},
{"f_4360:chicken_2dinstall_2escm",(void*)f_4360},
{"f_2421:chicken_2dinstall_2escm",(void*)f_2421},
{"f_3881:chicken_2dinstall_2escm",(void*)f_3881},
{"f_3885:chicken_2dinstall_2escm",(void*)f_3885},
{"f_3578:chicken_2dinstall_2escm",(void*)f_3578},
{"f_3572:chicken_2dinstall_2escm",(void*)f_3572},
{"f_4973:chicken_2dinstall_2escm",(void*)f_4973},
{"f_3505:chicken_2dinstall_2escm",(void*)f_3505},
{"f_6487:chicken_2dinstall_2escm",(void*)f_6487},
{"f_3895:chicken_2dinstall_2escm",(void*)f_3895},
{"f_3509:chicken_2dinstall_2escm",(void*)f_3509},
{"f_4408:chicken_2dinstall_2escm",(void*)f_4408},
{"f_6493:chicken_2dinstall_2escm",(void*)f_6493},
{"f_4402:chicken_2dinstall_2escm",(void*)f_4402},
{"f_6291:chicken_2dinstall_2escm",(void*)f_6291},
{"f_6200:chicken_2dinstall_2escm",(void*)f_6200},
{"f_2783:chicken_2dinstall_2escm",(void*)f_2783},
{"f_6208:chicken_2dinstall_2escm",(void*)f_6208},
{"f_6299:chicken_2dinstall_2escm",(void*)f_6299},
{"f_4430:chicken_2dinstall_2escm",(void*)f_4430},
{"f_2415:chicken_2dinstall_2escm",(void*)f_2415},
{"f_2418:chicken_2dinstall_2escm",(void*)f_2418},
{"f_5789:chicken_2dinstall_2escm",(void*)f_5789},
{"f_2449:chicken_2dinstall_2escm",(void*)f_2449},
{"f_6272:chicken_2dinstall_2escm",(void*)f_6272},
{"f_3066:chicken_2dinstall_2escm",(void*)f_3066},
{"f_3069:chicken_2dinstall_2escm",(void*)f_3069},
{"f_3060:chicken_2dinstall_2escm",(void*)f_3060},
{"f_6279:chicken_2dinstall_2escm",(void*)f_6279},
{"f_2584:chicken_2dinstall_2escm",(void*)f_2584},
{"f_2580:chicken_2dinstall_2escm",(void*)f_2580},
{"f_2664:chicken_2dinstall_2escm",(void*)f_2664},
{"f_6283:chicken_2dinstall_2escm",(void*)f_6283},
{"f_3078:chicken_2dinstall_2escm",(void*)f_3078},
{"f_3070:chicken_2dinstall_2escm",(void*)f_3070},
{"f_6287:chicken_2dinstall_2escm",(void*)f_6287},
{"f_2573:chicken_2dinstall_2escm",(void*)f_2573},
{"f_2633:chicken_2dinstall_2escm",(void*)f_2633},
{"f_2636:chicken_2dinstall_2escm",(void*)f_2636},
{"f_2630:chicken_2dinstall_2escm",(void*)f_2630},
{"f_2402:chicken_2dinstall_2escm",(void*)f_2402},
{"f_2405:chicken_2dinstall_2escm",(void*)f_2405},
{"f_2408:chicken_2dinstall_2escm",(void*)f_2408},
{"f8208:chicken_2dinstall_2escm",(void*)f8208},
{"f8201:chicken_2dinstall_2escm",(void*)f8201},
{"f_5102:chicken_2dinstall_2escm",(void*)f_5102},
{"f_5107:chicken_2dinstall_2escm",(void*)f_5107},
{"f_6062:chicken_2dinstall_2escm",(void*)f_6062},
{"f_5129:chicken_2dinstall_2escm",(void*)f_5129},
{"f_5126:chicken_2dinstall_2escm",(void*)f_5126},
{"f_5123:chicken_2dinstall_2escm",(void*)f_5123},
{"f8213:chicken_2dinstall_2escm",(void*)f8213},
{"f_6250:chicken_2dinstall_2escm",(void*)f_6250},
{"f_5149:chicken_2dinstall_2escm",(void*)f_5149},
{"f_6087:chicken_2dinstall_2escm",(void*)f_6087},
{"f_6262:chicken_2dinstall_2escm",(void*)f_6262},
{"f_5143:chicken_2dinstall_2escm",(void*)f_5143},
{"f_5137:chicken_2dinstall_2escm",(void*)f_5137},
{"f_6268:chicken_2dinstall_2escm",(void*)f_6268},
{"f_2846:chicken_2dinstall_2escm",(void*)f_2846},
{"f_5131:chicken_2dinstall_2escm",(void*)f_5131},
{"f_3347:chicken_2dinstall_2escm",(void*)f_3347},
{"f_2819:chicken_2dinstall_2escm",(void*)f_2819},
{"f_2821:chicken_2dinstall_2escm",(void*)f_2821},
{"f_4107:chicken_2dinstall_2escm",(void*)f_4107},
{"f_4104:chicken_2dinstall_2escm",(void*)f_4104},
{"f_4100:chicken_2dinstall_2escm",(void*)f_4100},
{"f_3475:chicken_2dinstall_2escm",(void*)f_3475},
{"f_4690:chicken_2dinstall_2escm",(void*)f_4690},
{"f_3474:chicken_2dinstall_2escm",(void*)f_3474},
{"f_3019:chicken_2dinstall_2escm",(void*)f_3019},
{"f_3331:chicken_2dinstall_2escm",(void*)f_3331},
{"f_2615:chicken_2dinstall_2escm",(void*)f_2615},
{"f_3334:chicken_2dinstall_2escm",(void*)f_3334},
{"f_3486:chicken_2dinstall_2escm",(void*)f_3486},
{"f_6527:chicken_2dinstall_2escm",(void*)f_6527},
{"f_3480:chicken_2dinstall_2escm",(void*)f_3480},
{"f_4125:chicken_2dinstall_2escm",(void*)f_4125},
{"f_6221:chicken_2dinstall_2escm",(void*)f_6221},
{"f_3022:chicken_2dinstall_2escm",(void*)f_3022},
{"f_3029:chicken_2dinstall_2escm",(void*)f_3029},
{"f_2627:chicken_2dinstall_2escm",(void*)f_2627},
{"f_2624:chicken_2dinstall_2escm",(void*)f_2624},
{"f_2621:chicken_2dinstall_2escm",(void*)f_2621},
{"f_4099:chicken_2dinstall_2escm",(void*)f_4099},
{"f_4096:chicken_2dinstall_2escm",(void*)f_4096},
{"f_4113:chicken_2dinstall_2escm",(void*)f_4113},
{"f_6929:chicken_2dinstall_2escm",(void*)f_6929},
{"f_3039:chicken_2dinstall_2escm",(void*)f_3039},
{"f_6500:chicken_2dinstall_2escm",(void*)f_6500},
{"f_6502:chicken_2dinstall_2escm",(void*)f_6502},
{"f_4148:chicken_2dinstall_2escm",(void*)f_4148},
{"f_4087:chicken_2dinstall_2escm",(void*)f_4087},
{"f_4080:chicken_2dinstall_2escm",(void*)f_4080},
{"f_3041:chicken_2dinstall_2escm",(void*)f_3041},
{"f_4084:chicken_2dinstall_2escm",(void*)f_4084},
{"f_4138:chicken_2dinstall_2escm",(void*)f_4138},
{"f_6903:chicken_2dinstall_2escm",(void*)f_6903},
{"f_6906:chicken_2dinstall_2escm",(void*)f_6906},
{"f_6932:chicken_2dinstall_2escm",(void*)f_6932},
{"f_5542:chicken_2dinstall_2escm",(void*)f_5542},
{"f_6962:chicken_2dinstall_2escm",(void*)f_6962},
{"f_5539:chicken_2dinstall_2escm",(void*)f_5539},
{"f8098:chicken_2dinstall_2escm",(void*)f8098},
{"f_5536:chicken_2dinstall_2escm",(void*)f_5536},
{"f_7336:chicken_2dinstall_2escm",(void*)f_7336},
{"f_7332:chicken_2dinstall_2escm",(void*)f_7332},
{"f_6976:chicken_2dinstall_2escm",(void*)f_6976},
{"f_4414:chicken_2dinstall_2escm",(void*)f_4414},
{"f_4419:chicken_2dinstall_2escm",(void*)f_4419},
{"f_7313:chicken_2dinstall_2escm",(void*)f_7313},
{"f_4411:chicken_2dinstall_2escm",(void*)f_4411},
{"f_3491:chicken_2dinstall_2escm",(void*)f_3491},
{"f_3544:chicken_2dinstall_2escm",(void*)f_3544},
{"f_2863:chicken_2dinstall_2escm",(void*)f_2863},
{"f_7085:chicken_2dinstall_2escm",(void*)f_7085},
{"f_2866:chicken_2dinstall_2escm",(void*)f_2866},
{"f_4440:chicken_2dinstall_2escm",(void*)f_4440},
{"f_3518:chicken_2dinstall_2escm",(void*)f_3518},
{"f_3524:chicken_2dinstall_2escm",(void*)f_3524},
{"f_4425:chicken_2dinstall_2escm",(void*)f_4425},
{"f_7320:chicken_2dinstall_2escm",(void*)f_7320},
{"f_4299:chicken_2dinstall_2escm",(void*)f_4299},
{"f_4296:chicken_2dinstall_2escm",(void*)f_4296},
{"f_4292:chicken_2dinstall_2escm",(void*)f_4292},
{"f_4286:chicken_2dinstall_2escm",(void*)f_4286},
{"f_4281:chicken_2dinstall_2escm",(void*)f_4281},
{"f_7307:chicken_2dinstall_2escm",(void*)f_7307},
{"f_4272:chicken_2dinstall_2escm",(void*)f_4272},
{"f_4254:chicken_2dinstall_2escm",(void*)f_4254},
{"f_4250:chicken_2dinstall_2escm",(void*)f_4250},
{"f_6345:chicken_2dinstall_2escm",(void*)f_6345},
{"f_6339:chicken_2dinstall_2escm",(void*)f_6339},
{"f_7539:chicken_2dinstall_2escm",(void*)f_7539},
{"f_7536:chicken_2dinstall_2escm",(void*)f_7536},
{"f_7533:chicken_2dinstall_2escm",(void*)f_7533},
{"f_7530:chicken_2dinstall_2escm",(void*)f_7530},
{"f_6329:chicken_2dinstall_2escm",(void*)f_6329},
{"f_7527:chicken_2dinstall_2escm",(void*)f_7527},
{"f_7524:chicken_2dinstall_2escm",(void*)f_7524},
{"f_3705:chicken_2dinstall_2escm",(void*)f_3705},
{"f_7589:chicken_2dinstall_2escm",(void*)f_7589},
{"f_6544:chicken_2dinstall_2escm",(void*)f_6544},
{"f_7582:chicken_2dinstall_2escm",(void*)f_7582},
{"f_4617:chicken_2dinstall_2escm",(void*)f_4617},
{"f_3717:chicken_2dinstall_2escm",(void*)f_3717},
{"f_3711:chicken_2dinstall_2escm",(void*)f_3711},
{"f_2490:chicken_2dinstall_2escm",(void*)f_2490},
{"f_2493:chicken_2dinstall_2escm",(void*)f_2493},
{"f_4607:chicken_2dinstall_2escm",(void*)f_4607},
{"f_4509:chicken_2dinstall_2escm",(void*)f_4509},
{"f_3768:chicken_2dinstall_2escm",(void*)f_3768},
{"f_3763:chicken_2dinstall_2escm",(void*)f_3763},
{"f_3760:chicken_2dinstall_2escm",(void*)f_3760},
{"f_2481:chicken_2dinstall_2escm",(void*)f_2481},
{"f_7446:chicken_2dinstall_2escm",(void*)f_7446},
{"f_7442:chicken_2dinstall_2escm",(void*)f_7442},
{"f_7226:chicken_2dinstall_2escm",(void*)f_7226},
{"f_2487:chicken_2dinstall_2escm",(void*)f_2487},
{"f_4455:chicken_2dinstall_2escm",(void*)f_4455},
{"f_7436:chicken_2dinstall_2escm",(void*)f_7436},
{"f_5119:chicken_2dinstall_2escm",(void*)f_5119},
{"f_4665:chicken_2dinstall_2escm",(void*)f_4665},
{"f_2477:chicken_2dinstall_2escm",(void*)f_2477},
{"f_4485:chicken_2dinstall_2escm",(void*)f_4485},
{"f_7547:chicken_2dinstall_2escm",(void*)f_7547},
{"f_5113:chicken_2dinstall_2escm",(void*)f_5113},
{"f_2460:chicken_2dinstall_2escm",(void*)f_2460},
{"f_7429:chicken_2dinstall_2escm",(void*)f_7429},
{"f_7541:chicken_2dinstall_2escm",(void*)f_7541},
{"f_7423:chicken_2dinstall_2escm",(void*)f_7423},
{"f_3425:chicken_2dinstall_2escm",(void*)f_3425},
{"f_7420:chicken_2dinstall_2escm",(void*)f_7420},
{"f_4515:chicken_2dinstall_2escm",(void*)f_4515},
{"f_4517:chicken_2dinstall_2escm",(void*)f_4517},
{"f_5467:chicken_2dinstall_2escm",(void*)f_5467},
{"f_5464:chicken_2dinstall_2escm",(void*)f_5464},
{"f_5461:chicken_2dinstall_2escm",(void*)f_5461},
{"f_7416:chicken_2dinstall_2escm",(void*)f_7416},
{"f_3726:chicken_2dinstall_2escm",(void*)f_3726},
{"f_5458:chicken_2dinstall_2escm",(void*)f_5458},
{"f_3721:chicken_2dinstall_2escm",(void*)f_3721},
{"f_4468:chicken_2dinstall_2escm",(void*)f_4468},
{"f_4542:chicken_2dinstall_2escm",(void*)f_4542},
{"f_4633:chicken_2dinstall_2escm",(void*)f_4633},
{"f_3738:chicken_2dinstall_2escm",(void*)f_3738},
{"f_6147:chicken_2dinstall_2escm",(void*)f_6147},
{"f_5476:chicken_2dinstall_2escm",(void*)f_5476},
{"f_4478:chicken_2dinstall_2escm",(void*)f_4478},
{"f_4472:chicken_2dinstall_2escm",(void*)f_4472},
{"f_3792:chicken_2dinstall_2escm",(void*)f_3792},
{"f_6602:chicken_2dinstall_2escm",(void*)f_6602},
{"f_6604:chicken_2dinstall_2escm",(void*)f_6604},
{"f_5294:chicken_2dinstall_2escm",(void*)f_5294},
{"f_6639:chicken_2dinstall_2escm",(void*)f_6639},
{"f_6157:chicken_2dinstall_2escm",(void*)f_6157},
{"f_3410:chicken_2dinstall_2escm",(void*)f_3410},
{"f_3414:chicken_2dinstall_2escm",(void*)f_3414},
{"f_6629:chicken_2dinstall_2escm",(void*)f_6629},
{"f_4858:chicken_2dinstall_2escm",(void*)f_4858},
{"f_4854:chicken_2dinstall_2escm",(void*)f_4854},
{"f_3747:chicken_2dinstall_2escm",(void*)f_3747},
{"f_4850:chicken_2dinstall_2escm",(void*)f_4850},
{"f_3742:chicken_2dinstall_2escm",(void*)f_3742},
{"f_4655:chicken_2dinstall_2escm",(void*)f_4655},
{"f_6139:chicken_2dinstall_2escm",(void*)f_6139},
{"f_4847:chicken_2dinstall_2escm",(void*)f_4847},
{"f_6136:chicken_2dinstall_2escm",(void*)f_6136},
{"f_4843:chicken_2dinstall_2escm",(void*)f_4843},
{"f_4840:chicken_2dinstall_2escm",(void*)f_4840},
{"f_3922:chicken_2dinstall_2escm",(void*)f_3922},
{"f_3282:chicken_2dinstall_2escm",(void*)f_3282},
{"f_4820:chicken_2dinstall_2escm",(void*)f_4820},
{"f_5283:chicken_2dinstall_2escm",(void*)f_5283},
{"f_6660:chicken_2dinstall_2escm",(void*)f_6660},
{"f_4814:chicken_2dinstall_2escm",(void*)f_4814},
{"f_4817:chicken_2dinstall_2escm",(void*)f_4817},
{"f_3250:chicken_2dinstall_2escm",(void*)f_3250},
{"f_4811:chicken_2dinstall_2escm",(void*)f_4811},
{"f_3907:chicken_2dinstall_2escm",(void*)f_3907},
{"f_5277:chicken_2dinstall_2escm",(void*)f_5277},
{"f_3901:chicken_2dinstall_2escm",(void*)f_3901},
{"f_5272:chicken_2dinstall_2escm",(void*)f_5272},
{"f_3904:chicken_2dinstall_2escm",(void*)f_3904},
{"f_4805:chicken_2dinstall_2escm",(void*)f_4805},
{"f_4808:chicken_2dinstall_2escm",(void*)f_4808},
{"f_5427:chicken_2dinstall_2escm",(void*)f_5427},
{"f_3916:chicken_2dinstall_2escm",(void*)f_3916},
{"f_3919:chicken_2dinstall_2escm",(void*)f_3919},
{"f_3910:chicken_2dinstall_2escm",(void*)f_3910},
{"f_3913:chicken_2dinstall_2escm",(void*)f_3913},
{"f_5834:chicken_2dinstall_2escm",(void*)f_5834},
{"f_5837:chicken_2dinstall_2escm",(void*)f_5837},
{"f_3272:chicken_2dinstall_2escm",(void*)f_3272},
{"f_5412:chicken_2dinstall_2escm",(void*)f_5412},
{"f_5417:chicken_2dinstall_2escm",(void*)f_5417},
{"f_5823:chicken_2dinstall_2escm",(void*)f_5823},
{"f_5828:chicken_2dinstall_2escm",(void*)f_5828},
{"f_5076:chicken_2dinstall_2escm",(void*)f_5076},
{"f_6102:chicken_2dinstall_2escm",(void*)f_6102},
{"f_6108:chicken_2dinstall_2escm",(void*)f_6108},
{"f_5843:chicken_2dinstall_2escm",(void*)f_5843},
{"f_5840:chicken_2dinstall_2escm",(void*)f_5840},
{"f_5064:chicken_2dinstall_2escm",(void*)f_5064},
{"f_5069:chicken_2dinstall_2escm",(void*)f_5069},
{"f_5067:chicken_2dinstall_2escm",(void*)f_5067},
{"f_5060:chicken_2dinstall_2escm",(void*)f_5060},
{"f_5848:chicken_2dinstall_2escm",(void*)f_5848},
{"f_5267:chicken_2dinstall_2escm",(void*)f_5267},
{"f_5874:chicken_2dinstall_2escm",(void*)f_5874},
{"f_5098:chicken_2dinstall_2escm",(void*)f_5098},
{"f_5877:chicken_2dinstall_2escm",(void*)f_5877},
{"f_4791:chicken_2dinstall_2escm",(void*)f_4791},
{"f_4799:chicken_2dinstall_2escm",(void*)f_4799},
{"f_5258:chicken_2dinstall_2escm",(void*)f_5258},
{"f_5251:chicken_2dinstall_2escm",(void*)f_5251},
{"f_5860:chicken_2dinstall_2escm",(void*)f_5860},
{"f_5868:chicken_2dinstall_2escm",(void*)f_5868},
{"f_3208:chicken_2dinstall_2escm",(void*)f_3208},
{"f_5204:chicken_2dinstall_2escm",(void*)f_5204},
{"f_5201:chicken_2dinstall_2escm",(void*)f_5201},
{"f_5209:chicken_2dinstall_2escm",(void*)f_5209},
{"f_5207:chicken_2dinstall_2escm",(void*)f_5207},
{"f_5885:chicken_2dinstall_2escm",(void*)f_5885},
{"f_3982:chicken_2dinstall_2escm",(void*)f_3982},
{"f_3989:chicken_2dinstall_2escm",(void*)f_3989},
{"f_5883:chicken_2dinstall_2escm",(void*)f_5883},
{"f_5880:chicken_2dinstall_2escm",(void*)f_5880},
{"f_3225:chicken_2dinstall_2escm",(void*)f_3225},
{"f_3993:chicken_2dinstall_2escm",(void*)f_3993},
{"f_3999:chicken_2dinstall_2escm",(void*)f_3999},
{"f_4876:chicken_2dinstall_2escm",(void*)f_4876},
{"f_4870:chicken_2dinstall_2escm",(void*)f_4870},
{"f_4323:chicken_2dinstall_2escm",(void*)f_4323},
{"f_3968:chicken_2dinstall_2escm",(void*)f_3968},
{"f_3962:chicken_2dinstall_2escm",(void*)f_3962},
{"f_4866:chicken_2dinstall_2escm",(void*)f_4866},
{"f_5854:chicken_2dinstall_2escm",(void*)f_5854},
{"f_4181:chicken_2dinstall_2escm",(void*)f_4181},
{"f_7399:chicken_2dinstall_2escm",(void*)f_7399},
{"f_5602:chicken_2dinstall_2escm",(void*)f_5602},
{"f_5605:chicken_2dinstall_2escm",(void*)f_5605},
{"f_5608:chicken_2dinstall_2escm",(void*)f_5608},
{"f_7373:chicken_2dinstall_2escm",(void*)f_7373},
{"f_2509:chicken_2dinstall_2escm",(void*)f_2509},
{"f_2503:chicken_2dinstall_2escm",(void*)f_2503},
{"f_4199:chicken_2dinstall_2escm",(void*)f_4199},
{"f_4196:chicken_2dinstall_2escm",(void*)f_4196},
{"f_5082:chicken_2dinstall_2escm",(void*)f_5082},
{"f_5086:chicken_2dinstall_2escm",(void*)f_5086},
{"f_5087:chicken_2dinstall_2escm",(void*)f_5087},
{"f_5621:chicken_2dinstall_2escm",(void*)f_5621},
{"f_5625:chicken_2dinstall_2escm",(void*)f_5625},
{"f_2896:chicken_2dinstall_2escm",(void*)f_2896},
{"f_5627:chicken_2dinstall_2escm",(void*)f_5627},
{"f_5611:chicken_2dinstall_2escm",(void*)f_5611},
{"f_2564:chicken_2dinstall_2escm",(void*)f_2564},
{"f_5614:chicken_2dinstall_2escm",(void*)f_5614},
{"f_5891:chicken_2dinstall_2escm",(void*)f_5891},
{"f_2566:chicken_2dinstall_2escm",(void*)f_2566},
{"f_6559:chicken_2dinstall_2escm",(void*)f_6559},
{"f_6556:chicken_2dinstall_2escm",(void*)f_6556},
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
o|hiding nonexported module bindings: main#+default-repository-files+ 
o|hiding nonexported module bindings: main#constant159 
o|hiding nonexported module bindings: main#constant163 
o|hiding nonexported module bindings: main#*program-path* 
o|hiding nonexported module bindings: main#*keep* 
o|hiding nonexported module bindings: main#*keep-existing* 
o|hiding nonexported module bindings: main#*force* 
o|hiding nonexported module bindings: main#*run-tests* 
o|hiding nonexported module bindings: main#*retrieve-only* 
o|hiding nonexported module bindings: main#*no-install* 
o|hiding nonexported module bindings: main#*username* 
o|hiding nonexported module bindings: main#*password* 
o|hiding nonexported module bindings: main#*default-sources* 
o|hiding nonexported module bindings: main#*default-location* 
o|hiding nonexported module bindings: main#*default-transport* 
o|hiding nonexported module bindings: main#*windows-shell* 
o|hiding nonexported module bindings: main#*proxy-host* 
o|hiding nonexported module bindings: main#*proxy-port* 
o|hiding nonexported module bindings: main#*proxy-user-pass* 
o|hiding nonexported module bindings: main#*running-test* 
o|hiding nonexported module bindings: main#*mappings* 
o|hiding nonexported module bindings: main#*deploy* 
o|hiding nonexported module bindings: main#*trunk* 
o|hiding nonexported module bindings: main#*csc-features* 
o|hiding nonexported module bindings: main#*csc-nonfeatures* 
o|hiding nonexported module bindings: main#*prefix* 
o|hiding nonexported module bindings: main#*no-install-deps* 
o|hiding nonexported module bindings: main#*aliases* 
o|hiding nonexported module bindings: main#*cross-chicken* 
o|hiding nonexported module bindings: main#*host-extension* 
o|hiding nonexported module bindings: main#*target-extension* 
o|hiding nonexported module bindings: main#*debug-setup* 
o|hiding nonexported module bindings: main#*keep-going* 
o|hiding nonexported module bindings: main#*override* 
o|hiding nonexported module bindings: main#*reinstall* 
o|hiding nonexported module bindings: main#*show-depends* 
o|hiding nonexported module bindings: main#*show-foreign-depends* 
o|hiding nonexported module bindings: main#*hacks* 
o|hiding nonexported module bindings: main#repo-path 
o|hiding nonexported module bindings: main#get-prefix 
o|hiding nonexported module bindings: main#load-defaults 
o|hiding nonexported module bindings: main#resolve-location 
o|hiding nonexported module bindings: main#known-default-sources 
o|hiding nonexported module bindings: main#deps 
o|hiding nonexported module bindings: main#init-repository 
o|hiding nonexported module bindings: main#ext-version 
o|hiding nonexported module bindings: main#meta-dependencies 
o|hiding nonexported module bindings: main#check-dependency 
o|hiding nonexported module bindings: main#outdated-dependencies 
o|hiding nonexported module bindings: main#*eggs+dirs+vers* 
o|hiding nonexported module bindings: main#*dependencies* 
o|hiding nonexported module bindings: main#*checked* 
o|hiding nonexported module bindings: main#*csi* 
o|hiding nonexported module bindings: main#try-extension 
o|hiding nonexported module bindings: main#with-default-sources 
o|hiding nonexported module bindings: main#try-default-sources 
o|hiding nonexported module bindings: main#make-replace-extension-question 
o|hiding nonexported module bindings: main#override-version 
o|hiding nonexported module bindings: main#show-depends 
o|hiding nonexported module bindings: main#retrieve 
o|hiding nonexported module bindings: main#check-platform 
o|hiding nonexported module bindings: main#back-slash->forward-slash 
o|hiding nonexported module bindings: main#make-install-command 
o|hiding nonexported module bindings: main#keep-going 
o|hiding nonexported module bindings: main#install 
o|hiding nonexported module bindings: main#delete-stale-binaries 
o|hiding nonexported module bindings: main#cleanup 
o|hiding nonexported module bindings: main#update-db 
o|hiding nonexported module bindings: main#apply-mappings 
o|hiding nonexported module bindings: main#scan-directory 
o|hiding nonexported module bindings: main#$system 
o|hiding nonexported module bindings: main#installed-extensions 
o|hiding nonexported module bindings: main#list-available-extensions 
o|hiding nonexported module bindings: main#command 
o|hiding nonexported module bindings: main#usage 
o|hiding nonexported module bindings: main#setup-proxy 
o|hiding nonexported module bindings: main#info->egg 
o|hiding nonexported module bindings: main#*short-options* 
o|hiding nonexported module bindings: main#main 
S|applied compiler syntax:
S|  fprintf		1
S|  printf		1
S|  map		10
S|  for-each		12
S|  sprintf		12
o|eliminated procedure checks: 142 
o|specializations:
o|  1 (> fixnum fixnum)
o|  1 (char=? char char)
o|  1 (string-ref string fixnum)
o|  2 (string-length string)
o|  9 (cddr (pair * pair))
o|  1 (zero? fixnum)
o|  1 (string-append string string)
o|  5 (current-error-port)
o|  47 (string=? string string)
o|  24 (car pair)
o|  11 (##sys#check-list (or pair list) *)
o|  2 (= fixnum fixnum)
o|  50 (cdr pair)
o|  8 (eqv? * (not float))
o|  2 (positive? fixnum)
o|  4 (length list)
o|  14 (##sys#check-output-port * * *)
(o e)|safe calls: 748 
(o e)|dropped branches: 1 
(o e)|assignments to immediate values: 13 
o|Removed `not' forms: 16 
o|inlining procedure: k2462 
o|propagated global variable: r24637616 main#*prefix* 
o|inlining procedure: k2462 
o|substituted constant variable: a2483 
o|substituted constant variable: a2484 
o|inlining procedure: k2494 
o|substituted constant variable: a2505 
o|substituted constant variable: a2506 
o|inlining procedure: k2494 
o|merged explicitly consed rest parameter: tmp234235 
o|inlining procedure: k2532 
o|contracted procedure: k2547 
o|inlining procedure: k2532 
o|propagated global variable: r25337621 main#*prefix* 
o|inlining procedure: k2978 
o|contracted procedure: "(chicken-install.scm:186) g388389" 
o|inlining procedure: k2978 
o|inlining procedure: k3049 
o|inlining procedure: k3049 
o|inlining procedure: k3116 
o|inlining procedure: k3116 
o|contracted procedure: "(chicken-install.scm:221) g450451" 
o|inlining procedure: k3145 
o|inlining procedure: k3145 
o|inlining procedure: k3171 
o|inlining procedure: k3171 
o|inlining procedure: k3210 
o|contracted procedure: k3226 
o|inlining procedure: k3223 
o|inlining procedure: k3223 
o|inlining procedure: k3210 
o|inlining procedure: k3252 
o|inlining procedure: k3262 
o|inlining procedure: k3262 
o|inlining procedure: k3252 
o|inlining procedure: k3284 
o|inlining procedure: k3284 
o|inlining procedure: k3305 
o|inlining procedure: k3305 
o|inlining procedure: k3314 
o|inlining procedure: k3314 
o|contracted procedure: k3320 
o|inlining procedure: k3326 
o|contracted procedure: k3338 
o|contracted procedure: k3353 
o|inlining procedure: k3350 
o|inlining procedure: k3350 
o|substituted constant variable: a3359 
o|inlining procedure: k3364 
o|inlining procedure: k3364 
o|inlining procedure: k3326 
o|inlining procedure: k3432 
o|inlining procedure: k3432 
o|substituted constant variable: a3453 
o|inlining procedure: k3728 
o|inlining procedure: k3728 
o|inlining procedure: k3790 
o|inlining procedure: k3790 
o|inlining procedure: k3804 
o|inlining procedure: k3804 
o|contracted procedure: "(chicken-install.scm:345) main#known-default-sources" 
o|inlining procedure: k2995 
o|inlining procedure: k3017 
o|inlining procedure: k3017 
o|propagated global variable: r30187673 main#*default-location* 
o|inlining procedure: k2995 
o|propagated global variable: r29967675 main#*default-sources* 
o|merged explicitly consed rest parameter: type684 
o|propagated global variable: out690694 ##sys#standard-output 
o|substituted constant variable: a4092 
o|substituted constant variable: a4093 
o|inlining procedure: k4108 
o|inlining procedure: k4117 
o|inlining procedure: k4117 
o|inlining procedure: k4140 
o|contracted procedure: "(chicken-install.scm:436) g723730" 
o|inlining procedure: k4140 
o|inlining procedure: k4108 
o|inlining procedure: k4206 
o|inlining procedure: k4206 
o|propagated global variable: g712714 main#*eggs+dirs+vers* 
o|inlining procedure: k4227 
o|inlining procedure: k4227 
o|substituted constant variable: a4240 
o|substituted constant variable: a4242 
o|inlining procedure: k4334 
o|inlining procedure: k4334 
o|inlining procedure: k4586 
o|contracted procedure: "(chicken-install.scm:460) g803810" 
o|inlining procedure: k4339 
o|inlining procedure: k4339 
o|inlining procedure: k4376 
o|inlining procedure: k4376 
o|contracted procedure: "(chicken-install.scm:473) main#outdated-dependencies" 
o|inlining procedure: k3493 
o|inlining procedure: k3493 
o|inlining procedure: k3534 
o|inlining procedure: k3534 
o|inlining procedure: k3546 
o|inlining procedure: k3546 
o|propagated global variable: g514516 main#*hacks* 
o|contracted procedure: "(chicken-install.scm:296) main#meta-dependencies" 
o|inlining procedure: k3201 
o|inlining procedure: k3201 
o|inlining procedure: k4403 
o|inlining procedure: k4432 
o|contracted procedure: "(chicken-install.scm:495) g863870" 
o|inlining procedure: k4432 
o|inlining procedure: k4403 
o|propagated global variable: tmp856858 main#*force* 
o|inlining procedure: k4459 
o|propagated global variable: tmp856858 main#*force* 
o|inlining procedure: k4459 
o|contracted procedure: "(chicken-install.scm:490) main#make-replace-extension-question" 
o|inlining procedure: k3883 
o|inlining procedure: k3883 
o|substituted constant variable: a3897 
o|substituted constant variable: a3898 
o|inlining procedure: k3878 
o|inlining procedure: k3878 
o|inlining procedure: k4519 
o|contracted procedure: "(chicken-install.scm:478) g835844" 
o|inlining procedure: k4500 
o|inlining procedure: k4500 
o|inlining procedure: k4519 
o|contracted procedure: "(chicken-install.scm:468) main#check-platform" 
o|inlining procedure: k4638 
o|inlining procedure: k4638 
o|inlining procedure: k4657 
o|inlining procedure: k4657 
o|contracted procedure: k4675 
o|inlining procedure: k4685 
o|contracted procedure: k4694 
o|inlining procedure: k4685 
o|inlining procedure: k4714 
o|inlining procedure: k4714 
o|inlining procedure: k4725 
o|contracted procedure: k4734 
o|inlining procedure: k4725 
o|inlining procedure: k4586 
o|propagated global variable: g809811 main#*eggs+dirs+vers* 
o|inlining procedure: k4609 
o|contracted procedure: "(chicken-install.scm:443) g761768" 
o|inlining procedure: k4260 
o|contracted procedure: "(chicken-install.scm:444) g777778" 
o|inlining procedure: k4260 
o|contracted procedure: "(chicken-install.scm:452) main#try-default-sources" 
o|contracted procedure: k3827 
o|inlining procedure: k3824 
o|contracted procedure: "(chicken-install.scm:375) main#try-extension" 
o|inlining procedure: k3600 
o|inlining procedure: k3600 
o|inlining procedure: k3624 
o|inlining procedure: k3624 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|inlining procedure: k3651 
o|inlining procedure: k3651 
o|inlining procedure: k3660 
o|inlining procedure: k3660 
o|contracted procedure: k3695 
o|propagated global variable: r3696 main#*retrieve-only* 
o|inlining procedure: k3845 
o|inlining procedure: k3845 
o|inlining procedure: k3824 
o|contracted procedure: "(chicken-install.scm:451) main#override-version" 
o|inlining procedure: k3991 
o|substituted constant variable: a4008 
o|substituted constant variable: a4009 
o|inlining procedure: k3991 
o|inlining procedure: k3986 
o|inlining procedure: k3986 
o|inlining procedure: k4072 
o|inlining procedure: k4072 
o|inlining procedure: k4609 
o|inlining procedure: k4776 
o|inlining procedure: k4776 
o|inlining procedure: k5570 
o|inlining procedure: k5570 
o|inlining procedure: k5969 
o|inlining procedure: k5969 
o|inlining procedure: k5991 
o|inlining procedure: k5991 
o|inlining procedure: k6025 
o|inlining procedure: k6025 
o|inlining procedure: k6044 
o|contracted procedure: "(chicken-install.scm:737) g14301431" 
o|inlining procedure: k6064 
o|inlining procedure: k6064 
o|inlining procedure: k6044 
o|inlining procedure: k6181 
o|inlining procedure: k6181 
o|inlining procedure: k6197 
o|inlining procedure: k6197 
o|merged explicitly consed rest parameter: args1525 
o|inlining procedure: k6331 
o|inlining procedure: k6346 
o|inlining procedure: k6346 
o|inlining procedure: k6331 
o|inlining procedure: k6367 
o|inlining procedure: k6367 
o|inlining procedure: k7568 
o|inlining procedure: k7568 
o|contracted procedure: "(chicken-install.scm:1091) main#main" 
o|inlining procedure: k6394 
o|inlining procedure: k6413 
o|contracted procedure: "(chicken-install.scm:876) main#update-db" 
o|inlining procedure: k5643 
o|contracted procedure: "(chicken-install.scm:721) g13801387" 
o|inlining procedure: k5643 
o|inlining procedure: k5757 
o|inlining procedure: k5757 
o|inlining procedure: k5791 
o|inlining procedure: k5791 
o|inlining procedure: k5922 
o|contracted procedure: "(chicken-install.scm:692) g12591266" 
o|substituted constant variable: a5870 
o|substituted constant variable: a5871 
o|inlining procedure: k5922 
o|inlining procedure: k6413 
o|contracted procedure: "(chicken-install.scm:877) main#scan-directory" 
o|inlining procedure: k6149 
o|contracted procedure: "(chicken-install.scm:748) g14671474" 
o|inlining procedure: k6149 
o|inlining procedure: k6434 
o|contracted procedure: "(chicken-install.scm:913) main#list-available-extensions" 
o|inlining procedure: k6301 
o|inlining procedure: k6301 
o|inlining procedure: k6434 
o|consed rest parameter at call site: "(chicken-install.scm:916) main#show-depends" 2 
o|inlining procedure: k6450 
o|consed rest parameter at call site: "(chicken-install.scm:918) main#show-depends" 2 
o|inlining procedure: k6450 
o|contracted procedure: "(chicken-install.scm:920) main#install" 
o|inlining procedure: k4992 
o|consed rest parameter at call site: "(chicken-install.scm:656) main#command" 2 
o|inlining procedure: k5077 
o|inlining procedure: k5077 
o|contracted procedure: k5160 
o|inlining procedure: k5157 
o|inlining procedure: k5157 
o|inlining procedure: k5169 
o|inlining procedure: k5169 
o|contracted procedure: "(chicken-install.scm:641) main#make-install-command" 
o|substituted constant variable: a4801 
o|substituted constant variable: a4802 
o|substituted constant variable: a4878 
o|substituted constant variable: a4879 
o|substituted constant variable: a4899 
o|substituted constant variable: a4900 
o|substituted constant variable: a4917 
o|substituted constant variable: a4918 
o|consed rest parameter at call site: "(chicken-install.scm:555) main#get-prefix" 1 
o|substituted constant variable: a4943 
o|substituted constant variable: a4944 
o|consed rest parameter at call site: "(chicken-install.scm:550) main#get-prefix" 1 
o|inlining procedure: k4965 
o|inlining procedure: k4965 
o|propagated global variable: tmp921923 main#*deploy* 
o|inlining procedure: k4974 
o|propagated global variable: tmp921923 main#*deploy* 
o|inlining procedure: k4974 
o|contracted procedure: "(chicken-install.scm:640) main#delete-stale-binaries" 
o|inlining procedure: k5259 
o|inlining procedure: k5259 
o|consed rest parameter at call site: "(chicken-install.scm:626) main#command" 2 
o|inlining procedure: k5330 
o|inlining procedure: k5330 
o|inlining procedure: k5347 
o|inlining procedure: k5347 
o|substituted constant variable: a5377 
o|substituted constant variable: a5378 
o|contracted procedure: k5379 
o|inlining procedure: k4992 
o|inlining procedure: k5419 
o|inlining procedure: k5419 
o|propagated global variable: out10831087 ##sys#standard-error 
o|substituted constant variable: a5454 
o|substituted constant variable: a5455 
o|propagated global variable: out10831087 ##sys#standard-error 
o|inlining procedure: k5478 
o|contracted procedure: "(chicken-install.scm:595) g10561065" 
o|inlining procedure: k5478 
o|inlining procedure: k5524 
o|inlining procedure: k5524 
o|inlining procedure: k6470 
o|inlining procedure: k6470 
o|inlining procedure: k6482 
o|inlining procedure: k6504 
o|inlining procedure: k6504 
o|propagated global variable: tmp15651567 main#*force* 
o|propagated global variable: tmp15651567 main#*force* 
o|substituted constant variable: a6546 
o|substituted constant variable: a6547 
o|contracted procedure: "(chicken-install.scm:882) main#installed-extensions" 
o|inlining procedure: k6247 
o|inlining procedure: k6247 
o|inlining procedure: k6482 
o|contracted procedure: k6567 
o|inlining procedure: k6573 
o|inlining procedure: k6606 
o|contracted procedure: "(chicken-install.scm:896) g16201629" 
o|inlining procedure: k6606 
o|inlining procedure: k6573 
o|contracted procedure: "(chicken-install.scm:879) main#load-defaults" 
o|contracted procedure: k2577 
o|inlining procedure: k2588 
o|contracted procedure: k2597 
o|contracted procedure: k2606 
o|inlining procedure: k2603 
o|inlining procedure: k2603 
o|substituted constant variable: a2617 
o|substituted constant variable: a2618 
o|inlining procedure: k2588 
o|inlining procedure: k2671 
o|inlining procedure: k2731 
o|inlining procedure: k2731 
o|inlining procedure: k2671 
o|inlining procedure: k2778 
o|inlining procedure: k2778 
o|inlining procedure: k2801 
o|inlining procedure: k2801 
o|substituted constant variable: a2810 
o|inlining procedure: k2823 
o|inlining procedure: k2823 
o|inlining procedure: k2854 
o|inlining procedure: k2854 
o|substituted constant variable: a2913 
o|substituted constant variable: a2915 
o|substituted constant variable: a2917 
o|substituted constant variable: a2919 
o|substituted constant variable: a2921 
o|substituted constant variable: a2923 
o|inlining procedure: k2571 
o|inlining procedure: k2944 
o|inlining procedure: k2944 
o|inlining procedure: k2571 
o|inlining procedure: k6643 
o|inlining procedure: k6643 
o|inlining procedure: k6394 
o|substituted constant variable: a6668 
o|inlining procedure: k6664 
o|inlining procedure: k6664 
o|substituted constant variable: a6679 
o|substituted constant variable: a6690 
o|inlining procedure: k6686 
o|inlining procedure: k6686 
o|substituted constant variable: a6704 
o|substituted constant variable: a6720 
o|inlining procedure: k6716 
o|inlining procedure: k6716 
o|substituted constant variable: a6734 
o|substituted constant variable: a6763 
o|inlining procedure: k6759 
o|inlining procedure: k6759 
o|substituted constant variable: a6796 
o|substituted constant variable: a6842 
o|inlining procedure: k6838 
o|inlining procedure: k6838 
o|substituted constant variable: a6853 
o|substituted constant variable: a6868 
o|inlining procedure: k6864 
o|inlining procedure: k6864 
o|substituted constant variable: a6883 
o|substituted constant variable: a6897 
o|inlining procedure: k6893 
o|contracted procedure: "(chicken-install.scm:975) main#init-repository" 
o|consed rest parameter at call site: "(chicken-install.scm:218) main#command" 2 
o|substituted constant variable: main#+default-repository-files+ 
o|inlining procedure: k3093 
o|inlining procedure: k3093 
o|substituted constant variable: main#+default-repository-files+ 
o|inlining procedure: k6893 
o|substituted constant variable: a6925 
o|substituted constant variable: a6955 
o|inlining procedure: k6952 
o|inlining procedure: k6952 
o|substituted constant variable: a6992 
o|substituted constant variable: a7026 
o|inlining procedure: k7023 
o|inlining procedure: k7023 
o|substituted constant variable: a7037 
o|substituted constant variable: a7048 
o|inlining procedure: k7045 
o|inlining procedure: k7045 
o|substituted constant variable: a7059 
o|substituted constant variable: a7070 
o|inlining procedure: k7067 
o|inlining procedure: k7067 
o|substituted constant variable: a7081 
o|substituted constant variable: a7107 
o|inlining procedure: k7104 
o|inlining procedure: k7104 
o|substituted constant variable: a7133 
o|substituted constant variable: a7164 
o|inlining procedure: k7161 
o|inlining procedure: k7161 
o|substituted constant variable: a7178 
o|substituted constant variable: a7189 
o|inlining procedure: k7186 
o|inlining procedure: k7186 
o|substituted constant variable: a7200 
o|substituted constant variable: a7211 
o|inlining procedure: k7208 
o|inlining procedure: k7208 
o|substituted constant variable: a7222 
o|substituted constant variable: a7248 
o|inlining procedure: k7245 
o|inlining procedure: k7245 
o|substituted constant variable: a7274 
o|substituted constant variable: a7285 
o|inlining procedure: k7282 
o|inlining procedure: k7282 
o|inlining procedure: k7299 
o|inlining procedure: k7338 
o|contracted procedure: "(chicken-install.scm:1053) g17571766" 
o|inlining procedure: k7338 
o|substituted constant variable: main#*short-options* 
o|inlining procedure: k7299 
o|substituted constant variable: a7389 
o|inlining procedure: k7391 
o|inlining procedure: k7421 
o|inlining procedure: k7421 
o|inlining procedure: k7391 
o|substituted constant variable: a7490 
o|substituted constant variable: a7487 
o|substituted constant variable: a7492 
o|substituted constant variable: a7494 
o|substituted constant variable: a7497 
o|substituted constant variable: a7499 
o|substituted constant variable: a7501 
o|substituted constant variable: a7503 
o|substituted constant variable: a7505 
o|substituted constant variable: a7507 
o|substituted constant variable: a7509 
o|substituted constant variable: a7511 
o|substituted constant variable: a7513 
o|substituted constant variable: a7515 
o|inlining procedure: k7516 
o|inlining procedure: k7516 
o|substituted constant variable: a7520 
o|replaced variables: 944 
o|removed binding forms: 429 
o|Removed `not' forms: 2 
o|removed side-effect free assignment to unused variable: main#+default-repository-files+ 
o|substituted constant variable: r30507625 
o|substituted constant variable: r31467629 
o|substituted constant variable: r32247633 
o|substituted constant variable: r32247633 
o|substituted constant variable: r32637639 
o|substituted constant variable: r32637639 
o|inlining procedure: k3262 
o|inlining procedure: k3262 
o|contracted procedure: k3314 
o|substituted constant variable: r33157651 
o|substituted constant variable: r34337659 
o|propagated global variable: a30167674 main#*default-location* 
o|propagated global variable: out690694 ##sys#standard-output 
o|substituted constant variable: r41097681 
o|substituted constant variable: r42287684 
o|substituted constant variable: r42287684 
o|inlining procedure: k4227 
o|inlining procedure: k4227 
o|substituted constant variable: r32027705 
o|substituted constant variable: r32027705 
o|propagated global variable: r44607711 main#*force* 
o|substituted constant variable: r47157730 
o|converted assignments to bindings: (fail898) 
o|substituted constant variable: r36437743 
o|substituted constant variable: r36527745 
o|substituted constant variable: r36617747 
o|inlining procedure: k6361 
o|inlining procedure: k6361 
o|substituted constant variable: r63477790 
o|substituted constant variable: r63327791 
o|removed side-effect free assignment to unused variable: main#*short-options* 
o|substituted constant variable: r75697794 
o|substituted constant variable: r75697794 
o|substituted constant variable: r75697796 
o|substituted constant variable: r75697796 
o|substituted constant variable: r51587820 
o|substituted constant variable: r51707823 
o|contracted procedure: k4965 
o|substituted constant variable: r49667825 
o|propagated global variable: r49757826 main#*deploy* 
o|inlining procedure: k4974 
o|substituted constant variable: r53317831 
o|propagated global variable: out10831087 ##sys#standard-error 
o|substituted constant variable: r62487849 
o|substituted constant variable: r28027866 
o|inlining procedure: k2861 
o|converted assignments to bindings: (broken256) 
o|inlining procedure: k7421 
o|simplifications: ((let . 2)) 
o|replaced variables: 38 
o|removed binding forms: 1000 
o|removed conditional forms: 2 
o|Removed `not' forms: 1 
o|inlining procedure: k2538 
o|inlining procedure: k2538 
o|propagated global variable: r25398051 main#*prefix* 
o|propagated global variable: r25398051 main#*prefix* 
o|inlining procedure: k3046 
o|substituted constant variable: r32637936 
o|inlining procedure: k3770 
o|inlining procedure: k4311 
o|substituted constant variable: r63627986 
o|inlining procedure: "(chicken-install.scm:656) main#command" 
o|inlining procedure: "(chicken-install.scm:558) main#back-slash->forward-slash" 
o|inlining procedure: "(chicken-install.scm:553) main#back-slash->forward-slash" 
o|contracted procedure: k4974 
o|propagated global variable: r4975 main#*host-extension* 
o|substituted constant variable: r49758009 
o|inlining procedure: "(chicken-install.scm:626) main#command" 
o|inlining procedure: k6467 
o|inlining procedure: k2924 
o|inlining procedure: k2924 
o|inlining procedure: "(chicken-install.scm:927) main#usage" 
o|inlining procedure: "(chicken-install.scm:944) main#usage" 
o|inlining procedure: "(chicken-install.scm:948) main#usage" 
o|inlining procedure: "(chicken-install.scm:952) main#usage" 
o|inlining procedure: "(chicken-install.scm:218) main#command" 
o|inlining procedure: "(chicken-install.scm:974) main#usage" 
o|inlining procedure: "(chicken-install.scm:978) main#usage" 
o|inlining procedure: "(chicken-install.scm:982) main#usage" 
o|inlining procedure: "(chicken-install.scm:987) main#usage" 
o|inlining procedure: "(chicken-install.scm:1007) main#usage" 
o|inlining procedure: "(chicken-install.scm:1011) main#usage" 
o|inlining procedure: "(chicken-install.scm:1015) main#usage" 
o|inlining procedure: "(chicken-install.scm:1034) main#usage" 
o|inlining procedure: "(chicken-install.scm:1038) main#usage" 
o|inlining procedure: "(chicken-install.scm:1056) main#usage" 
o|inlining procedure: "(chicken-install.scm:1057) main#usage" 
o|replaced variables: 24 
o|removed binding forms: 80 
o|removed conditional forms: 1 
o|substituted constant variable: r25398050 
o|substituted constant variable: r25398050 
o|substituted constant variable: r30478052 
o|substituted constant variable: r30478052 
o|substituted constant variable: r30478052 
o|substituted constant variable: r42287954 
o|removed side-effect free assignment to unused variable: main#back-slash->forward-slash 
o|removed side-effect free assignment to unused variable: main#command 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: fstr15248095 
o|substituted constant variable: fstr15248107 
o|substituted constant variable: r29258127 
o|substituted constant variable: code15288131 
o|substituted constant variable: code15288136 
o|substituted constant variable: code15288141 
o|substituted constant variable: code15288146 
o|substituted constant variable: fstr15248151 
o|substituted constant variable: code15288159 
o|substituted constant variable: code15288164 
o|substituted constant variable: code15288169 
o|substituted constant variable: code15288174 
o|substituted constant variable: code15288179 
o|substituted constant variable: code15288184 
o|substituted constant variable: code15288189 
o|substituted constant variable: code15288194 
o|substituted constant variable: code15288199 
o|substituted constant variable: code15288206 
o|substituted constant variable: code15288211 
o|simplifications: ((let . 1)) 
o|replaced variables: 10 
o|removed binding forms: 32 
o|removed conditional forms: 3 
o|inlining procedure: k4932 
o|inlining procedure: k4958 
o|removed binding forms: 31 
o|simplifications: ((if . 46) (##core#call . 417)) 
o|  call simplifications:
o|    string=?
o|    alist-cons	2
o|    ##sys#size	2
o|    fx>
o|    string->list
o|    memq
o|    string
o|    cddr	2
o|    =
o|    first
o|    length
o|    list-ref
o|    >
o|    caddr	3
o|    apply	3
o|    string->number
o|    ##sys#apply	5
o|    ##sys#structure?
o|    memv	6
o|    ##sys#setslot	10
o|    list	10
o|    ##sys#check-list	12
o|    pair?	54
o|    ##sys#slot	57
o|    ##sys#list	9
o|    set-car!
o|    list?	5
o|    string?	5
o|    symbol?	4
o|    cons	39
o|    ##sys#call-with-values	12
o|    values	18
o|    eq?	21
o|    equal?	6
o|    member	4
o|    cadr	41
o|    assq	10
o|    assoc	3
o|    cdr	13
o|    null?	9
o|    car	28
o|    not	10
o|    ##sys#fudge
o|contracted procedure: k2468 
o|contracted procedure: k2517 
o|contracted procedure: k2553 
o|contracted procedure: k2529 
o|contracted procedure: k2535 
o|contracted procedure: k2975 
o|contracted procedure: k2983 
o|contracted procedure: k3043 
o|contracted procedure: k3046 
o|contracted procedure: k3119 
o|contracted procedure: k3142 
o|contracted procedure: k3152 
o|contracted procedure: k3168 
o|contracted procedure: k3177 
o|contracted procedure: k3213 
o|contracted procedure: k3216 
o|contracted procedure: k3246 
o|contracted procedure: k3255 
o|contracted procedure: k3278 
o|contracted procedure: k3287 
o|contracted procedure: k3297 
o|contracted procedure: k3308 
o|contracted procedure: k3378 
o|contracted procedure: k3385 
o|contracted procedure: k3397 
o|contracted procedure: k3416 
o|contracted procedure: k3420 
o|contracted procedure: k3429 
o|contracted procedure: k3435 
o|contracted procedure: k3450 
o|contracted procedure: k3438 
o|contracted procedure: k3456 
o|contracted procedure: k3463 
o|contracted procedure: k3731 
o|contracted procedure: k3752 
o|contracted procedure: k3780 
o|contracted procedure: k37778060 
o|contracted procedure: k3770 
o|contracted procedure: k3777 
o|contracted procedure: k3787 
o|contracted procedure: k3801 
o|inlining procedure: k3797 
o|inlining procedure: k3797 
o|contracted procedure: k2998 
o|contracted procedure: k3013 
o|contracted procedure: k3005 
o|contracted procedure: k3030 
o|contracted procedure: k4243 
o|contracted procedure: k4088 
o|contracted procedure: k4120 
o|contracted procedure: k4131 
o|contracted procedure: k4143 
o|contracted procedure: k4153 
o|contracted procedure: k4157 
o|contracted procedure: k4162 
o|contracted procedure: k4186 
o|contracted procedure: k4191 
o|contracted procedure: k4209 
o|contracted procedure: k4219 
o|contracted procedure: k4223 
o|propagated global variable: g712714 main#*eggs+dirs+vers* 
o|contracted procedure: k4230 
o|propagated global variable: out690694 ##sys#standard-output 
o|contracted procedure: k4236 
o|contracted procedure: k4328 
o|contracted procedure: k4577 
o|contracted procedure: k4589 
o|contracted procedure: k4599 
o|contracted procedure: k4603 
o|contracted procedure: k4574 
o|contracted procedure: k4342 
o|contracted procedure: k4346 
o|contracted procedure: k4386 
o|contracted procedure: k3481 
o|contracted procedure: k3496 
o|contracted procedure: k3510 
o|contracted procedure: k3530 
o|contracted procedure: k3534 
o|contracted procedure: k3549 
o|contracted procedure: k3559 
o|contracted procedure: k3563 
o|propagated global variable: g514516 main#*hacks* 
o|contracted procedure: k4491 
o|contracted procedure: k4495 
o|contracted procedure: k4510 
o|contracted procedure: k4487 
o|contracted procedure: k4397 
o|contracted procedure: k4435 
o|contracted procedure: k4445 
o|contracted procedure: k4449 
o|contracted procedure: k4456 
o|contracted procedure: k3974 
o|contracted procedure: k3865 
o|contracted procedure: k3875 
o|contracted procedure: k3932 
o|contracted procedure: k3936 
o|contracted procedure: k3886 
o|contracted procedure: k3928 
o|contracted procedure: k3948 
o|contracted procedure: k3951 
o|contracted procedure: k3970 
o|contracted procedure: k4473 
o|contracted procedure: k4522 
o|contracted procedure: k4525 
o|contracted procedure: k4528 
o|contracted procedure: k4536 
o|contracted procedure: k4544 
o|contracted procedure: k4503 
o|contracted procedure: k4641 
o|contracted procedure: k4651 
o|contracted procedure: k4660 
o|contracted procedure: k4770 
o|contracted procedure: k4705 
o|contracted procedure: k4711 
o|contracted procedure: k4728 
o|contracted procedure: k4750 
o|contracted procedure: k4766 
o|contracted procedure: k4757 
o|contracted procedure: k4682 
o|contracted procedure: k4566 
o|propagated global variable: g809811 main#*eggs+dirs+vers* 
o|contracted procedure: k4612 
o|contracted procedure: k4622 
o|contracted procedure: k4626 
o|contracted procedure: k4257 
o|contracted procedure: k4266 
o|contracted procedure: k4324 
o|contracted procedure: k4276 
o|contracted procedure: k3669 
o|contracted procedure: k3597 
o|contracted procedure: k3645 
o|contracted procedure: k3654 
o|contracted procedure: k3663 
o|contracted procedure: k3692 
o|contracted procedure: k4305 
o|contracted procedure: k4301 
o|contracted procedure: k4308 
o|contracted procedure: k4311 
o|contracted procedure: k3983 
o|contracted procedure: k4035 
o|contracted procedure: k4039 
o|contracted procedure: k4045 
o|contracted procedure: k4056 
o|contracted procedure: k4052 
o|contracted procedure: k4067 
o|contracted procedure: k4075 
o|contracted procedure: k5972 
o|contracted procedure: k5985 
o|contracted procedure: k5994 
o|contracted procedure: k6007 
o|contracted procedure: k6011 
o|contracted procedure: k6049 
o|contracted procedure: k6052 
o|contracted procedure: k6055 
o|contracted procedure: k6067 
o|contracted procedure: k6070 
o|contracted procedure: k6073 
o|contracted procedure: k6081 
o|contracted procedure: k6089 
o|contracted procedure: k6114 
o|contracted procedure: k6184 
o|contracted procedure: k6212 
o|contracted procedure: k6334 
o|contracted procedure: k6358 
o|contracted procedure: k6375 
o|contracted procedure: k6370 
o|contracted procedure: k6397 
o|contracted procedure: k5646 
o|contracted procedure: k5656 
o|contracted procedure: k5660 
o|contracted procedure: k5682 
o|contracted procedure: k5686 
o|contracted procedure: k5692 
o|contracted procedure: k5717 
o|contracted procedure: k5726 
o|contracted procedure: k5729 
o|contracted procedure: k5736 
o|contracted procedure: k5745 
o|contracted procedure: k5748 
o|contracted procedure: k5760 
o|contracted procedure: k5763 
o|contracted procedure: k5766 
o|contracted procedure: k5774 
o|contracted procedure: k5782 
o|contracted procedure: k5794 
o|contracted procedure: k5797 
o|contracted procedure: k5800 
o|contracted procedure: k5808 
o|contracted procedure: k5816 
o|contracted procedure: k5925 
o|contracted procedure: k5935 
o|contracted procedure: k5939 
o|contracted procedure: k5897 
o|contracted procedure: k6140 
o|contracted procedure: k6152 
o|contracted procedure: k6162 
o|contracted procedure: k6166 
o|contracted procedure: k6130 
o|contracted procedure: k6126 
o|contracted procedure: k4999 
o|contracted procedure: k5036 
o|contracted procedure: k5093 
o|contracted procedure: k5236 
o|contracted procedure: k5240 
o|contracted procedure: k5244 
o|contracted procedure: k4793 
o|contracted procedure: k4822 
o|contracted procedure: k4826 
o|contracted procedure: k4830 
o|contracted procedure: k4834 
o|contracted procedure: k4860 
o|contracted procedure: k4871 
o|contracted procedure: k4892 
o|contracted procedure: k5560 
o|contracted procedure: k5564 
o|contracted procedure: k5547 
o|contracted procedure: k5262 
o|contracted procedure: k5287 
o|contracted procedure: k5323 
o|contracted procedure: k5337 
o|contracted procedure: k5341 
o|contracted procedure: k5344 
o|contracted procedure: k5382 
o|contracted procedure: k5403 
o|contracted procedure: k5406 
o|contracted procedure: k5447 
o|contracted procedure: k5422 
o|contracted procedure: k5432 
o|contracted procedure: k5436 
o|contracted procedure: k5440 
o|contracted procedure: k5444 
o|contracted procedure: k5472 
o|contracted procedure: k5481 
o|contracted procedure: k5503 
o|contracted procedure: k5499 
o|contracted procedure: k5484 
o|contracted procedure: k5487 
o|contracted procedure: k5495 
o|contracted procedure: k5527 
o|contracted procedure: k6479 
o|contracted procedure: k6495 
o|contracted procedure: k6507 
o|contracted procedure: k6510 
o|contracted procedure: k6513 
o|contracted procedure: k6521 
o|contracted procedure: k6529 
o|contracted procedure: k6561 
o|contracted procedure: k6235 
o|contracted procedure: k6238 
o|contracted procedure: k6241 
o|contracted procedure: k6244 
o|contracted procedure: k6256 
o|contracted procedure: k6576 
o|contracted procedure: k6584 
o|contracted procedure: k6609 
o|contracted procedure: k6612 
o|contracted procedure: k6615 
o|contracted procedure: k6623 
o|contracted procedure: k6631 
o|contracted procedure: k6597 
o|contracted procedure: k2585 
o|contracted procedure: k2591 
o|contracted procedure: k2650 
o|contracted procedure: k2646 
o|contracted procedure: k2642 
o|contracted procedure: k2638 
o|contracted procedure: k2658 
o|contracted procedure: k2666 
o|contracted procedure: k2674 
o|contracted procedure: k2682 
o|contracted procedure: k2709 
o|contracted procedure: k2722 
o|contracted procedure: k2734 
o|contracted procedure: k2737 
o|contracted procedure: k2740 
o|contracted procedure: k2748 
o|contracted procedure: k2756 
o|contracted procedure: k2765 
o|contracted procedure: k2773 
o|contracted procedure: k2788 
o|contracted procedure: k2792 
o|contracted procedure: k2798 
o|contracted procedure: k2804 
o|contracted procedure: k2814 
o|contracted procedure: k2826 
o|contracted procedure: k2829 
o|contracted procedure: k2832 
o|contracted procedure: k2840 
o|contracted procedure: k2848 
o|contracted procedure: k2857 
o|contracted procedure: k2871 
o|contracted procedure: k2875 
o|contracted procedure: k2882 
o|contracted procedure: k2890 
o|contracted procedure: k2898 
o|contracted procedure: k2906 
o|contracted procedure: k2930 
o|contracted procedure: k2947 
o|contracted procedure: k2957 
o|contracted procedure: k2961 
o|contracted procedure: k6649 
o|contracted procedure: k6655 
o|contracted procedure: k6691 
o|contracted procedure: k6705 
o|contracted procedure: k6721 
o|contracted procedure: k6735 
o|contracted procedure: k6742 
o|contracted procedure: k6751 
o|contracted procedure: k6764 
o|contracted procedure: k6781 
o|contracted procedure: k6784 
o|contracted procedure: k6797 
o|contracted procedure: k6804 
o|contracted procedure: k6830 
o|contracted procedure: k6854 
o|contracted procedure: k6884 
o|contracted procedure: k6898 
o|contracted procedure: k6911 
o|contracted procedure: k3061 
o|contracted procedure: k3096 
o|contracted procedure: k3106 
o|contracted procedure: k3110 
o|contracted procedure: k6914 
o|contracted procedure: k6937 
o|contracted procedure: k6941 
o|contracted procedure: k6944 
o|contracted procedure: k6957 
o|contracted procedure: k6964 
o|contracted procedure: k6978 
o|contracted procedure: k6981 
o|contracted procedure: k6998 
o|contracted procedure: k7012 
o|contracted procedure: k7015 
o|contracted procedure: k7087 
o|contracted procedure: k7096 
o|contracted procedure: k7113 
o|contracted procedure: k7122 
o|contracted procedure: k7146 
o|contracted procedure: k7150 
o|contracted procedure: k7153 
o|contracted procedure: k7166 
o|contracted procedure: k7228 
o|contracted procedure: k7237 
o|contracted procedure: k7254 
o|contracted procedure: k7263 
o|contracted procedure: k7386 
o|contracted procedure: k7302 
o|contracted procedure: k7322 
o|contracted procedure: k7341 
o|contracted procedure: k7363 
o|contracted procedure: k7359 
o|contracted procedure: k7344 
o|contracted procedure: k7347 
o|contracted procedure: k7355 
o|contracted procedure: k7394 
o|contracted procedure: k7401 
o|contracted procedure: k7410 
o|contracted procedure: k7452 
o|contracted procedure: k7456 
o|contracted procedure: k7476 
o|contracted procedure: k7484 
o|simplifications: ((if . 1) (let . 69)) 
o|removed binding forms: 355 
o|inlining procedure: k3009 
o|inlining procedure: k3009 
o|inlining procedure: k5399 
o|inlining procedure: k5399 
o|replaced variables: 101 
o|removed binding forms: 1 
o|simplifications: ((if . 1)) 
o|replaced variables: 4 
o|removed binding forms: 57 
o|removed binding forms: 4 
o|direct leaf routine/allocation: main#deps 0 
o|direct leaf routine/allocation: g13281337 9 
o|direct leaf routine/allocation: g13551364 9 
o|contracted procedure: "(chicken-install.scm:432) k4169" 
o|contracted procedure: "(chicken-install.scm:432) k4173" 
o|contracted procedure: "(chicken-install.scm:243) k3193" 
o|contracted procedure: "(chicken-install.scm:244) k3197" 
o|contracted procedure: "(chicken-install.scm:245) k3201" 
o|contracted procedure: "(chicken-install.scm:715) k5778" 
o|contracted procedure: "(chicken-install.scm:714) k5812" 
o|removed binding forms: 7 
o|replaced variables: 14 
o|removed binding forms: 6 
o|customizable procedures: (k6658 k7296 g17871788 k7414 map-loop17511776 main#setup-proxy g412419 for-each-loop411422 loop1549 g261268 for-each-loop260373 k2864 g350359 map-loop344364 g305314 map-loop299335 broken256 map-loop16141632 g15131514 map-loop15831600 k4986 map-loop10501075 g10961104 for-each-loop10951219 k5024 k5350 setup1121 k4789 main#get-prefix tmp11271136 tmp11541163 main#$system main#show-depends for-each-loop14661477 for-each-loop12581297 map-loop13221340 map-loop13491367 for-each-loop13791391 g14921493 map-loop14351452 canonical1404 g656657 k3997 main#with-default-sources k3603 k3615 k3627 for-each-loop760795 k4688 fail898 main#apply-mappings k4540 map-loop829847 g625626 for-each-loop862874 g508515 for-each-loop507518 loop523 for-each-loop802888 main#retrieve g706713 for-each-loop705746 main#cleanup for-each-loop722740 k3020 k3761 trying-sources587 k3239 k3329 k3301 scan467 main#check-dependency main#ext-version k3122 main#repo-path main#resolve-location) 
o|calls to known targets: 265 
o|identified direct recursive calls: f_2973 1 
o|identified direct recursive calls: f_3726 1 
o|identified direct recursive calls: f_5755 1 
o|identified direct recursive calls: f_5789 1 
o|identified direct recursive calls: f_5476 1 
o|identified direct recursive calls: f_7336 1 
o|fast box initializations: 29 
o|fast global references: 193 
o|fast global assignments: 105 
o|dropping unused closure argument: f_2527 
o|dropping unused closure argument: f_6170 
o|dropping unused closure argument: f_2973 
o|dropping unused closure argument: f_5568 
o|dropping unused closure argument: f_5967 
o|dropping unused closure argument: f_5964 
o|dropping unused closure argument: f_3114 
o|dropping unused closure argument: f_4080 
o|dropping unused closure argument: f_3041 
o|dropping unused closure argument: f_4250 
o|dropping unused closure argument: f_6329 
o|dropping unused closure argument: f_3717 
o|dropping unused closure argument: f_2460 
o|dropping unused closure argument: f_3208 
*/
/* end of file */

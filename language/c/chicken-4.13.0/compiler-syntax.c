/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   2017-12-11 17:50
   Version 4.12.0 (rev 6ea24b6)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2017-02-19 on yves.more-magic.net (Linux)
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -types ./types.db -no-lambda-info -extend private-namespace.scm -no-trace -output-file compiler-syntax.c
   unit: compiler_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[87];
static double C_possibly_force_alignment;


C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1481)
static void C_fcall f_1481(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3496)
static void C_ccall f_3496(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word *av) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word *av) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2841)
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_1411)
static void C_ccall f_1411(C_word c,C_word *av) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word *av) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word *av) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word *av) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word *av) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word *av) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word *av) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word *av) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word *av) C_noret;
C_noret_decl(f_3390)
static void C_fcall f_3390(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word *av) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word *av) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word *av) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word *av) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3442)
static void C_fcall f_3442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word *av) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word *av) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word *av) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word *av) C_noret;
C_noret_decl(f_2529)
static void C_fcall f_2529(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word *av) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word *av) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word *av) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word *av) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word *av) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_1382)
static void C_fcall f_1382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word *av) C_noret;
C_noret_decl(f_1388)
static void C_fcall f_1388(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word *av) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word *av) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word *av) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word *av) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_fcall f_3066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word *av) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word *av) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word *av) C_noret;
C_noret_decl(f_1316)
static void C_ccall f_1316(C_word c,C_word *av) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word *av) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word *av) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word *av) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word *av) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word *av) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externexport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word *av) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word *av) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word *av) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word *av) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3260)
static void C_fcall f_3260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word *av) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word *av) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word *av) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word *av) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word *av) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word *av) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3251)
static C_word C_fcall f_3251(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1809)
static void C_fcall f_1809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word *av) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1538)
static C_word C_fcall f_1538(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word *av) C_noret;
C_noret_decl(f_1548)
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word *av) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word *av) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word *av) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1282)
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1291)
static void C_fcall f_1291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2793)
static void C_fcall f_2793(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word *av) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3294)
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word *av) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word *av) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static C_word C_fcall f_3100(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_fcall f_2651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word *av) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word *av) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word *av) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static void C_fcall f_3342(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word *av) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word *av) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word *av) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_fcall f_3168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_fcall f_3214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word *av) C_noret;
C_noret_decl(f_2713)
static void C_fcall f_2713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2897)
static void C_fcall f_2897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word *av) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word *av) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word *av) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word *av) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static C_word C_fcall f_2571(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static C_word C_fcall f_1471(C_word t0);
C_noret_decl(f_2750)
static C_word C_fcall f_2750(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word *av) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word *av) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word *av) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1481)
static void C_ccall trf_1481(C_word c,C_word *av) C_noret;
static void C_ccall trf_1481(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1481(t0,t1);}

C_noret_decl(trf_2841)
static void C_ccall trf_2841(C_word c,C_word *av) C_noret;
static void C_ccall trf_2841(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2841(t0,t1,t2);}

C_noret_decl(trf_3390)
static void C_ccall trf_3390(C_word c,C_word *av) C_noret;
static void C_ccall trf_3390(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3390(t0,t1,t2,t3);}

C_noret_decl(trf_3442)
static void C_ccall trf_3442(C_word c,C_word *av) C_noret;
static void C_ccall trf_3442(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3442(t0,t1,t2);}

C_noret_decl(trf_2529)
static void C_ccall trf_2529(C_word c,C_word *av) C_noret;
static void C_ccall trf_2529(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2529(t0,t1);}

C_noret_decl(trf_1382)
static void C_ccall trf_1382(C_word c,C_word *av) C_noret;
static void C_ccall trf_1382(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1382(t0,t1);}

C_noret_decl(trf_1388)
static void C_ccall trf_1388(C_word c,C_word *av) C_noret;
static void C_ccall trf_1388(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1388(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3066)
static void C_ccall trf_3066(C_word c,C_word *av) C_noret;
static void C_ccall trf_3066(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3066(t0,t1);}

C_noret_decl(trf_3260)
static void C_ccall trf_3260(C_word c,C_word *av) C_noret;
static void C_ccall trf_3260(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3260(t0,t1,t2);}

C_noret_decl(trf_1809)
static void C_ccall trf_1809(C_word c,C_word *av) C_noret;
static void C_ccall trf_1809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1809(t0,t1,t2);}

C_noret_decl(trf_1548)
static void C_ccall trf_1548(C_word c,C_word *av) C_noret;
static void C_ccall trf_1548(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1548(t0,t1,t2);}

C_noret_decl(trf_1500)
static void C_ccall trf_1500(C_word c,C_word *av) C_noret;
static void C_ccall trf_1500(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1500(t0,t1,t2);}

C_noret_decl(trf_1282)
static void C_ccall trf_1282(C_word c,C_word *av) C_noret;
static void C_ccall trf_1282(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1282(t0,t1,t2);}

C_noret_decl(trf_1291)
static void C_ccall trf_1291(C_word c,C_word *av) C_noret;
static void C_ccall trf_1291(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1291(t0,t1,t2);}

C_noret_decl(trf_2793)
static void C_ccall trf_2793(C_word c,C_word *av) C_noret;
static void C_ccall trf_2793(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2793(t0,t1,t2,t3);}

C_noret_decl(trf_3294)
static void C_ccall trf_3294(C_word c,C_word *av) C_noret;
static void C_ccall trf_3294(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3294(t0,t1,t2,t3);}

C_noret_decl(trf_2651)
static void C_ccall trf_2651(C_word c,C_word *av) C_noret;
static void C_ccall trf_2651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2651(t0,t1,t2);}

C_noret_decl(trf_3342)
static void C_ccall trf_3342(C_word c,C_word *av) C_noret;
static void C_ccall trf_3342(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3342(t0,t1,t2);}

C_noret_decl(trf_2965)
static void C_ccall trf_2965(C_word c,C_word *av) C_noret;
static void C_ccall trf_2965(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2965(t0,t1,t2);}

C_noret_decl(trf_3168)
static void C_ccall trf_3168(C_word c,C_word *av) C_noret;
static void C_ccall trf_3168(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3168(t0,t1,t2);}

C_noret_decl(trf_3214)
static void C_ccall trf_3214(C_word c,C_word *av) C_noret;
static void C_ccall trf_3214(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3214(t0,t1,t2);}

C_noret_decl(trf_2713)
static void C_ccall trf_2713(C_word c,C_word *av) C_noret;
static void C_ccall trf_2713(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2713(t0,t1,t2);}

C_noret_decl(trf_2897)
static void C_ccall trf_2897(C_word c,C_word *av) C_noret;
static void C_ccall trf_2897(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2897(t0,t1,t2,t3);}

C_noret_decl(trf_2759)
static void C_ccall trf_2759(C_word c,C_word *av) C_noret;
static void C_ccall trf_2759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2759(t0,t1,t2);}

/* k3025 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3027,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3023,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[81];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3029,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3033,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:64: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* next in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1481,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* compiler-syntax.scm:208: fail */
t2=((C_word*)t0)[3];
f_1388(t2,t1,C_SCHEME_TRUE,lf[26],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3494 in k1255 in k1252 in k1249 */
static void C_ccall f_3496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3496,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:62: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[86];
av2[3]=((C_word*)t0)[3];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_3080,2,av);}
a=C_alloc(31);
t2=t1;
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=t4;
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[72]);
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3388,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3390,a[2]=t8,a[3]=t13,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3390(t15,t11,t2,((C_word*)t0)[12]);}

/* k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2064,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:274: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1939,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:297: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1936,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:296: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3036,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:66: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop428 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in ... */
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_2841,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:116: g434 */
  f_2571(C_a_i(&a,21),((C_word*)t0)[2],t3)
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

/* k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3039,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:67: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1411,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:190: ##sys#write-char-0 */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(96);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1417,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:190: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[20];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1414,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:190: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in ... */
static void C_ccall f_2586(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_2586,2,av);}
a=C_alloc(29);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t2,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2793,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2793(t11,t7,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2320,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2316,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2322,5,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2326,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:143: gensym */
t6=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2324 in a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_2326,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2329,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=(C_truep((C_truep(C_eqp(t4,lf[14]))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,lf[63]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))?lf[14]:lf[64]);
t6=((C_word*)t0)[4];
t7=C_u_i_cdr(t6);
/* compiler-syntax.scm:144: compile-format-string */
t8=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=t5;
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
av2[5]=t7;
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t8+1)))(8,av2);}}

/* k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3388(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_3388,2,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3095,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=t9,a[3]=t7,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3342(t14,t10,((C_word*)t0)[12]);}

/* k1418 in k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1420,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:190: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2327 in k2324 in a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2329,2,av);}
a=C_alloc(6);
t2=t1;
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:153: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1299 in for-each-loop42 in k1318 in k1314 in r-c-s in k1255 in k1252 in k1249 */
static void C_ccall f_1301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1301,2,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1291(t3,((C_word*)t0)[4],t2);}

/* k1427 in k1424 in k1421 in k1418 in k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in ... */
static void C_ccall f_1429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1429,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:190: get-output-string */
t3=*((C_word*)lf[16]+1);{
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

/* k1421 in k1418 in k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1423,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:190: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[19];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1424 in k1421 in k1418 in k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 in ... */
static void C_ccall f_1426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1426,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[17]+1);
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
C_apply(6,av2);}}

/* k3093 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3095,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3482 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3484,2,av);}
t2=((C_word*)t0)[2];
f_3066(t2,C_i_greaterp(t1,C_fix(2)));}

/* map-loop157 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3390(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3390,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2564 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in ... */
static void C_ccall f_2566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_2566,2,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2243 in a2234 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2245,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3042,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:68: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2514,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:106: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2511,2,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:105: r */
t3=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2517,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:107: r */
t4=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1559 in k1556 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1561(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_1561,2,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=C_a_i_list(&a,2,lf[28],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[29],((C_word*)t0)[2],C_SCHEME_TRUE,t5);
t7=t6;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1584,a[2]=t7,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:227: reverse */
t9=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3465 in map-loop127 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3467(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3467,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_3442(t6,((C_word*)t0)[5],t5);}

/* k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3051,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:71: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2543(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(70,c,4)))){
C_save_and_reclaim((void *)f_2543,2,av);}
a=C_alloc(70);
t2=t1;
t3=C_a_i_list(&a,1,lf[73]);
t4=C_a_i_list(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=t7;
t9=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t10=t9;
t11=C_i_cadr(((C_word*)t0)[6]);
t12=C_a_i_list(&a,2,((C_word*)t0)[7],t11);
t13=t12;
t14=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t15=t14;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=((C_word*)t16)[1];
t18=C_i_check_list_2(t2,lf[72]);
t19=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2895,a[2]=t13,a[3]=t10,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t8,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[4],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[5],a[17]=((C_word*)t0)[15],a[18]=t2,tmp=(C_word)a,a+=19,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2897,a[2]=t16,a[3]=t21,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t23=((C_word*)t21)[1];
f_2897(t23,t19,t2,((C_word*)t0)[16]);}

/* map-loop127 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3442,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3467,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:76: gensym */
t6=*((C_word*)lf[46]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2361 in k2337 in k2327 in k2324 in a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2363(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_2363,2,av);}
a=C_alloc(19);
t2=C_a_i_list(&a,1,t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=t4;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:155: r */
t7=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[16];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3045,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:69: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3048,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:70: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3021 in k3025 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3023,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[81],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
/* compiler-syntax.scm:92: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[83];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3054,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:72: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2349 in k2361 in k2337 in k2327 in k2324 in a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_2351,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3057,2,av);}
a=C_alloc(16);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3066,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[84],*((C_word*)lf[76]+1)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:75: length+ */
t6=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;
f_3066(t5,C_SCHEME_FALSE);}}

/* k2294 in k2298 in k2302 in k2306 in k2310 in k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_2296,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:158: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[8];
av2[2]=lf[62];
av2[3]=((C_word*)t0)[9];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_2520,2,av);}
a=C_alloc(20);
t2=t1;
t3=C_i_cddr(((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2529,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[72],*((C_word*)lf[76]+1)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:110: length+ */
t7=*((C_word*)lf[77]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t5;
f_2529(t6,C_SCHEME_FALSE);}}

/* k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_2529(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_2529,2,t0,t1);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2965,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_2965(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[10];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2337 in k2327 in k2324 in a2321 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2339,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:153: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2233,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2229,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a2234 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2235(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_2235,5,av);}
a=C_alloc(4);
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=t2;
t9=C_u_i_cdr(t8);
t10=C_u_i_cdr(t9);
/* compiler-syntax.scm:161: compile-format-string */
t11=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t11;
av2[1]=t6;
av2[2]=lf[17];
av2[3]=t7;
av2[4]=t2;
av2[5]=t10;
av2[6]=t3;
av2[7]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(8,av2);}}
else{
t6=t2;
t7=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2502,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:102: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_2505,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:103: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2508,2,av);}
a=C_alloc(15);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* compiler-syntax.scm:104: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3005 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3007,2,av);}
t2=((C_word*)t0)[2];
f_2529(t2,C_i_greaterp(t1,C_fix(2)));}

/* k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1382,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[2];
t4=C_u_i_car(t3);
if(C_truep(C_i_stringp(t4))){
t5=((C_word*)t0)[2];
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_car(t5);
f_1385(2,av2);}}
else{
/* compiler-syntax.scm:185: cadar */
t5=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2219 in k2223 in k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2221,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1388(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1388,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1392,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:188: get-line */
t6=*((C_word*)lf[25]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2223 in k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2225,2,av);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[35];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1385(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,5)))){
C_save_and_reclaim((void *)f_1385,2,av);}
a=C_alloc(24);
t2=t1;
t3=((C_word*)t0)[2];
t4=C_u_i_cdr(t3);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1388,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_i_string_length(t2);
t12=t11;
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1460,a[2]=t2,a[3]=t10,a[4]=t5,a[5]=t6,a[6]=t8,a[7]=t12,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:198: r */
t14=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[37];
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}

/* k1582 in k1559 in k1556 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1584,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2229,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1888 in k1881 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1890,2,av);}
t2=((C_word*)t0)[2];
f_1382(t2,C_i_stringp(t1));}

/* k1892 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1894,2,av);}
t2=C_i_caar(((C_word*)t0)[2]);
/* compiler-syntax.scm:183: c */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3066(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_3066,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[2],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3442,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3442(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1360(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_1360,3,av);}
a=C_alloc(18);
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
if(C_truep(C_i_memq(((C_word*)t0)[3],*((C_word*)lf[13]+1)))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_stringp(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_1382(t7,t5);}
else{
t7=((C_word*)t0)[2];
t8=C_u_i_car(t7);
if(C_truep(C_i_listp(t8))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1883,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:183: r */
t11=((C_word*)t0)[6];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t9=t6;
f_1382(t9,C_SCHEME_FALSE);}}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1556 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1558,2,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:224: endchunk */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1500(t3,t2,((C_word*)t0)[9]);}

/* k1881 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1883,2,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler-syntax.scm:184: cadar */
t3=*((C_word*)lf[38]+1);{
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
t2=((C_word*)t0)[2];
f_1382(t2,C_SCHEME_FALSE);}}

/* k1668 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_1670,2,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[21],t1,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:236: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:263: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1548(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k2211 in k2215 in k2219 in k2223 in k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2213,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[16];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1314 in r-c-s in k1255 in k1252 in k1249 */
static void C_ccall f_1316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1316,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1320,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:49: append */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[9]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1689 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1691,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:238: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:263: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1548(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k2310 in k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2312,2,av);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[35];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1430 in k1427 in k1424 in k1421 in k1418 in k1415 in k1412 in k1409 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in ... */
static void C_ccall f_1432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1432,2,av);}
/* compiler-syntax.scm:189: warning */
t2=*((C_word*)lf[15]+1);{
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

/* k1634 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1636,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:234: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:263: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1548(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k1437 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1439,2,av);}
a=C_alloc(6);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1445,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:191: ##sys#write-char-0 */
t6=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_make_character(40);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k1434 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1436,2,av);}
/* compiler-syntax.scm:190: ##sys#print */
t2=*((C_word*)lf[18]+1);{
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

/* k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2316,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2302 in k2306 in k2310 in k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2304,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2298 in k2302 in k2306 in k2310 in k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2300,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[16];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1446 in k1443 in k1437 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1448,2,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:191: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[22];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2306 in k2310 in k2314 in k2318 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2308,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1443 in k1437 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1445,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:191: ##sys#print */
t3=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1651 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_1653,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=(
  /* compiler-syntax.scm:235: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
/* compiler-syntax.scm:263: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1548(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("compiler_2dsyntax_toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_compiler_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(690))){
C_save(t1);
C_rereclaim2(690*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,87);
lf[0]=C_h_intern(&lf[0],35,"\010compilercompiler-syntax-statistics");
lf[1]=C_h_intern(&lf[1],24,"\003syscompiler-syntax-hook");
lf[2]=C_h_intern(&lf[2],13,"alist-update!");
lf[3]=C_h_intern(&lf[3],9,"alist-ref");
lf[4]=C_h_intern(&lf[4],3,"eq\077");
lf[5]=C_h_intern(&lf[5],14,"\010compilerr-c-s");
lf[6]=C_h_intern(&lf[6],8,"\003sysput!");
lf[7]=C_h_intern(&lf[7],24,"\010compilercompiler-syntax");
lf[8]=C_h_intern(&lf[8],6,"append");
lf[9]=C_h_intern(&lf[9],29,"\003sysdefault-macro-environment");
lf[10]=C_h_intern(&lf[10],22,"\003sysensure-transformer");
lf[11]=C_h_intern(&lf[11],18,"\003syser-transformer");
lf[12]=C_h_intern(&lf[12],30,"\010compilercompile-format-string");
lf[13]=C_h_intern(&lf[13],17,"extended-bindings");
lf[14]=C_h_intern(&lf[14],7,"sprintf");
lf[15]=C_h_intern(&lf[15],7,"warning");
lf[16]=C_h_intern(&lf[16],17,"get-output-string");
lf[17]=C_h_intern(&lf[17],7,"fprintf");
lf[18]=C_h_intern(&lf[18],9,"\003sysprint");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\002, ");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\024\047, in format string ");
lf[21]=C_h_intern(&lf[21],16,"\003syswrite-char-0");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\002) ");
lf[23]=C_h_intern(&lf[23],18,"open-output-string");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[25]=C_h_intern(&lf[25],17,"\010compilerget-line");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[27]=C_h_intern(&lf[27],20,"reverse-list->string");
lf[28]=C_h_intern(&lf[28],5,"quote");
lf[29]=C_h_intern(&lf[29],21,"\003syscheck-output-port");
lf[30]=C_h_intern(&lf[30],7,"reverse");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\0000too many arguments to formatted output procedure");
lf[32]=C_h_intern(&lf[32],16,"\003sysflush-output");
lf[33]=C_h_intern(&lf[33],9,"\003sysapply");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000$illegal format-string character `~c\047");
lf[35]=C_h_intern(&lf[35],14,"number->string");
lf[36]=C_h_intern(&lf[36],3,"let");
lf[37]=C_h_intern(&lf[37],3,"out");
lf[38]=C_h_intern(&lf[38],5,"cadar");
lf[39]=C_h_intern(&lf[39],7,"call/cc");
lf[40]=C_h_intern(&lf[40],5,"foldl");
lf[41]=C_h_intern(&lf[41],10,"\004corequote");
lf[42]=C_h_intern(&lf[42],14,"\003syscheck-list");
lf[43]=C_h_intern(&lf[43],10,"\004corecheck");
lf[44]=C_h_intern(&lf[44],8,"\003sysslot");
lf[45]=C_h_intern(&lf[45],8,"\004coreapp");
lf[46]=C_h_intern(&lf[46],6,"gensym");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\005foldl");
lf[48]=C_h_intern(&lf[48],5,"pair\077");
lf[49]=C_h_intern(&lf[49],2,"if");
lf[50]=C_h_intern(&lf[50],4,"let\052");
lf[51]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldl\376\003\000\000\002\376\001\000\000\007#%foldl\376\377\016");
lf[52]=C_h_intern(&lf[52],19,"\003sysprimitive-alias");
lf[53]=C_h_intern(&lf[53],5,"foldr");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005foldr");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\005foldr\376\003\000\000\002\376\001\000\000\007#%foldr\376\377\016");
lf[56]=C_h_intern(&lf[56],6,"printf");
lf[57]=C_h_intern(&lf[57],19,"\003sysstandard-output");
lf[58]=C_h_intern(&lf[58],7,"display");
lf[59]=C_h_intern(&lf[59],5,"write");
lf[60]=C_h_intern(&lf[60],10,"write-char");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\010#%printf\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\011#%fprintf\376\377\016");
lf[63]=C_h_intern(&lf[63],9,"#%sprintf");
lf[64]=C_h_intern(&lf[64],6,"format");
lf[65]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\010#%format\376\377\016");
lf[66]=C_h_intern(&lf[66],1,"o");
lf[67]=C_h_intern(&lf[67],10,"fold-right");
lf[68]=C_h_intern(&lf[68],4,"list");
lf[69]=C_h_intern(&lf[69],6,"lambda");
lf[70]=C_h_intern(&lf[70],3,"tmp");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\003#%o\376\377\016");
lf[72]=C_h_intern(&lf[72],3,"map");
lf[73]=C_h_intern(&lf[73],14,"\004coreundefined");
lf[74]=C_h_intern(&lf[74],11,"\003syssetslot");
lf[75]=C_h_intern(&lf[75],10,"\003sysappend");
lf[76]=C_h_intern(&lf[76],17,"standard-bindings");
lf[77]=C_h_intern(&lf[77],7,"length+");
lf[78]=C_h_intern(&lf[78],3,"and");
lf[79]=C_h_intern(&lf[79],5,"begin");
lf[80]=C_h_intern(&lf[80],4,"set!");
lf[81]=C_h_intern(&lf[81],4,"cons");
lf[82]=C_h_intern(&lf[82],8,"map-loop");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\005#%map\376\377\016");
lf[84]=C_h_intern(&lf[84],8,"for-each");
lf[85]=C_h_intern(&lf[85],13,"for-each-loop");
lf[86]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\012#%for-each\376\377\016");
C_register_lf2(lf,87,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1251,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1405(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_1405,2,av);}
a=C_alloc(17);
t2=t1;
t3=t2;
t4=C_i_check_port_2(t3,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[14]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1436,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1439,a[2]=t6,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:191: open-output-string */
t8=*((C_word*)lf[23]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
/* compiler-syntax.scm:190: ##sys#print */
t7=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[24];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2477,5,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2481,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:94: r */
t6=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2215 in k2219 in k2223 in k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2217,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2459 in k2451 in k2444 in a2435 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_2461,2,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2207 in k2211 in k2215 in k2219 in k2223 in k2227 in k2231 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_2209,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:168: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[8];
av2[2]=lf[61];
av2[3]=((C_word*)t0)[9];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1753 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1755,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:252: next */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1481(t4,t3);}

/* k1756 in k1753 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_1758,2,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,5,lf[33],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=(
  /* compiler-syntax.scm:253: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[5])[1],t2)
);
/* compiler-syntax.scm:263: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1548(t4,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);}

/* map-loop249 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3260(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3260,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:83: g255 */
  f_3251(C_a_i(&a,6),((C_word*)t0)[2],t3)
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

/* k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2481,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:95: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2484,2,av);}
a=C_alloc(7);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:96: r */
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2164 in a2161 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2166,2,av);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2487,2,av);}
a=C_alloc(8);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:97: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2161 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2162(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_2162,5,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2166,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t2);
/* compiler-syntax.scm:170: compile-format-string */
t7=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 8) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(8);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[56];
av2[3]=lf[57];
av2[4]=t2;
av2[5]=t6;
av2[6]=t3;
av2[7]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(8,av2);}}

/* k2158 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2160,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:266: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=((C_word*)t0)[3];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2434,2,av);}
a=C_alloc(8);
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* a2435 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2436(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2436,5,av);}
a=C_alloc(5);
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[66],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2446,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:137: r */
t9=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[70];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2430,2,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2424 in k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2426,2,av);}
a=C_alloc(10);
t2=C_a_i_cons(&a,2,lf[17],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[35];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2420 in k2424 in k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2422,2,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,lf[35],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3256 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3258(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_3258,2,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3214,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3214(t12,t8,((C_word*)t0)[11]);}

/* g255 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static C_word C_fcall f_3251(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* skip in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1809,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=(
  /* compiler-syntax.scm:260: fetch */
  f_1471(((C_word*)((C_word*)t0)[2])[1])
);
/* compiler-syntax.scm:260: skip */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}
else{
t3=C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t4=C_mutate2(((C_word *)((C_word*)t0)[4])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1529 in endchunk in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_1531,2,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[18],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
/* compiler-syntax.scm:214: push */
t3=((C_word*)t0)[3];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=(
  /* compiler-syntax.scm:214: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2451 in k2444 in a2435 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2453(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2453,2,av);}
a=C_alloc(8);
t2=t1;
t3=C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_cdr(((C_word*)t0)[4]);
/* compiler-syntax.scm:138: fold-right */
t7=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=*((C_word*)lf[68]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* push in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static C_word C_fcall f_1538(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3130(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_3130,2,av);}
a=C_alloc(28);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3260,a[2]=t7,a[3]=t5,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3260(t12,t8,((C_word*)t0)[11]);}

/* k2444 in a2435 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2446,2,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2453,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:138: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(13,0,4)))){
C_save_and_reclaim_args((void *)trf_1548,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1558,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[10])[1]))){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1558(2,av2);}}
else{
/* compiler-syntax.scm:223: fail */
t4=((C_word*)t0)[11];
f_1388(t4,t3,C_SCHEME_FALSE,lf[31],C_SCHEME_END_OF_LIST);}}
else{
t3=(
  /* compiler-syntax.scm:229: fetch */
  f_1471(((C_word*)((C_word*)t0)[12])[1])
);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=(
  /* compiler-syntax.scm:231: fetch */
  f_1471(((C_word*)((C_word*)t0)[12])[1])
);
t6=t5;
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1613,a[2]=t6,a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[2],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:232: endchunk */
t8=((C_word*)((C_word*)t0)[9])[1];
f_1500(t8,t7,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
/* compiler-syntax.scm:264: loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}}}

/* k2416 in k2420 in k2424 in k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2418,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,lf[60],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[23];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2412 in k2416 in k2420 in k2424 in k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2414,2,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[23],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[16];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2408 in k2412 in k2416 in k2420 in k2424 in k2428 in k2432 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_2410,2,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[16],t1);
t3=C_a_i_list(&a,7,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
/* compiler-syntax.scm:141: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[8];
av2[2]=lf[65];
av2[3]=((C_word*)t0)[9];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* endchunk in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_1500,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,lf[21],t5,((C_word*)t0)[2]);
/* compiler-syntax.scm:214: push */
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  /* compiler-syntax.scm:214: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t6)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1531,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler-syntax.scm:217: reverse-list->string */
t6=*((C_word*)lf[27]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_2499,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:101: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2496,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:100: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2493,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2496,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:99: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2490,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:98: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[81];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* g43 in k1318 in k1314 in r-c-s in k1255 in k1252 in k1249 */
static void C_fcall f_1282(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1282,3,t0,t1,t2);}
/* compiler-syntax.scm:52: ##sys#put! */
t3=*((C_word*)lf[6]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[7];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop42 in k1318 in k1314 in r-c-s in k1255 in k1252 in k1249 */
static void C_fcall f_1291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1291,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1301,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
/* compiler-syntax.scm:45: g43 */
t5=((C_word*)t0)[3];
f_1282(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* map-loop458 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in ... */
static void C_fcall f_2793(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2793,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k2988 in map-loop367 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 in ... */
static void C_ccall f_2990(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2990,2,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=((C_word*)((C_word*)t0)[4])[1];
f_2965(t6,((C_word*)t0)[5],t5);}

/* k1617 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1619,2,av);}
/* compiler-syntax.scm:263: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1548(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1613(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_1613,2,av);}
a=C_alloc(16);
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:234: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1653,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:235: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:236: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:239: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:243: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1733,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:247: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[5]);
t5=(
  /* compiler-syntax.scm:249: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:263: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1548(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:251: next */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1481(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,lf[21],C_make_character(126),((C_word*)t0)[5]);
t5=(
  /* compiler-syntax.scm:254: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
/* compiler-syntax.scm:263: loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1548(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,lf[21],C_make_character(10),((C_word*)t0)[5]);
t7=(
  /* compiler-syntax.scm:255: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t6)
);
/* compiler-syntax.scm:263: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1548(t8,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=(
  /* compiler-syntax.scm:258: fetch */
  f_1471(((C_word*)((C_word*)t0)[10])[1])
);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[10],a[3]=t8,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1809(t10,t3,t6);}
else{
/* compiler-syntax.scm:262: fail */
t6=((C_word*)t0)[12];
f_1388(t6,t3,C_SCHEME_TRUE,lf[34],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* map-loop218 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3294,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_1352,2,av);}
a=C_alloc(11);
t2=C_mutate2((C_word*)lf[12]+1 /* (set! ##compiler#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1354,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2045,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2160,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:266: ##sys#primitive-alias */
t6=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* ##compiler#compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1354,8,av);}
a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1360,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:177: call/cc */
t9=*((C_word*)lf[39]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k1249 */
static void C_ccall f_1251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1251,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1252 in k1249 */
static void C_ccall f_1254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1254,2,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k1255 in k1252 in k1249 */
static void C_ccall f_1257(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_1257,2,av);}
a=C_alloc(13);
t2=C_set_block_item(lf[0] /* ##compiler#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t3=C_mutate2((C_word*)lf[1]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1260,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate2((C_word*)lf[5]+1 /* (set! ##compiler#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1274,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3029,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3496,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:62: ##sys#primitive-alias */
t8=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* g194 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static C_word C_fcall f_3100(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[84]);
t3=C_a_i_list(&a,3,lf[42],t1,t2);
return(C_a_i_list(&a,2,lf[43],t3));}

/* k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1337,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2477,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:92: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop549 in k2709 in k2755 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in ... */
static void C_fcall f_2651(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2651,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(1));
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

/* k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1340,2,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1343,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2436,tmp=(C_word)a,a+=2,tmp);
/* compiler-syntax.scm:134: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[71];
av2[3]=t3;
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1343,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1346,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2322,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2434,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:141: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[58];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1346,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2235,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2320,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:158: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[58];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1349,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2162,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2233,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:168: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[58];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2041 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2043,2,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[48],t1);
t3=C_a_i_list(&a,1,t2);
/* compiler-syntax.scm:288: r-c-s */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=((C_word*)t0)[3];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2045(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2045,5,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[53],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2064,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:273: r */
t15=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* map-loop188 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3342(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_3342,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:79: g194 */
  f_3100(C_a_i(&a,21),((C_word*)t0)[2],t3)
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

/* k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1392,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1405,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* compiler-syntax.scm:190: open-output-string */
t5=*((C_word*)lf[23]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1393 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1395,2,av);}
if(C_truep(((C_word*)t0)[2])){
/* compiler-syntax.scm:194: return */
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1318 in k1314 in r-c-s in k1255 in k1252 in k1249 */
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
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1320,2,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1282,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[3];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1291(t9,((C_word*)t0)[4],t5);}

/* k1322 in r-c-s in k1255 in k1252 in k1249 */
static void C_ccall f_1324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1324,2,av);}
t2=C_i_car(((C_word*)t0)[2]);
/* compiler-syntax.scm:46: ##sys#ensure-transformer */
t3=*((C_word*)lf[10]+1);{
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

/* map-loop367 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 */
static void C_fcall f_2965(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2965,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,1,t4);
/* compiler-syntax.scm:111: gensym */
t6=*((C_word*)lf[46]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1949 in k1946 in k1943 in k1940 in k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_1951,2,av);}
a=C_alloc(12);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler-syntax.scm:301: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1952 in k1949 in k1946 in k1943 in k1940 in k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1954(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(138,c,1)))){
C_save_and_reclaim((void *)f_1954,2,av);}
a=C_alloc(138);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,lf[41],lf[40]);
t6=C_a_i_list(&a,3,lf[42],t1,t5);
t7=C_a_i_list(&a,2,lf[43],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[2]);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t12=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t14=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[2],t13);
t15=C_a_i_list(&a,4,lf[45],((C_word*)t0)[7],t12,t14);
t16=C_a_i_list(&a,4,((C_word*)t0)[8],t11,t15,((C_word*)t0)[2]);
t17=C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[7],t10,t16);
t18=((C_word*)t0)[10];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t18;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[11],t4,t7,t17);
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* map-loop309 in k3210 in k3256 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3168(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3168,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(1));
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

/* k3164 in k3210 in k3256 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3166(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_3166,2,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
/* compiler-syntax.scm:76: ##sys#append */
t8=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* map-loop279 in k3256 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_fcall f_3214(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3214,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(0));
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

/* k3210 in k3256 in k3128 in k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3212(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_3212,2,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3166,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3168,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3168(t12,t8,((C_word*)t0)[11]);}

/* map-loop519 in k2755 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in ... */
static void C_fcall f_2713(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2713,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[44],t3,C_fix(0));
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

/* k2709 in k2755 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in ... */
static void C_ccall f_2711(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,3)))){
C_save_and_reclaim((void *)f_2711,2,av);}
a=C_alloc(73);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=t6;
t8=C_a_i_list(&a,4,lf[74],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t9=t8;
t10=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t11=t10;
t12=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t13=t12;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=((C_word*)t14)[1];
t16=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t7,a[5]=t9,a[6]=t11,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2651,a[2]=t14,a[3]=t18,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_2651(t20,t16,((C_word*)t0)[16]);}

/* k1943 in k1940 in k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1945,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:299: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop397 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 in ... */
static void C_fcall f_2897(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2897,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate2(((C_word *)((C_word*)t0)[2])+1,t9);
t12=C_slot(t2,C_fix(1));
t13=C_slot(t3,C_fix(1));
t15=t1;
t16=t12;
t17=t13;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1946 in k1943 in k1940 in k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1948,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1951,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:300: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[47];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in k1249 in ... */
static void C_ccall f_2895(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_2895,2,av);}
a=C_alloc(44);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=t3;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2566,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=t5,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2841,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_2841(t15,t11,((C_word*)t0)[18]);}

/* k1940 in k1937 in k1934 in a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1942,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:298: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2647 in k2709 in k2755 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in ... */
static void C_ccall f_2649(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,3)))){
C_save_and_reclaim((void *)f_2649,2,av);}
a=C_alloc(57);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[45],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,3,lf[44],((C_word*)t0)[7],C_fix(1));
t6=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[9],t4,t5);
t7=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,1,t7);
/* compiler-syntax.scm:111: ##sys#append */
t9=*((C_word*)lf[75]+1);{
C_word *av2;
if(c >= 4) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[11];
av2[2]=((C_word*)t0)[12];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k1449 in k1446 in k1443 in k1437 in k1403 in k1390 in fail in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1451,2,av);}
/* compiler-syntax.scm:191: get-output-string */
t2=*((C_word*)lf[16]+1);{
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

/* ##sys#compiler-syntax-hook in k1255 in k1252 in k1249 */
static void C_ccall f_1260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1260,4,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1264,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:41: alist-ref */
t5=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 6) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=*((C_word*)lf[0]+1);
av2[4]=*((C_word*)lf[4]+1);
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k1266 in k1262 in compiler-syntax-hook in k1255 in k1252 in k1249 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1268,2,av);}
t2=C_mutate2((C_word*)lf[0]+1 /* (set! ##compiler#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1262 in compiler-syntax-hook in k1255 in k1252 in k1249 */
static void C_ccall f_1264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1264,2,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_plus(&a,2,t1,C_fix(1));
/* compiler-syntax.scm:43: alist-update! */
t4=*((C_word*)lf[2]+1);{
C_word *av2;
if(c >= 5) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=*((C_word*)lf[0]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k1731 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1733,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:246: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:263: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1548(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3113 in k3386 in k3078 in k3064 in k3055 in k3052 in k3049 in k3046 in k3043 in k3040 in k3037 in k3034 in k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3115(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_3115,2,av);}
a=C_alloc(24);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3294,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3294(t11,t7,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1460,2,av);}
a=C_alloc(13);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler-syntax.scm:199: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_1463,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:200: r */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_1466,2,av);}
a=C_alloc(14);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler-syntax.scm:201: r */
t4=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[35];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1469(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_1469,2,av);}
a=C_alloc(43);
t2=t1;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1481,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[6],a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1538,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t8,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t4,a[13]=t16,a[14]=t10,a[15]=t6,a[16]=t2,a[17]=((C_word*)t0)[12],tmp=(C_word)a,a+=18,tmp));
t18=((C_word*)t16)[1];
f_1548(t18,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);}

/* k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_1912,2,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1917,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2043,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:288: ##sys#primitive-alias */
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* ##compiler#r-c-s in k1255 in k1252 in k1249 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_1274,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_car(t4));
t7=t6;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1316,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1324,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* compiler-syntax.scm:47: ##sys#er-transformer */
t10=*((C_word*)lf[11]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k1913 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1915,2,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in ... */
static void C_ccall f_2601(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_2601,2,av);}
a=C_alloc(33);
t2=t1;
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t2,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2759,a[2]=t7,a[3]=t5,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2759(t12,t8,((C_word*)t0)[16]);}

/* a1916 in k1910 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1917(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1917,5,av);}
a=C_alloc(7);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[40],*((C_word*)lf[13]+1)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=t8;
t10=C_i_caddr(t2);
t11=t10;
t12=C_i_cadddr(t2);
t13=t12;
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1936,a[2]=t11,a[3]=t13,a[4]=t9,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* compiler-syntax.scm:295: r */
t15=t3;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t8=t2;
t9=t1;{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* g434 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in k1255 in k1252 in ... */
static C_word C_fcall f_2571(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[72]);
t3=C_a_i_list(&a,3,lf[42],t1,t2);
return(C_a_i_list(&a,2,lf[43],t3));}

/* k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2079(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(117,c,1)))){
C_save_and_reclaim((void *)f_2079,2,av);}
a=C_alloc(117);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[41],lf[53]);
t5=C_a_i_list(&a,3,lf[42],t1,t4);
t6=C_a_i_list(&a,2,lf[43],t5);
t7=C_a_i_list(&a,2,t1,t1);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t10=C_a_i_list(&a,3,lf[44],t1,C_fix(0));
t11=C_a_i_list(&a,3,lf[44],t1,C_fix(1));
t12=C_a_i_list(&a,3,lf[45],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[5],t10,t12);
t14=C_a_i_list(&a,4,((C_word*)t0)[6],t9,t13,((C_word*)t0)[7]);
t15=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[4],t8,t14);
t16=((C_word*)t0)[9];{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t16;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[10],t3,t6,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}

/* fetch in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static C_word C_fcall f_1471(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* g495 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in ... */
static C_word C_fcall f_2750(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k3031 in a3028 in k1255 in k1252 in k1249 */
static void C_ccall f_3033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3033,2,av);}
a=C_alloc(6);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler-syntax.scm:65: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2074 in k2071 in k2068 in k2065 in k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2076,2,av);}
a=C_alloc(11);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler-syntax.scm:278: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2=av; /* Re-use our own argvector */
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2755 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in ... */
static void C_ccall f_2757(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_2757,2,av);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=t2;
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t3,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2713,a[2]=t6,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2713(t12,t8,((C_word*)t0)[16]);}

/* k2071 in k2068 in k2065 in k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2073,2,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler-syntax.scm:277: gensym */
t4=*((C_word*)lf[46]+1);{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop489 in k2599 in k2584 in k2893 in k2541 in k2527 in k2518 in k2515 in k2512 in k2509 in k2506 in k2503 in k2500 in k2497 in k2494 in k2491 in k2488 in k2485 in k2482 in k2479 in a2476 in k1335 in ... */
static void C_fcall f_2759(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2759,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(
  /* compiler-syntax.scm:120: g495 */
  f_2750(C_a_i(&a,6),((C_word*)t0)[2],t3)
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

/* k2068 in k2065 in k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2070,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:276: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[49];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1710 in k1611 in loop in k1467 in k1464 in k1461 in k1458 in k1383 in k1380 in a1359 in compile-format-string in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_1712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_1712,2,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,4,lf[18],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
  /* compiler-syntax.scm:242: push */
  f_1538(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
/* compiler-syntax.scm:263: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1548(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k2065 in k2062 in a2044 in k1350 in k1347 in k1344 in k1341 in k1338 in k1335 in k1255 in k1252 in k1249 */
static void C_ccall f_2067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2067,2,av);}
a=C_alloc(9);
t2=t1;
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* compiler-syntax.scm:275: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av; /* Re-use our own argvector */
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[48];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[191] = {
{"f_3027:compiler_2dsyntax_2escm",(void*)f_3027},
{"f_3029:compiler_2dsyntax_2escm",(void*)f_3029},
{"f_1481:compiler_2dsyntax_2escm",(void*)f_1481},
{"f_3496:compiler_2dsyntax_2escm",(void*)f_3496},
{"f_3080:compiler_2dsyntax_2escm",(void*)f_3080},
{"f_2064:compiler_2dsyntax_2escm",(void*)f_2064},
{"f_1939:compiler_2dsyntax_2escm",(void*)f_1939},
{"f_1936:compiler_2dsyntax_2escm",(void*)f_1936},
{"f_3036:compiler_2dsyntax_2escm",(void*)f_3036},
{"f_2841:compiler_2dsyntax_2escm",(void*)f_2841},
{"f_3039:compiler_2dsyntax_2escm",(void*)f_3039},
{"f_1411:compiler_2dsyntax_2escm",(void*)f_1411},
{"f_1417:compiler_2dsyntax_2escm",(void*)f_1417},
{"f_1414:compiler_2dsyntax_2escm",(void*)f_1414},
{"f_2586:compiler_2dsyntax_2escm",(void*)f_2586},
{"f_2320:compiler_2dsyntax_2escm",(void*)f_2320},
{"f_2322:compiler_2dsyntax_2escm",(void*)f_2322},
{"f_2326:compiler_2dsyntax_2escm",(void*)f_2326},
{"f_3388:compiler_2dsyntax_2escm",(void*)f_3388},
{"f_1420:compiler_2dsyntax_2escm",(void*)f_1420},
{"f_2329:compiler_2dsyntax_2escm",(void*)f_2329},
{"f_1301:compiler_2dsyntax_2escm",(void*)f_1301},
{"f_1429:compiler_2dsyntax_2escm",(void*)f_1429},
{"f_1423:compiler_2dsyntax_2escm",(void*)f_1423},
{"f_1426:compiler_2dsyntax_2escm",(void*)f_1426},
{"f_3095:compiler_2dsyntax_2escm",(void*)f_3095},
{"f_3484:compiler_2dsyntax_2escm",(void*)f_3484},
{"f_3390:compiler_2dsyntax_2escm",(void*)f_3390},
{"f_2566:compiler_2dsyntax_2escm",(void*)f_2566},
{"f_2245:compiler_2dsyntax_2escm",(void*)f_2245},
{"f_3042:compiler_2dsyntax_2escm",(void*)f_3042},
{"f_2514:compiler_2dsyntax_2escm",(void*)f_2514},
{"f_2511:compiler_2dsyntax_2escm",(void*)f_2511},
{"f_2517:compiler_2dsyntax_2escm",(void*)f_2517},
{"f_1561:compiler_2dsyntax_2escm",(void*)f_1561},
{"f_3467:compiler_2dsyntax_2escm",(void*)f_3467},
{"f_3051:compiler_2dsyntax_2escm",(void*)f_3051},
{"f_2543:compiler_2dsyntax_2escm",(void*)f_2543},
{"f_3442:compiler_2dsyntax_2escm",(void*)f_3442},
{"f_2363:compiler_2dsyntax_2escm",(void*)f_2363},
{"f_3045:compiler_2dsyntax_2escm",(void*)f_3045},
{"f_3048:compiler_2dsyntax_2escm",(void*)f_3048},
{"f_3023:compiler_2dsyntax_2escm",(void*)f_3023},
{"f_3054:compiler_2dsyntax_2escm",(void*)f_3054},
{"f_2351:compiler_2dsyntax_2escm",(void*)f_2351},
{"f_3057:compiler_2dsyntax_2escm",(void*)f_3057},
{"f_2296:compiler_2dsyntax_2escm",(void*)f_2296},
{"f_2520:compiler_2dsyntax_2escm",(void*)f_2520},
{"f_2529:compiler_2dsyntax_2escm",(void*)f_2529},
{"f_2339:compiler_2dsyntax_2escm",(void*)f_2339},
{"f_2233:compiler_2dsyntax_2escm",(void*)f_2233},
{"f_2235:compiler_2dsyntax_2escm",(void*)f_2235},
{"f_2502:compiler_2dsyntax_2escm",(void*)f_2502},
{"f_2505:compiler_2dsyntax_2escm",(void*)f_2505},
{"f_2508:compiler_2dsyntax_2escm",(void*)f_2508},
{"f_3007:compiler_2dsyntax_2escm",(void*)f_3007},
{"f_1382:compiler_2dsyntax_2escm",(void*)f_1382},
{"f_2221:compiler_2dsyntax_2escm",(void*)f_2221},
{"f_1388:compiler_2dsyntax_2escm",(void*)f_1388},
{"f_2225:compiler_2dsyntax_2escm",(void*)f_2225},
{"f_1385:compiler_2dsyntax_2escm",(void*)f_1385},
{"f_1584:compiler_2dsyntax_2escm",(void*)f_1584},
{"f_2229:compiler_2dsyntax_2escm",(void*)f_2229},
{"f_1890:compiler_2dsyntax_2escm",(void*)f_1890},
{"f_1894:compiler_2dsyntax_2escm",(void*)f_1894},
{"f_3066:compiler_2dsyntax_2escm",(void*)f_3066},
{"f_1360:compiler_2dsyntax_2escm",(void*)f_1360},
{"f_1558:compiler_2dsyntax_2escm",(void*)f_1558},
{"f_1883:compiler_2dsyntax_2escm",(void*)f_1883},
{"f_1670:compiler_2dsyntax_2escm",(void*)f_1670},
{"f_2213:compiler_2dsyntax_2escm",(void*)f_2213},
{"f_1316:compiler_2dsyntax_2escm",(void*)f_1316},
{"f_1691:compiler_2dsyntax_2escm",(void*)f_1691},
{"f_2312:compiler_2dsyntax_2escm",(void*)f_2312},
{"f_1432:compiler_2dsyntax_2escm",(void*)f_1432},
{"f_1636:compiler_2dsyntax_2escm",(void*)f_1636},
{"f_1439:compiler_2dsyntax_2escm",(void*)f_1439},
{"f_1436:compiler_2dsyntax_2escm",(void*)f_1436},
{"f_2316:compiler_2dsyntax_2escm",(void*)f_2316},
{"f_2304:compiler_2dsyntax_2escm",(void*)f_2304},
{"f_2300:compiler_2dsyntax_2escm",(void*)f_2300},
{"f_1448:compiler_2dsyntax_2escm",(void*)f_1448},
{"f_2308:compiler_2dsyntax_2escm",(void*)f_2308},
{"f_1445:compiler_2dsyntax_2escm",(void*)f_1445},
{"f_1653:compiler_2dsyntax_2escm",(void*)f_1653},
{"toplevel:compiler_2dsyntax_2escm",(void*)C_compiler_2dsyntax_toplevel},
{"f_1405:compiler_2dsyntax_2escm",(void*)f_1405},
{"f_2477:compiler_2dsyntax_2escm",(void*)f_2477},
{"f_2217:compiler_2dsyntax_2escm",(void*)f_2217},
{"f_2461:compiler_2dsyntax_2escm",(void*)f_2461},
{"f_2209:compiler_2dsyntax_2escm",(void*)f_2209},
{"f_1755:compiler_2dsyntax_2escm",(void*)f_1755},
{"f_1758:compiler_2dsyntax_2escm",(void*)f_1758},
{"f_3260:compiler_2dsyntax_2escm",(void*)f_3260},
{"f_2481:compiler_2dsyntax_2escm",(void*)f_2481},
{"f_2484:compiler_2dsyntax_2escm",(void*)f_2484},
{"f_2166:compiler_2dsyntax_2escm",(void*)f_2166},
{"f_2487:compiler_2dsyntax_2escm",(void*)f_2487},
{"f_2162:compiler_2dsyntax_2escm",(void*)f_2162},
{"f_2160:compiler_2dsyntax_2escm",(void*)f_2160},
{"f_2434:compiler_2dsyntax_2escm",(void*)f_2434},
{"f_2436:compiler_2dsyntax_2escm",(void*)f_2436},
{"f_2430:compiler_2dsyntax_2escm",(void*)f_2430},
{"f_2426:compiler_2dsyntax_2escm",(void*)f_2426},
{"f_2422:compiler_2dsyntax_2escm",(void*)f_2422},
{"f_3258:compiler_2dsyntax_2escm",(void*)f_3258},
{"f_3251:compiler_2dsyntax_2escm",(void*)f_3251},
{"f_1809:compiler_2dsyntax_2escm",(void*)f_1809},
{"f_1531:compiler_2dsyntax_2escm",(void*)f_1531},
{"f_2453:compiler_2dsyntax_2escm",(void*)f_2453},
{"f_1538:compiler_2dsyntax_2escm",(void*)f_1538},
{"f_3130:compiler_2dsyntax_2escm",(void*)f_3130},
{"f_2446:compiler_2dsyntax_2escm",(void*)f_2446},
{"f_1548:compiler_2dsyntax_2escm",(void*)f_1548},
{"f_2418:compiler_2dsyntax_2escm",(void*)f_2418},
{"f_2414:compiler_2dsyntax_2escm",(void*)f_2414},
{"f_2410:compiler_2dsyntax_2escm",(void*)f_2410},
{"f_1500:compiler_2dsyntax_2escm",(void*)f_1500},
{"f_2499:compiler_2dsyntax_2escm",(void*)f_2499},
{"f_2496:compiler_2dsyntax_2escm",(void*)f_2496},
{"f_2493:compiler_2dsyntax_2escm",(void*)f_2493},
{"f_2490:compiler_2dsyntax_2escm",(void*)f_2490},
{"f_1282:compiler_2dsyntax_2escm",(void*)f_1282},
{"f_1291:compiler_2dsyntax_2escm",(void*)f_1291},
{"f_2793:compiler_2dsyntax_2escm",(void*)f_2793},
{"f_2990:compiler_2dsyntax_2escm",(void*)f_2990},
{"f_1619:compiler_2dsyntax_2escm",(void*)f_1619},
{"f_1613:compiler_2dsyntax_2escm",(void*)f_1613},
{"f_3294:compiler_2dsyntax_2escm",(void*)f_3294},
{"f_1352:compiler_2dsyntax_2escm",(void*)f_1352},
{"f_1354:compiler_2dsyntax_2escm",(void*)f_1354},
{"f_1251:compiler_2dsyntax_2escm",(void*)f_1251},
{"f_1254:compiler_2dsyntax_2escm",(void*)f_1254},
{"f_1257:compiler_2dsyntax_2escm",(void*)f_1257},
{"f_3100:compiler_2dsyntax_2escm",(void*)f_3100},
{"f_1337:compiler_2dsyntax_2escm",(void*)f_1337},
{"f_2651:compiler_2dsyntax_2escm",(void*)f_2651},
{"f_1340:compiler_2dsyntax_2escm",(void*)f_1340},
{"f_1343:compiler_2dsyntax_2escm",(void*)f_1343},
{"f_1346:compiler_2dsyntax_2escm",(void*)f_1346},
{"f_1349:compiler_2dsyntax_2escm",(void*)f_1349},
{"f_2043:compiler_2dsyntax_2escm",(void*)f_2043},
{"f_2045:compiler_2dsyntax_2escm",(void*)f_2045},
{"f_3342:compiler_2dsyntax_2escm",(void*)f_3342},
{"f_1392:compiler_2dsyntax_2escm",(void*)f_1392},
{"f_1395:compiler_2dsyntax_2escm",(void*)f_1395},
{"f_1320:compiler_2dsyntax_2escm",(void*)f_1320},
{"f_1324:compiler_2dsyntax_2escm",(void*)f_1324},
{"f_2965:compiler_2dsyntax_2escm",(void*)f_2965},
{"f_1951:compiler_2dsyntax_2escm",(void*)f_1951},
{"f_1954:compiler_2dsyntax_2escm",(void*)f_1954},
{"f_3168:compiler_2dsyntax_2escm",(void*)f_3168},
{"f_3166:compiler_2dsyntax_2escm",(void*)f_3166},
{"f_3214:compiler_2dsyntax_2escm",(void*)f_3214},
{"f_3212:compiler_2dsyntax_2escm",(void*)f_3212},
{"f_2713:compiler_2dsyntax_2escm",(void*)f_2713},
{"f_2711:compiler_2dsyntax_2escm",(void*)f_2711},
{"f_1945:compiler_2dsyntax_2escm",(void*)f_1945},
{"f_2897:compiler_2dsyntax_2escm",(void*)f_2897},
{"f_1948:compiler_2dsyntax_2escm",(void*)f_1948},
{"f_2895:compiler_2dsyntax_2escm",(void*)f_2895},
{"f_1942:compiler_2dsyntax_2escm",(void*)f_1942},
{"f_2649:compiler_2dsyntax_2escm",(void*)f_2649},
{"f_1451:compiler_2dsyntax_2escm",(void*)f_1451},
{"f_1260:compiler_2dsyntax_2escm",(void*)f_1260},
{"f_1268:compiler_2dsyntax_2escm",(void*)f_1268},
{"f_1264:compiler_2dsyntax_2escm",(void*)f_1264},
{"f_1733:compiler_2dsyntax_2escm",(void*)f_1733},
{"f_3115:compiler_2dsyntax_2escm",(void*)f_3115},
{"f_1460:compiler_2dsyntax_2escm",(void*)f_1460},
{"f_1463:compiler_2dsyntax_2escm",(void*)f_1463},
{"f_1466:compiler_2dsyntax_2escm",(void*)f_1466},
{"f_1469:compiler_2dsyntax_2escm",(void*)f_1469},
{"f_1912:compiler_2dsyntax_2escm",(void*)f_1912},
{"f_1274:compiler_2dsyntax_2escm",(void*)f_1274},
{"f_1915:compiler_2dsyntax_2escm",(void*)f_1915},
{"f_2601:compiler_2dsyntax_2escm",(void*)f_2601},
{"f_1917:compiler_2dsyntax_2escm",(void*)f_1917},
{"f_2571:compiler_2dsyntax_2escm",(void*)f_2571},
{"f_2079:compiler_2dsyntax_2escm",(void*)f_2079},
{"f_1471:compiler_2dsyntax_2escm",(void*)f_1471},
{"f_2750:compiler_2dsyntax_2escm",(void*)f_2750},
{"f_3033:compiler_2dsyntax_2escm",(void*)f_3033},
{"f_2076:compiler_2dsyntax_2escm",(void*)f_2076},
{"f_2757:compiler_2dsyntax_2escm",(void*)f_2757},
{"f_2073:compiler_2dsyntax_2escm",(void*)f_2073},
{"f_2759:compiler_2dsyntax_2escm",(void*)f_2759},
{"f_2070:compiler_2dsyntax_2escm",(void*)f_2070},
{"f_1712:compiler_2dsyntax_2escm",(void*)f_1712},
{"f_2067:compiler_2dsyntax_2escm",(void*)f_2067},
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
S|  sprintf		2
S|  map		14
S|  for-each		1
o|eliminated procedure checks: 220 
o|specializations:
o|  11 (eqv? (not float) *)
o|  1 (= fixnum fixnum)
o|  2 (##sys#check-output-port * * *)
o|  3 (car pair)
o|  1 (cddr (pair * pair))
o|  2 (>= fixnum fixnum)
o|  2 (cdr pair)
o|  1 (memq * list)
o|  15 (##sys#check-list (or pair list) *)
(o e)|safe calls: 330 
(o e)|assignments to immediate values: 2 
o|safe globals: (##compiler#r-c-s ##sys#compiler-syntax-hook ##compiler#compiler-syntax-statistics) 
o|inlining procedure: k1293 
o|inlining procedure: k1293 
o|inlining procedure: k1362 
o|merged explicitly consed rest parameter: args662 
o|inlining procedure: k1396 
o|inlining procedure: k1396 
o|substituted constant variable: a1407 
o|substituted constant variable: a1408 
o|substituted constant variable: a1441 
o|substituted constant variable: a1442 
o|inlining procedure: k1434 
o|inlining procedure: k1434 
o|inlining procedure: k1483 
o|consed rest parameter at call site: "(compiler-syntax.scm:208) fail659" 3 
o|inlining procedure: k1483 
o|inlining procedure: k1502 
o|inlining procedure: k1512 
o|inlining procedure: k1512 
o|substituted constant variable: a1532 
o|inlining procedure: k1502 
o|inlining procedure: k1374 
o|inlining procedure: k1550 
o|consed rest parameter at call site: "(compiler-syntax.scm:223) fail659" 3 
o|inlining procedure: k1550 
o|inlining procedure: k1617 
o|inlining procedure: k1617 
o|inlining procedure: k1654 
o|inlining procedure: k1654 
o|inlining procedure: k1692 
o|inlining procedure: k1692 
o|inlining procedure: k1734 
o|inlining procedure: k1734 
o|inlining procedure: k1766 
o|inlining procedure: k1766 
o|inlining procedure: k1795 
o|inlining procedure: k1811 
o|inlining procedure: k1811 
o|inlining procedure: k1795 
o|consed rest parameter at call site: "(compiler-syntax.scm:262) fail659" 3 
o|substituted constant variable: a1835 
o|substituted constant variable: a1837 
o|substituted constant variable: a1839 
o|substituted constant variable: a1841 
o|substituted constant variable: a1843 
o|substituted constant variable: a1845 
o|substituted constant variable: a1847 
o|substituted constant variable: a1849 
o|substituted constant variable: a1851 
o|substituted constant variable: a1853 
o|substituted constant variable: a1855 
o|inlining procedure: k1374 
o|inlining procedure: k1872 
o|inlining procedure: k1872 
o|inlining procedure: k1362 
o|substituted constant variable: a1909 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|inlining procedure: k2047 
o|inlining procedure: k2047 
o|inlining procedure: k2167 
o|inlining procedure: k2167 
o|inlining procedure: k2237 
o|inlining procedure: k2237 
o|substituted constant variable: a2260 
o|inlining procedure: k2330 
o|inlining procedure: k2330 
o|substituted constant variable: a2374 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2524 
o|inlining procedure: k2653 
o|contracted procedure: "(compiler-syntax.scm:130) g555564" 
o|inlining procedure: k2653 
o|inlining procedure: k2715 
o|contracted procedure: "(compiler-syntax.scm:124) g525534" 
o|inlining procedure: k2715 
o|inlining procedure: k2761 
o|inlining procedure: k2761 
o|inlining procedure: k2795 
o|inlining procedure: k2795 
o|inlining procedure: k2843 
o|inlining procedure: k2843 
o|inlining procedure: k2899 
o|inlining procedure: k2899 
o|inlining procedure: k2967 
o|contracted procedure: "(compiler-syntax.scm:111) g373382" 
o|inlining procedure: k2967 
o|inlining procedure: k2524 
o|inlining procedure: k3061 
o|inlining procedure: k3170 
o|contracted procedure: "(compiler-syntax.scm:89) g315324" 
o|inlining procedure: k3170 
o|inlining procedure: k3216 
o|contracted procedure: "(compiler-syntax.scm:86) g285294" 
o|inlining procedure: k3216 
o|inlining procedure: k3262 
o|inlining procedure: k3262 
o|inlining procedure: k3296 
o|inlining procedure: k3296 
o|inlining procedure: k3344 
o|inlining procedure: k3344 
o|inlining procedure: k3392 
o|inlining procedure: k3392 
o|inlining procedure: k3444 
o|contracted procedure: "(compiler-syntax.scm:76) g133142" 
o|inlining procedure: k3444 
o|inlining procedure: k3061 
o|simplifications: ((if . 1)) 
o|replaced variables: 353 
o|removed binding forms: 126 
o|substituted constant variable: r14353504 
o|substituted constant variable: r14353504 
o|converted assignments to bindings: (fail659) 
o|substituted constant variable: r13753539 
o|substituted constant variable: r18733541 
o|substituted constant variable: r13633542 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 383 
o|replaced variables: 12 
o|removed binding forms: 7 
o|removed binding forms: 11 
o|simplifications: ((if . 11) (##core#call . 340)) 
o|  call simplifications:
o|    cddr	2
o|    >	2
o|    ##sys#check-list	4
o|    list	4
o|    ##sys#setslot	14
o|    fx>
o|    fx=	2
o|    cadr	5
o|    caddr	2
o|    cadddr	2
o|    fx>=	2
o|    memq	6
o|    list?
o|    caar
o|    string?	3
o|    string-length
o|    >=
o|    char-upcase
o|    char-whitespace?	2
o|    sub1
o|    ##sys#cons	44
o|    length	6
o|    eq?	13
o|    ##sys#list	101
o|    cdr	3
o|    string-ref
o|    fx+
o|    ##sys#apply
o|    null?	3
o|    car	6
o|    cons	31
o|    pair?	20
o|    ##sys#slot	52
o|    add1
o|contracted procedure: k1270 
o|contracted procedure: k1329 
o|contracted procedure: k1276 
o|contracted procedure: k1279 
o|contracted procedure: k1296 
o|contracted procedure: k1306 
o|contracted procedure: k1310 
o|contracted procedure: k1326 
o|contracted procedure: k1906 
o|contracted procedure: k1365 
o|contracted procedure: k1371 
o|contracted procedure: k1902 
o|contracted procedure: k1377 
o|contracted procedure: k1455 
o|contracted procedure: k1473 
o|contracted procedure: k1477 
o|contracted procedure: k1486 
o|contracted procedure: k1492 
o|contracted procedure: k1496 
o|contracted procedure: k1505 
o|contracted procedure: k1534 
o|contracted procedure: k1515 
o|contracted procedure: k1522 
o|inlining procedure: k1512 
o|inlining procedure: k1512 
o|contracted procedure: k1541 
o|contracted procedure: k1553 
o|contracted procedure: k1590 
o|contracted procedure: k1570 
o|contracted procedure: k1586 
o|contracted procedure: k1578 
o|contracted procedure: k1574 
o|contracted procedure: k1566 
o|contracted procedure: k1593 
o|contracted procedure: k1605 
o|contracted procedure: k1614 
o|contracted procedure: k1623 
o|contracted procedure: k1630 
o|contracted procedure: k1640 
o|contracted procedure: k1647 
o|contracted procedure: k1657 
o|contracted procedure: k1664 
o|contracted procedure: k1674 
o|contracted procedure: k1685 
o|contracted procedure: k1681 
o|contracted procedure: k1695 
o|contracted procedure: k1706 
o|contracted procedure: k1702 
o|contracted procedure: k1716 
o|contracted procedure: k1727 
o|contracted procedure: k1723 
o|contracted procedure: k1737 
o|contracted procedure: k1744 
o|contracted procedure: k1750 
o|contracted procedure: k1763 
o|contracted procedure: k1769 
o|contracted procedure: k1776 
o|contracted procedure: k1782 
o|contracted procedure: k1785 
o|contracted procedure: k1792 
o|contracted procedure: k1798 
o|contracted procedure: k1814 
o|contracted procedure: k1825 
o|contracted procedure: k1860 
o|contracted procedure: k1863 
o|contracted procedure: k1875 
o|contracted procedure: k1896 
o|contracted procedure: k2029 
o|contracted procedure: k2022 
o|contracted procedure: k1922 
o|contracted procedure: k1925 
o|contracted procedure: k1928 
o|contracted procedure: k1931 
o|contracted procedure: k2015 
o|contracted procedure: k2019 
o|contracted procedure: k1959 
o|contracted procedure: k2011 
o|contracted procedure: k2007 
o|contracted procedure: k1963 
o|contracted procedure: k1999 
o|contracted procedure: k2003 
o|contracted procedure: k1971 
o|contracted procedure: k1979 
o|contracted procedure: k1987 
o|contracted procedure: k1995 
o|contracted procedure: k1991 
o|contracted procedure: k1983 
o|contracted procedure: k1975 
o|contracted procedure: k1967 
o|contracted procedure: k2037 
o|contracted procedure: k2033 
o|contracted procedure: k2146 
o|contracted procedure: k2139 
o|contracted procedure: k2050 
o|contracted procedure: k2053 
o|contracted procedure: k2056 
o|contracted procedure: k2059 
o|contracted procedure: k2136 
o|contracted procedure: k2084 
o|contracted procedure: k2132 
o|contracted procedure: k2128 
o|contracted procedure: k2088 
o|contracted procedure: k2124 
o|contracted procedure: k2096 
o|contracted procedure: k2104 
o|contracted procedure: k2112 
o|contracted procedure: k2120 
o|contracted procedure: k2116 
o|contracted procedure: k2108 
o|contracted procedure: k2100 
o|contracted procedure: k2092 
o|contracted procedure: k2154 
o|contracted procedure: k2150 
o|contracted procedure: k2171 
o|contracted procedure: k2179 
o|contracted procedure: k2183 
o|contracted procedure: k2187 
o|contracted procedure: k2191 
o|contracted procedure: k2195 
o|contracted procedure: k2199 
o|contracted procedure: k2203 
o|contracted procedure: k2175 
o|contracted procedure: k2257 
o|contracted procedure: k2240 
o|contracted procedure: k2250 
o|contracted procedure: k2266 
o|contracted procedure: k2270 
o|contracted procedure: k2274 
o|contracted procedure: k2278 
o|contracted procedure: k2282 
o|contracted procedure: k2286 
o|contracted procedure: k2290 
o|contracted procedure: k2262 
o|contracted procedure: k2357 
o|contracted procedure: k2353 
o|contracted procedure: k2341 
o|contracted procedure: k2345 
o|contracted procedure: k2371 
o|contracted procedure: k2365 
o|contracted procedure: k2380 
o|contracted procedure: k2384 
o|contracted procedure: k2388 
o|contracted procedure: k2392 
o|contracted procedure: k2396 
o|contracted procedure: k2400 
o|contracted procedure: k2404 
o|contracted procedure: k2376 
o|contracted procedure: k2473 
o|contracted procedure: k2466 
o|contracted procedure: k2441 
o|contracted procedure: k2455 
o|contracted procedure: k2463 
o|contracted procedure: k2521 
o|contracted procedure: k2530 
o|contracted procedure: k2538 
o|contracted procedure: k2957 
o|contracted procedure: k2961 
o|contracted procedure: k2953 
o|contracted procedure: k2949 
o|contracted procedure: k2548 
o|contracted procedure: k2875 
o|contracted procedure: k2945 
o|contracted procedure: k2883 
o|contracted procedure: k2887 
o|contracted procedure: k2890 
o|contracted procedure: k2879 
o|contracted procedure: k2560 
o|contracted procedure: k2556 
o|contracted procedure: k2552 
o|contracted procedure: k2568 
o|contracted procedure: k2581 
o|contracted procedure: k2577 
o|contracted procedure: k2596 
o|contracted procedure: k2747 
o|contracted procedure: k2607 
o|contracted procedure: k2701 
o|contracted procedure: k2693 
o|contracted procedure: k2697 
o|contracted procedure: k2689 
o|contracted procedure: k2685 
o|contracted procedure: k2619 
o|contracted procedure: k2623 
o|contracted procedure: k2627 
o|contracted procedure: k2639 
o|contracted procedure: k2635 
o|contracted procedure: k2631 
o|contracted procedure: k2611 
o|contracted procedure: k2615 
o|contracted procedure: k2603 
o|contracted procedure: k2592 
o|contracted procedure: k2588 
o|contracted procedure: k2656 
o|contracted procedure: k2678 
o|contracted procedure: k2674 
o|contracted procedure: k2659 
o|contracted procedure: k2662 
o|contracted procedure: k2670 
o|contracted procedure: k2718 
o|contracted procedure: k2740 
o|contracted procedure: k2736 
o|contracted procedure: k2721 
o|contracted procedure: k2724 
o|contracted procedure: k2732 
o|contracted procedure: k2764 
o|contracted procedure: k2767 
o|contracted procedure: k2770 
o|contracted procedure: k2778 
o|contracted procedure: k2786 
o|contracted procedure: k2834 
o|contracted procedure: k2798 
o|contracted procedure: k2824 
o|contracted procedure: k2828 
o|contracted procedure: k2820 
o|contracted procedure: k2801 
o|contracted procedure: k2804 
o|contracted procedure: k2812 
o|contracted procedure: k2816 
o|contracted procedure: k2846 
o|contracted procedure: k2849 
o|contracted procedure: k2852 
o|contracted procedure: k2860 
o|contracted procedure: k2868 
o|contracted procedure: k2938 
o|contracted procedure: k2902 
o|contracted procedure: k2928 
o|contracted procedure: k2932 
o|contracted procedure: k2924 
o|contracted procedure: k2905 
o|contracted procedure: k2908 
o|contracted procedure: k2916 
o|contracted procedure: k2920 
o|contracted procedure: k2970 
o|contracted procedure: k2973 
o|contracted procedure: k2976 
o|contracted procedure: k2984 
o|contracted procedure: k2992 
o|contracted procedure: k2998 
o|contracted procedure: k3013 
o|contracted procedure: k3017 
o|contracted procedure: k3009 
o|contracted procedure: k3058 
o|contracted procedure: k3067 
o|contracted procedure: k3075 
o|contracted procedure: k3438 
o|contracted procedure: k3376 
o|contracted procedure: k3380 
o|contracted procedure: k3383 
o|contracted procedure: k3089 
o|contracted procedure: k3085 
o|contracted procedure: k3097 
o|contracted procedure: k3110 
o|contracted procedure: k3106 
o|contracted procedure: k3125 
o|contracted procedure: k3248 
o|contracted procedure: k3136 
o|contracted procedure: k3202 
o|contracted procedure: k3144 
o|contracted procedure: k3156 
o|contracted procedure: k3152 
o|contracted procedure: k3148 
o|contracted procedure: k3140 
o|contracted procedure: k3132 
o|contracted procedure: k3121 
o|contracted procedure: k3117 
o|contracted procedure: k3173 
o|contracted procedure: k3195 
o|contracted procedure: k3191 
o|contracted procedure: k3176 
o|contracted procedure: k3179 
o|contracted procedure: k3187 
o|contracted procedure: k3219 
o|contracted procedure: k3241 
o|contracted procedure: k3237 
o|contracted procedure: k3222 
o|contracted procedure: k3225 
o|contracted procedure: k3233 
o|contracted procedure: k3265 
o|contracted procedure: k3268 
o|contracted procedure: k3271 
o|contracted procedure: k3279 
o|contracted procedure: k3287 
o|contracted procedure: k3335 
o|contracted procedure: k3299 
o|contracted procedure: k3325 
o|contracted procedure: k3329 
o|contracted procedure: k3321 
o|contracted procedure: k3302 
o|contracted procedure: k3305 
o|contracted procedure: k3313 
o|contracted procedure: k3317 
o|contracted procedure: k3347 
o|contracted procedure: k3350 
o|contracted procedure: k3353 
o|contracted procedure: k3361 
o|contracted procedure: k3369 
o|contracted procedure: k3431 
o|contracted procedure: k3395 
o|contracted procedure: k3421 
o|contracted procedure: k3425 
o|contracted procedure: k3417 
o|contracted procedure: k3398 
o|contracted procedure: k3401 
o|contracted procedure: k3409 
o|contracted procedure: k3413 
o|contracted procedure: k3447 
o|contracted procedure: k3450 
o|contracted procedure: k3453 
o|contracted procedure: k3461 
o|contracted procedure: k3469 
o|contracted procedure: k3475 
o|contracted procedure: k3490 
o|contracted procedure: k3486 
o|simplifications: ((let . 32)) 
o|removed binding forms: 310 
o|replaced variables: 86 
o|removed binding forms: 1 
o|removed binding forms: 52 
o|direct leaf routine/allocation: fetch702 0 
o|direct leaf routine/allocation: push705 3 
o|direct leaf routine/allocation: g434443 21 
o|direct leaf routine/allocation: g495504 6 
o|direct leaf routine/allocation: g194203 21 
o|direct leaf routine/allocation: g255264 6 
o|contracted procedure: "(compiler-syntax.scm:229) k1599" 
o|contracted procedure: "(compiler-syntax.scm:231) k1608" 
o|inlining procedure: "(compiler-syntax.scm:234) k1617" 
o|inlining procedure: "(compiler-syntax.scm:235) k1617" 
o|inlining procedure: "(compiler-syntax.scm:236) k1617" 
o|inlining procedure: "(compiler-syntax.scm:238) k1617" 
o|inlining procedure: "(compiler-syntax.scm:242) k1617" 
o|inlining procedure: "(compiler-syntax.scm:246) k1617" 
o|inlining procedure: "(compiler-syntax.scm:249) k1617" 
o|inlining procedure: "(compiler-syntax.scm:253) k1617" 
o|inlining procedure: "(compiler-syntax.scm:254) k1617" 
o|inlining procedure: "(compiler-syntax.scm:255) k1617" 
o|contracted procedure: "(compiler-syntax.scm:258) k1805" 
o|contracted procedure: "(compiler-syntax.scm:260) k1821" 
o|contracted procedure: "(compiler-syntax.scm:120) k2782" 
o|contracted procedure: "(compiler-syntax.scm:116) k2864" 
o|contracted procedure: "(compiler-syntax.scm:83) k3283" 
o|contracted procedure: "(compiler-syntax.scm:79) k3365" 
o|removed binding forms: 8 
o|customizable procedures: (k3064 map-loop127145 map-loop157176 map-loop188209 map-loop218237 map-loop249270 map-loop279300 map-loop309330 k2527 map-loop367385 map-loop397416 map-loop428449 map-loop458477 map-loop489510 map-loop519540 map-loop549570 k1380 skip772 next703 loop718 endchunk704 fail659 g4350 for-each-loop4253) 
o|calls to known targets: 69 
o|identified direct recursive calls: f_1809 1 
o|identified direct recursive calls: f_1548 1 
o|identified direct recursive calls: f_2651 1 
o|identified direct recursive calls: f_2713 1 
o|identified direct recursive calls: f_2759 1 
o|identified direct recursive calls: f_2793 1 
o|identified direct recursive calls: f_2841 1 
o|identified direct recursive calls: f_2897 1 
o|identified direct recursive calls: f_3168 1 
o|identified direct recursive calls: f_3214 1 
o|identified direct recursive calls: f_3260 1 
o|identified direct recursive calls: f_3294 1 
o|identified direct recursive calls: f_3342 1 
o|identified direct recursive calls: f_3390 1 
o|fast box initializations: 21 
*/
/* end of file */


f = 0;

#define REPEAT_0(WHAT)
#define REPEAT_1(WHAT) WHAT REPEAT_0(WHAT)
#define REPEAT_2(WHAT) WHAT REPEAT_1(WHAT)
#define REPEAT_3(WHAT) WHAT REPEAT_2(WHAT)

#define NOP_N(N) REPEAT_##N(asm("nop");)


opam install batteries
opam install ounit # only needed for tests

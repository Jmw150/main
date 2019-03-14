#include "lambda.c"

int main ()
{
    #define f LAMBDA(x, LAMBDA(y, CALL(y, x), x))
    int hi = 3;
//	printf("zero: %ld\n", to_long(LAMBDA(p, lambda(x, x))));
    printf("%ld\n", CALL(f , hi));

    return 0;

}

// wrapper for factorial function

#include <stdio.h>
#include "mainlib.h"

int main (int argc, char** argv)
{
    if (argc != 2)
    {
        printf("factorial [n]\n");
        return 1;
    }

    mpz_t n;
    mpz_init (n); 
    mpz_set_str(n, argv[1], 10);

    mpz_t ret;
    mpz_init (ret); 

    factorial(ret, n);

    mpz_out_str(NULL,10,ret);
    printf("\n");

    return 0;
}

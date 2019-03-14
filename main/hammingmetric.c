#include "mainlib.h"
#include <stdio.h>

int main (int argc, char** argv)
{
    if (argc != 2)
    {
        printf("error: invalid number of argv\n");
        return 1;
    }
    
    int a = int(stringToFloat(argv[1]));
    int b = int(stringToFloat(argv[2]));

    printf("%d\n",a ^ b);

    return 0;
}

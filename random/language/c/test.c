#include <stdlib.h>
#include <stdio.h>

char* test = (char*) malloc(0);

int main ()
{
    printf("%s",test);

    return 0;
}

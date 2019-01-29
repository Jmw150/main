#include <stdlib.h>
#include <stdio.h>
int main() 
{
    char *s = getenv("HOME");
    if (s) puts(s);
    return 0;
}

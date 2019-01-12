#include <stdio.h>

int fun (int a)
{
    return 1;
}
float fun (float a)
{
    return 2;
}

int main ()
{

    printf("%d\n", fun(1));
    printf("%d\n", fun(1.0));

    return 0;
}

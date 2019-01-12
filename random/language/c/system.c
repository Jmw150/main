// ability to do system calls

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[])
{

    if (argc == 2)
        system(argv[1]);

    return 0;
}

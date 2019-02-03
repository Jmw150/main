#include <stdio.h>

int main ()
{
    printf("test\n");

    asm( 
    "mov $60, %rax;"
    "syscall;"
    );

    //__asm__(" "); //also works for pure assembler
    printf("end?\n");
    return 0;
}

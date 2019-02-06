#include <unistd.h>	//for isatty()
#include <stdio.h>	//for fileno()
 
int main(void)
{
	puts(isatty(fileno(stdin))
		? "stdin is tty"
		: "stdin is not tty");
	return 0;
}

/*
$ ./a.out
stdin is tty
$ ./a.out < /dev/zero
stdin is not tty
$ echo "" | ./a.out
stdin is not tty

*/

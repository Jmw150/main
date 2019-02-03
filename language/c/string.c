// example of run time allocation of memory in c

#include <stdio.h>
#include <stdlib.h> /*needed for memory allocation */

int main ()
{
    char* string;
    string  = (char*) malloc(15*sizeof(char));
	for (int i = 0 ; i < 10 ; i++)
	{
	    string[i] = i + 'a';
    }
    printf(string);

	return 0;
}

/*
    T* a = (T*)malloc(sizeof(T)) becomes new T.
    T* b = (T*)malloc(N * sizeof(T)) becomes new T[N].
    free(a) becomes delete a.
    free(b) becomes delete[] b.
*/

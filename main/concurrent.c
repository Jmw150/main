#include <stdio.h>
#include <omp.h>
// gcc -std=c99 -fopenmp
 
int main()
{
	const char *str[] = { "Enjoy", "Rosetta", "Code" };
	#pragma omp parallel for num_threads(3)
	for (int i = 0; i < 3; i++)
		printf("%s\n", str[i]);
	return 0;
}

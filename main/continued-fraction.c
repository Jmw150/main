#include<stdio.h>
 
typedef struct{
	int num,den;
	}fraction;
 
fraction examples[] = {{1,2}, {3,1}, {23,8}, {13,11}, {22,7}, {-151,77}}; 
fraction sqrt2[] = {{14142,10000}, {141421,100000}, {1414214,1000000}, {14142136,10000000}};
fraction pi[] = {{31,10}, {314,100}, {3142,1000}, {31428,10000}, {314285,100000}, {3142857,1000000}, {31428571,10000000}, {314285714,100000000}};
 
int r2cf(int *numerator,int *denominator)
{
	int quotient=0,temp;
 
	if(denominator != 0)
	{
		quotient = *numerator / *denominator;
 
		temp = *numerator;
 
		*numerator = *denominator;
 
		*denominator = temp % *denominator;
	}
 
	return quotient;
}
 
int main()
{
	int i;
 
	printf("Running the examples :");
 
	for(i=0;i<sizeof(examples)/sizeof(fraction);i++)
	{
		printf("\nFor N = %d, D = %d :",examples[i].num,examples[i].den);
 
		while(examples[i].den != 0){
			printf(" %d ",r2cf(&examples[i].num,&examples[i].den));
			}
	}
 
	printf("\n\nRunning for %c2 :",251); /* 251 is the ASCII code for the square root symbol */
 
	for(i=0;i<sizeof(sqrt2)/sizeof(fraction);i++)
	{
		printf("\nFor N = %d, D = %d :",sqrt2[i].num,sqrt2[i].den);
 
		while(sqrt2[i].den != 0){
			printf(" %d ",r2cf(&sqrt2[i].num,&sqrt2[i].den));
			}
	}
 
	printf("\n\nRunning for %c :",227); /* 227 is the ASCII code for Pi's symbol */
 
	for(i=0;i<sizeof(pi)/sizeof(fraction);i++)
	{
		printf("\nFor N = %d, D = %d :",pi[i].num,pi[i].den);
 
		while(pi[i].den != 0){
			printf(" %d ",r2cf(&pi[i].num,&pi[i].den));
			}
	}
 
 
 
	return 0;
}

/*
Running the examples :
For N = 1, D = 2 : 0  2
For N = 3, D = 1 : 3
For N = 23, D = 8 : 2  1  7
For N = 13, D = 11 : 1  5  2
For N = 22, D = 7 : 3  7
For N = -151, D = 77 : -1  -1  -24  -1  -2

Running for √2 :
For N = 14142, D = 10000 : 1  2  2  2  2  2  1  1  29
For N = 141421, D = 100000 : 1  2  2  2  2  2  2  3  1  1  3  1  7  2
For N = 1414214, D = 1000000 : 1  2  2  2  2  2  2  2  3  6  1  2  1  12
For N = 14142136, D = 10000000 : 1  2  2  2  2  2  2  2  2  2  6  1  2  4  1  1  2

Running for π :
For N = 31, D = 10 : 3  10
For N = 314, D = 100 : 3  7  7
For N = 3142, D = 1000 : 3  7  23  1  2
For N = 31428, D = 10000 : 3  7  357
For N = 314285, D = 100000 : 3  7  2857
For N = 3142857, D = 1000000 : 3  7  142857
For N = 31428571, D = 10000000 : 3  7  476190  3
For N = 314285714, D = 100000000 : 3  7  7142857

*/

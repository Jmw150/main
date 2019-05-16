#include <stdio.h>
#include <math.h>
#include "mainlib.h"
#include <stdlib.h>

static double gammaDist (double y, double a, double B);
static double midSum(double start, double end, int intervals, double a, double B);
static double gammaCD (double end, double a, double B, int intervals);

int main (int argc, char** argv)
{

    if (argc != 4)
    {
        printf("gammaCD [x] [alpha] [Beta]\n");
        return 1;
    }
    //double a = erf(3);

    //double g = tgamma(12); // tgamma instead of gamma...

    //printf("erf:   %f\n", a);
    //printf("gamma: %f\n", g);
    
    double end = stringToFloat(argv[1]);
    double a = stringToFloat(argv[2]);
    double B = stringToFloat(argv[3]);

    int intervals = 300000; 
    // 500 accurate to 6 digits, 1000:7, 5000:8, 20k:9, 30k:12
    // and still a bit faster than cognition, lol

    double ans = gammaCD(end, a, B, intervals);

    printf("%.10f\n", ans); // 10 accurate digits
    return 0;
}

double gammaDist (double y, double a, double B)
{
    double top = pow(y, a-1) * exp(-y/B);
    double base = pow(B,a)*tgamma(a);

    return top/base;
}

//calculates a riemann sum using the middle of rectangles for height
// less general
double midSum(double start, double end, int intervals, double a, double B)
{
	double deltaX = (end - start)/intervals;

	double rightPush = deltaX/2;

	double Sum = 0;
	for (int i = 0 ; i < intervals ; start += deltaX, i++)
	{
		Sum += gammaDist(start+rightPush,a,B)*deltaX; // function is 
	}   // in a higher scope

	return Sum;
}
    
double gammaCD (double end, double a, double B, int intervals)
{
    return midSum(0, end, intervals, a, B);
}

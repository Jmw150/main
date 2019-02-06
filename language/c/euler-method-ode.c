/*
Euler's method numerically approximates solutions of first-order ordinary differential equations (ODEs) with a given initial value.   It is an explicit method for solving initial value problems (IVPs), as described in the wikipedia page.

*/

#include <stdio.h>
#include <math.h>
 
typedef double (*deriv_f)(double, double);
#define FMT " %7.3f"
 
void ivp_euler(deriv_f f, double y, int step, int end_t)
{
	int t = 0;
 
	printf(" Step %2d: ", (int)step);
	do {
		if (t % 10 == 0) printf(FMT, y);
		y += step * f(t, y);
	} while ((t += step) <= end_t);
	printf("\n");
}
 
void analytic()
{
	double t;
	printf("    Time: ");
	for (t = 0; t <= 100; t += 10) printf(" %7g", t);
	printf("\nAnalytic: ");
 
	for (t = 0; t <= 100; t += 10)
		printf(FMT, 20 + 80 * exp(-0.07 * t));
	printf("\n");
}
 
double cooling(double t, double temp)
{
	return -0.07 * (temp - 20);
}
 
int main()
{
	analytic();
	ivp_euler(cooling, 100, 2, 100);
	ivp_euler(cooling, 100, 5, 100);
	ivp_euler(cooling, 100, 10, 100);
 
	return 0;
}

/*
    Time:        0      10      20      30      40      50      60      70      80      90     100
Analytic:  100.000  59.727  39.728  29.797  24.865  22.416  21.200  20.596  20.296  20.147  20.073
 Step  2:  100.000  57.634  37.704  28.328  23.918  21.843  20.867  20.408  20.192  20.090  20.042
 Step  5:  100.000  53.800  34.280  26.034  22.549  21.077  20.455  20.192  20.081  20.034  20.014
 Step 10:  100.000  44.000  27.200  22.160  20.648  20.194  20.058  20.017  20.005  20.002  20.000


*/

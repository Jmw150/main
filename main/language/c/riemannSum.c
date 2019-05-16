#include <stdio.h>
#include <math.h>

/**//////////////////////////////////////////////////////////////
/**/// function and global variables to mess with
/**/   double lowerbound = -1;
/**/   double upperbound = 1;
/**/   int    intervals  = 20;
/**/   double function (double x)
/**/   {
/**/       return x*sin(x*x)*log(x*x+1)/(exp(fabs(x))*cos(x));
/**/   }
/**//////////////////////////////////////////////////////////////


double leftSideSum(double start, double end, int intervals);
double rightSideSum(double start, double end, int intervals);
double midSum(double start, double end, int intervals);

int main ()
{
	printf("reimann Sum\n");
	printf("-----------\n");
	printf("%f\n",leftSideSum(lowerbound,upperbound,intervals));
	printf("%f\n",rightSideSum(lowerbound,upperbound,intervals));
	printf("%f\n",midSum(lowerbound,upperbound,intervals));

	return 0;
}

//calculates a riemann sum using the left side of rectangles for height
double leftSideSum(double start, double end, int intervals)
{
	double deltaX = (end - start)/intervals;

	double rightPush = 0;

	double Sum = 0;
	for (int i = 0 ; i < intervals ; start += deltaX, i++)
	{
		Sum += function(start+rightPush)*deltaX;
	}

	return Sum;
}

//calculates a riemann sum using the right side of rectangles for height
double rightSideSum(double start, double end, int intervals)
{
	double deltaX = (end - start)/intervals;

	double rightPush = deltaX;

	double Sum = 0;
	for (int i = 0 ; i < intervals ; start += deltaX, i++)
	{
		Sum += function(start+rightPush)*deltaX;
	}

	return Sum;
}

//calculates a riemann sum using the middle of rectangles for height
double midSum(double start, double end, int intervals)
{
	double deltaX = (end - start)/intervals;

	double rightPush = deltaX/2;

	double Sum = 0;
	for (int i = 0 ; i < intervals ; start += deltaX, i++)
	{
		Sum += function(start+rightPush)*deltaX;
	}

	return Sum;
}

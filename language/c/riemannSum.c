#include <iostream>
#include <math.h>
using namespace std;

/**///////////////////////////////////////////////////////////////
/**/// function and global variables to mess with
/**/   double lowerbound = 0;
/**/   double upperbound = 4;
/**/   int    intervals  = 4;
/**/   double function (double x)
/**/   {
/**/       return x*x;
/**/   }
/**///////////////////////////////////////////////////////////////


double leftSideSum(double start, double end, int intervals);
double rightSideSum(double start, double end, int intervals);
double midSum(double start, double end, int intervals);

int main ()
{
	cout << "reimann Sum\n";
	cout << "-----------\n";
	cout << leftSideSum(lowerbound,upperbound,intervals) << endl;
	cout << rightSideSum(lowerbound,upperbound,intervals) << endl;
	cout << midSum(lowerbound,upperbound,intervals) << endl;

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

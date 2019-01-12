#include <stdio.h>

static double f (double x)
{
  return (x-0.5)*(x-0.5);
}

double bisection (double start, double stop, int iterations)
{
  double mid = (start+stop)/2;
  if (iterations == 0) return mid;
  
  if (f(start) > 0) 
      if (f(mid) > 0)
    	return bisection(mid, stop, iterations-1);
      else if (f(mid) < 0)
    	return bisection(start, mid, iterations-1);
      else if (f(mid) == 0)
    	return mid;
  if (f(start) < 0) 
      if (f(mid) < 0)
    	return bisection(mid, stop, iterations-1);
      else if (f(mid) > 0)
    	return bisection(start, mid, iterations-1);
      else if (f(mid) == 0)
    	return mid;
}
	

int main ()
{
  printf("root is close to %f\n", bisection(-1,1,20));

  return 0;
}

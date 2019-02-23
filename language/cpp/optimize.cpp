#include <iostream>
#include <math.h>
using namespace std;


/**///////////////////////////////////////////////////////////////
/**/// function and global variables to mess with
/**/   double startG = 1;
/**/   double endG   = 2;
/**/   double preG   = 0.00001;
/**/   double function (double x)
/**/   {
/**/       return 5*cos(2*x)/(2*x*sin(2*x)+1);
/**/   }
/**///////////////////////////////////////////////////////////////

double maxf (double start, double end, double precision)
{
    double maxNum = function(start);
    for ( ; start < end ; start += precision)
        if (function(start) > maxNum)
            maxNum = function(start);

    return maxNum;
}

double minf (double start, double end, double precision)
{
    double minNum = function(start);
    for ( ; start < end ; start += precision)
        if (function(start) < minNum)
            minNum = function(start);

    return minNum;
}

double maxOnX (double start, double end, double precision)
{
    double maxNum = start;
    for ( ; start < end ; start += precision)
        if (function(start) > maxNum)
            maxNum = start;

    return maxNum;
}

double minOnX (double start, double end, double precision)
{
    double minNum = start;
    for ( ; start < end ; start += precision)
        if (function(start) < minNum)
            minNum = start;

    return minNum;
}

int main ()
{


    cout << "min and max values\n";
    cout << "------------------\n";
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    cout << endl;

    startG = .5; endG = 1; preG = 0.000001;
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    return 0;
}




    

/*
    a function that takes a 2d vector and rotates it

    Created by: Jordan Winkler
*/

//something is wrong with the math

#define debug

#include <iostream>
#include <math.h>
#include "mylib.cpp"
using namespace std;

int ChooseTransform(int UserInput);

struct twoVector
{
    double a;
    double b;
};

twoVector transform(twoVector a, double pi);

int main (int argc, char* argv[])
{
    if (argc != 4)
	{
	   cout << "2dTransform [a] [b] [pi]\n";
	   return 0;
	}

    double a = stringToFloat(argv[1]);
	double b = stringToFloat(argv[2]);
	double pi = stringToFloat(argv[2]);
#ifdef debug
    cout << a << b << pi << endl;
#endif
    twoVector num;
    num.a = a;
    num.b = b;
    twoVector toOut = transform(num, pi);

    cout << toOut.a << ' ' << toOut.b << endl;

    return 0;
}

twoVector transform(twoVector a, double pi)
{
    double TranformMatrix[2][2] = {{cos(pi),-sin(pi)}
				  ,{sin(pi),cos(pi)}};

    double InputVector[2];
    double OutputVector[2];

    InputVector[0] = a.a;
    InputVector[1] = a.b;

    OutputVector[0] = TranformMatrix[0][0]*InputVector[0]  //problem maybe here?
	 	+ TranformMatrix[1][0]*InputVector[1];
    OutputVector[1] = TranformMatrix[0][1]*InputVector[0] 
		+ TranformMatrix[1][1]*InputVector[1];

    a.a = OutputVector[0];
    a.b = OutputVector[1];

    return a;
}


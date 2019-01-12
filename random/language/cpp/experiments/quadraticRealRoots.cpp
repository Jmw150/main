//gives an approximation of roots for ax^2+bx+c=0
// newton's method, but no parser, so kind of useless

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    cout << "enter the coefficeints -> ";
    double a, b, c;
    cin >> a >> b >> c;
    if (cin.fail())
    {
        cout << "error: bad num\n";
        return 0;
    }
    
    double x1 = -b + pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);
    double x2 = -b - pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);

    cout << "roots: " << x1 << x2 << endl;

    return 0;
}


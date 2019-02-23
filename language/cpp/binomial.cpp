//uses binomial theorem
#include "mylib.hpp"

int polycoefficient(int ythDigit, int xc, int yc, int n);

int main ()
{
    cout << "y'th digit, coefficient x, coefficient y, n -> ";

    int yDigit, xc, yc, n;
    cin >> yDigit >> xc >> yc >> n;
    if (cin.fail())
    {
        cout << "\nerror: bad input\n";
        return 1;
    }

    cout << polycoefficient(yDigit, xc, yc, n) << endl;

    return 0;
}

int polycoefficient(int ythDigit, int xc, int yc, int n)
{
    int coefficient = 1;
    coefficient *= int(pow(xc, n-ythDigit));
    coefficient *= int(pow(yc, ythDigit));
    coefficient *= choose(n, ythDigit);

    return coefficient;
}

    

// prints the coefficient of a given polynomial

#include "mainlib.cpp"

// uses binomial theorem
int polycoefficient(int ythDigit, int xc, int yc, int n);

int main (int argc, char** argv)
{
    if (argc != 5)
    {
        cout << "polyCoeffiecient [term] [coefficient x]"
                " [coefficient y] [degree]\n";
        return 1;
    }

    int yDigit = stringToInt(argv[1]);
    int xc = stringToInt(argv[2]);
    int yc = stringToInt(argv[3]);
    int n = stringToInt(argv[4]);

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

    

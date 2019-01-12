// testing complex numbers I made

#include "complexNum.h"
#include <iostream>
using namespace std;

int main ()
{
    com a;
    com b;
    cout << "enter a, b\n";
    cin >> a.Real >> a.Imaginary;
    cin >> b.Real >> b.Imaginary;

    com c;

    c = a + b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a - b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a * b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a / b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    return 0;
}

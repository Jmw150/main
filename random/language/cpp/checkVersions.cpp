#include <iostream>
using namespace std; 

#include <gmp.h>

int main ()
{
    cout << "c++ version: ";
    cout << __cplusplus << endl;

    cout << "gmp version: ";
    cout << __GNU_MP_VERSION << endl;

    return 0;
}

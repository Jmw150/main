// gives bite size and largest number of data types

#include <iostream>
#include <math.h>
#include <limits>
using namespace std;

int main ()
{

    cout << "Sizes of various data types\n"
         << "int: " << sizeof(int) << endl
         << numeric_limits<int>::max() << endl
         << "float: " << sizeof(float) << endl
         << numeric_limits<float>::max() << endl
         << "double: " << sizeof(double) << endl
         << numeric_limits<double>::max() << endl
         << "short int: " << sizeof(short int) << endl
         << numeric_limits<short int>::max() << endl
         << "char: " << sizeof(char) << endl
         << numeric_limits<char>::max() << endl
         << "long int: " << sizeof(long int) << endl
         << numeric_limits<long int>::max() << endl
         << "long long: " << sizeof(long long) << endl
         << numeric_limits<long long>::max() << endl
         << "unsigned long int: " << sizeof(long int) << endl
         << numeric_limits<unsigned long int>::max() << endl;
       
         
    cout << "Size in possible positions\n"
         << "int: " << pow( 2 , sizeof(int) * 8) << endl

         << "float: " << sizeof(float) << endl
         << "double: " << sizeof(double) << endl
         << "short int: " << sizeof(short int) << endl
         << "char: " << sizeof(char) << endl;

    cout << "Size in array\n"
         << "long int: " << int(log10(pow(2, sizeof(long int) * 8))) + 1;


    return 0;
}

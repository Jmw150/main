#include <stdlib.h>
#include <iostream>
using namespace std;

/*================================================================
|| 
|| Object: com 
|| 
|| Purpose: a data type to approximate complex numbers
||      
|| Atributes: 
||      Real
||      Imaginary
|| Functions:
||      + - * operators (not members)
||
\*==============================================================*/
class com
{
public:
    com(double RealValue, double ImaginaryValue);
    com(const double &RealValue);
    com();
    
    double Real;
    double Imaginary;

};

const com operator +(const com &a, const com &b);
const com operator -(const com &a, const com &b);
const com operator *(const com &a, const com &b);
const com operator /(const com &a, const com &b);

com::com(double RealValue, double ImaginaryValue)
{
    Real = RealValue;
    Imaginary = ImaginaryValue;
}

com::com(const double & RealValue)
{
    Real = RealValue;
    Imaginary = 0;
}

com::com()
{
    Real = 0;
    Imaginary = 0;
}

const com operator +(const com &a, const com &b)
{
    double finalReal = a.Real + b.Real;
    double finalImaginary = a.Imaginary + b.Imaginary;

    return com(finalReal, finalImaginary);
}

const com operator -(const com &a, const com &b)
{
    double finalReal = a.Real - b.Real;
    double finalImaginary = a.Imaginary - b.Imaginary;

    return com(finalReal, finalImaginary);
}

const com operator *(const com &a, const com &b)
{
    double finalReal = 
            a.Real * b.Real - a.Imaginary * b.Imaginary;
    double finalImaginary = a.Real * b.Imaginary 
            + a.Imaginary * b.Real;

    return com(finalReal, finalImaginary); 
}

const com operator /(const com &a, const com &b)
{
    // if b is 0
    if (b.Real == 0 && b.Imaginary)
    {
        cout << "divided by 0\n";
        exit(1);
    }

    // b inverse
    //com c(a/(a*a+b*b), b/(a*a+b*b));
    com c(b.Real/(b.Real*b.Real+b.Imaginary*b.Imaginary), -b.Imaginary/(b.Real*b.Real+b.Imaginary*b.Imaginary));
    return  a * c;
}

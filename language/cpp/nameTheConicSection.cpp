// deduces what connic section you have based on the polynomial
// you give it, interactive

#include <iostream>
#include <math.h>
using namespace std;

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc != 7)
    {
        cout << "Enter in a general form equation for a conic section\n"
             << "Ax^2 + Bxy + Cy^2 + Dx + Ey + F = 0\n";
        return 1;
    }
    double A = stringToFloat(argv[1]);
    double B = stringToFloat(argv[2]);
    double C = stringToFloat(argv[3]);
    double D = stringToFloat(argv[4]);
    double E = stringToFloat(argv[5]);
    double F = stringToFloat(argv[6]);

    double L = pow (B, 2) - (4*A*C); //L is the discriminant

    //1 circle, 2 ellipse, 3 parabola, 4 hyperbola
    int type = 0;
    if (((A == 0) && (B == 0)) && (C == 0)) 
    {
        cout << "This is not a conic section.";
        return 0;
    }
    if (L < 0) {
        if (A == C) {
            type = 1;
        } else {
            type = 2;
        }
    } 
    
    if (L == 0) {
        type = 3;
    } 
    
    if (L > 0) {
        type = 4;
    } 
    
    switch (type) 
    {
            case 1: cout << "You have a circle\n"; break;
            case 2: cout << "You have an ellipse\n"; break;
            case 3: cout << "You have a parabola\n"; break;
            case 4: cout << "You have a hyperbola\n"; break;
            default: cout << "404 shape not found\n";
    }
    return 0;
}

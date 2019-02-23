#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    double A=1,B=1,C=1,D=1,E=1,F=1;
    cout << "Enter in a general form equation for a conic section\n"
         << "Ax^2 + Bxy + Cy^2 + Dx + Ey + F = 0\n";
    cin >> A >> B >> C >> D >> E >> F;
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
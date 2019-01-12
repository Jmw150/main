/*
    old program, may have some useful parts

*/

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

int main () 
{
    fstream data;
    int width, height;
    width = 6;
    const int ARRAY_SIZE = 1000;
    
    double bucket = 0;
    double x[ARRAY_SIZE];
    int i = 0;
    
    data.open("data.txt");
    while (data >> bucket) //grab data
    {
        x[i] = bucket;
        i++;
    }
    cout << "Data has " << i << " objects. \n\n";
    
    {
    double math = 0;
    for (int g = 0 ; g < i ; g += 6)
        { math += x[g]; }
    cout << "Total non-required math: " << math << "\n";
    } //sum each column  
    {
    double calc3 = 0;
    for (int g = 1 ; g < i ; g += 6)
        { calc3 += x[g]; }
    cout << "Total calculus: " << calc3 << "\n";
    }
    {
    double math = 0;
    for (int g = 2 ; g < i ; g += 6)
        { math += x[g]; }
    cout << "Total differential equations: " << math << "\n";
    }
    {
    double math = 0;
    for (int g = 3 ; g < i ; g += 6)
        { math += x[g]; }
    cout << "Total linear algebra: " << math << "\n";
    }
    {
    double math = 0;
    for (int g = 4 ; g < i ; g += 6)
        { math += x[g]; }
    cout << "Total c++: " << math << "\n\n";
    }
    
    cout << "Here is your data sir.\n";
    for (int j=0; j < i; ) //display data
    {
        for (int h=0 ; h < width ; h++) 
        {
            cout << x[j] << "\t"; 
            j++;
        }
        cout << endl;
    }
    data.close();
    return 0;
}

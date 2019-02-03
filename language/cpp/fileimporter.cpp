// useless

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
    const int ARRAY_SIZE = 100;
    
    double bucket = 0;
    double x[ARRAY_SIZE] = {0};
    int i = 0;
    data.open("data.txt");
    while (data >> bucket)
    {
        x[i++] = bucket;
    }
    cout << "Data has " << i << " objects. \n";
    for (int j=0; j != i; j++)
    {
        cout << x[j] << " ";
    }
    data.close();
    return 0;
}

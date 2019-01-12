// a program that writes pgm files
// pgm files are black and white pictures

#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int width = pow(2, 5);
    int height = pow(2, 5);
    int maxgrey = pow(2, 5);
    //P2 is a magic number to id as pgm
    cout << "P2 "
         << width << ' '
         << height << ' '
         << maxgrey << ' '; //magic number to id as pgm




    for (int j = 0 ; j < height ; j++)
        for (int i = 0; i < width ; i++) 
        {
            cout << (
            /* place function in here */

            (((i%2))?maxgrey:0)

            )%maxgrey << ' ';
        } cout << endl;
    return 0;
}


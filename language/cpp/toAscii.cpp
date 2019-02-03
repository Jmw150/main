// Translates ascii characters to their literal numbers in decimal

#include <iostream>
using namespace std;

int main (int argc, char* argv[])
{
    int j;
    for (int i = 1 ; i < argc ; i++)
    {
        j = 0;
        while (argv[i][j]) 
        { 
            cout << int(argv[i][j]);
            j++;
        }
        cout << ' ' ;
    }
    cout << endl;

    return 0;
}

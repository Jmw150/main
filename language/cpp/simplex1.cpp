#include <iostream>
#include "mainlib.cpp"
using namespace std;

int main (int argc, char** argv)
{
    int lol = 0;

    if (argc != 2)
    {
        cout << "1-simplexNum [n]\n";
        return 1;
    }

    int n = stringToPosInt(argv[1]);

    /* Theta(n^3) */
    for (int k = 1; k <= n ; ++k)
        for (int j = 1 ; j <= k ; ++j)
            for (int i = 1 ; i <= j ; ++i)
                ++lol;

    cout << lol << endl;

    cout << n*(n+1)*(n+2)/6 << endl; // Theta(1)

    return 0;
}

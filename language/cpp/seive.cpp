// wrapper to print primes

#include "mainlib.cpp"

int main (int argc, char** argv)
{
    if (argc > 3 || argc < 2)
    {
        cout << "primesBetween [start] [end]\n";
        return 1;
    }

    int a = stringToInt(argv[1]); // limited by register size
    int b = stringToInt(argv[2]);

    int* primeArray = new int[b+2];

    seive(primeArray, b); // null terminated

    /* print primes */
    for (int i = 0 ; primeArray[i] ; i++)
        if (primeArray[i] > a)
            cout << primeArray[i] << ' ';
    cout << endl;
    

    return 0;
}


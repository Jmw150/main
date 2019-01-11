//good for printing all primes between a and b

#include "mylib.hpp"

int main (int argc, char *argv[])
{
    if (argc != 3)
	{
	  cout << "primesBetween [a] [b]\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    for (int i = a ; i <= b ; i = nextPrime(i))
    {
        if (isPrime(i))
            cout << i << ' ';
    }
    cout << endl;
    return 0;
}

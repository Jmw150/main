#include "mylib.cpp"

int main ()
{
    for (int i = 1 ; i < 1000 ; i++)
    {
        if(isPrime(i))
            if(isPrime(2*i+1))
                cout << 2*i + 1 << endl;
    }
    return 0;
}

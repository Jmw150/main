#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

bool isPrime(int number);
void breakIntoPrimes(int CompositeNumber, int A[], int MAX);

int main()
{
    const int MAX_SIZE = 15;
    int arry[MAX_SIZE] = {0};
    int lowest = 1000;
    for (int i = 100 ; i < 1000 ; i++)
    {
        if (!isPrime(i))
        {
            breakIntoPrimes(i, arry, MAX_SIZE);
//          cout << i << ": "; //to visually check every number
            for (int j = 0 ; arry[j] ; j++)
            {
//              cout << arry[j] << ' ';
                lowest = (lowest > arry[j])?arry[j]:lowest;
            }
//          cout << "low->\t\t" << lowest << endl;
            if (lowest > 31) cout << "\nFound: " << i;
            lowest = 1000;
            for (int j = 0 ; j < MAX_SIZE ; j++)
                arry[j] = 0;
        }
    }
    return 0;
}

/*****************************************************************
| Name: isPrime
|    
| Precodition: a number to check
| Postcondition: 1 or 0 if the number is prime
|
| Parameters:
|       
|   IN: int number
|   Out: nothing
|   
| Returns: bool prime or not prime
\*****************************************************************/
bool isPrime(int number)
{
    int top = number;
    if (number > 100)
        int top = int(ceil(pow(number, 0.5)));//old lemma only need
    for (int i = 2 ; i < top ; i++)        //to check n^(1/2)
        if (number % i == 0)
            return 0;
    return 1;
}

/*****************************************************************
| Name: breakIntoPrimes
|    
| Precodition: <iostream>, <stdlib.h>, an int array, and a number
|              to test
| Postcondition: an array of primes from the tested number
|
| Parameters:
|       
|   IN: int CompositeNumber, int max
|   Out: int array
|   
| Returns: nothing
\*****************************************************************/
void breakIntoPrimes(int CompositeNumber, int A[], int MAX)
{
    for (int i = 0 ; i < MAX ; i++) //clean the array
        A[i] = 0;
    
    int j = 0;
    for (int i = 2 ; i <= CompositeNumber ; i++)
    {
        if (CompositeNumber % i == 0)
        { 
            A[j++] = i;
            CompositeNumber /= i;
            i--;
        }
        if (j == MAX)
        {
            cout << "Error: too many primes\n";
            exit(1);
        }
    }
}

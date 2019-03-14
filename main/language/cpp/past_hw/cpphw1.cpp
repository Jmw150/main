// name:     Jordan Winkler
// date:     1/26/2017
// homework: 1
// process:  creates an int array, randomizes its elements,
//           takes that average of these elements, prints 
//           out this average to the terminal

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void randArray(int array[], int arrayLength);

double averageArray(int array[], int arrayLength);

int main ()
{
    const int MAX_SIZE = 1000; 
    int A[MAX_SIZE];
    
    randArray(A, MAX_SIZE);

    cout << "Average of Array: "
         << averageArray(A, MAX_SIZE) << endl;

    return 0; 
}

/*****************************************************************
| Name: randArray
|    
| Precodition: An int array, libaries: time.h, stdlib.h
| Postcondition: The same array but with pseudo-random elements
|
| Parameters:
|       
|   IN: an int array and its int length
|   Out: the same int array
|   
| Returns: nothing
\*****************************************************************/
void randArray(int array[], int arrayLength)
{
    srand(time(NULL));                 //seeding random number
                                       //generator with system time
    for (int i = 0 ; i < arrayLength ; i++)
        array[i] = int(rand() % 1000); //modded to 1000 to make
                                       //average easy to calculate
}

/*****************************************************************
| Name: averageArray
|    
| Precodition: An array of integers
| Postcondition: gives back the average of each element of the 
|                array of integers
|
| Parameters:
|       
|   IN: int array and its length
|   Out: the same array
|   
| Returns: double called average
\*****************************************************************/
double averageArray(int array[], int arrayLength)
{
    long int Sum = 0; //larger storage should be > 999*1000
    for (int i = 0 ; i < arrayLength ; i++)
        Sum += array[i];
    return Sum/double(arrayLength);
}

/*
Average of Array: 497
*/

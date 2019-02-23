/*  
    A library for all of my favorite functions and classes
    created by: Jordan Winkler

*/
#define broken

#include <limits>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <cstdlib>

using namespace std;

#define ll unsigned long int

/*************************************************************
| Name: factorial
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number N
|   Out: nothing
|   
| Returns: the factorial of N
\************************************************************/
template<class t>
t factorial (t N)
{
    if (N < 0) 
    {
        cout << "\nerror: bad factorial \n";
        exit(1);
    }    
    if (N > 1) return factorial (N-1) * N;
    else return 1;
}

/****************************************************************
| Name: choose 
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: numbers N and K
|   Out: Nothing
|   
| Returns: N choose K from mathematics
\****************************************************************/
template<class t>
t choose (t N, t K)
{
    if (N < 0 || K < 0 || K > N) //for some problems it is better
        return 0;                //for 0 to represent failure

    return (factorial(N))/(factorial(K)*(factorial(N-K)));
}

/****************************************************************
| Name: pick
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: the numbers N and K 
|   Out: nothing
|   
| Returns: N pick K from mathematics
\****************************************************************/
template<class t>
t pick (t N, t K)
{
    if (N < 0 || K < 0 || K > N) //for some problems it is better
        return 0;                //for 0 to represent failure

    return (factorial(N))/((factorial(N-K)));
}

/****************************************************************
| Name: max
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two numbers
|   Out: nothing
|   
| Returns: the highest of the two numbers
\****************************************************************/
template<class t>
t max (t a, t b)
{
    return (a > b)?a:b;
}

/****************************************************************
| Name: min
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two numbers
|   Out: nothing
|   
| Returns: the lowest of the two numbers
\****************************************************************/
template<class t>
t min (t a, t b)
{
    return (a > b)?b:a;
}

/****************************************************************
| Name: quicksort
|    
| Precodition: an array; 
|               information on the begining and end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: array, int for start and end
|   Out: same array 
|   
| Returns: nothing
\****************************************************************/
template<class t>
void quickSort(t arr[], int left, int right) {
      int i = left, j = right;
      t tmp;
      int pivot = arr[(left + right) / 2]; // additional improvement
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


/****************************************************************
| Name: changeToBase
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number x, base to change to, and a string to hold each
|       n-imal place
|   Out: string of changed base
|   
| Returns: nothing
\****************************************************************/
void changeToBase(int x, int base, int string[], int Max)
{
    for (int i = 0 ; x && i < Max ; i++)
    {
        string[i] = x % base;
        x = x/base;
    }
}

/****************************************************************
| Name: heronsFormula 
|    
| Precodition: Three side lengths of a triangle, <math.h>
| Postcondition: The area of the triangle
|
| Parameters:
|       
|   IN: three doubles
|   Out: nothing
|   
| Returns: double 
\****************************************************************/
double heronsFormula (double A, double B, double C)
{
    double S = (A + B + C)/2.0;
    double Area = pow((S*(S-A)*(S-B)*(S-C)), (1/2.0));
    return Area;
}

/****************************************************************
| Name: gcd
|    
| Precodition: two numbers
| Postcondition: the greatest common divisor of those two numbers
|
| Parameters:
|       
|   IN: int A, and B
|   Out: none
|   
| Returns: int
\****************************************************************/
template<class t>
t gcd(t A, t B)
{
    t T;
    while (B != 0)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    

/****************************************************************
| Name: gcdLong
|    
| Precodition: four int arrays
| Postcondition: four int arrays taking on the elements of
|                division algorithm
|
| Parameters:
|       
|   IN: four int arrays, int max length of arrays
|   Out: those same four int arrays
|   
| Returns: nothing
\****************************************************************/
int gcdLong(int aa, int qq)
{
    const int Max = 100000; // c++ 98 is strict about this...
    int a[Max]={0}, q[Max]={0}, b[Max]={0}, r[Max]={0};
    a[0] = aa;
    q[0] = qq;
    
    int lastDivisor = 0;
    for (int i = 0 ; r[i-1] || i == 0 ; i++)
    {
        r[i] = a[i] % b[i];
        q[i] = a[i] / b[i]; 
        
        a[i+1] = b[i];
        b[i+1] = r[i];
        lastDivisor++;
    }
    return b[--lastDivisor];

    //for "showing your work" or debugging
    for (int i = 0 ; r[i-1] || i == 0 ; i++)
    {
        cout << a[i] << '=' << q[i] << '*' << b[i] << '+' 
             << r[i] << endl;
    }
}

/****************************************************************
| Name: getInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  none
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
int getInt()
{
    const int ARRAY_SIZE = int(log10(pow(2, sizeof(int)*8))+1);
    char UserInput[ARRAY_SIZE];
    for (int i = 0 ; i < ARRAY_SIZE ; i++)
        UserInput[i] = 0;
    int ArraySpot = 0;
    int Rows = 0;

    do 
    {
        UserInput[ArraySpot] = cin.get();
        if (ArraySpot > ARRAY_SIZE)
        {
            cout << "\nSmaller number please\n";
            exit(1);
        }
    } while ( UserInput[ArraySpot++] != '\n');
    for (int i = 0 ; i < ArraySpot - 1 ; i++)
    {
        if (UserInput[i] <= '9' && UserInput[i] >= '0')
        {
            Rows += int(UserInput[i] - '0');
            Rows *= 10; 
        }
        else 
        {
            cout << "\nError: non-number\n";
            exit(1);
        }
    }
    return Rows /= 10;
}


/****************************************************************
| Name: stringToPosInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  char*
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
int stringToPosInt(char* input) 
//char* assumed to come from main argv which has a lot of space on it
{
    /* for flag if number is too big for current architexture */
    const int arrayMax = int(log10(pow(2, sizeof(int)*8))+1); 

    int Rows = 0;

    /* get size of input array, minus null terminator */
    int arraySize = 0;
    while (input[arraySize++] != '\0'); 
    arraySize--;
    
    if (arraySize > arrayMax)
    {
        cout << "\nSmaller number please\n";
        exit(1);
    }

    /* transfer to int */
    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        if (input[i] <= '9' && input[i] >= '0')
        {
            Rows += int(input[i] - '0');
            Rows *= 10; 
        }
        else 
        {
            cout << "\nError: non-number\n";
            exit(1);
        }
    }
    return Rows /= 10;
}


/****************************************************************
| Name: stringToInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  char* string
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
int stringToInt(char* input) 
//char* assumed to come from main argv which has a lot of space on it
{
    /* for flag if number is too big for current architexture */
    const int arrayMax = int(log10(pow(2, sizeof(int)*8))+1); 

    int Rows = 0;

    /* get size of input array, minus null terminator */
    int arraySize = 0;
    while (input[arraySize++] != '\0'); 
    arraySize--;
    
    if (arraySize > arrayMax)
    {
        cout << "\nSmaller number please\n";
        exit(1);
    }

    /* transfer to int */
    /* if negative */
    if (input[0] == '-')
    {
        for (int i = 1 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += int(input[i] - '0');
                Rows *= 10; 
            }
            else 
            {
                cout << "\nError: non-number\n";
                exit(1);
            }
        }
        Rows /= 10;
        Rows *= -1;
        return Rows;
    }
    /* if positive */
    for (int i = 0 ; input[i] != '\0' ; i++)
    {
        if (input[i] <= '9' && input[i] >= '0')
        {
            Rows += int(input[i] - '0');
            Rows *= 10; 
        }
        else 
        {
            cout << "\nError: non-number\n";
            exit(1);
        }
    }
    return Rows /= 10;
}

/****************************************************************
| Name: stringToFloat
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  char* 
|   Out: none
|   
| Returns: a float 
\****************************************************************/
/* need to dummy proof */
double stringToFloat(char* input) 
//char* assumed to come from main argv which has a lot of space on it
{
    /* for flag if number is too big for current architexture */
    const int arrayMax = 50; //floats have 16 digits of precision

    double Rows = 0;

    /* get size of input array, minus null terminator */
    int arraySize = 0;
    while (input[arraySize++] != '\0'); 
    arraySize--;
    
    if (arraySize > arrayMax)
    {
        cout << "\nSmaller number please\n";
        exit(1);
    }

    /* transfer to int thing */
    /* if negative */
    if (input[0] == '-')
    {
        for (int i = 1 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += int(input[i] - '0');
                Rows *= 10; 
            } /* ignores non digits */
        }
        Rows /= 10;
        Rows *= -1;

        /* find dot */
        int dot = 0; //may not have dot
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] == '.')
            {
                  /* starting at 0 throws off by 1 */
                dot = arraySize - i - 1; 
                break;
            }
        }
        Rows = Rows/pow(10,dot);
    } 
    else 
    {
        /* if positive */
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += int(input[i] - '0');
                Rows *= 10; 
            } /* ignores non digits */
        }
        Rows /= 10;

        /* find dot */
        int dot = 0; //may not have dot
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] == '.')
            {
                  /*starting at 0 throws off by 1 */
                dot = arraySize - i - 1; 
                break;
            }
        }
        Rows = Rows/pow(10,dot);
    }

    /* find dot, non negative */

    return Rows;
}

/****************************************************************
| Name: getLong
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  none
|   Out: none
|   
| Returns: an long int from the user
\****************************************************************/
long int getLong()
{
    const int ARRAY_SIZE = 
            int(log10(pow(2, sizeof(long int)*8))+1);
    char UserInput[ARRAY_SIZE];
    for (int i = 0 ; i < ARRAY_SIZE ; i++)
        UserInput[i] = 0; // version 98...
    int ArraySpot = 0;
    long int Rows = 0;

    do 
    {
        UserInput[ArraySpot] = cin.get();
        if (ArraySpot > ARRAY_SIZE) //this error comes up 
                                    //before the other
        {
            cout << "\nSmaller number please\n";
            exit(1);
        }
    } while ( UserInput[ArraySpot++] != '\n');
    for (int i = 0 ; i < ArraySpot - 1 ; i++)
    {
        if (UserInput[i] <= '9' && UserInput[i] >= '0')
        {
            Rows += int(UserInput[i] - '0');
            Rows *= 10; 
        }
        else 
        {
            cout << "\nError: non-number\n";
            exit(1);
        }
    }
    return Rows /= 10;
}

/****************************************************************
| Name: binarySearch
|    
| Precodition: An integer array that has been sorted and
|              something to look for
| Postcondition: The location of that thing in an array
|
| Parameters:
|       
|   IN: integers of the array and size and thing to find
|   Out: the same array
|   
| Returns: int location
\****************************************************************/
int binarySearch(int target, int A[], int Size)
{
    int lo = 0, hi = Size, i;
    
    while (lo <= hi)
    {
        i = (lo + hi)/2;
        if (A[i] == target) return i;
        if (A[i] < target)
        /* change return if looking for multiple items */
            lo = i + 1;
        else
            hi = i - 1;
    }
}

/****************************************************************
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
\****************************************************************/
bool isPrime(int number)
{
    if (number < 2)
        return 0;

    int top = number;
    if (number > 100)  //uses sieve of Eratosthenes
        int top = int(ceil(pow(number, 0.5))); 
    for (int i = 2 ; i < top ; i++)        
        if (number % i == 0)
            return 0;
    return 1;
}

/*************************************************************
| Name: timesCalled
|    
| Precodition: nothing, or has been called before
| Postcondition: the number of times that this function has been
|                called.
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: an integer for how many times function was called in
|          the program
\************************************************************/
int timesCalled()
{
    static int n = 0;
    return ++n;
}

/****************************************************************
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
\****************************************************************/
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

/****************************************************************
| Name: intLog
|    
| Precodition: requires math.h
| Postcondition: a computed log
|
| Parameters:
|       
|   IN: an int base and a log int variable
|   Out: Nothing
|   
| Returns: an int logx/log(base)
\****************************************************************/
int intLog(int base, long int x)
{
    return int(log(x)/log(base));
}
int intLog(int base, int x)
{
    return int(log(x)/log(base));
}

  
/*================================================================
|| 
|| Object: matrix 
||
|| Purpose: simulates the linear algebra matrix
|| 
|| Attributes: 
||      MAX (max size of matrix)
||      A[][] (matrix for manipulations)
|| Functions:
||      matrix (Initializer)
||
||      RowEchelonForm
||          ScaleRow
||          SwitchRow
||          AddRow
||          MakePivot
||          ReduceClearDown
||
||      + (is a friend)
||      * (is a friend)
||      
||      Randomize
||      Print
||      Scan
||      Write
||      Solve (put in I if possible)
||
\*==============================================================*/

class matrix
{
public:
    matrix(int theX, int theY);
    void Randomize();
    void Print();
    int Scan();
    int Write();
    int RowEchelonForm();
    int Solve();

    friend const matrix operator +(const matrix &a, 
                                   const matrix &b);
    friend const matrix operator *(const matrix &a, 
                                   const matrix &b);
private:
    double **A; //matrix data
    int Max;    //max size of matrix
    int X;      //location x in matrix
    int Y;      //location y 

    void ScaleRow (int Row, double Scalar);
    void SwitchRow (int Row1, int Row2);
    void AddRow (int RowIn, int RowOut);
    int MakePivot (int Column, int Row);
    int ReduceClearDown (int Column, int Row);
};

matrix::matrix(int theX, int theY)
{
    Max = 1000;
    if (theX < Max && theY < Max)
    {
        X = theX;
        Y = theY;
    }
    else
    {
        cout << "\nError: adjust matrix size\n";
        exit(1);
    }
    A = new double*[X]; //make the matrix
    for (int i = 0; i < X; i++)
        A[i] = new double[Y];
}
/****************************************************************
| Name: Randomize
|    
| Precodition: a 2D array size double with a max size of 1000,
|              2 ints for size of array that user chooses, 
|              <time.h>
| Postcondition: a random array of intergers 1 through 9
|
| Parameters:
|       
|   IN: double array, int X, int Y
|   Out: same array with an X by Y section randomized
|   
| Returns: nothing
\****************************************************************/
void matrix::Randomize()
{
    srand (time(NULL));
    for (int j = 0 ; j < Y ; j++)
    {
        for (int i = 0 ; i < X ; i++)
        {
            A[i][j] = int(rand() % 10);
        }
    }
}

/****************************************************************
| Name: Print
|    
| Precodition: A double 2D array
| Postcondition: The double 2D array is printed onto the screen
|
| Parameters:
|       
|   IN: double 2D array, 2 ints for the dimensions to print
|   Out: The same double 2D array
|   
| Returns: nothing
\****************************************************************/
void matrix::Print()
{
    double FixedPrint; 
    for (int j = 0 ; j < Y ; j++)
    {
        for (int i = 0 ; i < X ; i++)
        {
            if (!(round(100 * A[i][j])/100)) 
                FixedPrint = 0; 
            else FixedPrint = round(100 * A[i][j])/100; 
            cout << FixedPrint << ' ';
        } cout << endl;
    } cout << endl;
}

/****************************************************************
| Name: Scan
|    
| Precodition: A file to pull a matrix from, and a matrix from 
|              mylib.cpp to print onto
| Postcondition: The matrix passed to the program for use 
|
| Parameters:
|       
|   IN: double 2D array, int X, int Y
|   Out: same double 2D array
|   
| Returns: 1 on success
\****************************************************************/
int matrix::Scan()
{
    fstream InData;
    cout << "Enter the name of the file you wish to scan "; 
    //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    InData.open(UserInput.c_str());
    for (int j = 0 ; j < Y ; j++) 
        for (int i = 0 ; i < X ; i++)
            InData >> A[i][j];
    InData.close();
    return 1;
}

/****************************************************************
| Name: ScaleRow
|    
| Precodition: matrix exists
| Postcondition: a given orw of this matrix has been scaled
|
| Parameters:
|       
|   IN: integer for the row, double for the amount to scale
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void matrix::ScaleRow (int Row, double Scalar)
{
    for (int i = 0 ; i < X ; i++)
    {
        A[i][Row] *= Scalar;
    }
}

/****************************************************************
| Name: SwitchRow
|    
| Precodition: matrix exists
| Postcondition: Two rows in the matrix were switched
|
| Parameters:
|       
|   IN: an integer for each row
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void matrix::SwitchRow(int Row1, int Row2)
{
    int Temp;
    for (int i = 0 ; i < X ; i++)
    {
        Temp = A[i][Row1];
        A[i][Row1] = A[i][Row2];
        A[i][Row2] = Temp;
    }
}

/****************************************************************
| Name: AddRow
|    
| Precodition: matrix exists
| Postcondition: RowIn + RowOut -> RowOut
|
| Parameters:
|       
|   IN: integer for each row
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void matrix::AddRow (int RowIn, int RowOut)
{
    for (int i = 0 ; i < X ; i++)
    {
        A[i][RowOut] = A[i][RowOut] + A[i][RowIn];
    }
}

/****************************************************************
| Name: MakePivot
|    
| Precodition: matrix exists
| Postcondition: a pivot element has been made at position
|                Column, Row
|
| Parameters:
|       
|   IN: int for the Column and Row
|   Out: Nothing
|   
| Returns: 1 on success, 0 on failure
\****************************************************************/
int matrix::MakePivot (int Column, int Row)
{
    for (int i = Row + 1 ; i < Y ; i++)
        if (A[Column][Row])
        {
            ScaleRow(Row, 1/A[Row][Column]);
            return 1;
        }
        else SwitchRow(Row, i);
    if (A[Column][Row]) 
    {
        ScaleRow(Row, 1/A[Row][Column]);
        return 1;
    }
    else return 0;
}

/****************************************************************
| Name: ReduceClearDown
|    
| Precodition: matrix exists
| Postcondition: a pivot element is made and the elements below
|                it are zeroed out.
|
| Parameters:
|       
|   IN: integer for Column and Row to operate on
|   Out: Nothing
|   
| Returns: 1 on success, 0 on failure
\****************************************************************/
int matrix::ReduceClearDown (int Column, int Row)
{
    if (MakePivot(Column, Row))
    {
        for (int i = Row + 1 ; i < Y ; i++)
        {
            if (A[Column][i])
            {
                ScaleRow(i, -1/A[Column][i]);
                AddRow (Row, i);
            }
        }
    } else return 0;
    return 1;
}

/****************************************************************
| Name: RowEchelonForm
|    
| Precodition: a matrix exists
| Postcondition: puts the matrix in row echelon form
|
| Parameters:
|       
|   IN: Nothing
|   Out: Nothing
|   
| Returns: Dimension of matrix
\****************************************************************/
int matrix::RowEchelonForm ()
{
    int Dimension = 0;
    for (int i = 0 ; i < X ; i++)
    {
        Dimension += ReduceClearDown(i, i);
    }
    if (!Dimension) Dimension++;
    return Dimension;
}

/****************************************************************
| Name: Write
|    
| Precodition: A matrix to save
| Postcondition: a matrix (with rounded elements) saved to a file
|
| Parameters:
|       
|   IN: Nothing
|   Out: Nothing
|   
| Returns: 1 on finishing the program
\****************************************************************/
int matrix::Write()
{
    ofstream OutData;
    cout << "Enter name of file "; /*designate file path 
                                        using string*/
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());
    double FixedPrint; 
    for (int j = 0 ; j < Y ; j++)
    {
        for (int i = 0 ; i < X ; i++)
        {
            if (!(round(100 * A[i][j])/100)) 
                FixedPrint = 0; 
            else FixedPrint = round(100 * A[i][j])/100; 
            OutData << FixedPrint << ' ';
        } OutData << endl;
    } OutData << endl;
    OutData.close();
    return 1;
}

/****************************************************************
| Name: Solve
|    
| Precodition: a matrix exists
| Postcondition: the matrix is now an identity matrix,
|                it's constants are now known
|
| Parameters:
|       
|   IN: Nothing
|   Out: Nothing
|   
| Returns: 1 on completion of the function
\****************************************************************/
int matrix::Solve()
{
    RowEchelonForm();
    //solves triangle matrix
    for (int i = X - 1, j = Y - 2, n = 1 ; j >= 0 ; j--, n++) 
        for (int k = 1, h = n ; h > 0 ; k++, h--)
            A[i][j] -= A[i-k][j] * A[i][j+h];

    //changes matrix to identity
    for (int j = 0 ; j < Y ; j++)                            
        for (int i = 0 ; i < X-1 ; i++)
            A[i][j] = 0;
    for (int i = 0 ; i < X-1 ; i++)
        A[i][i] = 1;
    return 1;
}

const matrix operator +(const matrix &a, const matrix &b)
{
    if (a.X == b.X && a.Y == b.Y)
    {
        matrix OutMatrix(a.X,a.Y);

        for (int i = 0 ; i < a.X ; i++)
            for (int j = 0 ; j < a.Y ; j++)
                OutMatrix.A[i][j] = a.A[i][j] + b.A[i][j];

        return OutMatrix;
    }
    else
    {
        cout << "\nError: matrix addition size fault\n";
        exit(1);
    }
}

const matrix operator *(const matrix &a, const matrix &b)
{
    if (a.Y == b.X)
    {
        matrix OutMatrix(b.X, a.Y);            

        //clean new matrix
        for (int i = 0 ; i < b.X ; i++)        
            for (int j = 0 ; j < a.Y ; j++)
                OutMatrix.A[i][j] = 0;

        //multiply
        for (int i = 0 ; i < b.X ; i++)
            for (int j = 0 ; j < a.Y ; j++)
                for (int c = 0 ; c < b.Y ; c++)
                {
                    OutMatrix.A[i][j] += 
                        a.A[c][j] * b.A[i][c];
                }   

        return OutMatrix;
    }
    else
    {
        cout << "\nError: invalid multiplication\n";
        exit(1);
    }
}


int dePolignax(int n, int p)
{
    int Sum = 0;
    int term;
    int pToJ = p;
    do
    {   
        term = n/pToJ; //truncating is on purpose
        Sum += term;
        pToJ *= p;
    } while (term != 0);

    return Sum;
}


/*================================================================
|| 
|| Object: com 
|| 
|| Purpose: a data type to approximate complex numbers
||      
|| Atributes: 
||      Real
||      Imaginary
|| Functions:
||      + - * operators (not members)
||
\*==============================================================*/
class com
{
public:
    com(double RealValue, double ImaginaryValue);
    com(const double &RealValue);
    com();
    
    double Real;
    double Imaginary;
};

const com operator +(const com &a, const com &b);
const com operator -(const com &a, const com &b);
const com operator *(const com &a, const com &b);

com::com(double RealValue, double ImaginaryValue)
{
    Real = RealValue;
    Imaginary = ImaginaryValue;
}

com::com(const double &RealValue)
{
    Real = RealValue;
    Imaginary = 0;
}

com::com()
{
    Real = 0;
    Imaginary = 0;
}

const com operator +(const com &a, const com &b)
{
    double finalReal = a.Real + b.Real;
    double finalImaginary = a.Imaginary + b.Imaginary;

    return com(finalReal, finalImaginary);
}

const com operator -(const com &a, const com &b)
{
    double finalReal = a.Real - b.Real;
    double finalImaginary = a.Imaginary - b.Imaginary;

    return com(finalReal, finalImaginary);
}

const com operator *(const com &a, const com &b)
{
    double finalReal = 
            a.Real * b.Real - a.Imaginary * b.Imaginary;
    double finalImaginary = a.Real * b.Imaginary 
            + a.Imaginary * b.Real;

    return com(finalReal, finalImaginary); 
}


/*================================================================
|| 
|| Object: rat 
|| 
|| Purpose: emulates the rational numbers
|| Atributes: 
||      Numerator
||      Denominator
|| Functions:
||      + - * / == != <= >= < > operators (non-members)
||      
||      toInt (non-member)
||      toFloat (non-member)
||
\*==============================================================*/


class rat
{
public:
    rat();
    rat(int theNum);
    rat(int theNum, int theDen);

    void p(); //print rational number

    int num; //numerator
    int den; //denotminator
};

const rat operator +(const rat &a, const rat &b);
const rat operator -(const rat &a, const rat &b);
const rat operator *(const rat &a, const rat &b);
const rat operator /(const rat &a, const rat &b);
inline bool operator==(const rat &a, const rat &b);
inline bool operator!=(const rat &a, const rat &b);
inline bool operator<=(const rat &a, const rat &b);
inline bool operator>=(const rat &a, const rat &b);
inline bool operator> (const rat &a, const rat &b);
inline bool operator< (const rat &a, const rat &b);

rat::rat(int theNum, int theDen)
{
    if (theDen)
    {
        num = theNum;
        den = theDen;
    }
    else 
    {
        cout << "\nError: denominator == 0\n";
        exit(1);
    }
}

rat::rat(int theNum)
{
    num = theNum;
    den = 1;
}

rat::rat()
{
    num = 0;
    den = 1;
}

const rat operator +(const rat &a, const rat &b)
{
    int finalNum = a.num * b.den + b.num * a.den;
    int finalDen = a.den * b.den;
    
    int divider = gcd(finalNum, finalDen);
    finalNum /= divider;
    finalDen /= divider;

    return rat(finalNum, finalDen);
}

const rat operator -(const rat &a, const rat &b)
{
    int finalNum = a.num * b.den - b.num * a.den;
    int finalDen = a.den * b.den;

    int divider = gcd(finalNum, finalDen);
    finalNum /= divider;
    finalDen /= divider;

    return rat(finalNum, finalDen);
}

const rat operator *(const rat &a, const rat &b)
{
    int finalNum = a.num * b.num;
    int finalDen = a.den * b.den;
    
    int divider = gcd(finalNum, finalDen);
    finalNum /= divider;
    finalDen /= divider;

    return rat(finalNum, finalDen);
}

const rat operator /(const rat &a, const rat &b)
{
    int finalNum = a.num * b.den;
    int finalDen = a.den * b.num;
    
    int divider = gcd(finalNum, finalDen);
    finalNum /= divider;
    finalDen /= divider;

    return rat(finalNum, finalDen);
}

inline bool operator==(const rat &a, const rat &b)
{
    if (a.num == b.num && a.den == b.den)
        return 1;
    else
        return 0;
}

inline bool operator!=(const rat &a, const rat &b)
{
    return !(a == b);
}

inline bool operator >(const rat &a, const rat &b)
{
    int A = a.num * b.den;
    int B = b.num * b.den;
    
    return (A > B);
}

inline bool operator <(const rat &a, const rat &b)
{
    int A = a.num * b.den;
    int B = b.num * b.den;
    
    return (A < B);
}

inline bool operator<=(const rat &a, const rat &b)
{
    return !(a > b);
}

inline bool operator>=(const rat &a, const rat &b)
{
    return !(a < b);
}

void rat::p()
{
    if (num == den)
        cout << 1;
    else if (num == 0)
        cout << 0;
    else if (den == 1)
        cout << num;
    else
        cout << num << "/" << den;
}

int toInt(rat a)
{
    return a.num/a.den;
}
float toFloat(rat a)
{
    return a.num/float(a.den);
}

  

/****************************************************************
| Name: expMod
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer for base, exponent, and mod
|   Out: nothing
|   
| Returns: integer a for b^e ≡ a (mod n)
\****************************************************************/
unsigned long int expMod(unsigned long int a, unsigned long int n, unsigned long int m) 
{
    long unsigned int x = a;
    long unsigned int y = (((n >> 0) & 1) == 1)?a:1;
    long unsigned int k = 4096; //arbitrary
    for (int i = 1 ; i <= k ; i++)
    {
        x = (x*x) % m;
        if (((n >> i) & 1) == 1)
            y = (y == 1)?x:((x*y)%m);
    }
    return y;
}
/*
unsigned long int expMod(unsigned long int base, unsigned long int exponent, unsigned long int mod) 
{
    if (mod == 1)
        return 0;
    unsigned long int c = 1;
    for (int i = 1 ; i <= exponent ; i++)
        c = (c * base) % mod;

    return c;
}
*/

/****************************************************************
| Name: phi
|    
| Precodition: exists breakIntoPrimes, intLog, rat
| Postcondition: phi computed
|
| Parameters:
|       
|   IN: an integer 'number'
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
/* //fast but does not work for large numbers, odd...
int phi(int number) 
{
    int maxPrimes = number/2; //what is max primes in number?
    if (maxPrimes < 10)       //
       maxPrimes = 10; 
    int *primes = new int[maxPrimes];

    breakIntoPrimes(number, primes, maxPrimes);

    //type rat (rational) to maintain accuracy
    rat one(1);
    rat inverseP(1);
    rat lead(number);
    for (int i = 0 ; primes[i] && i < maxPrimes ; i++)
    {   
        if (primes[i] != primes[i+1])
        {
            inverseP.den = primes[i];
            lead = lead * (one - inverseP); //using theorem 7.3
        }
    }

    delete [] primes;

    return toInt(lead);
}
*/
int phi(int n) //slower for large numbers
{
    if (n == 1) return 1;

    unsigned int Sum = 0;
    for (int i = 1 ; i < n ; i++)
        if (gcd(i,n) == 1)
            Sum += 1;
    return Sum;
}
/*
long int phi(long int p, long int q) //for RSA encryption alg
{
    return (p-1)*(q-1);
}
*/
/****************************************************************
| Name: tau
|    
| Precodition: argument is an int, negative int also calculated
| Postcondition: No change in state
|
| Parameters:
|       
|   IN: an integer called n
|   Out: Nothing
|   
| Returns: The number of positive divisors of n
\****************************************************************/
int tau(int n)
{   
    int toReturn = 0;

    for (int i = 1 ; i <= n ; i++)
        if (n % i == 0)
            toReturn++;

    return toReturn;
}
/****************************************************************
| Name: sigma
|    
| Precodition: argument is an int, negative int also calulated
| Postcondition: No change in state
|
| Parameters:
|       
|   IN: an integer called n
|   Out: Nothing
|   
| Returns: The sum of the number of positive divisors of n
\****************************************************************/
int sigma(int n)
{
    int toReturn = 0;

    for (int i = 1 ; i <= n ; i++)
        if (n % i == 0)
            toReturn += i;

    return toReturn;
}

/****************************************************************
| Name: phiInverseCap
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: int n of phi^-1(n)
|   Out: nothing
|   
| Returns: largest possible element of phi^-1(n)
\****************************************************************/
int phiInverseCap(int n)
{
    /* get largest prime */
    int a = 1;
    int largestPrime = 2;
    while (a <= n)
    {
        if (isPrime(largestPrime))
            a *= largestPrime-1;
        largestPrime++;
    }
    --largestPrime;

    /* compute upper bound of phi^-1(n) */
    a = 1;
    for (int i = 2 ; i <= largestPrime ; i++)
        if (isPrime(i))
            a *= i;

    return a;
}

/****************************************************************
| Name: phiInverse
|    
| Precodition: using <iostream>, <stdlib.h>
| Postcondition: nothing
|
| Parameters:
|       
|   IN: int image of phi function
|   Out: int preimage of phi function (also max size of array)
|   
| Returns: nothing
\****************************************************************/
void phiInverse(int k, int arry[], int MAX)
{
    /* clean array */
    for (int i = 0 ; i < MAX ; i++) 
        arry[i] = 0;
    
    /* get bounds */
    int phiInMax = phiInverseCap(k); 
    int phiInMin = k + 1;

    /* compute set of phi^-1(n) */
    int j = 0;
    for (int i = phiInMin ; i <= phiInMax ; i++)
        if (phi(i) == k)               
        {                             
            arry[j++] = i;           
                                    
            if (j == MAX)
            {
                cout << "\nError: phiInverse, arry[] too small\n";
                exit(1);
            }
        }
}
/****************************************************************
| Name: pseudoPrime
|
| description: checks if a number is pseudoprime
|    
| Precodition:  nothing 
| Postcondition: nothing
|
| Parameters:
|       
|   IN: a number n and its base
|   Out: nothing
|   
| Returns: pseudoprime if it is one or 0 if it is not
\****************************************************************/
int pseudoPrime(int n, int base)
{
    if (expMod(base, n-1, n) != 1)
        return 0;
    return n;
}

/****************************************************************
| Name: power
|
| Description: returns integer power a^b
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: numbers a and b
|   Out: nothing
|   
| Returns: a^b
\****************************************************************/
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int tempA = a;
    for (int i = 1 ; i < b ; i++)
        a *= tempA;
    return a;
}

/****************************************************************
| Name: Carmichael
|
| Description: checks for Carmichael numbers
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: a number n
|   Out: nothing
|   
| Returns: that number if it is a Carmichael, 0 otherwise
\****************************************************************/
int Carmichael(int n)
{
/*
n={n | composite ∧ ∀b b^(n-1)≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

0={n | prime V ∃b b^(n-1) !≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }
*/

    if ((isPrime(n)))
        return 0;
    for (int b = 2 ; b < n ; b++)
        if (gcd(b,n) == 1)
            if (expMod(b, n-1, n) != 1)
                return 0;
    
    return n;
}

/****************************************************************
| Name: mu (mobius number theoretic function)
|    
| Precodition: there exists function breakIntoPrimes 
| Postcondition: nothing
|
| Parameters:
|       
|   IN: an integer n
|   Out: nothing
|   
| Returns: the computation of the Mobius mu function
\****************************************************************/
int mu(int n)
{
    if (n == 1)
        return 1;
    
    int maxPrimes = n; 
    //what is the smallest number of primes of n

    int* primearry = new int[maxPrimes];

    for (int i = 0 ; i < maxPrimes ; i++)
        primearry[i] = 0;

    for (int i = 0 ; primearry[i] ; i++)
        for (int j = 0 ; primearry[j] ; j++)
            if (primearry[i] == primearry[j] && i != j)
                return 0;

    int r = 0;
    for (int i = 0 ; i < maxPrimes ; i++)
        if (primearry[i])
            r++;
    if (r % 2 == 0)
        return 1;
    else
        return -1;

}

/*****************************************************************
| Name: removePrime
|    
| Precodition: an int array with a known length
| Postcondition: all multiples of a prime removed from array
|
| Parameters:
|       
|   IN: an integer for prime and array length, an int array
|   Out: the same int array
|   
| Returns: nothing
\****************************************************************/
void removePrime(int prime, int a[], int arrayLength)
{
    for (int i = 0 ; i <= arrayLength ; i++)
        if (a[i] % prime == 0 && a[i] != prime)
            a[i] = 0;
}

/****************************************************************
| Name: printTrueArray
|    
| Precodition: an int array of known length
| Postcondition: the int array is printed on the screen sans
|                all of the zeros
|
| Parameters:
|       
|   IN: int array and its length
|   Out: the same array
|   
| Returns: nothing
\****************************************************************/
void printTrueArray(int a[], int arrayLength)
{
    for (int i = 2 ; i < arrayLength ; i++)
        if (a[i] != 0)
            cout << a[i] << ' ';
}

/****************************************************************
| Name: seive 
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: array and its length
|   Out: array of prime numbers
|   
| Returns: nothing
\****************************************************************/
void seive(int array[], int MaxPrimes)
{
    for (int i = 0 ; i < MaxPrimes ; i++)
        array[i] = 0;

    int* TempArray = new int[MaxPrimes];

    for (int i = 0 ; i <= MaxPrimes ; i++)
        TempArray[i] = i;

   
    /* part that uses seive */
    int topPrime = int(ceil(pow(MaxPrimes, 0.5)));
    
    for (int i = 0 ; i < MaxPrimes ; i++)
        for (int j = 2 ; j <= topPrime ; j++)
            if (isPrime(j))
                removePrime(j, TempArray, MaxPrimes);

    TempArray[1] = 0; //get rid of 1
    int j = 0;
    for (int i = 0 ; i < MaxPrimes ; i++)
    {
        if (TempArray[i])
            array[j++] = TempArray[i];
    }

    delete [] TempArray;
}

/****************************************************************
| Name: lowerPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: a number n
|   Out: nothing
|   
| Returns: the prime number under n
\****************************************************************/
int lowerPrime(int n)
{
    while (n > 0)
    {
        if (isPrime(n))
            return n;
        else n--;
    }
}


/****************************************************************
| Name: nextPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: positive integer k
|   Out: nothing
|   
| Returns: the closest prime after n
\****************************************************************/
int nextPrime(int n) 
{
    while (n > 0)
    {
        n++;
        if (isPrime(n))
            return n;
    }
}

/****************************************************************
| Name: higherPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: an integer n
|   Out: nothing
|   
| Returns: n if it is a prime, else the next prime
\****************************************************************/
int higherPrime(int n) 
{
    while (n > 0)
    {
        if (isPrime(n))
            return n;
        else n++;
    }
}

/****************************************************************
| Name: primeStep
|
| Description: designed to test a boundary conjecture
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN:  a number n > 1
|   Out: nothing
|   
| Returns: lowerPrime(n)-1
\****************************************************************/
int primeStep(int n)
{
    if (n < 2)
    {
        cout << "\nerror: bad num in prime step\n";
        exit(1);
    }

    return lowerPrime(n)-1;
}

/****************************************************************
| Name: nextPhi
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: positive integer k
|   Out: nothing
|   
| Returns: an n of phi(n) bigger than k
\****************************************************************/
int nextPhi(int k)
{
    int n = k; 

    while (k > phi(n))
        n++;

    return n;
}



/****************************************************************
| Name: gcdExtended
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers a,b,x,y such that gcd(a,b) = ax + by = c
|   Out: integers x and y
|   
| Returns: integer c
\****************************************************************/
unsigned long int gcdExtended(unsigned long int a, unsigned long int b, unsigned long int *x, unsigned long int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    unsigned long int x1, y1; // To store results of recursive call
    unsigned long int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

/****************************************************************
| Name: modInv
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v for equation u^-1(mod v)
|   Out: nothing
|   
| Returns: integer equal to u^-1(mod v)
\****************************************************************/
unsigned long int modInv(unsigned long int a, unsigned long int m)
{
    unsigned long int x, y;
    unsigned long int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x
        unsigned long int res = (x%m + m) % m;
        return res;
        cout << "Modular multiplicative inverse is " << res;
    }
}

/****************************************************************
| Name: modinv //u^-1(mod v)
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v
|   Out: nothing
|   
| Returns: u^-1(mod v)
\****************************************************************/
unsigned long int modinv(unsigned long int u, unsigned long int v) //self contained version, may also be faster
{
    unsigned long int inv, u1, u3, v1, v3, t1, t3, q;
    int iter;
    /* Step X1. Initialise */
    u1 = 1;
    u3 = u;
    v1 = 0;
    v3 = v;
    /* Remember odd/even iterations */
    iter = 1;
    /* Step X2. Loop while v3 != 0 */
    while (v3 != 0)
    {
        /* Step X3. Divide and "Subtract" */
        q = u3 / v3;
        t3 = u3 % v3;
        t1 = u1 + q * v1;
        /* Swap */
        u1 = v1; v1 = t1; u3 = v3; v3 = t3;
        iter = -iter;
    }
    /* Make sure u3 = gcd(u,v) == 1 */
    if (u3 != 1)
        return 0;   /* Error: No inverse exists */
    /* Ensure a positive result */
    if (iter < 0)
        inv = v - u1;
    else
        inv = u1;
    return inv;
}

/****************************************************************
| Name: encrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers M, n, k of the equation M^k ≡ r (mod n)
|   Out: nothing
|   
| Returns: r, a number with an RSA encryption on it
\****************************************************************/
unsigned long int encrypt(unsigned long int M, unsigned long int n, unsigned long int k)
{
    return expMod(M, k, n);
}

/****************************************************************
| Name: decrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer r, p, q, j of the equation r^j ≡ M (mod p*q)
|   Out: nothing
|   
| Returns: M, a number that has had the RSA encryption removed
\****************************************************************/
unsigned long int decrypt(unsigned long int r, unsigned long int p, unsigned long int q, unsigned long int j)
{
    return expMod(r, j, (p*q));
}


/****************************************************************
| Name: flip String
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: string and a start and end point
|   Out: string
|   
| Returns: nothing
\****************************************************************/
void flipString(int a[], int start, int end)
{ 
    int* temp = new int[end-start+1];

    int tempStart = start;
    int tempEnd = end;

    while (tempEnd >= start)
    {
        temp[tempEnd] = a[tempStart];

        tempEnd--;
        tempStart++;
    }

    while (start <= end)
    {
        a[start] = temp[start];

        start++;
    }
}
#ifndef broken
/*================================================================
|| 
|| Object: bigInt 
|| 
|| Purpose: a data type to calculate large integers
||      
|| Atributes: 
||
|| Functions:
||      + 
||
\*==============================================================*/
class bigInt
{ 
    public:
        //store of size __ call it __
        bigInt(); 
        bigInt(unsigned int twoToN);

        bigInt(const bigInt& obj);

        ~bigInt(); 

        /* input number */
        /* all in binary for now */
        void value(unsigned long int theNum); //from program
        void value(string fileName); // ./for file, else num
        void value(); //from cin 

        /* output number */
        void print(); //default base 2
        

        /* speed up */
        int confirmLength(); //faster computation
        void resize(); //less memory use

        friend const bigInt operator +(const bigInt &a,
                                       const bigInt &b);
        friend const bigInt operator -(const bigInt &a,
                                       const bigInt &d);
        friend const bigInt operator *(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator /(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator %(const bigInt &a, 
                                       const bigInt &mod);
        friend const int operator %(const bigInt &a, 
                                       const int &mod);
        friend bool operator >=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator ==(const bigInt &a,
                                       const bigInt &b);
        friend bool operator !=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <(const bigInt &a,
                                       const bigInt &b);
        friend bool operator >(const bigInt &a,
                                       const bigInt &b);
        friend bool operator &&(const bigInt &a,
                                       const int &b);

        bigInt& operator =(const bigInt& rhs); 

        

        void complement();

        void setEqualTo(unsigned long int theNum);

        void bitShift(int n);

        char* ascii();

        char* stringNum(); //bugged
        
        unsigned long int ten(); //convert to long unsigned int

        friend void flipString(bool a[], int start, int end);

        friend void changeToBase(int x, int base, 
                                 int string[], int Max);
        friend void changeToBase(bigInt x, int base, 
                                 char string[], int Max);
        
    private:
        int* num; //the number, bool is better
        int length; //the length of storage
        int max; //4096
};



bigInt::bigInt() 
{
    max = 4096;
    num = new bool[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;
}
bigInt::bigInt(unsigned int twoToN)
{
    max = 4096;
  
    if (twoToN <= max)
        length = twoToN;
    else
    {
        cout << "\nerror: change size limit of bigInt\n";
        exit(1);
    } 

    num = new bool[length];

    for (int i = 0 ; i < length ; i++)
        num[i] = 0;
}

bigInt::bigInt(const bigInt& rhs)
{
//  cout << "\ncopy constructor call\n";

    max = rhs.max;
    length = rhs.length;
    num = new bool[length];
    for (int i = 0 ; i < length ; i++)
        num[i] = rhs.num[i];
}

bigInt::~bigInt()
{
//  cout << "\ndeconstructor running\n";
//  cout << "times called: " << timesCalled() << endl;
    
//  delete [] num;
}

bigInt& bigInt::operator =(const bigInt& rhs)
{
    if (this == &rhs)
        return *this;
    

    length = rhs.length;
    max = rhs.max;
    for (int i = 0 ; i < max ; i++)
        num[i] = rhs.num[i];
        
    return *this;
}

//good for smaller values
void bigInt::value(unsigned long int theNum)
{
    max = 4096;
    num = new int[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;

    if (theNum == 1) //common enough to get its own bypass
        num[0] = 1;

    if (theNum == 0)
        num[0] = 0;
        
    //convert base 10 to base 2 array
    changeToBase(theNum, 2, num, 64); //unsigned long int is 2^64

}
void bigInt::value(string fileName)
{
    fstream inData;
    inData.open(fileName.c_str());
    char userInput;
    int userLength = 0;
    while (inData >> userInput)
    {
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = bool(userInput - '0');
            userLength++;
        }
        else 
            break;
        if (userLength > max)
            break;
    } 

    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
    
    inData.close();
}
void bigInt::value()
{
    char userInput;
    int userLength = 0;
    do
    {
        userInput = cin.get();
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = (userInput - '0');
            userLength++;
        }
        if (userLength > 4096)
            break;
    } while (userInput == '1' || userInput == '0');
    
    
    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
}



//save on computation
int bigInt::confirmLength()
{
    int index = max-1;

    while (1)
    {
        if (index == 0) break;
        if (num[index] == 1) break;
        index--;
    }
    length = index + 1; 

    return length;
}
//save on memory
void bigInt::resize()
{
    confirmLength();
    bool* temp = new bool[max];

    for (int i = 0 ; i < length ; i++)
        temp[i] = num[i];

    delete [] num;

    num = new bool[length];
    
    for (int i = 0 ; i < length ; i++)
        num[i] = temp[i];

    delete [] temp;
}


void bigInt::print()
{
    confirmLength();
    for (int i = length-1 ; i >= 0 ; i--)
        cout << num[i];

    cout << endl;
    length = max;
}

void bigInt::setEqualTo(unsigned long int theNum)
{
    for (int i = 0 ; i < length ; i++)
        num[i] = 0;

    int lengthOr64 = (length > 64)?64:length;

    changeToBase(theNum, 2, num, lengthOr64); //unsigned long int is 2^64
}
    

const bigInt operator +(const bigInt &a, const bigInt &b)
{
    bigInt c;

    int shortest = a.max;
    /* save on computaion */
    //int shortest = (a.length > b.length)?b.length:a.length;

    int carry = 0;
    for (int i = 0 ; i < shortest ; i++)
    {
        c.num[i] = (a.num[i] + b.num[i] + carry) % 2;
        if ((a.num[i]+b.num[i]+carry) < 2)
            carry = 0;
        else
            carry = 1;
    }
            
    return c;
}

const bigInt operator -(const bigInt &a, const bigInt &b)
{
    bigInt tempA;
    tempA = a;
    tempA.confirmLength();

    bigInt tempB;
    tempB = b;
    tempB.length = tempA.length;
    tempB.complement();

    tempA = tempA + tempB;

    bigInt one;
    one.value(1);

    tempA = tempA + one;
    
    
    tempA.num[tempA.confirmLength()-1] = 0; //take off last bit

    tempA.length = tempA.max;

    return tempA;
    //what if a > b and b - a?
}

void bigInt::complement()
{
    for (int i = 0 ; i < length ; i++)
        num[i] = num[i] ^ 1;
}
void bigInt::bitShift(int n)
{
    if (n > 0)
    {
        for (int i = length-1 ; i >= 0 ; i--)
            if (1 + n <= max-1)
                num[i+n] = num[i];
        for (int i = 0 ; i < n ; i++)
            num[i] = 0;
    }
    if (n < 0)
    {
        for (int i = 0 ; i < length ; i++)
            if (i+n >= 0)
                num[i+n] = num[i];
        for (int i = length-1 ; i >= max-1-n ; i--)
            num[i] = 0;
    }
}
    

const bigInt operator *(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp + one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator /(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp - one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(-i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator %(const bigInt &a, const bigInt &mod)
{
    bigInt c;
    c = a;

    bigInt one; one.value(1);
    bigInt zero; zero.value(0);

    if ((mod == one) || (mod == zero))
        return zero;

    while (c >= mod)
    {
        c = c - mod; 
    }

    return c;
}
const int operator %(const bigInt &a, const int &mod)
{
    bigInt c;
    c = a;

    bigInt mods;
    mods.value(mod);

    bigInt one; one.value(1);
    bigInt zero; zero.value(0);

    if ((mods == one) || (mods == zero))
        return 0;

    while (c >= mods)
    {
        c = c - mods; 
    }

    return c.ten();
}
bool operator ==(const bigInt &a, const bigInt &b)
{
    if (a.length != b.length)
        return 0;
    
    int i = a.length-1;
    while (1)
    {
        if (a.num[i] != b.num[i])
            return 0;
        if (i == 0)
            break;
        i--;
    } 

    return 1;
}

bool operator !=(const bigInt &a, const bigInt &b)
{
    return !(a == b);
}

bool operator >(const bigInt &a, const bigInt &b)
{
    if (a.length > b.length)
        return 1;

    if (a.length < b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] > b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }
}


bool operator <=(const bigInt &a, const bigInt &b)
{
    return !(a > b);
}

bool operator <(const bigInt &a, const bigInt &b)
{
    if (a.length < b.length)
        return 1;

    if (a.length > b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] < b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }

}

bool operator >=(const bigInt &a, const bigInt &b)
{
    return !(a < b);
}


char* bigInt::ascii()
{
    bigInt temp;

    for (int i = 0 ; i < max ; i++)
        temp.num[i] = num[i];

    char* toReturn = new char[max];

    changeToBase(temp, 256, toReturn, max);

    

    return toReturn;
}


char* bigInt::stringNum()
{
    bigInt temp;

    for (int i = 0 ; i < max ; i++)
        temp.num[i] = num[i];

    char* toReturn = new char[max];

    changeToBase(temp, 10, toReturn, max);

    for (int i = 0 ; i < max ; i++)
        toReturn[i] += '0';

    return toReturn;
}


bool operator &&(const bigInt &a, const int &b)
{
    bigInt zero;
    zero.value(0);
    int positiveLeft;
    if (a > zero)
        positiveLeft = 1;
    if (positiveLeft && (b != 0))
        return 1;
    else
        return 0;
}
        
void changeToBase(bigInt x, int base, char string[], int Max)
{
    for (int i = 0 ; x && i < Max ; i++)
    {
        string[i] = x % base;
        x = x/base;
    }
}

unsigned long int expt(unsigned long int a, unsigned long int b)
{
    unsigned long int c = 1;
    for (int i = 1 ; i <= b; i++)
        c = (c * a); 
    return c;
}


unsigned long int bigInt::ten()
{
    unsigned long int toReturn = 0;
    if (num[0] == 1)
        toReturn = 1;
    int maxLL = 64;
    for (int i = 1 ; i < maxLL ; i++)
    {
        toReturn += num[i] * expt(2, i);
    }
    return toReturn;
}
#endif

/****************************************************************
| Name: lambda
|
| Description: lambda from number theory
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer n
|   Out: nothing
|   
| Returns: lambda(n)
\****************************************************************/
int lambda(int n)
{
    if (n == 1)
        return 1;
    
    
    int maxPrimes = n; 
    //what is the smallest number of primes of n

    int* primearry = new int[maxPrimes];

    for (int i = 0 ; i < maxPrimes ; i++)
        primearry[i] = 0;

    breakIntoPrimes(n, primearry, maxPrimes);

    int Sum = 0;
    for (int i = 0 ; primearry[i] ; i++)
        Sum++;

    return Sum;
    
}


/****************************************************************
| Name: len
|
| description: gets length of string
\****************************************************************/
int len(char* input)
{
    int i = 0;
    while (input[i++] != '\0');

    return i;
}

/****************************************************************
| Name: realHp 
|
| description: actual hp from bethesta games
\****************************************************************/
double realHp(double DR, double hp)
{
    return (hp * 100)/(100 - DR);
}

struct int2
{
    int a;
    int b;
};

/******************************************************************
| parseDice
|
| needs mainlib.cpp
\*****************************************************************/
int2 parseDice (char* argument)
{
    int2 dice; dice.a = 0; dice.b = 0;

    /* copy over before d */
    char* numDice = new char[10]; //10 char is enough
    int i = 0;
    while (argument[i] != 'd')
    {
        numDice[i] = argument[i];
        if (i > 10)
            return dice;
        i++;
    }
    numDice[i+1] = '\0';
    dice.a = stringToInt(numDice);
    
    /* copy over after d */
    i += 1; //skip over d
    int j = 0; //new strt for sideDice
    char* sideDice = new char[10];
    while (argument[i] != '\0')
    {
        sideDice[j] = argument[i];
        if (i > 10)
            return dice;
        i++;
        j++;
    }
    dice.b = stringToInt(sideDice);

    /* return dice */
//    delete [] sideDice;
//    delete [] numDice;
    return dice;
}
    

/******************************************************************
| diceRoll
|
| needs time.h, stdlib.h. 
\*****************************************************************/
int sumDiceRoll(int numberOfDie, int sides)
{
    srand (time(NULL));

    int sum = 0;
    for (int i = 0 ; i < numberOfDie ; i++)
        sum += rand() % sides + 1;

    return sum;
}

/******************************************************************
| base 10
|
| assumes NULL terminated c string
\*****************************************************************/
int base10(char* string, int base)
{
    // make token space
    int tokens = len(string);
    int** token = new int*[tokens];
    for (int i = 0 ; i < tokens ; i++)
        token[i] = new int[int(log10(base))];

    // clean token space
    for (int i = 0 ; i < tokens ; i++)
        for (int j = 0 ; j < int(log10(base))+1 ; j++)
            token[i][j] = 0;

    for (int i = 0 ; string[0] ; i++)
    {
        
    }
}
        

/****************************************************************
| Name: 
|    
| Precodition: 
| Postcondition: 
|
| Parameters:
|       
|   IN: 
|   Out: 
|   
| Returns: 
\****************************************************************/

//an attempt at algebra without using b-trees
//include <stdlib.h>
//include <iostream>
 

class algebra
{
public:
    void procedure1(char a[]);
    void cleanAll(); 
    void trackSymbols(char a[]);
    void pairParen();
    void pairMP();
    void removeSpace(char a[]);
    void distribute(char a[]);

private:
    int maxLocation; //set to 5 in cleanAll

    //location arrays
    int paren1[5];
    int paren2[5];
    int plus[5];
    int minus[5];
    int times[5];
    int div[5];
    int exp[5];

    int parenPair[5][2];
    int morp[10];
    //length of location arrays
    int p1;
    int p2;
    int pl;
    int mi;
    int ti;
    int di;
    int ex;
    int pairp;
};

int test()
{
    char arry[] = "  -(5 + a + b - 55) - (5)";
    algebra e;
    cout << arry << endl;
    
    e.removeSpace(arry);
    
    cout << arry << endl;
    
    e.distribute(arry);

    cout << arry << endl;
    return 0;
}

void algebra::trackSymbols(char a[])
{
    cleanAll();
    for (int i = 0; a[i] ; i++)
    {
        if (a[i] == '(')
            if (p1 < maxLocation)
                paren1[p1++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == ')')
            if (p2 < maxLocation)
                paren2[p2++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == '+')
            if (pl < maxLocation)
                plus[pl++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == '-')
            if (mi < maxLocation)
                minus[mi++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == '*')
            if (ti < maxLocation)
                times[ti++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == '/')
            if (di < maxLocation)
                div[di++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
        else if (a[i] == '^')
            if (ex < maxLocation)
                exp[ex++] = i;
            else
            {
                cout << "\nError: symbol overload\n";
                exit(1);
            }
    }
    pairParen();
    pairMP();
}

void algebra::cleanAll()
{
    maxLocation = 5;
    for (int i = 0 ; i < 5 ; i++)
        paren1[i] = 
        paren2[i] =
        plus[i] = 
        minus[i] = 
        times[i] =
        div[i] =
        exp[i] = -1;
    for (int j = 0 ; j < 2 ; j++)
        for (int i = 0 ; i < 5 ; i++)
            parenPair[i][j] = -1;
    for (int i = 0 ; i < 10 ; i++)
        morp[i] = -1;
    p1 = p2 = pl = mi = ti = di = ex = 0;
    pairp = 0;
}

void algebra::pairParen()
{
    for (int i = 0 ; i < maxLocation ; i++)
    {
        if (paren1[i] != -1 && paren2[i] != -1)
            if (paren1[i] < paren2[i])
            {
                parenPair[i][0] = paren1[i];
                parenPair[i][1] = paren2[i];
                pairp++;
            }
            else
            {
                cout << "Error: mismatched parens";
                exit(1);
            }
    }
}

void algebra::pairMP()
{
    for (int i = 0, j = 1; i < 2*maxLocation && j == 1 ; i++)
    {
        j--;
        if (plus[i] != -1)
        {
            morp[i] = plus[i];
            j++;
        }
        else if (minus[i] != -1)
        {
            morp[i] = minus[i];
            j++;
        }
    }
}

void algebra::removeSpace(char a[])
{
    for (int i = 0 ; a[i] ; i++)
        if (a[i] == ' ')
        { 
            for (int j = i ; a[j] ; j++)
                a[j] = a[j+1];
            i--;
        }
}


void algebra::procedure1(char a[])
{
    removeSpace(a);
    trackSymbols(a);
}

void algebra::distribute(char a[])
{
    removeSpace(a);
    trackSymbols(a);
    //-(a+b) --> a-b
    for (int i = 0 ; i < maxLocation ; i++)
    {
        if (minus[i] == parenPair[i][0] - 1)
        {
            for (int j = parenPair[i][0]-1 ; 
                     j < parenPair[i][1] ; j++)
            {
                if (a[j] == '-') a[j] = '+';
                else if (a[j] == '+') a[j] = '-';
            }
            for (int j = parenPair[i][0] ; a[j] ; j++)
                a[j] = a[j+1]; 
            for (int j = parenPair[i][1]-1 ; a[j-1] ; j++)
                a[j] = a[j+1]; 
            for (int j = 0 ; a[j] ; j++)
            {
                a[j] = a[j+1];
            }
            i--;
        }
        trackSymbols(a);
    }
/*
        for (int i = paren1[0] ; i < size-1 ; i++)
        {
            a[i] = a[i+1];
        }
        a[paren2[0]] = 0;
        for (int i = size-1 ; i >= plus[0] ; i--)
        {
            a[i] = a[i-1];
        }
        a[plus[0]] = ' ';
        a[plus[0]+1] = lead[0];
*/
}

int average_roll(int argc, char* argv[])
{
    int sum = 0;
    int2 dice;
    int totalDice = 0;

    for (int i = 1 ; i < argc ; i++)
    {
        dice = parseDice(argv[i]); 
        sum += sumDiceRoll(dice.a, dice.b);
        totalDice += dice.a;
    }
    double average = double(sum)/totalDice;

    printf("%f\n", average);
    
    return 0;
}
/*
    a function that takes a 2d vector and rotates it

    Created by: Jordan Winkler
*/

//something is wrong with the math

#define debug

//include <iostream>
//include <math.h>
 
 

int ChooseTransform(int UserInput);

struct twoVector
{
    double a;
    double b;
};

twoVector transform(twoVector a, double pi);

int twoDtransform(int argc, char* argv[])
{
    if (argc != 4)
	{
	   cout << "2dTransform [a] [b] [pi]\n";
	   return 0;
	}

    double a = stringToFloat(argv[1]);
	double b = stringToFloat(argv[2]);
	double pi = stringToFloat(argv[2]);
#ifdef debug
    cout << a << b << pi << endl;
#endif
    twoVector num;
    num.a = a;
    num.b = b;
    twoVector toOut = transform(num, pi);

    cout << toOut.a << ' ' << toOut.b << endl;

    return 0;
}

twoVector transform(twoVector a, double pi)
{
    double TranformMatrix[2][2] = {{cos(pi),-sin(pi)}
				  ,{sin(pi),cos(pi)}};

    double InputVector[2];
    double OutputVector[2];

    InputVector[0] = a.a;
    InputVector[1] = a.b;

    OutputVector[0] = TranformMatrix[0][0]*InputVector[0]  //problem maybe here?
	 	+ TranformMatrix[1][0]*InputVector[1];
    OutputVector[1] = TranformMatrix[0][1]*InputVector[0] 
		+ TranformMatrix[1][1]*InputVector[1];

    a.a = OutputVector[0];
    a.b = OutputVector[1];

    return a;
}


int isprime_test()
{
    for (int i = 1 ; i < 1000 ; i++)
    {
        if(isPrime(i))
            if(isPrime(2*i+1))
                cout << 2*i + 1 << endl;
    }
    return 0;
}
// tells age of something
// could be imporved to include new years day
// and automatically get current date

//include <iostream>
//include <math.h>
 


int age_test() 
{

    enum MonthLength {JAN_LENGTH = 31, FEB_LENGTH = 28, MAR_LENGTH = 31,
    APR_LENGTH = 30, MAY_LENGTH = 31, JUN_LENGTH = 30, JUL_LENGTH = 31, 
    AUG_LENGTH = 31, SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30, 
    DEC_LENGTH = 31};

    int yearToday, monthToday, dayToday, yearBirth, monthBirth, dayBirth;
    int mToday, mBirth, difDay, difYear;


    cout << "What is today's date? (year, month, day) \n";
    cin >> yearToday >> monthToday >> dayToday;
    cout << yearToday << "/" << monthToday << "/" << dayToday << endl;
    cout << "Date in the past? \n";
    cin >> yearBirth >> monthBirth >> dayBirth;
    cout << yearBirth << "/" << monthBirth << "/" << dayBirth << endl;
    
    switch ( 7 /*monthToday*/)
    {
        case 12: mToday += DEC_LENGTH;
        case 11: mToday += NOV_LENGTH;
        case 10: mToday += OCT_LENGTH;
        case 9: mToday += SEP_LENGTH;
        case 8: mToday += AUG_LENGTH;
        case 7: mToday += JUL_LENGTH;
        case 6: mToday += JUN_LENGTH;
        case 5: mToday += MAY_LENGTH;
        case 4: mToday += APR_LENGTH;
        case 3: mToday += MAR_LENGTH;
        case 2: mToday += FEB_LENGTH;
        case 1: mToday += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }        
    switch (monthBirth)
    {
        case 12: mBirth += DEC_LENGTH;
        case 11: mBirth += NOV_LENGTH;
        case 10: mBirth += OCT_LENGTH;
        case 9: mBirth += SEP_LENGTH;
        case 8: mBirth += AUG_LENGTH;
        case 7: mBirth += JUL_LENGTH;
        case 6: mBirth += JUN_LENGTH;
        case 5: mBirth += MAY_LENGTH;
        case 4: mBirth += APR_LENGTH;
        case 3: mBirth += MAR_LENGTH;
        case 2: mBirth += FEB_LENGTH;
        case 1: mBirth += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }
    
    difDay = (365*yearToday+mToday+dayToday)
           - (365*yearBirth+mBirth+dayBirth);
    difYear = difDay/365;
    cout << "That was this long ago\n" 
         << "Days: " << difDay << endl 
         << "Years: "<< difYear << " plus days: " 
         << difDay % 365 << endl;
    
    
    return 0;
}
// generic base converter


int change_to_base_implement(int argc, char** argv)
{
    if (argc != 4)
    {
        cout << "base2base [number] [starting base] [target base]\n";
        return 1;
    }

    int start_base = stringToPosInt(argv[2]);
    int target_base = stringToPosInt(argv[3]);

    // change all bases to base 10
    if (start_base != 10)
    {
        // convert each term
        cout << "stub";
        return 1;
    }


    int number = stringToInt(argv[1]);
    
    // change base 10 to sugested base
    int target_num_len = 64;
    int* target_num = new int[target_num_len]; // sloppy max
    for (int i = 0 ; i < target_num_len ; i++)
        target_num[i] = 0;

    changeToBase(number, target_base, target_num, target_num_len);

    // flip and clip 0s
    while (target_num[target_num_len-1] == 0)
        target_num_len--; 

    flipString(target_num, 0, target_num_len-1);


    // print number
    for (int i = 0 ; i < target_num_len ; i++)
        cout << target_num[i] << ' ';
    cout << endl;

    return 0;
}

class InVal
{
public:
    void PrintAsBase(int base);
    InVal();
    void init_val(int, int);

private:
    int num;
    int base;		
};

int base_change_pretty(int argc, char** argv)
{
	InVal num_c;
	
    if (argc != 3)
    {
        cout << "baseconvert [number] [base]\n";
        return 1;
    }
	int num = stringToInt(argv[1]); // number to convert
	int base = stringToInt(argv[2]); // number to convert


	if (base < 2 || base > 25) //to lengthen base
	{
		cout << "You have entered a base that is outside of\n"
		     << "the valid range.\n\n";
		return 1;
	}

	num_c.init_val(num,10);

	num_c.PrintAsBase(base);
}

InVal::InVal()
{
	num = base = 0;
}

void InVal::init_val(int in_num, int in_base)
{
	num = in_num;
	base = in_base;
}

void InVal::PrintAsBase(int out_base)
{
	string digits("0123456789ABCDEFGHIJKLMNO"); //to lengthen base
	string result;
	int in_num = num;
	int in_base = out_base;

	for (; in_num; in_num /= in_base) //the number theory bit
	{
		result.insert(result.begin(), digits[abs(in_num % in_base)]);
	}

	if (num < 0)
	{
		result.insert(result.begin(), '-');
	}

	cout << result << '\n';

}


int bottles_of_beer()
{
    int bottlesOfBeer;
    cout << "How many bottles of beer do we have? ";
    cin >> bottlesOfBeer;
    for (int i = bottlesOfBeer ; i > 0 ; i--)
    {
        cout << i << " bottles of beer on the wall, "
             << i << " bottles of beer.. \n"
             << "Take one down, pass it around, "
             << i - 1 << " bottles of beer on the wall.\n\n";
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, " << bottlesOfBeer 
         << " bottles of beer on the wall.\n";
    return 0; 
}

static double f (double x)
{
  return (x-0.5)*(x-0.5);
}

double bisection (double start, double stop, int iterations)
{
  double mid = (start+stop)/2;
  if (iterations == 0) return mid;
  
  if (f(start) > 0) 
      if (f(mid) > 0)
    	return bisection(mid, stop, iterations-1);
      else if (f(mid) < 0)
    	return bisection(start, mid, iterations-1);
      else if (f(mid) == 0)
    	return mid;
  if (f(start) < 0) 
      if (f(mid) < 0)
    	return bisection(mid, stop, iterations-1);
      else if (f(mid) > 0)
    	return bisection(start, mid, iterations-1);
      else if (f(mid) == 0)
    	return mid;
}
	




int break_into_prime_driver(int argc, char** argv)
{

    if (argc != 2)
    {
        cout << "breakIntoPrimes [n]\n";
        return 1;
    }

    const int MAX = 50;
    int prim[MAX] = {0};

    int CompositeNumber = stringToInt(argv[1]);
    breakIntoPrimes(CompositeNumber, prim, MAX);

    for (int i = 0 ; i < MAX ; i++)
        if (prim[i] != 0)
            cout << prim[i] << ' ';

    cout << endl;

    return 0;
}
//made by: Jordan Winkler
//Enter sentence that you would like to encrypt into the 
//command line after the function call.

//include <iostream>
 

char caesarCipher(char letter, int displacement);

int caesarCipher_implementation(int argc, char* argv[])
{
    cout << "Starting phrase: ";
    for (int i = 1 ; i < argc ; i++)
        cout << argv[i] << ' ';
    cout << endl;

    cout << "Caesar cipher:   ";
    int j;
    for (int i = 1 ; i < argc ; i++)
    {
        j = 0;
        while (argv[i][j]) 
        { 
            cout << caesarCipher(argv[i][j], argc-1);
            j++;
        }
        cout << ' ' ;
    }
    cout << endl;

    return 0;

}

char caesarCipher(char letter, int displacement)
{
    if (letter >= 'a' && letter <= 'z')
        return (letter - 'a' + displacement) % 26 + 'a';
    if (letter >= 'A' && letter <= 'Z')
        return (letter - 'A' + displacement) % 26 + 'A';
    else return letter;
}


int calc_dr(int argc, char* argv[]) 
{
    if (argc != 3)
	{
        cout << "calcDR [DR] [hp]\n";
        return 1;
	}
    double DR = stringToFloat(argv[1]);
    double hp = stringToFloat(argv[2]);

    cout << "Your actual hp is " << realHp(DR,hp) << endl;
    return 0;
}
//a program to count the number of each character type in a file

int count_number_in_file()
{
    const int ARRAY_SIZE = 10000;
    char A[ARRAY_SIZE+1] = {0};
    char Bucket;
    fstream data;
    cout << "Enter the name of the file you wish to scan "; //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    data.open(UserInput.c_str());
    int i = 0;
    while (data >> Bucket)
    {
	A[i++] = Bucket;	
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
    cout << A[j] << ' ';
    cout << endl;
	*/
    int Max = i; char Temp; //bubble sort algorithm
    for (int k = 0 ; k < i; k++)
    {
        for (int h = 0 ; h < Max ; h++)
        {
	    if (A[h] > A[h+1])
	    {
		Temp = A[h];
		A[h] = A[h+1];
		A[h+1] = Temp;
	    }
	}
	Max--;
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
        cout << A[j] << ' ';
    cout << endl;
	*/

    const int CharLength = 255;
    int Char[CharLength+1] = {0};
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
	    if (A[j] == k)
		Char[k]++;
    for (int j = 'a'; j <= 'z' ; j++)
	cout << (char) j << "; " << Char[j]+Char[(j-'a')+'A'] << endl;
    return 0;
}
//a program to count the number of each character type in a file
// input is file name 


int charStat (int argc, char** argv)
{

    // if incorrect input, display error message
    if (argc != 2)
    {
        cout << "charStat [filename]\n";
        return 1;
    }
        
    // get size of file, manually
    fstream data;
    data.open(argv[1]);
    int i = 0;
    char Bucket; // something to stick data in
    while (data >> Bucket) i++;
    data.close();

    // read in data
    data.open(argv[1]);
    char* A = new char[i+2];
    while (data >> A[i++]);
   
    // sort data
    quickSort(A, 0, i);

    // count the amount of characters of each type
    const int CharLength = 255;
    int Char[CharLength+1]; 
    for (int k = 0 ; k < CharLength ; k++)
        Char[k] = 0;
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
            if (A[j] == k)
                Char[k]++;

    // only display alphabet as default
    for (int j = 'a'; j <= 'z' ; j++)
        cout << char(j) << ": " 
             << Char[j]+Char[(j-'a')+'A'] 
             << endl; 

    return 0;
}

//include <gmp.h>

int gmp_test()
{
    cout << "c++ version: ";
    cout << __cplusplus << endl;

    cout << "gmp version: ";
    //cout << __GNU_MP_VERSION << endl;

    return 0;
}

int choose_driver(int argc, char* argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    cout << choose(a, b) << endl;

    return 0;
}
//include <iostream>
//include <string>
//include <fstream>
//include <stdlib.h>
 

int getIntData(string FileName, int a[], int size);

int compareArrays(int a[], int b[], int size);

int compare_size_driver()
{
    const int MAX_SIZE = 10000;
    int List1[MAX_SIZE] = {0};
    int List2[MAX_SIZE] = {0};

    fstream InData;
    InData.open("primeList");

    int FileSize1 = 0;
    while (InData >> List1[FileSize1++]);
    
    InData.close();

    InData.open("primeList2");

    int FileSize2 = 0;
    while (InData >> List2[FileSize2++]);
    
    InData.close();


    cout << "Size of list 1: " << FileSize1 << endl
         << "Size of list 2: " << FileSize2 << endl;

    cout << "not equal at: "
         << compareArrays(List1, List2, 
            (FileSize1>FileSize2)?FileSize1:FileSize2);
    
    return 0;
}
/*
int getIntData(string FileName, int a[], int size)
{
    fstream InData;
    InData.open(FileName);

    int FileSize = 0;
    while (InData >> a[FileSize]);
    
    InData.close();

    return FileSize;
}
*/
int compareArrays(int a[], int b[], int size)
{
    for (int i = 0 ; i < size ; i++)
        if (a[i] != b[i])
            return i;
    
    return -1;
}
//include <stdlib.h>
//include <iostream>
 


int set_precision_driver() 
{
   
    cout.setf(ios::fixed);      // This is a super useful block of code
    cout.setf(ios::showpoint);  // It will be covered more in chapter 12
    cout.precision(2);          //
    
	double c;
    c = 1/3.0;
    cout << c;
    return 0;
}

int give_cpp_version()
{
    cout << __cplusplus << endl;

    return 0;
}

    


int hello_world()
{

    printf("%s", "hello World of C!\n");

    return 0;
}
/*
    Old code, has many useful things in it

*/

//include <fstream>
 

void setDecimalPlace(int a); //'a' should be a positive number
void sort(double a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <= ... a[numberUsed - 1].
void swapValues(double& v1, double& v2);
//Interchanges the values of v1 and v2.
int indexOfSmallest(const double a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the
//values a[startIndex], a[startIndex + 1], ..., a[numberUsed - 1].

int wrap1()
{
    fstream data;
    const int ARRAY_SIZE = 100;
    double x[ARRAY_SIZE], z[ARRAY_SIZE];
    double bucket = 0;
    double bucket2 = 0;
    int i = 0;
    double a,b,e;
    
    data.open(
    "/home/jordan/Documents/math learned so far");
    while (data >> bucket) //grab data
    {
        x[i] = bucket;
        i++;
    }
    cout << "Data has " << i << " objects. \n\n";
    /* for (int n = 0 ; n < i ; n++) //to print data
    {
        cout << x[n] << " ";
    } */ 
    bucket = 0;
    for (int n = 0 ; n < i ; n++)
    {
        bucket += x[n];
    }
    double hrWeek = bucket/i;
    double hrDay = bucket/i * (1/7.0);
    double percentLife = bucket/(i*7*24);
    double percentAwake = bucket/(i*7*10);
    double percentQuota = bucket/(i*49);
    for (int j = 0 ; j <= i ; j++) {z[j] = pow ((bucket2-x[j]), 2);};
    for (int j = 0 ; j <= i ; j++) {bucket2 += z[j];}; //st dev
    double standardDev = pow (bucket2/i, (1/2.0));
    double tempArray[i];
    for (int j = 0 ; j <= i ; j++) {
        tempArray[j] = x[j];
    }
    sort(tempArray, i); //median, skew
    double zScore = (hrWeek-tempArray[i])/standardDev;
    
    double averageX = ((i*(i+1))/2.0)/i;
    bucket2 = 0;
    double bucket3 = 0;
    for (int j = 0; j <= i; j++)
    {
        bucket2 += ((j+1)-averageX)*(x[j]-hrWeek);
    }
    for (int j = 0 ; j <= i ; j++)
    {
        bucket3 += pow(((j+1)- averageX),2);
    }
    b = bucket2/bucket3;
    a = hrWeek - (b*averageX);
    double trend = (b*70)+a;
    
    double quotaSoft = ((45*16) - bucket)/86;
    string winEasy, winHard;
    if (trend <= quotaSoft)
        winEasy = "very close";
    else winEasy = "yep";
    double quotaHard = 45;
    if (trend <= quotaHard)
        winHard = "Oh God no. lol";
    else winHard = "yep";
    setDecimalPlace(2);
    cout<< "Total hours spent on studies: " << bucket << endl
        << "Hours per week: " << hrWeek << endl
        << "Hours per day: " << hrDay << endl
        << "High score (for hrs): " << tempArray[i-1] << endl
        << "Proportion of last " << i << " weeks spent on this project: " 
        << percentLife << endl
        << "Proportion of waking hours: " << percentAwake << endl
        << "Proportion of a more realistic quota: " << percentQuota << "\n\n"
        << "Standard deviation: " << standardDev << endl
        << "Median: " << tempArray[i/2] << endl; //median-1 instead of true med for odd
    setDecimalPlace(4);
    cout<< "Skew: " << (hrWeek - tempArray[i/2])/standardDev << endl;
    setDecimalPlace(2);
    cout<< "Last week's Z Score (std devs from mean): " << zScore << endl
        << "Linear regression: y = " << b << " x + " << a << endl
        << "Assuming trend continues, am I on target for fall? "
        << winEasy << endl
        << "Am I meeting the ideal? " << winHard << endl;
    data.close();
    return 0;
}

void sort (double a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
        indexOfNextSmallest = 
                indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
        //a[0] <= a[1] <= ... <= a[index] are the smallest of the
        //original array elements. The rest of the
        //elements are in the remaining positions.
    }
}
void swapValues(double& v1, double& v2)
{
    double temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
int indexOfSmallest(const double a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], 
            indexOfMin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }
    return indexOfMin;
}
void setDecimalPlace(int a)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(a);
}
//include <iostream>

 

int class_code()
{
    class lol
    {
    public:
    const int a = 5;
    };

    lol cat;

    return 0;
}

//include <stdio.h>
//include <stdlib.h>
//include <time.h>

int dnd_dice_roll(int argc, char* argv[])
{
    int sum = 0;
    int2 dice;
    
    for (int i = 1 ; i < argc ; i++)
    {
        dice = parseDice(argv[i]); 
        sum += sumDiceRoll(dice.a, dice.b);
    }
    printf("%d\n", sum);
    
    return 0;
}

 

struct dll
{
    char symbol;
    dll* prev;
    dll* next;
};

dll* add_head_ll();


/****************************************************************
| Name: add_head()
|    
| Precodition: 
| Postcondition: 
|
| Parameters:
|       
|   IN: 
|   Out: 
|   
| Returns: 
\****************************************************************/
dll* add_head_ll()
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;
	return head;
}

int add_char(dll* object);
int del_char(dll* object);
	

int wrap2 ()
{
    dll* head = add_head_ll();
    

	return 0;
}
//prints what are called euclidean numbers
//by: Jordan Winkler
 

int wrap3()
{
    cout << "nth Euclid number -> ";
    int UserInput;
    cin >> UserInput;

    long int Enum = 1;
    for (int i = 1, max = 2; i <= UserInput ; max++)
    {
        if(isPrime(max))
        {
            Enum *= max;
            i++;
        }
        if(max == 10000)
        {
            cout << "error: maxed\n";
            break;
        }
    }
    Enum++;
    
    cout << Enum << endl;

    return 0;
}
// C++ style feedback loop

//include <iostream>
//include <string>
 

int wrap4()
{
    string thing;
    cout << "type something: ";
    cin >> thing;

    
    if (not cin.good())
    {
        cout << "You had one job!\n";
        return false;
    }
    
    cout << thing << " your face.\n";

    return true;
}
//made by: Jordan Winkler
//License: GNU Public Licence

// really pointless without mpc library


int wrap5(int argc, char* argv[])
{
    if (argc != 2)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);

    cout << factorial(a) << endl;

    return 0;
}
//include <iostream>
//include <fstream>
//include <string>

 

int wrap6()
{
    cout << "give a name of a file to write to\n";
    string input;
    cin >> input;

    cout << input << endl;

    ofstream fout(input);
    if (fout.good())
        cout << "printing\n";

    fout << "lolcat lolcat\n";

    fout.close();
//////////////////////////////////////////////////////////////////

    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];
    while (!fin.eof() && fin.good()) //ignores whitespace, does not write in eof
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}
// useless

//include <iostream>
//include <fstream>
//include <string>
//include <math.h>
 


int wrap7() 
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
//include <iostream>
//include <fstream>

 

int wrap8()
{

// example writing to file
    cout << "give a name of a file to write to\n";
    string input;
    cin >> input;

    cout << input << endl;

    ofstream fout(input);
    if (fout.good())
        cout << "printing\n";

    fout << "lolcat lolcat\n";

    fout.close();
//////////////////////////////////////////////////////////////////

// example reading from file
    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];

    int fileSize = 0;
    while (!fin.eof() && fin.good()) fileSize++;

    
    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}
// testing cin
//include <iostream>


int wrap9()
{
    char a;
    std::cin >> a;
    return 0;
}
//a small text based game to test classes in c++

//include <iostream>
 

class creature
{
public:
	creature(int hpValue, int hungerValue);
	creature(int hpValue, int hungerValue, bool unkillable);
	
	bool dead;
	void status();
	void takeDamage(int damage);
private:
	int hp;
	int hunger;
	int attackPower;
	bool necromanced;
	void StartStatus();
};

void Part1();

int wrap10()
{
	Part1();
	return 0;
}

creature::creature(int hpValue, int hungerValue) 
	: hp(hpValue), hunger(hungerValue), necromanced(0)
{
	StartStatus();
}
creature::creature(int hpValue, int hungerValue, bool unkillable)
	: hp(hpValue), hunger(hungerValue), necromanced(unkillable)
{
	StartStatus();
}

void creature::StartStatus()
{
	if (hp < 0 && !necromanced)
	{
		cout << "stillborn error\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "negative food error\n"; 
		hunger = 0;
	}
}
void creature::status()
{
	if (hp < 0 && !necromanced)
	{
		cout << "creature is dead\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "creature needs food\n";
		hp -= 5;
	}
}

void creature::takeDamage(int damage)
{
	hp -= damage;
}

void Part1()
{
	creature Hero(100, 30), AngryCat(10, 30);
	cout << "Welcome hero! \nYou appear in a forest. There is a monster.\n";
	while (!AngryCat.dead) //computer doesn't know of angry cat?
	{
		cout << "Attack? y/n\n";
		char Attack = cin.get();
		if (Attack == 'y')
			AngryCat.takeDamage(5);
		else 
		{
			cout << "Monster takes advantage\n";
			Hero.takeDamage(5);
		}
		Hero.takeDamage(1);
		AngryCat.status();
		Hero.status();
		cin.ignore();
	}
}
// seems bugged 


int wrap11(int argc, char* argv[])
{
    
    if (0)//argc != 2)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    gcdLong(a,b);
//    cout << gcd(a,b) << endl;

    return 0;
}
/*
    old program, may have some useful parts

*/

//include <iostream>
//include <fstream>
//include <string>
//include <math.h>
 

int wrap12() 
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
// gives random greetings

//include <iostream>
//include <cstdlib>
 

int wrap13()
{
    int greetings;
    cout << "How many greetings do you want? ";
    cin >> greetings;
    
    for (int i = 0; i < greetings; i++) 
    {
        string h;
        switch (rand() % 6 + 1) 
        {
            case 1: h = "hello, "; break;
            case 2: h = "good day, "; break;
            case 3: h = "guten tag, "; break;
            case 4: h = "greetings, "; break;
            case 5: h = "I come in peace, "; break;
            case 6: h = "Live long and prosper, "; break;
        }
        cout << h;
    };
    cout << "\nhave a good rest of your day :)\n";
    
    return 0;
}
//first insertion sort
//made by: Jordan Winkler
//made on: 06/05/2017

//include <iostream>
//include <time.h>
//include <stdlib.h>
 

void swap(int* array, int a, int b, int maxSize);


int wrap14()
{
    srand(time(NULL));

    int max = 20;

    int* array = new int[max];

    for (int i = 0 ; i < max ; i++)
        array[i] = rand() % 250;

    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    //insert sort
    for (int outside = 0 ; outside < max ; outside++)
        for (int i = outside ; i > 0 ; i--)
        {
            if (array[i-1] > array[i])
                swap(array, i-1, i, max);
        }
    
    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    return 0;
}

void swap(int* array, int a, int b, int maxSize)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}
// name:     Jordan Winkler
// date:     2/10/2017
// homework: 2
// process:  creates a structure that can hold an ID number and
//           a first and last name. Then generates unique IDs,
//           assigns names from a file, sorts ascending by IDs,
//           and allows binary searching for name by ID.
//           (optional) saves data to a file of choice

//include <iostream>
//include <stdlib.h> //for random functions, exit()
//include <fstream> //for reading names
//include <time.h> //for random seed
//include <string>
 

struct id
{
    int IDnumber;
    char FirstName[20];
    char LastName[20];
};

int getNameNSize(string &File);

void GiveID(id names[], int Max);

int Unique(int num, id names[], int Max);

void AssignNames(id names[], int Max, string File);

void QuickSort(id names[], int left, int right);

int binarySearch(int target, id names[], int Size);

int getInt();

void PrintNames(id names[], int Max);

void SaveToFile(id names[], int Max);

int wrap15()
{
    string FileName;
    int MaxNum = getNameNSize(FileName);
    id *MyNames = new id[MaxNum]; 

    GiveID(MyNames, MaxNum);

    AssignNames(MyNames, MaxNum, FileName);
    
    cout << "pre-sort:\n";
    PrintNames(MyNames, MaxNum);

    QuickSort(MyNames, 0, MaxNum-1);
    
    cout << "\npost-sort:\n";
    PrintNames(MyNames, MaxNum);
    
    cout << "\nsample ID: " << MyNames[3].IDnumber << endl;

    cout << "\nEnter an ID number less than 10k. (0 to quit)\n";

    int UserInput = getInt(); //my own function for easier control
                              //of input
    int PersonPlace;          //Location of person in array
    while (UserInput)
    {
        PersonPlace = 
            binarySearch(UserInput, MyNames, MaxNum);
        if (PersonPlace < MaxNum)
            cout << "\nID: " << MyNames[PersonPlace].IDnumber
                 << "\nFirst Name: " 
                 << MyNames[PersonPlace].FirstName
                 << "\nLast Name:  " 
                 << MyNames[PersonPlace].LastName
                 << "\nLocation:   " 
                 << PersonPlace << endl;
        else
            cout << "\nError: Not Found\n";
        
        cout << "\nEnter an ID number less than 10k. "
             << "(0 to quit)\n";

        UserInput = getInt(); 
    }
/*  
    cout << "Save? (1/0) "; //for quicker search in other programs
    cin.ignore(); //clean out \n
    char UserInput2 = cin.get();
    if (UserInput2 == '1') SaveToFile(MyNames, MaxNum);
*/
    delete [] MyNames;
    return 0;
}


/*****************************************************************
| Name: getNamesNSize
|    
| Precodition: a file to read 1k > names from, names separated by
|              a space
| Postcondition: The number of (first, last) names, name of file
|                for other programs
|
| Parameters:
|       
|   IN: String called File
|   Out: That same string
|   
| Returns: int size of ordered pairs (first, last)
\*****************************************************************/
int getNameNSize(string &File)
{
	fstream InData;
//  File = "FantasyNames"; //for debugging

    cout << "Enter the name of the file you wish to scan: "; 
    getline(cin, File);
    InData.open(File.c_str());

    int i = 0;
    char word[20];
    while (InData >> word)
    {
        i++;
        if (i > 2000)
        {
            cout << "\nError: file too large\n";
            exit(1);
        }
    }
    InData.close();

    if (i > 2)
        return (i)/2; 
    else 
    {
        cout << "\nError: file too small\n";
        exit(1);
    }
}           
    

/*****************************************************************
| Name: GiveID
|    
| Precodition: an array of type id and its size
| Postcondition: unique id numbers for each element
|
| Parameters:
|       
|   IN: location of array of type id and int size of id array
|   Out: nothing
|   
| Returns: nothing
\*****************************************************************/
void GiveID(id names[], int Max)
{
    srand (time(NULL));  //time() is an easy way to create a 
                         //random seed between program calls
    int theID;
    for (int i = 0 ; i < Max ; i++)
    {
        do
        {   
            /* Unique() inf loops at < Max*Max */
            theID = int(rand() % (Max*Max)) + 1; 
        } while (!Unique(theID, names, i)); 
        names[i].IDnumber = theID;
    }
}

/*****************************************************************
| Name: Unique
|    
| Precodition: an array of type id and its size, an int to
|              test
| Postcondition: confirmation if the int is unique to the array
|
| Parameters:
|       
|   IN: location of an array of type id and its int size, 
|       and an interger to check
|   Out: Nothing
|   
| Returns: 1 or 0 if the number is unique
\*****************************************************************/
int Unique(int num, id names[], int numLocation)
{
    if (numLocation == 0) return 1;
    for (int i = 0 ; i < numLocation ; i++)
        if (num == names[i].IDnumber)
            return 0;
    return 1;
}

/*****************************************************************
| Name: AssignNames
|    
| Precodition: a file named "FantayNames" to read, an array of 
|              type id and its size
| Postcondition: The same array filled with first and last names
|
| Parameters:
|       
|   IN: the location of an array of id structures, and int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void AssignNames(id names[], int Max, string File)
{
    fstream InData;
    InData.open(File.c_str());
    for (int i = 0 ; i < Max ; i++)
    {
        InData >> names[i].FirstName;
        InData >> names[i].LastName;
    }
    InData.close();
}

/*****************************************************************
| Name: QuickSort
|    
| Precodition: an id array, and information on the begining and 
|              end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: location of id array, int for start and end
|   Out: nothing
|   
| Returns: nothing
\*****************************************************************/
void QuickSort(id names[], int left, int right) {
      int i = left, j = right;
      id tmp;
      int pivot = names[(left + right) / 2].IDnumber;
 
      /* partition */
      while (i <= j) {
            while (names[i].IDnumber < pivot)
                  i++;
            while (names[j].IDnumber > pivot)
                  j--;
            if (i <= j) {
                  tmp = names[i];
                  names[i] = names[j];
                  names[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            QuickSort(names, left, j);
      if (i < right)
            QuickSort(names, i, right);
}

/*****************************************************************
| Name: binarySearch
|    
| Precodition: An id array that has been sorted and
|              something to look for
| Postcondition: The location of that thing in an array
|
| Parameters:
|       
|   IN: integers of the size and thing to find, id array
|   Out: the same array
|   
| Returns: int location of requested thing
\*****************************************************************/
int binarySearch(int target, id names[], int Size)
{
    int lo = 0, hi = Size, i;
    
    while (lo <= hi)
    {
        i = (lo + hi)/2;
        if (names[i].IDnumber == target) return i;
        if (names[i].IDnumber < target)
        /* change return if looking for multiple items */
            lo = i + 1;
        else
            hi = i - 1;
    }
    return Size;
}


/*****************************************************************
| Name: PrintNames
|    
| Precodition: an array of type id and its array size
| Postcondition: the contents of the id array are cout
|
| Parameters:
|       
|   IN: location of id array and its int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void PrintNames(id names[], int Max)
{
    for (int i = 0 ; i < Max ; i++)
    {
        cout << names[i].IDnumber << ' '
             << names[i].FirstName << ' '
             << names[i].LastName << '\n';
    }
}

/*****************************************************************
| Name: SaveToFile
|    
| Precodition: an array of id struct and a max size
| Postcondition: the array of id struct is saved to a file
|
| Parameters:
|       
|   IN: location of id struct, int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void SaveToFile(id names[], int Max)
{
    ofstream OutData;
    cout << "Enter name of save file: "; 
                                        
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());

    for (int i = 0 ; i < Max ; i++)
    {
        OutData << names[i].IDnumber << ' '
                << names[i].FirstName << ' '
                << names[i].LastName << '\n';
    }

    OutData.close();
}
// lambda-ish ability in c++

//include <iostream>

int wrap16() 
{
    //declaration of lambda function in c++
    auto f = [](int x) { return x*42; }; 

    std::cout << "f() = " << f(2) << std::endl;

    return 0;
}


int wrap17(int argc, char* argv[])
{
    if (argc != 3)
	{
        cout << "lcm [a] [b]\n";
        return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    int GCD = gcd(a,b);
    cout << (a*b)/GCD << endl;

    return 0;
}
// counts the lines in a file
// needs fixing

//include <iostream>
//include <fstream>
 

int wrap18(int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "linecount [file 1] (file 2) ... (file n)\n";
        return 1;
    }

    long int sum = 0;
    char temp;
    fstream Data;
    for (int i = 1 ; i < argc ; i++)
    {
        Data.open(argv[i]); // check if actually exists?
        while(Data >> temp) // does not count whitespace
        {
            if (temp == ' ')
                sum++;
        }
        Data.close();
    }

    cout << sum << endl;
    
    return 0;
}

// name:     Jordan Winkler
// date:     6/1/2017
// process:  Adds a struct of type img, then asks the user what 
//           they want to do. They can: add_head, add_tail, 
//           add_id, delete_id, delete_head, and delete_tail. 
//           They can also list_nodes and list_id to see what 
//           is happening. 
//           (optional) 
//           Resequencing can be done to preserve id, or to 
//           relable links 0,1,2,...,n. There is also a clear
//           screen option for bash terminals.


//include <iostream>
//include <math.h>
//include <stdlib.h>
 

struct img
{
    int id;
    char pxls[512][512];
    img* next;
};

int add_head(img*& head, int Id); 
int add_head(img*& head); 
img* add_head();

int add_tail(img* head); 

int add_id(img*& head, int Id); 

int delete_id(img*& head, int Id); 

int delete_head(img*& head);

int delete_tail(img*& head);
    
void list_nodes(img* head);

void list_id(img* head); 


void list_nodes(img* head);

void zero_pxls(img* node);

void clear_screen();

void sequence_list(img*& head);

void quickSort(img* arr[], int left, int right);


int wrap19()
{
    img* head = add_head();
    int UserInput;
    int Id;
    char Continue;

    do 
    {
        clear_screen();
        cout << "choose:\n"
             << "------------------\n"
             << "add_head       (1)\n"
             << "add_tail       (2)\n"
             << "add_id         (3)\n"
             << "delete_id      (4)\n"
             << "delete_head    (5)\n"
             << "delete_tail    (6)\n"
             << "list_nodes     (7)\n"      
             << "list_id        (8)\n"
             << "quit           (0)\n\n";

        UserInput = getInt();
        
        switch (UserInput)
        {
            case 1: add_head(head);     break;
            case 2: add_tail(head);     break;
            case 3: cout << "ID: ";
                    Id = getInt();
                    add_id(head, Id);   break;
            case 4: cout << "ID: ";
                    Id = getInt();
                    delete_id(head,Id); break;
            case 5: delete_head(head);  break;
            case 6: delete_tail(head);  break;
            case 7: list_nodes(head);   break;
            case 8: list_id(head);      break;
            case 0: clear_screen();
                    return 0;           break;
            default: cout << "Error: bad user input"; return 0;
        }
        Continue = cin.get(); //for pause between screen clears
    } while (UserInput != 0);

    return 0;
}



/****************************************************************
| Name: zero_pxls
|    
| Precodition: there exists a struct called img, with an array 
|              called pxls 512 by 512
| Postcondition: the pxls has been cleaned of random data
|
| Parameters:
|       
|   IN: pointer to an img
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void zero_pxls(img* node)
{
    for (int j = 0 ; j < 512 ; j++)
        for (int i = 0 ; i < 512 ; i++)
            node->pxls[i][j] = 0;
}

/****************************************************************
| Name: add_tail
|    
| Precodition: there exists a struct called img, or a list of
|              them.
| Postcondition: another img is added to the list
|
| Parameters:
|       
|   IN: pointer to the beginning of the chain of img
|   Out: Nothing
|   
| Returns: 0 for success, 1 for failure
\****************************************************************/
int add_tail(img* head)
{
    /* fail if no head to add to */
    if (head == NULL)
    {
        return 1;
    }

    /* add new image to the tail */
    img* p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = new img;
    p->next->next = NULL;

    /* zero out the pixels */
    zero_pxls(p->next);

    /* assign next sequential integer to image id */
    int ID = p->id;
    ID++;
    p->next->id = ID;

    return 0;
}

/****************************************************************
| Name: add_head
|    
| Precodition: there exists an struct called image
| Postcondition: a new linked list or adding to the front of
|                an existing one
|
| Parameters:
|       
|   IN: Nothing if creating new list, pointer to head if adding
|       an element
|   Out: pointer to head if working on existing list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_head(img*& head, int Id) 
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */

    sequence_list(head); //if you want to preserve id

/*
    int i = Id; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
int add_head(img*& head)
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */
    sequence_list(head); //if you want to preserve id
/*
    int i = 0; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
img* add_head()
{
    img* head = new img;
    head -> id = 0;
    head -> next = NULL;
    return head;
}

/****************************************************************
| Name: add_id
|    
| Precodition: There exists a list of structs called img
| Postcondition: an img of the given id is added to the list
|
| Parameters:
|       
|   IN: pointer to start of list, int of Id to look for
|   Out: Nothing
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_id(img*&head, int Id)
{
    /* handling adding id <= head->id */
    if (Id < head->id)
    {
        add_head(head, Id);
        return 0;
    }
    if (Id == head->id)
        return 1;
    
    /* get to Id */
    img* p = head; //lead
    img* q = head; //stays one step behind
    while (p->id < Id && p->next != NULL)
    {
        q = p;
        p = p->next;
    }   

    /* handling Id is at spot */
    if (p-> id == Id)
        return 1;

    /* handling Id is not at spot */
    if (p->id != Id)
    {
        img* r = p->next;
        p->next = new img;
        p->next->next = r;
        p->next->id = Id;
        zero_pxls(p->next);

        return 0;
    }
}

/****************************************************************
| Name: delete_id
|    
| Precodition: a list of structs called img
| Postcondition: an element of given id removed
|
| Parameters:
|       
|   IN: pointer to beginnning of list, Id of struct to be removed
|   Out: nothing
|   
| Returns: 0 if success, 1 if failure
\****************************************************************/
int delete_id(img*& head, int Id)
{
    /* handling id is head */
    if (head->id == Id)
    {
        delete_head(head);
        return 0;
    }

    /* removes the image with a given id */
    img* p = head; //lead
    img* q = head; //stays one step behind

    /* get to id or end */
    while (p->id < Id && p->next != NULL) 
    {
        q = p;
        p = p->next;
    }

    /* handling if id is here */
    img* r = p->next; 
    if (p->id == Id) 
    {
        delete q->next;
        q->next = r; 
    }

    return 0;
}

/****************************************************************
| Name: delete_head
|    
| Precodition: the exists a struct named img, or a list of them
| Postcondition: the head has been removed
|
| Parameters:
|       
|   IN: pointer to the begining of the list
|   Out: pointer to the begining of the list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_head(img*& head)
{
    /* handling if no list elements */
    if (head == NULL) 
    {
        return 1;
    }
     
    /* handling if there is only a head */
    if (head -> next == NULL) 
    {
        delete head;
        head = NULL;
        return 0;
    }

    /* handling x > 1 elements */
    if (head -> next != NULL) 
    {
        img* tmp = head -> next;
        delete head;
        head = tmp;
        return 0;
    }
}

/****************************************************************
| Name: delete_tail
|    
| Precodition: the exists a list of structs called img
| Postcondition: the end element of the list has been removed
|
| Parameters:
|       
|   IN: pointer to head
|   Out: pointer to head
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_tail(img*& head)
{
    
    img* p = head; //lead
    img* q = head; //stays 1 behind lead

    /* head -> null, no linked list */
    if (p == NULL) 
    {
        return 1;
    }

    /* list has only one element */
    if (p -> next == NULL) 
    {
        delete head; 
        head = NULL;    
        return 0;
    }

    /* handling list elements > 1 */
    while (p -> next != NULL) 
    {
        q = p; 
        p = p -> next;
    }
    delete q -> next;
    q -> next = NULL;

    return 0;
}

/****************************************************************
| Name: list_nodes
|    
| Precodition: there exists a list of struct img
| Postcondition: the locations are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_nodes(img* head)
{
    cout << "list of nodes\n";
    img* p = head;
    while (p)
    {
        cout << p << endl;
        p = p->next;
    }
    cout << p << "\n\n";
}

/****************************************************************
| Name: list_id
|    
| Precodition: there exists a list of struct called img
| Postcondition: the id's of the list are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_id(img* head)
{
    cout << "list of ID\n";
    img* p = head;
    while (p)
    {
        cout << p->id << endl;
        p = p->next;
    }
    cout << endl;
}


/****************************************************************
| Name: clear_screen
|    
| Precodition: there is a terminal screen
| Postcondition: it has been cleared
|
| Parameters:
|       
|   IN: None
|   Out: None
|   
| Returns: Nothing
\****************************************************************/
void clear_screen()
{
    /* for bash users */
    system("clear"); 

    /* in general */
//  for (int i = 0 ; i < 500 ; i++) cout << endl; 
}

/****************************************************************
| Name: sequence_list
|    
| Precodition: there is a list
| Postcondition: the list is sequenced from low to high
|
| Parameters:
|       
|   IN: pointer to img called head
|   Out: pointer to img called head
|   
| Returns: nothing
\****************************************************************/
void sequence_list(img*& head)
{
    /* get length of list */
    img* p = head; 
    int length = 0;
    while (p)
    {
        length++;
        p = p->next;
    }

    /* create array for list */
    img** list = new img*[length+1]; 

    /* point at each object */
    p = head; 
    int index = 0;
    while (p)
    {
        list[index] = p;
        
        index++;
        p = p->next;
    }

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    quickSort(list, 0, length-1); 

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/   
    
    /* fix img.next's */
    head = list[0];
    for (int i = 0 ; i < length-1 ; i++) 
    {
        list[i]->next = list[i+1];
    }
    list[length-1]->next = NULL;

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    delete [] list;
}

/****************************************************************
| Name: quicksort
|    
| Precodition: an array; 
|               information on the begining and end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: struct pointer array, int for start and end
|   Out: same array 
|   
| Returns: nothing
\****************************************************************/
void quickSort(img* arr[], int left, int right) 
{
      int i = left, j = right;
      img* tmp;
      int pivot = arr[(left + right) / 2]->id;
 
      /* partition */
      while (i <= j) {
            while (arr[i]->id < pivot)
                  i++;
            while (arr[j]->id > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;

                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


//good for printing all primes between a and b


int wrap19(int argc, char *argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
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
/*
# makefile for c++ programs

# would be nice to be able to clean files from this command
# or if makefiles kept track of files outside currect directory
# or if I used bash instead...

programs= countwords sum charStat primesBetween toAscii sigma polycoef \
          phiInverse pascalsTriangle nameConicSection lcm age dndroll \
          calcDR baseconvert
bin=/home/jordan/Backup/nonsensitive/programs/bin/
cc=g++
output=$(cc) -o $(bin)

# convert base 10 to another base
baseconvert : baseconverter.cpp
	$(output)baseconvert baseconverter.cpp

# calculates the actual hp of a elderscrolls character
calcDR : calcDR.cpp
	$(output)calcDR calcDR.cpp

# rolls large number of dice
dndroll : dndRoll.cpp
	$(output)dndroll dndRoll.cpp

# gets age of something, interactive
age : age.cpp
	$(output)age age.cpp

# least common multiple
lcm : lcm.cpp
	$(output)lcm lcm.cpp

# deduces the conic section
nameConicSection : nameTheConicSection.cpp
	$(output)nameConicSection nameTheConicSection.cpp

# prints out a section of pascals triangle
pascalsTriangle : PascalsTriangle.cpp
	$(output)pascalsTriangle PascalsTriangle.cpp

# number theoretic function phi inverse
phiInverse : phiInversePattern.cpp
	$(output)phiInverse phiInversePattern.cpp

# prints the coefficient of a given polnomial
polycoef : polycoeffiecient.cpp 
	$(output)polycoef polycoeffiecient.cpp

# number theoretic function called sigma
sigma : sigma.cpp
	g++ -o $(bin)sigma sigma.cpp

# translates ascii characters to their literal numbers in decimal 
toAscii : toAscii.cpp
	g++ -o $(bin)toAscii toAscii.cpp

# give all prime numbers between two numbers
primesBetween : seive.cpp
	g++ -o $(bin)primesBetween seive.cpp

# count the number of each alphabetical letter show up in a file
charStat : charStat.cpp
	g++ -o $(bin)charStat charStat.cpp

# counts sequences of alphabetical characters (words)
countwords : wordcount.cc
	gcc -o $(bin)countwords wordcount.cc

# sums up floating point numbers
sum : sumfloat.cpp
	g++ -o $(bin)sum sumfloat.cpp

all : $(programs)
*/
//this program gives the age difference between user and Bach
//include <iostream>
//include <cstdlib>
 

class DayOfYear
{
public:
	void Input();
	void Output();
	void set(int NewMonth, int NewDay);
	void set(int NewMonth);
	int GetMonthNumber();
	int GetDay();
private:
	int Month;
	int Day;
};

int wrap20()
{
	DayOfYear Today, BachBirthday;
	cout << "Enter today's date:\n";
	Today.Input();
	cout << "Today's date is ";
	Today.Output();
	cout << endl;

	BachBirthday.set(3, 21);
	cout << "J. S. Bach's birthday is ";
	BachBirthday.Output();
	cout << endl;
	if ( Today.GetMonthNumber() == BachBirthday.GetMonthNumber()
			&& Today.GetDay() == BachBirthday.GetDay()
       )
		cout << "Happy Birthday\n";
	else 
		cout << "Happy Unbirthday\n";
	return 0;
}

void DayOfYear::set(int NewMonth, int NewDay)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	if ((NewDay >= 1) && (NewMonth <= 31))
		Day = NewDay;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::set(int NewMonth)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	Day = 1;
}

int DayOfYear::GetMonthNumber()
{
	return Month;
}

int DayOfYear::GetDay()
{
	return Day;
}

//Uses iostream and cstdlib
void DayOfYear::Input()
{
	cout << "Enter the month as a number: ";
	cin >> Month;
	cout << "Enter the day of the month: ";
	cin >> Day;
	if ((Month < 1) || (Month > 12) || (Day < 1) || (Day > 31))
	{
		cout << "Illegal date! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::Output()
{
	switch (Month)
	{
		case 1: cout << "January "; break;
		case 2: cout << "February "; break;
		case 3: cout << "March "; break;
		case 4: cout << "April "; break;
		case 5: cout << "May "; break;
		case 6: cout << "June "; break;
		case 7: cout << "July "; break;
		case 8: cout << "August "; break;
		case 9: cout << "September "; break;
		case 10: cout << "October "; break;
		case 11: cout << "November "; break;
		case 12: cout << "December "; break;
		default:
			cout << "Error in DayOfYear::Output.";
	}
	cout << Day;
}
//I need a way to query the whole prereq list, look up trees

//include <iostream>
//include <fstream>
 

struct course //number of the course
{
    string name; //what the course is called
    int credits; //This is sometimes a range
    int prereq[6]; // I want a pointer of this class
    int coreq;
    bool classTaken;
} m[2000];

int wrap21()
{
    fstream data;
    data.open("data");
    int prereqStore[20];
    string nameStore[20];
    int index;
    for (int i = 0; i <= 61; i++) {
        data >> index;
        data >> m[index].name;
        data >> m[index].credits;
        for (int j = 0 ; j < 6 ; j++) {
        data >> m[index].prereq[j];     }
        data >> m[index].coreq;
        data >> m[index].classTaken;
    }
    /*
    index = 310;
    cout << index << " " 
    <<m[index].name << " "
    <<m[index].credits << " "
    <<m[index].prereq1 << " "
    <<m[index].prereq2 << " "
    <<m[index].prereq3 << " "
    <<m[index].prereq4 << " "
    <<m[index].prereq5 << " "
    <<m[index].prereq6 << " "
    <<m[index].coreq << " "
    <<m[index].classTaken;
    */
    /*for (int index = 311; index >= 216; index -= 95) {
        cout << index << " "
             << m[index].name << " "
             << m[index].credits << " "
             << m[index].prereq << " "
             << m[index].classTaken << endl; 
    }*/
    
    cout << "give me a class number\nm";
    cin >> index;
    cout << "For " << m[index].name 
         << " the following classes are prereqs:\n";
    int j = 0, k= 5;
    for (int l = 0; l < j+1; l++) //need variable instead of j+1
    {
        for (int i = 0; i < 6; i++) 
        {   
            if (m[index].prereq[i] != 0) 
            { 
                prereqStore[j] = m[index].prereq[i];
                j++; 
            }        
        }
        //cout << index << " ";
        index = prereqStore[l]; 
        cout << index << " ";
    } cout << endl;
    for (int i = 0 ; i < j ; i++) 
    {
        cout << prereqStore[i] << ", ";
    }
    /*
    cout << "The class numbers are: ";
    int indexName = index;
    while (index != 0) {
        cout << "m" << m[index].prereq[0] << ", "; //How do I get rid of 0?
        index = m[index].prereq[0];
    }
    cout << endl << "The names of these classes are:\n";
    while (indexName != 0) {
        cout << m[indexName].name << "\n"; //How do I get rid of 0?
        indexName = m[indexName].prereq[0];
    }
    cout << "\n 0 it the termination of the prereq string";
    */
    data.close();
    return 0;
}/*
 * I need a way to query the whole prereq list, look up 
 * trees just give each class an id, 
 * logic gates can determine letter and subject type
 * math 1, cs 2
 * math: m1, a2, b3, c4, n5, k6, t7, w8, p9
 */
//include <iostream>
//include <fstream>
 

void sort(double a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <= ... a[numberUsed - 1].
void swapValues(double& v1, double& v2);
//Interchanges the values of v1 and v2.
int indexOfSmallest(const double a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the
//values a[startIndex], a[startIndex + 1], ..., a[numberUsed - 1].

int wrap23(int argc, char** argv)
{
    if (argc != 7)
    {
        cout << "Enter in a general form equation for a conic section\n"
             << "Ax^2 + Bxy + Cy^2 + Dx + Ey + F = 0\n";
        return 1;
    }
    double A = stringToFloat(argv[1]);
    double B = stringToFloat(argv[2]);
    double C = stringToFloat(argv[3]);
    double D = stringToFloat(argv[4]);
    double E = stringToFloat(argv[5]);
    double F = stringToFloat(argv[6]);

    double L = pow (B, 2) - (4*A*C); //L is the discriminant

    //1 circle, 2 ellipse, 3 parabola, 4 hyperbola
    int type = 0;
    if (((A == 0) && (B == 0)) && (C == 0)) 
    {
        cout << "This is not a conic section.";
        return 0;
    }
    if (L < 0) {
        if (A == C) {
            type = 1;
        } else {
            type = 2;
        }
    } 
    
    if (L == 0) {
        type = 3;
    } 
    
    if (L > 0) {
        type = 4;
    } 
    
    switch (type) 
    {
            case 1: cout << "You have a circle\n"; break;
            case 2: cout << "You have an ellipse\n"; break;
            case 3: cout << "You have a parabola\n"; break;
            case 4: cout << "You have a hyperbola\n"; break;
            default: cout << "404 shape not found\n";
    }
    return 0;
}
//project to move and rename files
//include <iostream>
//include <string>
//include <fstream>
//include <stdio.h>
 

int wrap24()
{
	//cout << "Name the directory to move -> ";
	//string UserInput;
	//getline(cin, UserInput);
	int result;
	char OldFileName[] = "cat";
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName);
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}
//Finds where a function is 0
//created by: Jordan Winkler
//This is the equation for Newton's Method
//x_(n+1)=x_n-(f(x_n))/(f'(x_n))

//include <iostream>
 

int wrap25()
{
	cout << "Root of x^3-125 is\n";
    double X = -1;					//Starting point of search

    for (int i = 0 ; i < 15 ; i++)
    {
        X-= ((X*X*X)-125 )/(3*X*X); 
    }
    cout << X << endl;
    return 0;
}
//de Polignax's formula is being used to find number of primes p in n!
 


int wrap26()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b; //later include cin for prime
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        exit(1);
    }
    
    for (int i = a ; i <= b ; i++)
        cout << "S_p(" << i << ") = "
             << dePolignax(i,5) << endl;

    return 0;
}


int wrap27()
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



int wrap28()
{
    cout << "[a,b] -> ";
    unsigned int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }
    if (a % 2 == 0)
    {
        cout << "\npick an odd number\n";
        return 0;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i+=2)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "phi|primeStep " 
             << phin << ' '
             << primeStepn << endl;
        if (phin > primeStepn)
        {
            cout << "found at " << i << endl;
            return 0;
        }
    }

    return 0;
}
// number test from number theory


int wrap29()
{
    cout << "[a,b] -> ";
    unsigned int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }
    cout << "c^k <= b -> ";
    unsigned int c;
    cin >> c;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i *= c)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "n|phi|primeStep " 
             << i << ' '
             << phin << ' '
             << primeStepn << endl;
        if (phin > primeStepn)
        {
            cout << "found at " << i << endl;
            return 0;
        }
    }

    return 0;
}
// already coded one of these in bash
// opens a file

//include <iostream>
//include <string>
//include <stdlib.h>
//include <fstream>
 

int wrap30()
{
    cout << "Scan or open? 1/0 ";
    bool UserChoose;
    cin >> UserChoose;
    if (cin.fail())
    {
        cout << "not 1 or 0\n";
        return 1;
    }

    if (UserChoose == 1)
    {     
	    cout << "Give file path -> ";
        string UserInput;
    	getline(cin, UserInput);
    	fstream InData;
    }
    else //no need to check for 0
    {
        cout << "Give program path -> ";
	    cout << "Here is your current directory.\n";
        system("dir");
        string UserInput = UserInput.c_str();
        string Add = "xdg-open " + UserInput;
	    //system(Add); // broken
	}
	return 0;
}

//include <iostream>
//include <math.h>
 


/**///////////////////////////////////////////////////////////////
/**/// function and global variables to mess with
/**/   double startG = 1;
/**/   double endG   = 2;
/**/   double preG   = 0.00001;
/**/   double function (double x)
/**/   {
/**/       return 5*cos(2*x)/(2*x*sin(2*x)+1);
/**/   }
/**///////////////////////////////////////////////////////////////

double maxf (double start, double end, double precision)
{
    double maxNum = function(start);
    for ( ; start < end ; start += precision)
        if (function(start) > maxNum)
            maxNum = function(start);

    return maxNum;
}

double minf (double start, double end, double precision)
{
    double minNum = function(start);
    for ( ; start < end ; start += precision)
        if (function(start) < minNum)
            minNum = function(start);

    return minNum;
}

double maxOnX (double start, double end, double precision)
{
    double maxNum = start;
    for ( ; start < end ; start += precision)
        if (function(start) > maxNum)
            maxNum = start;

    return maxNum;
}

double minOnX (double start, double end, double precision)
{
    double minNum = start;
    for ( ; start < end ; start += precision)
        if (function(start) < minNum)
            minNum = start;

    return minNum;
}

int wrap312()
{


    cout << "min and max values\n";
    cout << "------------------\n";
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    cout << endl;

    startG = .5; endG = 1; preG = 0.000001;
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    return 0;
}




    
// looks cool, computes pascals rule

//include <iostream>
 
 

int PascalsRule(int &N, int &K, int From, int To);

int wrap31()
{
	int n, k;
	cout << "choose an N and K --> ";
	cin >> n >> k;
	cout << choose(n, k) << endl;
	bool Success = PascalsRule(n, k, 1, 3);
	if (Success)
		cout << choose(n, k) << endl;
	else cout << "out of bounds\n";
	return 0;
}

	
int PascalsRule(int &N, int &K, int From, int To)
{
	if (1 <= K && K <= N)
	{
		if (From == 1 && To == 2)
			K--; 
		else if (From == 1 && To == 3)
			N++;
		else if (From == 2 && To == 1)
			K++;
		else if (From == 2 && To == 3)
		{
			N++; K++;
		}
		else if (From == 3 && To == 1)
			N--;
		else if (From == 3 && To == 2)
		{
			N--; K--;
		}
	}
	else return 0;
	return 1;
}
// prints out pascals triangle row by row
// need to add mpc library to improve this


int wrap33(int argc, char** argv)
{
    if (argc == 2) // 0 to end
    {
        int row = stringToPosInt(argv[1]);
        for (int j = 0 ; j <= row ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else if (argc == 3) // start to end
    {
        int start = stringToPosInt(argv[1]); 
        int end = stringToPosInt(argv[2]); 
        
        for (int j = start ; j <= end ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else
    {
        cout << "PascalsTriangle [start] [end]\n  or\n"
             << "PascalsTriangle [end row]\n";
        return 1;
    }
        
    return 0;
}
// not sure if this shell script worthy
// but it is a useful program for calculating max possible number of 
// phi^-1


int wrap34()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad num \n";
        return 1;
    }

    for (int i = a ; i <= b ; i++)
        cout << i << ' ' 
             << phiInverseCap(i) << endl;

    return 0;
}
//This program prints inverse phi between two intervals
// not sure if this is the updated version
// seems slower than I remember
//created by: Jordan Winkler


int wrap35(int argc, char** argv)
{
    if (argc != 3)
    {
        cout << "phiInverse [start] [end] ";
        return 1;
    }

    /* get interval to compute */
    int a = stringToPosInt(argv[1]);
    int b = stringToPosInt(argv[2]);

    /* allocate memory for up to max set */
    int MAX = phiInverseCap(b) - a; //number of elements
    int* arry = new int[MAX];

    /* rules for computation */
    if (b < 5760) //slow to compute after this
        for (int i = a ; i <= b ; i++)
        {
            phiInverse(i, arry, MAX);
            cout << "phi^-1(" << i << "):\n";
            for (int j = 0 ; arry[j] ; j++)
            {
                cout << arry[j] << ' ';
            } cout << endl;
        }
    else //if (b >= 5760) //room for different rules
        cout << "\nError: b too large\n";

    return 0;
}
//mod tricks
// no idea what this does

//include <iostream>
//include <math.h>
 

int wrap36() 
{
    unsigned int x1 ;
    int y ;
    cout << "number " ;
    cin >> x1 ;
    cout << "order " ;
    cin >> y ;
    if (cin.fail())
    {
        cout << "invalid input\n";
        return 1;
    }
    
    x1 = x1 % (int) (pow (10, y));
    x1 = x1 * (pow (10, (-1*(y-1))));
    cout << x1 ; 
            
    return 0;
}

int wrap37(int argc, char* argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    cout << pick(a, b) << endl;

    return 0;
}
//de Polignax's formula is being used to find number of primes p in n
// factorial
 


int wrap38()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b; //later include cin for prime
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        exit(1);
    }
    
    for (int i = a ; i <= b ; i++)
        cout << "S_p(" << i << ") = "
             << dePolignax(i,5) << endl;

    return 0;
}



// uses binomial theorem
int polycoefficient(int ythDigit, int xc, int yc, int n);

int wrap38(int argc, char** argv)
{
    if (argc != 5)
    {
        cout << "polyCoeffiecient [term] [coefficient x]"
                " [coefficient y] [degree]\n";
        return 1;
    }

    int yDigit = stringToInt(argv[1]);
    int xc = stringToInt(argv[2]);
    int yc = stringToInt(argv[3]);
    int n = stringToInt(argv[4]);

    cout << polycoefficient(yDigit, xc, yc, n) << endl;

    return 0;
}

int polycoefficient(int ythDigit, int xc, int yc, int n)
{
    int coefficient = 1;
    coefficient *= int(pow(xc, n-ythDigit));
    coefficient *= int(pow(yc, ythDigit));
    coefficient *= choose(n, ythDigit);

    return coefficient;
}

    
//include <iostream>

class dataType
{
public:
    int dat;
};
    

std::ostream& operator<< (std::ostream &out, dataType const& data) 
{
    out << data.dat << ':';

    return out;
}

int wrap39()
{
    dataType cheese;
    cheese.dat = 1;

    std::cout << cheese << '\n';

    return true;
}
//I did a proof to show this property
int wrap402()
{
    double sides;
    cin >> sides;
    double average;
    average = (sides/2.0)+0.5;
    cout << average;
    return 0;
}


// tests for pseudoprimes, not sure if it works


int Carmichael(int n);

int wrapp()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "error\n";
        return 0;
    }

    for (int i = a ; i <= b ; i++)
        if (Carmichael(i))
            cout << "found at " << i << endl;

    cout << Carmichael(6601) << endl;

    return 0;
}
/*
int Carmichael(int n)
{
//n={n | composite ∧ ∀b b^(n-1)≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

//0={n | prime V ∃b b^(n-1) !≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

    if ((isPrime(n)))
        return 0;
    for (int b = 2 ; b < n ; b++)
        if (gcd(b,n) == 1)
            if (expAlg(b, n-1, n) != 1)
                return 0;
    
    return n;
}

*/
//gives an approximation of roots for ax^2+bx+c=0
// newton's method, but no parser, so kind of useless


int wrap40()
{
    cout << "enter the coefficeints -> ";
    double a, b, c;
    cin >> a >> b >> c;
    if (cin.fail())
    {
        cout << "error: bad num\n";
        return 0;
    }
    
    double x1 = -b + pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);
    double x2 = -b - pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);

    cout << "roots: " << x1 << x2 << endl;

    return 0;
}

//program renames files demonstration


int wrap41()
{
	int result;
	char OldFileName[] = "cat"; 
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName); //takes name of old file and renames it
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}

//formalize statement

void mult_before_paren(dll* head, int strLength);
void add_symmetry(dll* head, int strLength);


dll* add_tail(dll* head, char character)
{
	while (head -> next != NULL)
		head = head -> next;

	dll* tail = new dll;
	head -> next = tail;
	tail -> prev = head;
	tail -> next = NULL;
	
	tail -> symbol = character;

	return tail;
}

dll* add_head(char first)
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;

	head -> symbol = first;

	return head;
}

void print_list(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << p -> symbol;
		p = p -> next;
	}
	cout << p -> symbol;
	cout << endl;
}

void print_debug(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << "prev: " << p -> prev << endl;
		cout << "node: " << p << endl;
		cout << "next: " << p -> next << endl;
		cout << "char: " << p -> symbol << endl;
		p = p -> next;
	}
	cout << "prev: " << p -> prev << endl;
	cout << "node: " << p << endl;
	cout << "char: " << p -> symbol << endl;
}

//a(b+c) = a*(b+c) or a(b) = a*(b) or a(b+...+c) = ..
void mult_before_paren(dll* head, int strLength)
{
    int minLength = 4;
	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
		p[3] = head->next->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '*')
			if (p[1]->symbol == '(');
				//get to later
	} while (0);
}

//a-b = a+-b
void add_symmetry(dll* head, int strLength)
{
    int minLength = 3;

	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '+')
		  if (p[1]->symbol == '-')
		  {
			dll* q = new dll;
			q->symbol  = '+';
			q->prev    = p[0];
			q->next    = p[1];
			p[0]->next = q;
			p[1]->prev = q;
		  }
	} while (0); //just do once for now
}
	
/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

//include <iostream>
//include <math.h>
 

//Replace unsigned long ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll base, ll exponent, ll mod);

ll getK();
ll getJ();
ll getPrime(unsigned int power);

int llwrap()
{
    ll p = 5;
    ll q = 7;
    
    ll n = p * q;
    ll k = 5;

    if (gcd(k, phi(p,q)) != 1 || k > phi(p,q)) 
        cout << "bad k\n";

    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
        cout << "bad j\n";

    ll M = 5;
    ll r;

    cout << "number to encrypt: " << M << endl;

    r = encrypt(M, n, k);
    
    cout << "encrypted: " << r << endl;

    M = decrypt(r, p, q, j);

    cout << "decrypted: " << M << endl;

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;

    cout << "M: " << M << endl;
    cout << "r: " << r << endl;
#endif //DEBUG

    return 0;
}



 


/****************************************************************
| Name: phi
|    
| Precodition: nothing
| Postcondition: nothing 
|
| Parameters:
|       
|   IN: two primes
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
ll phi(ll p, ll q) //for RSA encryption alg
{
    return (p-1)*(q-1);
}

/****************************************************************
| Name: gcd
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two integers
|   Out: none
|   
| Returns: int the greatest common divisor of those two numbers
\****************************************************************/
ll gcd(ll A, ll B)
{
    ll T;
    while (B != 0)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    

/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))

*/
 
//include <limits>

#define DEBUG

//replace unsigned long int with any integer like data structure
//Must be defined for operations: + - / * % > < != == =
//and be defined for used functions


ll decrypt(ll r, ll p, ll q, ll j);

void flipString(char a[], int start, int end);
void flipString(char a[]);

ll stringToValue(char a[], int start, int end);

void valueToString(ll value, char string[], int start, int end);

/*
int llwrap2()
{
    ll p = 1000003; //prime 1
    ll q = 1000033; //prime 2
    
    ll n = p * q;
    ll k = 11;
    if (gcd(k, phi(p,q)) != 1) cout << "bad k\n";

    ll j = modinv(k, phi(p,q));

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;
#endif //DEBUG

    cout << "string -> ";
    int MaxString = 1000000; //arbitrary max
    char userM[MaxString] = {0}; 

    //get string from user 
    ll stringLength = -1; //user string length
    do
    {
        stringLength++;
        userM[stringLength] = cin.get();
        if (stringLength == MaxString - 1) //makes sure a \0 on end is left
        {
            cout << "\nerror: too many char\n";
            return 1;
        }
    } while (userM[stringLength] != '\n');

    ll* M = new ll[stringLength];
    ll* r = new ll[stringLength];

    for (int i = 0 ; i < stringLength ; i++)
    {
        M[i] = 0;
        r[i] = 0;
    }

    int charSpace = 3; //preferably multiples of 3 for ascii

    for (int i = 0 ; userM[charSpace*i] ; i++)
        M[i] = stringToValue(userM, charSpace*i, charSpace*(i+1));

#ifdef DEBUG
    cout << "User Input: " << userM; //includes \n already

    cout << "User Input char values: ";
    for (int i = 0 ; userM[i] ; i++)
        cout << int(userM[i]) << ' ';
    cout << endl;

    cout << "User Input as int: ";
    for (int i = 0 ; M[i] && i < stringLength ; i++)
        cout << "M[" << i << "]: " << M[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        r[i] = encrypt(M[i], n, k);

#ifdef DEBUG
    cout << "encrypted values: ";
    for (int i = 0 ; r[i] && i < stringLength ; i++)
        cout << "r[" << i << "]: " << r[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        M[i] = decrypt(r[i], p, q, j);

    for (int i = 0 ; i < stringLength ; i++)
        valueToString(M[i], userM, charSpace*i, charSpace*(i+1));

    cout << "decrypted: " << userM << endl;
    

    return 0;
}
*/

void flipString(char a[])
{
    int length = 0;
    for (int i = 0 ; a[i] ; i++)
        length++;
    length--; //assuming 0 

#ifdef DEBUG
        cout << "inside flipString\n";
        cout << "length: " << length << endl;
#endif //DEBUG

    char* temp = new char[length+1];

    int start = 0;
    int end = length; //ignore \n, add -1, doesn't work if so
    while (end >= 0)
        temp[start++] = a[end--];

#ifdef DEBUG
    cout << "temp: " << temp << endl;
#endif //DEBUG

    for (int j = 0 ; a[j] ; j++)
        a[j] = temp[j];

    delete [] temp;
}
void flipString(char a[], int start, int end) //some bug
{
    int length = end - start;

    char* temp = new char[length+1];

    int i = start;
    int k = end;
    while (k >= i)
        temp[i++] = a[k--];

    for (int j = start ; a[j] && j <= end ; j++)
        a[j] = temp[j];
}



void valueToString(ll value, char string[], int start, int end)
{
#ifdef DEBUG
    cout << "inside valueToString\n";
#endif //DEBUG

    for (int i = start ; i <= end ; i++) //may need to clean string
        string[i] = 0;                   //elsewhere
    
    ll temp;
    for (int i = 0, j = start ; temp > 0 && j <= end ; i++, j++) 
    {
        temp = value / long(pow(1000, i));
        temp = temp % 1000;
        string[j] = temp;
#ifdef DEBUG
       cout << "temp: " << temp << endl;
#endif //DEBUG
    }
    flipString(string, start, end);
}
/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

 
//include <gmp.h> //complie as g++ __ -lgmpxx -lgmp
//include <gmpxx.h>

//Replace end of ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =

#define DEBUG


/****************************************************************
| Name: getK
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: primes p and q
|   Out: nothing
|   
| Returns: k, from RSA encryption
\****************************************************************/
ll getK(ll p, ll q)
{
    if (p*q == 1)
    {
        cout << "bad primes for getK\n:";
        exit(1);
    }
    ll k = 2;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
#ifdef DEBUG
        if (k % 10000 == 0)
            cout << "k: " << k << endl;
#endif    
    }
    return k;
}
ll getK(ll p, ll q, ll start) //for choosing a larger k
{
    ll k = start;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
    }
    return k;
}

/****************************************************************
| Name: getJ
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: exponent k, and primes p, and q from RSA encryption process
|   Out: nothing
|   
| Returns: J
\****************************************************************/
ll getJ(ll k, ll p, ll q)
{
    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
    { 
        cout << "bad j\n";
        exit(1);
    }
    return j;
}



/****************************************************************
| Name: nextPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: positive integer k
|   Out: nothing
|   
| Returns: the closest prime after n
\****************************************************************/
ll nextPrime(ll n) 
{
    ll two = 2;
    if (n < two) //n< 2 bugged...
        return 2; 
    while (n > 0)
    {
        n++;
        if (isPrime(n) != 0)
            return n;
    }
}


ll expt(ll a, ll b)
{
    ll c = 1;
    
    ll i = 1;
    while (1) //large values reset when leaving block scope
    {
        c = (c * a);
        i++;
        if (i > b)
            break;
    }
    return c;
}

/*************************************************************
| Name: ceilSquareRoot
|    
| Precodition: nothing
| Postcondition: nothinng
|
| Parameters:
|       
|   IN: a for equation ceil(a^(1/2)) = c
|   Out: nothing
|   
| Returns: c
\****************************************************************/
ll ceilSquareRoot(ll a)
{   
    ll i = 1;
    while (1)
    {
        if (i*i > a) //little above
            break;
        i++;
    }
    return i;
}

/****************************************************************
| Name: readFromFile
|    
| Precodition: There is a file to read from
| Postcondition: the file has been read from
|
| Parameters:
|       
|   IN: The location of an array to read to, max size of array
|   Out: nothing
|   
| Returns: int for size of file
\****************************************************************/
int readFromFile(char a[], int max)
{
    int size = 0;
    fstream InData;
    cout << "Enter the name of the file you wish to scan "; 
    //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    InData.open(UserInput.c_str());
    
    while (InData >> a[size++])
    {
        if (size-2 > max)
            break;
    }

    InData.close();
    return size;
}

/****************************************************************
| Name: writeToFile
|    
| Precodition: nothing
| Postcondition: a file has been written to to the given string
|
| Parameters:
|       
|   IN: location of an array to copy to a file, max size of array
|   Out: nothing
|   
| Returns: 1 for success, 0 for failure
\****************************************************************/
bool writeToFile(char a[], int max)
{
    ofstream OutData;
    cout << "Enter name of file "; /*designate file path 
                                        using string*/
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());

    for (int i = 0 ; i < max ; i++)
        OutData << a[i];
    
    OutData.close();
    return 1;
}

/****************************************************************
| Name: toNum
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: location of array, start and end of it to read
|   Out: nothing
|   
| Returns: that substring as a number
\****************************************************************/
ll toNum(char a[], int start, int end)
{
    ll toReturn = 0;
    int j = 0;
    for (int i = start ; i <= end ; i++, j++)
        toReturn += a[i] * expt(256, j);

    return toReturn;
}

/* //original
    for (int i = 0 ; toChar(x) && i < Max ; i++)
    {
        string[i] = toChar(x) % base;
        x = x/base;
    }
*/



/* 
    RSA encryption
    by: Jordan Winkler

    encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

    decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

//Scans a document or several docuemnts for a string
//returns if it is found and what line it is on
// grep already does this, so this program is useless

//include <iostream>
//include <fstream>
//include <string>
 

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize);

int wrap46()
{
	cout << "Which file do you want to search?\n";
	const int ARRAY_SIZE = 10000;
	char Char[ARRAY_SIZE];
	fstream InData;
	InData.open("data");
	string UserChooseFile;
	getline(cin, UserChooseFile);
	int FileSize = 0;
	while (InData >> Char[FileSize++]);
	cout << "Keyword --> ";
	
	char KeyWord[20];
	int KeyWordSize = 0;
	char Temp = cin.get();
	while (Temp != '\n')
	{
		KeyWord[KeyWordSize++] = Temp;
	}
	int Location = CheckKey(KeyWord, KeyWordSize, Char, FileSize);
	cout << "Location " << Location;
	return 0;
}

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize)
{
	static int i = 0, j = 0;
	while (i < FileSize) 
	{
		if (Char[i] == KeyWord[j]) 
		{
			i++; j++; CheckKey(KeyWord, KeyWordSize, Char, FileSize);
		}
		if (j >= KeyWordSize) return j;
	}
	return -1;
}
// wrap to print primes


int wrap46(int argc, char** argv)
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

// number theoretic function called sigma
// gets interval of sigma value or just value


int wrap47(int argc, char** argv)
{
    if (argc == 2)
    {
        int i = stringToInt(argv[1]);
        cout << sigma(i) << endl;
        return 0;
    }
    if (argc == 3)
    {
        int a = stringToInt(argv[1]);
        int b = stringToInt(argv[2]);

        for (int i = a ; i <= b ; i++)
            cout << sigma(i) << endl;
        return 0;
    }
    else
    {
        cout << "sigma [int]\n or\n sigma [start] [end]";
        return 1;
    }

}

int wrap48(int argc, char** argv)
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
// gives bite size and largest number of data types

//include <iostream>
//include <math.h>
 

int wrap49()
{

    cout << "Sizes of various data types\n"
         << "int: " << sizeof(int) << endl
         << numeric_limits<int>::max() << endl
         << "float: " << sizeof(float) << endl
         << numeric_limits<float>::max() << endl
         << "double: " << sizeof(double) << endl
         << numeric_limits<double>::max() << endl
         << "short int: " << sizeof(short int) << endl
         << numeric_limits<short int>::max() << endl
         << "char: " << sizeof(char) << endl
         << numeric_limits<char>::max() << endl
         << "long int: " << sizeof(long int) << endl
         << numeric_limits<long int>::max() << endl
         << "long long: " << sizeof(long long) << endl
         << numeric_limits<long long>::max() << endl
         << "unsigned long int: " << sizeof(long int) << endl
         << numeric_limits<unsigned long int>::max() << endl;
       
         
    cout << "Size in possible positions\n"
         << "int: " << pow( 2 , sizeof(int) * 8) << endl

         << "float: " << sizeof(float) << endl
         << "double: " << sizeof(double) << endl
         << "short int: " << sizeof(short int) << endl
         << "char: " << sizeof(char) << endl;

    cout << "Size in array\n"
         << "long int: " << int(log10(pow(2, sizeof(long int) * 8))) + 1;


    return 0;
}
//created by: Jordan Winkler
//random program for fun, sorting numbers by overloaded functions,
//instead of arrays


void sort(int &a, int &b, int &c, int &d, int &e);
void sort(int &a, int &b, int &c, int &d);
void sort(int &a, int &b, int &c);
void sort(int &a, int &b);

int wrap50()
{
    srand(time(NULL));
    
    int a = rand(); 
    int b = rand();
    int c = rand();
    int d = rand();
    int e = rand();

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "\n\n";

    sort(a,b,c,d,e);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    return 0;
}

/****************************************************************
| Name: sort
|    
| Precodition: unsorted variable (max 5)
| Postcondition: sorted variables (max 5)
|
| Parameters:
|       
|   IN: a, b, or c, or d, or e
|   Out: a, b, or c, or d, or e
|   
| Returns: Nothing
\****************************************************************/
void sort(int &a, int &b)
{
    int aT = a;
    int bT = b;

    a = (aT<bT)?aT:bT;
    b = (aT>bT)?aT:bT;
}
void sort(int &a, int &b, int &c)
{
    for (int i = 0 ; i < 2 ; i++)
    {
        sort(a,b);
    
        int bT = b;
        int cT = c;
    
        b = (bT<cT)?bT:cT;
        c = (bT>cT)?bT:cT;
    }
}
void sort(int &a, int &b, int &c, int &d)
{
    for (int i = 0 ; i < 3 ; i++)
    {
        sort(a,b,c);
    
        int cT = c;
        int dT = d;
    
        c = (cT<dT)?cT:dT;
        d = (cT>dT)?cT:dT;
    }
}
void sort(int &a, int &b, int &c, int &d, int &e)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        sort(a, b, c, d);
        
        int dT = d;
        int eT = e;
    
        d = (dT<eT)?dT:eT;
        e = (dT>eT)?dT:eT;
    }
}
//messing with string, this program is useless

//include <iostream>
//include <string>

 

int wrap51()
{
    string face = "face";
    
    cout << "name " << face << endl;
    cout << "size " << face.size() << endl;

    for (int i = 0 ; i < face.length() ; i++)
    {
        cout << "a[" << i << "] " << face[i] << endl;
    }

    face[0] = face[1];
    
    cout << face << endl;

    face.insert(0,"f");


    cout << face << endl;

    face.insert(1,5,'a');
    
    cout << face << endl;

    cout << "max_size " << face.max_size() << endl;

    cout << "c_string " << face.c_str() << endl;

    cout << "sub string " << face[0] << face.substr(7) << endl;

    int aceStart = face.find("ace");

    cout << "without counting " << face[0] 
         << face.substr(aceStart) << endl;


    return 0;

}

int wrap53(int argc, char* argv[])
{
    if (argc != 3)
	{
	    cout << "sum [a] [b]\n";
		return 0;
	}
	cout << stringToInt(argv[1]) + stringToInt(argv[2]) << endl;

	return 0;
}
// adds an arbitrary list of numbers together


int sum_test(int argc, char** argv)
{
    if (argc == 1)
	{
	    cout << "sum [a_1] [a_2] ... [a_n] \n";
	    return 0;
	}

    double sum = 0;
    for (int i = 1 ; i < argc ; i++)
        sum += stringToFloat(argv[i]);

    cout << sum << endl;
    
    return 0;
}
//include <stdio.h>

int wrap53()
{
    
    
    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",~i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",((~i)+1));

    return 0;
}
//include <iostream>
 

int wrap54()
{
    char* string = new char[25];
    cout << "type something with m in it\n";
    cin >> string;

    cout << string << '\n';

    // find the 'm'
    char m = '5';

    ios_base::sync_with_stdio(false);

    cout << cin.gcount() << endl;
    cin.unget();
    cin.unget(); //if called twice it simply closes buffer
    cin >> m; //this never reads

    cout << m;
    cout << endl;

    return 0;

}

    
// testing complex numbers I made

//include "complexNum.h"
//include <iostream>
 

int wrap55()
{
    com a;
    com b;
    cout << "enter a, b\n";
    cin >> a.Real >> a.Imaginary;
    cin >> b.Real >> b.Imaginary;

    com c;

    c = a + b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a - b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a * b;
    cout << "c: " << c.Real << c.Imaginary << endl;


    return 0;
}

#ifndef broken

int wrap533()
{
    cout << "choose two rational numbers ";
    int anum, aden, bnum, bden;
    cin >> anum >> aden >> bnum >> bden;
    rat A(anum, aden);
    rat B(bnum, bden);
    rat C(1,1);
    
    cout << "\n+ "; C = A + B; C.p(); cout << endl;
    cout << "\n- "; C = A - B; C.p(); cout << endl;
    cout << "\n* "; C = A * B; C.p(); cout << endl;
    cout << "\n/ "; C = A / B; C.p(); cout << endl;
    cout << "\n> " << ((A > B)?1:0) << endl;
    cout << "\n< " << ((A < B)?1:0) << endl;
    cout << "\n= " << ((A == B)?1:0) << endl;
    cout << "\n>= " << ((A >= B)?1:0) << endl;
    cout << "\n<= " << ((A <= B)?1:0) << endl;
    return 0;
}



 



// experimenting with time functions

//include <iostream>
//include <time.h>
 
// This is a comment
/*
 * Multi-line comment
 */

// Tells the compiler iostream library which contains the function cout
//include <iostream>

// Allows us to use vectors
//include <vector>

// Allows us to use strings
//include <string>

// Allow us to work with files
//include <fstream>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
 

// ---------- FUNCTIONS ----------
// The function has return type, function name and attributes with 
// their data types
// The attribute data types must match the value passed in
// This data is passed by value
// You can define default values to attributes as long as they come last
// This is known as a function prototype
int addNumbers(int firstNum, int secondNum = 0){

		int combinedValue = firstNum + secondNum;

		return combinedValue;

}

// An overloaded function has the same name, but different attributes
int addNumbers(int firstNum, int secondNum, int thirdNum){

	return firstNum + secondNum + thirdNum;

}

// A recursive function is one that calls itself

int getFactorial(int number){

	int sum;
	if(number == 1) sum = 1;
	else sum = (getFactorial(number - 1) * number);
	return sum;

	// getFactorial(2) [Returns 2] * 3
	// getFactorial(1) [Returns 1] * 2 <This value goes above>
	// 2 * 3 = 6

}

// Doesn't have a return type so use void
// Since I'm getting a pointer use int*
// Refer to the referenced variable with *age
void makeMeYoung(int* age){

	cout << "I used to be " << *age << endl;	
	*age = 21;

}

// A function that receives a reference can manipulate the value globally
void actYourAge(int& age){

	age = 39;

}

// ---------- END OF FUNCTIONS ----------

// ---------- CLASSES ----------
// classes start with the name class

class Animal
{

// private variables are only available to methods in the class
private:
	int height;
	int weight;
	string name;

	// A static variable shares the same value with every object in the class
	static int numOfAnimals;

// Public variables can be accessed by anything with access to the object
public:
	int getHeight(){return height;}
	int getWeight(){return weight;}
	string getName(){return name;}
	void setHeight(int cm){ height = cm; }
	void setWeight(int kg){ weight = kg; }
	void setName(string dogName){ name = dogName; }

	// Declared as a prototype
	void setAll(int, int, string);

	// Declare the constructor
	Animal(int, int, string);

	// Declare the deconstructor
	~Animal();

	// An overloaded constructor called when no data is passed
	Animal();

	// protected members are available to members of the same class and 
	// sub classes

	// Static methods aren't attached to an object and can only access
	// static member variables
	static int getNumOfAnimals() { return numOfAnimals; }

	// This method will be overwritten in Dog
	void toString();

};

int Animal::numOfAnimals = 0;

// Define the protoype method setAll
void Animal::setAll(int height, int weight, string name){

	// This is used to refer to an object created of this class type
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;

}

// A constructor is called when an object is created
Animal::Animal(int height, int weight, string name) {

	this -> height = height;
	this -> weight = weight;
	this -> name = name;

}

// The destructor is called when an object is destroyed
Animal::~Animal() {

	cout << "Animal " << this -> name << " destroyed" << endl;

}

// A constructor called when no attributes are passed
Animal::Animal() {
	numOfAnimals++;
}

// This method prints object info to screen and will be overwritten
void Animal::toString(){

	cout << this -> name << " is " << this -> height << " cms tall and "
		<< this -> weight << " kgs in weight" << endl;

}

// We can inherit the variables and methods of other classes
class Dog : public Animal{

	private:
		string sound = "Woof";
	public:
		void getSound() { cout << sound << endl; }

		// Declare the constructor
		Dog(int, int, string, string);

		// Declare the default constructor and call the default superclass
		// constructor
		Dog() : Animal(){};

		// Overwrite toString
		void toString();

};

// Dog constructor passes the right attributes to the superclass
// constructor and then handles the attribute bark that remains
Dog::Dog(int height, int weight, string name, string bark) : 
Animal(height, weight, name){

	this -> sound = bark;

}

// toString method overwritten
void Dog::toString(){

	// Because the attributes were private in Animal they must be retrieved 
	// by called the get methods
	cout << this -> getName() << " is " << this -> getHeight() << 
		" cms tall and " << this -> getWeight() << " kgs in weight and says " << 
		this -> sound << endl;

}

// ---------- END OF CLASSES ----------

// This is where execution begins. Attributes can be sent to main
int wrap57() {

	// cout outputs text and a carriage return with endl
	// Statements must end with a semicolon
	// Strings must be surrounded by "
	// << sends the text via standard output to the screen
	cout << "Hello Internet" << endl;

	// ---------- VARIABLES / DATA TYPES ----------
	// Variables start with a letter and can contain letters, numbers and _
	// They are case sensitive

	// A value that won't change is a constant
	// Starts with const and it should be uppercase
	const double PI = 3.1415926535;

	// chars can contain 1 character that are surrounded with ' and is one byte in size
	char myGrade = 'A';

	// bools have the value of (true/1) or (false/0)
	bool isHappy = true;

	// ints are whole numbers
	int myAge = 39;

	// floats are floating point numbers accurate to about 6 decimals
	float favNum = 3.141592;

	// doubles are floating point numbers accurate to about 15 digits
	double otherFavNum = 1.6180339887;

	// You can output a variable value like this
	cout << "Favorite Number " << favNum << endl;

	// Other types include
	// short int : At least 16 bits
	// long int : At least 32 bits
	// long long int : At least 64 bits
	// unsigned int : Same size as signed version
	// long double : Not less then double

	// You can get the number of bytes for a data type with sizeof

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherFavNum) << endl;

	int largestInt = 2147483647;

	cout << "Largest int " << largestInt << endl;

	// ---------- ARITHMETIC ----------
	// The arithmetic operators are +, -, *, /, %, ++, --

	cout << "5 + 2 = " << 5+2 << endl;
	cout << "5 - 2 = " << 5-2 << endl;
	cout << "5 * 2 = " << 5*2 << endl;
	cout << "5 / 2 = " << 5/2 << endl;
	cout << "5 % 2 = " << 5%2 << endl;

	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	// Shorthand assignment operators
	// a += b == a = a + b
	// There is also -=, *=, /=, %=

	// Order of Operation states * and / is performed before + and -

	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;

	// ---------- CASTING ----------
	// You convert from one data type to another by casting
	// char, int, float, double

	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float) 4 / 5 << endl;

	// ---------- IF STATEMENT ----------
	// Executes different code depending upon a condition

	// Comparison operators include ==, !=, >, <, >=, <=
	// Will return true (1) if the comparison is true, or false (0)

	// Logical operators include &&, ||, !
	// Used to test 2 or more conditionals

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1) && (age < 16)){
		cout << "You can't drive" << endl;
	} else if(!isNotIntoxicated){
		cout << "You can't drive" << endl;
	} else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
		cout << "You can't drive" << endl;
	} else {
		cout << "You can drive" << endl;
	}

	// ---------- SWITCH STATEMENT ----------
	// switch is used when you have a limited number of possible options

	int greetingOption = 2;

	switch(greetingOption){

	case 1 :
		cout << "bonjour" << endl;
		break;

	case 2 :
		cout << "Hola" << endl;
		break;

	case 3 :
		cout << "Hallo" << endl;
		break;

	default :
		cout << "Hello" << endl;
	}

	// ---------- TERNARY OPERATOR ----------
	// Performs an assignment based on a condition
	// variable = (condition) ? if true : if false

	int largestNum = (5 > 2) ? 5 : 2;

	cout << "The biggest number is " << largestNum << endl;

	// ---------- ARRAYS ----------
	// Arrays store multiple values of the same type

	// You must provide a data type and the size of the array
	int myFavNums[5];

	// You can declare and add values in one step
	int badNums[5] = {4, 13, 14, 24, 34};

	// The first item in the array has the label (index) of 0
	cout << "Bad Number 1: " << badNums[0] << endl;

	// You can create multidimensional arrays
	char myName[5][5] = {{'D','e','r','e','k'},{'B','a','n','a','s'}};

	cout << "2nd Letter in 2nd Array: " << myName[1][1] << endl;

	// You can change a value in an array using its index
	myName[0][2] = 'e';

	cout << "New Value " << myName[0][2] << endl;

	// ---------- FOR LOOP ----------
	// Continues to execute code as long as a condition is true

	for(int i = 1; i <= 10; i++){

		cout << i << endl;

	}

	// You can also cycle through an array by nesting for loops
	for(int j = 0; j < 5; j++){

		for(int k = 0; k < 5; k++){
			cout << myName[j][k];
		}

		cout << endl;

	}

	// ---------- WHILE LOOP ----------
	// Use a while loop when you don't know ahead of time when a loop will end

	// Generate a random number between 1 and 100
	int randNum = (rand() % 100) + 1;

	while(randNum != 100){

		cout << randNum << ", ";

		// Used to get you out of the loop
		randNum = (rand() % 100) + 1;

	}

	cout << endl;

	// You can do the same as the for loop like this
	// Create an index to iterate out side the while loop
	int index = 1;

	while(index <= 10){

		cout << index << endl;

		// Increment inside the loop
		index++;

	}

	// ---------- DO WHILE LOOP ----------
	// Used when you want to execute what is in the loop at least once

	// Used to store a series of characters
	string numberGuessed;
	int intNumberGuessed = 0;

	do {
	    cout << "Guess between 1 and 10: ";

	    // Allows for user input
	    // Pass the source and destination of the input
	    getline (cin,numberGuessed);

	    // stoi converts the string into an integer
	    intNumberGuessed = stoi(numberGuessed);
	    cout << intNumberGuessed << endl;

	    // We'll continue looping until the number entered is 4
	} while (intNumberGuessed != 4);

	  cout << "You Win" << endl;

	// ---------- STRINGS ----------
	// The string library class provides a string object
	// You must always surround strings with "
	// Unlike the char arrays in c, the string object automatically resizes

	// The C way of making a string
	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

	// The C++ way
	string birthdayString = " Birthday";

	// You can combine / concatenate strings with +
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name? ";
	getline (cin,yourName);

	cout << "Hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;
	cout << "What is Euler's Constant? ";
	getline (cin,eulerGuess);

	// Converts a string into a double
	// stof() for floats
	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant){

		cout << "You are right" << endl;

	} else {

		cout << "You are wrong" << endl;

	}

	// Size returns the number of characters
	cout << "Size of string " << eulerGuess.size() << endl;

	// empty tells you if string is empty or not
	cout << "Is string empty " << eulerGuess.empty() << endl;

	// append adds strings together
	cout << eulerGuess.append(" was your guess") << endl;

	string dogString = "dog";
	string catString = "cat";

	// Compare returns a 0 for a match, 1 if less than, -1 if greater then
	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	// assign copies a value to another string 
	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	// You can get a substring as well by defining the starting index and the
	// number of characters to copy
	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

	// find returns the index for the string your searching for starting
	// from the index defined
	int lastNameIndex = yourName.find("Banas", 0);
	cout << "Index for last name " << lastNameIndex << endl;

	// insert places a string in the index defined
	yourName.insert(5, " Justin");
	cout << yourName << endl;

	// erase will delete 6 characters starting at index 7
	yourName.erase(6,7);
	cout << yourName << endl;

	// replace 5 characters starting at index 6 with the string Maximus
	yourName.replace(6,5,"Maximus");
	cout << yourName << endl;

	// ---------- VECTORS ----------
	// Vectors are like arrays, but their size can change

	vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};

	// Add the array to the vector starting at the beginning of the vector
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

	// Insert a value into the 5th index
	lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

	// at gets the value in the specified index
	cout << "Value in 5 " << lotteryNumVect.at(5) << endl;

	// push_back adds a value at the end of a vector
	lotteryNumVect.push_back(64);

	// back gets the value in the final index
	cout << "Final Value " << lotteryNumVect.back() << endl;

	// pop_back removes the final element
	lotteryNumVect.pop_back();

	// front returns the first element
	cout << "First Element " << lotteryNumVect.front() << endl;

	// back returns the last element
	cout << "Last Element " << lotteryNumVect.back() << endl;

	// empty tells you if the vector is empty
	cout << "Vector Empty " << lotteryNumVect.empty() << endl;

	// size returns the total number of elements
	cout << "Number of Vector Elements " << lotteryNumVect.size() << endl;

	// ---------- FUNCTIONS ----------
	// Functions allow you to reuse and better organize your code

	cout << addNumbers(1) << endl;

	// You can't access values created in functions (Out of Scope)
	// cout << combinedValue << endl;

	cout << addNumbers(1, 5, 6) << endl;

	cout << "The factorial of 3 is " << getFactorial(3) << endl;

	// ---------- FILE I/O ----------
	// We can read and write to files using text or machine readable binary

	string steveQuote = "A day without sunshine is like, you know, night";

	// Create an output filestream and if the file doesn't exist create it
	ofstream writer("stevequote.txt");

	// Verify that the file stream object was created
	if(! writer){

		cout << "Error opening file" << endl;

		// Signal that an error occurred
		return -1;

	} else {

		// Write the text to the file
		writer << steveQuote << endl;

		// Close the file
		writer.close();

	}

	// Open a stream to append to whats there with ios::app
	// ios::binary : Treat the file as binary
	// ios::in : Open a file to read input
	// ios::trunc : Default
	// ios::out : Open a file to write output
	ofstream writer2("stevequote.txt", ios::app);

	if(! writer2){

		cout << "Error opening file" << endl;

		// Signal that an error occurred
		return -1;

	} else {

		writer2 << "\n- Steve Martin" << endl;
		writer2.close();

	}

	char letter;

	// Read characters from a file using an input file stream
	ifstream reader("stevequote.txt");

	if(! reader){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		// Read each character from the stream until end of file
		for(int i = 0; ! reader.eof(); i++){

			// Get the next letter and output it
			reader.get(letter);
			cout << letter;

		}

		cout << endl;
		reader.close();

	}

	// ---------- EXCEPTION HANDLING ----------
	// You can be prepared for potential problems with exception handling

	int number = 0;

	try{

		if(number != 0){
			cout << 2/number << endl;
		} else throw(number);

	} 
	catch(int number){

		cout << number << " is not valid input" << endl;

	}

	// ---------- POINTERS ----------
	// When data is stored it is stored in an appropriately sized box based
	// on its data type 

	int myAge = 39;
	char myGrade = 'A';

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;

	// You can reference the box (memory address) where data is stored with 
	// the & reference operator

	cout << "myAge is located at " << &myAge << endl;

	// A pointer can store a memory address
	// The data type must be the same as the data referenced and it is followed
	// by a *

	int* agePtr = &myAge;

	// You can access the memory address and the data 
	cout << "Address of pointer " << agePtr << endl;

	// * is the dereference or indirection operator
	cout << "Data at memory address " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 34};
	int* numArrayPtr = badNums;

	// You can increment through an array using a pointer with ++ or --
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++; 
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	// An array name is just a pointer to the array
	cout << "Address " << badNums << " Value " << *badNums << endl;

	// When you pass a variable to a function you are passing the value
	// When you pass a pointer to a function you are passing a reference
	// that can be changed

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " years old now" << endl;

	// & denotes that ageRef will be a reference to the assigned variable
	int& ageRef = myAge;

	cout << "ageRef : " << ageRef << endl;

	// It can manipulate the other variables data
	ageRef++; 

	cout << "myAge : " << myAge << endl;

	// You can pass the reference to a function
	actYourAge(ageRef);

	cout << "myAge : " << myAge << endl;

	// When deciding on whether to use pointers or references
	// Use Pointers if you don't want to initialize at declaration, or if
	// you need to assign another variable
	// otherwise use a reference

	// ---------- CLASSES & OBJECTS ----------
	// Classes are the blueprints for modeling real world objects
	// Real world objects have attributes, classes have members / variables
	// Real world objects have abilities, classes have methods / functions
	// Classes believe in hiding data (encapsulation) from outside code

	// Declare a Animal type object
	Animal fred;

	// Set the values for the Animal
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	// Get the values for the Animal
	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;

	fred.setAll(34, 12, "Fred");

	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;

	// Creating an object using the constructor
	Animal tom(36, 15, "Tom");

	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
		<< tom.getWeight() << " kgs in weight" << endl;

	// Demonstrate the inheriting class Dog
	Dog spot(38, 16, "Spot", "Woof");

	// static methods are called by using the class name and the scope operator
	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

	spot.getSound();

	// Test the toString method that will be overwritten
	tom.toString();
	spot.toString();

	// We can call the superclass version of a method with the class name 
	// and the scope operator
	spot.Animal::toString();

	// When a function finishes it must return an integer value
	// Zero means that the function ended with success
	return 0;
}
// counts words in a text file

//include <stdio.h>

int countwords(char* string, int size);

int wrap58(int argc, char** argv)
{
    #define MAX 5000
    char a[MAX] = {0};

    for (int i = 0 ; i < MAX && a[i] != '\n' ; i++)
        a[i] = getchar(); //cin.get();

    int n = countwords(a,MAX);

    printf("%d\n",n);

    #undef MAX
    return 0;
}


// function style word counter
int countwords(char* string, int size)
{
    #define isLetter ( \
    (string[iter] <= 'z' && string[iter] >= 'a') || \
    (string[iter] <= 'Z' && string[iter] >= 'A'))

    int iter = 0;
    bool inWord = 0;
    int wordCount = 0;

    while (iter < size)
    {
        if (isLetter)
            inWord = 1;
        else if (inWord == 1 && !(isLetter))
        {
            inWord = 0;
            wordCount++;
        }
        iter++;
    }

    #undef isLetter

    return wordCount;
}
        
// demonstration of writing to a file

//include <fstream>

int wrap59()
{
	ofstream Data;
	Data.open("lol.txt");

	Data << 'h';
	return 0;
}
// a program that writes pgm files
// pgm files are black and white pictures

//include <iostream>
//include <math.h>

 


#endif 

int wrap60()
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

/*
    a function that takes a 2d vector and rotates it

    Created by: Jordan Winkler
*/

//something is wrong with the math

int wrap62()
{
    for (int i = 1 ; i < 1000 ; i++)
    {
        if(isPrime(i))
            if(isPrime(2*i+1))
                cout << 2*i + 1 << endl;
    }
    return 0;
}
// tells age of something
// could be imporved to include new years day
// and automatically get current date


int wrap632() 
{

    enum MonthLength {JAN_LENGTH = 31, FEB_LENGTH = 28, MAR_LENGTH = 31,
    APR_LENGTH = 30, MAY_LENGTH = 31, JUN_LENGTH = 30, JUL_LENGTH = 31, 
    AUG_LENGTH = 31, SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30, 
    DEC_LENGTH = 31};

    int yearToday, monthToday, dayToday, yearBirth, monthBirth, dayBirth;
    int mToday, mBirth, difDay, difYear;


    cout << "What is today's date? (year, month, day) \n";
    cin >> yearToday >> monthToday >> dayToday;
    cout << yearToday << "/" << monthToday << "/" << dayToday << endl;
    cout << "Date in the past? \n";
    cin >> yearBirth >> monthBirth >> dayBirth;
    cout << yearBirth << "/" << monthBirth << "/" << dayBirth << endl;
    
    switch ( 7 /*monthToday*/)
    {
        case 12: mToday += DEC_LENGTH;
        case 11: mToday += NOV_LENGTH;
        case 10: mToday += OCT_LENGTH;
        case 9: mToday += SEP_LENGTH;
        case 8: mToday += AUG_LENGTH;
        case 7: mToday += JUL_LENGTH;
        case 6: mToday += JUN_LENGTH;
        case 5: mToday += MAY_LENGTH;
        case 4: mToday += APR_LENGTH;
        case 3: mToday += MAR_LENGTH;
        case 2: mToday += FEB_LENGTH;
        case 1: mToday += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }        
    switch (monthBirth)
    {
        case 12: mBirth += DEC_LENGTH;
        case 11: mBirth += NOV_LENGTH;
        case 10: mBirth += OCT_LENGTH;
        case 9: mBirth += SEP_LENGTH;
        case 8: mBirth += AUG_LENGTH;
        case 7: mBirth += JUL_LENGTH;
        case 6: mBirth += JUN_LENGTH;
        case 5: mBirth += MAY_LENGTH;
        case 4: mBirth += APR_LENGTH;
        case 3: mBirth += MAR_LENGTH;
        case 2: mBirth += FEB_LENGTH;
        case 1: mBirth += JAN_LENGTH; break;
        default: cout << "We only have 12 months.";           
    }
    
    difDay = (365*yearToday+mToday+dayToday)
           - (365*yearBirth+mBirth+dayBirth);
    difYear = difDay/365;
    cout << "That was this long ago\n" 
         << "Days: " << difDay << endl 
         << "Years: "<< difYear << " plus days: " 
         << difDay % 365 << endl;
    
    
    return 0;
}
// generic base converter


int wrap56(int argc, char** argv)
{
    if (argc != 4)
    {
        cout << "base2base [number] [starting base] [target base]\n";
        return 1;
    }

    int start_base = stringToPosInt(argv[2]);
    int target_base = stringToPosInt(argv[3]);

    // change all bases to base 10
    if (start_base != 10)
    {
        // convert each term
        cout << "stub";
        return 1;
    }


    int number = stringToInt(argv[1]);
    
    // change base 10 to sugested base
    int target_num_len = 64;
    int* target_num = new int[target_num_len]; // sloppy max
    for (int i = 0 ; i < target_num_len ; i++)
        target_num[i] = 0;

    changeToBase(number, target_base, target_num, target_num_len);

    // flip and clip 0s
    while (target_num[target_num_len-1] == 0)
        target_num_len--; 

    flipString(target_num, 0, target_num_len-1);


    // print number
    for (int i = 0 ; i < target_num_len ; i++)
        cout << target_num[i] << ' ';
    cout << endl;

    return 0;
}
// A program to convert base 10 into other bases
// this is the pretty version, practical version is in mainlib
// by: Jordan Winkler

 
int wrap57()
{
    int bottlesOfBeer;
    cout << "How many bottles of beer do we have? ";
    cin >> bottlesOfBeer;
    for (int i = bottlesOfBeer ; i > 0 ; i--)
    {
        cout << i << " bottles of beer on the wall, "
             << i << " bottles of beer.. \n"
             << "Take one down, pass it around, "
             << i - 1 << " bottles of beer on the wall.\n\n";
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, " << bottlesOfBeer 
         << " bottles of beer on the wall.\n";
    return 0; 
}

	


int wrap689(int argc, char** argv)
{

    if (argc != 2)
    {
        cout << "breakIntoPrimes [n]\n";
        return 1;
    }

    const int MAX = 50;
    int prim[MAX] = {0};

    int CompositeNumber = stringToInt(argv[1]);
    breakIntoPrimes(CompositeNumber, prim, MAX);

    for (int i = 0 ; i < MAX ; i++)
        if (prim[i] != 0)
            cout << prim[i] << ' ';

    cout << endl;

    return 0;
}
//made by: Jordan Winkler
//Enter sentence that you would like to encrypt into the 
//command line after the function call.


int wrap59(int argc, char* argv[])
{
    cout << "Starting phrase: ";
    for (int i = 1 ; i < argc ; i++)
        cout << argv[i] << ' ';
    cout << endl;

    cout << "Caesar cipher:   ";
    int j;
    for (int i = 1 ; i < argc ; i++)
    {
        j = 0;
        while (argv[i][j]) 
        { 
            cout << caesarCipher(argv[i][j], argc-1);
            j++;
        }
        cout << ' ' ;
    }
    cout << endl;

    return 0;

}

int wrap60(int argc, char* argv[]) 
{
    if (argc != 3)
	{
        cout << "calcDR [DR] [hp]\n";
        return 1;
	}
    double DR = stringToFloat(argv[1]);
    double hp = stringToFloat(argv[2]);

    cout << "Your actual hp is " << realHp(DR,hp) << endl;
    return 0;
}
//a program to count the number of each character type in a file
//created by: Jordan Winkler
//include <iostream>
//include <fstream>
//include <string>
 

int wrap61()
{
    const int ARRAY_SIZE = 10000;
    char A[ARRAY_SIZE+1] = {0};
    char Bucket;
    fstream data;
    cout << "Enter the name of the file you wish to scan "; //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    data.open(UserInput.c_str());
    int i = 0;
    while (data >> Bucket)
    {
	A[i++] = Bucket;	
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
    cout << A[j] << ' ';
    cout << endl;
	*/
    int Max = i; char Temp; //bubble sort algorithm
    for (int k = 0 ; k < i; k++)
    {
        for (int h = 0 ; h < Max ; h++)
        {
	    if (A[h] > A[h+1])
	    {
		Temp = A[h];
		A[h] = A[h+1];
		A[h+1] = Temp;
	    }
	}
	Max--;
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
        cout << A[j] << ' ';
    cout << endl;
	*/

    const int CharLength = 255;
    int Char[CharLength+1] = {0};
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
	    if (A[j] == k)
		Char[k]++;
    for (int j = 'a'; j <= 'z' ; j++)
	cout << (char) j << "; " << Char[j]+Char[(j-'a')+'A'] << endl;
    return 0;
}
//a program to count the number of each character type in a file
// input is file name 
//include <iostream>
//include <fstream>
 


int wrap62(int argc, char** argv)
{

    // if incorrect input, display error message
    if (argc != 2)
    {
        cout << "charStat [filename]\n";
        return 1;
    }
        
    // get size of file, manually
    fstream data;
    data.open(argv[1]);
    int i = 0;
    char Bucket; // something to stick data in
    while (data >> Bucket) i++;
    data.close();

    // read in data
    data.open(argv[1]);
    char* A = new char[i+2];
    while (data >> A[i++]);
   
    // sort data
    quickSort(A, 0, i);

    // count the amount of characters of each type
    const int CharLength = 255;
    int Char[CharLength+1]; 
    for (int k = 0 ; k < CharLength ; k++)
        Char[k] = 0;
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
            if (A[j] == k)
                Char[k]++;

    // only display alphabet as default
    for (int j = 'a'; j <= 'z' ; j++)
        cout << char(j) << ": " 
             << Char[j]+Char[(j-'a')+'A'] 
             << endl; 

    return 0;
}
//include <iostream>
  




 

int wrap69()
{
    cout << "give a name of a file to write to\n";
    string input;
    cin >> input;

    cout << input << endl;

    ofstream fout(input);
    if (fout.good())
        cout << "printing\n";

    fout << "lolcat lolcat\n";

    fout.close();


    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];
    while (!fin.eof() && fin.good()) //ignores whitespace, does not write in eof
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}

 

int wrap71()
{

// example writing to file
    cout << "give a name of a file to write to\n";
    string input;
    cin >> input;

    cout << input << endl;

    ofstream fout(input);
    if (fout.good())
        cout << "printing\n";

    fout << "lolcat lolcat\n";

    fout.close();
//////////////////////////////////////////////////////////////////

// example reading from file
    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];

    int fileSize = 0;
    while (!fin.eof() && fin.good()) fileSize++;

    
    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}
// testing cin
//include <iostream>


int wrap72()
{
    char a;
    std::cin >> a;
    return 0;
}
//a small text based game to test classes in c++

#ifndef broken
class creature
{
public:
	creature(int hpValue, int hungerValue);
	creature(int hpValue, int hungerValue, bool unkillable);
	
	bool dead;
	void status();
	void takeDamage(int damage);
private:
	int hp;
	int hunger;
	int attackPower;
	bool necromanced;
	void StartStatus();
};

void Part1();

int wrap78()
{
	Part1();
	return 0;
}

creature::creature(int hpValue, int hungerValue) 
	: hp(hpValue), hunger(hungerValue), necromanced(0)
{
	StartStatus();
}
creature::creature(int hpValue, int hungerValue, bool unkillable)
	: hp(hpValue), hunger(hungerValue), necromanced(unkillable)
{
	StartStatus();
}

void creature::StartStatus()
{
	if (hp < 0 && !necromanced)
	{
		cout << "stillborn error\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "negative food error\n"; 
		hunger = 0;
	}
}
void creature::status()
{
	if (hp < 0 && !necromanced)
	{
		cout << "creature is dead\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "creature needs food\n";
		hp -= 5;
	}
}

void creature::takeDamage(int damage)
{
	hp -= damage;
}

void Part1()
{
	creature Hero(100, 30), AngryCat(10, 30);
	cout << "Welcome hero! \nYou appear in a forest. There is a monster.\n";
	while (!AngryCat.dead) //computer doesn't know of angry cat?
	{
		cout << "Attack? y/n\n";
		char Attack = cin.get();
		if (Attack == 'y')
			AngryCat.takeDamage(5);
		else 
		{
			cout << "Monster takes advantage\n";
			Hero.takeDamage(5);
		}
		Hero.takeDamage(1);
		AngryCat.status();
		Hero.status();
		cin.ignore();
	}
}
#endif



//include <iostream>
//include <fstream>
//include <string>
//include <math.h>
 

int wrap222() 
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
// gives random greetings

//include <iostream>
//include <cstdlib>
 

int wrap2222()
{
    int greetings;
    cout << "How many greetings do you want? ";
    cin >> greetings;
    
    for (int i = 0; i < greetings; i++) 
    {
        string h;
        switch (rand() % 6 + 1) 
        {
            case 1: h = "hello, "; break;
            case 2: h = "good day, "; break;
            case 3: h = "guten tag, "; break;
            case 4: h = "greetings, "; break;
            case 5: h = "I come in peace, "; break;
            case 6: h = "Live long and prosper, "; break;
        }
        cout << h;
    };
    cout << "\nhave a good rest of your day :)\n";
    
    return 0;
}
//first insertion sort
//made by: Jordan Winkler
//made on: 06/05/2017

//include <iostream>
//include <time.h>
//include <stdlib.h>
 




int lololol()
{
    srand(time(NULL));

    int max = 20;

    int* array = new int[max];

    for (int i = 0 ; i < max ; i++)
        array[i] = rand() % 250;

    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    //insert sort
    for (int outside = 0 ; outside < max ; outside++)
        for (int i = outside ; i > 0 ; i--)
        {
            if (array[i-1] > array[i])
                swap(array, i-1, i, max);
        }
    
    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    return 0;
}

#ifndef broken
// name:     Jordan Winkler
// date:     2/10/2017
// homework: 2
// process:  creates a structure that can hold an ID number and
//           a first and last name. Then generates unique IDs,
//           assigns names from a file, sorts ascending by IDs,
//           and allows binary searching for name by ID.
//           (optional) saves data to a file of choice

//include <iostream>
//include <stdlib.h> //for random functions, exit()
//include <fstream> //for reading names
//include <time.h> //for random seed
//include <string>
 

struct id
{
    int IDnumber;
    char FirstName[20];
    char LastName[20];
};

int getNameNSize(string &File);

void GiveID(id names[], int Max);

int Unique(int num, id names[], int Max);

void AssignNames(id names[], int Max, string File);

void QuickSort(id names[], int left, int right);

int binarySearch(int target, id names[], int Size);

int getInt();

void PrintNames(id names[], int Max);

void SaveToFile(id names[], int Max);

int wrap22222()
{
    string FileName;
    int MaxNum = getNameNSize(FileName);
    id *MyNames = new id[MaxNum]; 

    GiveID(MyNames, MaxNum);

    AssignNames(MyNames, MaxNum, FileName);
    
    cout << "pre-sort:\n";
    PrintNames(MyNames, MaxNum);

    QuickSort(MyNames, 0, MaxNum-1);
    
    cout << "\npost-sort:\n";
    PrintNames(MyNames, MaxNum);
    
    cout << "\nsample ID: " << MyNames[3].IDnumber << endl;

    cout << "\nEnter an ID number less than 10k. (0 to quit)\n";

    int UserInput = getInt(); //my own function for easier control
                              //of input
    int PersonPlace;          //Location of person in array
    while (UserInput)
    {
        PersonPlace = 
            binarySearch(UserInput, MyNames, MaxNum);
        if (PersonPlace < MaxNum)
            cout << "\nID: " << MyNames[PersonPlace].IDnumber
                 << "\nFirst Name: " 
                 << MyNames[PersonPlace].FirstName
                 << "\nLast Name:  " 
                 << MyNames[PersonPlace].LastName
                 << "\nLocation:   " 
                 << PersonPlace << endl;
        else
            cout << "\nError: Not Found\n";
        
        cout << "\nEnter an ID number less than 10k. "
             << "(0 to quit)\n";

        UserInput = getInt(); 
    }
/*  
    cout << "Save? (1/0) "; //for quicker search in other programs
    cin.ignore(); //clean out \n
    char UserInput2 = cin.get();
    if (UserInput2 == '1') SaveToFile(MyNames, MaxNum);
*/
    delete [] MyNames;
    return 0;
}


/*****************************************************************
| Name: getNamesNSize
|    
| Precodition: a file to read 1k > names from, names separated by
|              a space
| Postcondition: The number of (first, last) names, name of file
|                for other programs
|
| Parameters:
|       
|   IN: String called File
|   Out: That same string
|   
| Returns: int size of ordered pairs (first, last)
\*****************************************************************/
int getNameNSize(string &File)
{
	fstream InData;
//  File = "FantasyNames"; //for debugging

    cout << "Enter the name of the file you wish to scan: "; 
    getline(cin, File);
    InData.open(File.c_str());

    int i = 0;
    char word[20];
    while (InData >> word)
    {
        i++;
        if (i > 2000)
        {
            cout << "\nError: file too large\n";
            exit(1);
        }
    }
    InData.close();

    if (i > 2)
        return (i)/2; 
    else 
    {
        cout << "\nError: file too small\n";
        exit(1);
    }
}           
    

/*****************************************************************
| Name: GiveID
|    
| Precodition: an array of type id and its size
| Postcondition: unique id numbers for each element
|
| Parameters:
|       
|   IN: location of array of type id and int size of id array
|   Out: nothing
|   
| Returns: nothing
\*****************************************************************/
void GiveID(id names[], int Max)
{
    srand (time(NULL));  //time() is an easy way to create a 
                         //random seed between program calls
    int theID;
    for (int i = 0 ; i < Max ; i++)
    {
        do
        {   
            /* Unique() inf loops at < Max*Max */
            theID = int(rand() % (Max*Max)) + 1; 
        } while (!Unique(theID, names, i)); 
        names[i].IDnumber = theID;
    }
}

/*****************************************************************
| Name: Unique
|    
| Precodition: an array of type id and its size, an int to
|              test
| Postcondition: confirmation if the int is unique to the array
|
| Parameters:
|       
|   IN: location of an array of type id and its int size, 
|       and an interger to check
|   Out: Nothing
|   
| Returns: 1 or 0 if the number is unique
\*****************************************************************/
int Unique(int num, id names[], int numLocation)
{
    if (numLocation == 0) return 1;
    for (int i = 0 ; i < numLocation ; i++)
        if (num == names[i].IDnumber)
            return 0;
    return 1;
}

/*****************************************************************
| Name: AssignNames
|    
| Precodition: a file named "FantayNames" to read, an array of 
|              type id and its size
| Postcondition: The same array filled with first and last names
|
| Parameters:
|       
|   IN: the location of an array of id structures, and int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void AssignNames(id names[], int Max, string File)
{
    fstream InData;
    InData.open(File.c_str());
    for (int i = 0 ; i < Max ; i++)
    {
        InData >> names[i].FirstName;
        InData >> names[i].LastName;
    }
    InData.close();
}

#endif


int lambda_test() 
{
    //declaration of lambda function in c++
    auto f = [](int x) { return x*42; }; 

    std::cout << "f() = " << f(2) << std::endl;

    return 0;
}


int lcm_drive(int argc, char* argv[])
{
    if (argc != 3)
	{
        cout << "lcm [a] [b]\n";
        return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    int GCD = gcd(a,b);
    cout << (a*b)/GCD << endl;

    return 0;
}
// counts the lines in a file
// needs fixing

//include <iostream>
//include <fstream>
 

int wrap333(int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "linecount [file 1] (file 2) ... (file n)\n";
        return 1;
    }

    long int sum = 0;
    char temp;
    fstream Data;
    for (int i = 1 ; i < argc ; i++)
    {
        Data.open(argv[i]); // check if actually exists?
        while(Data >> temp) // does not count whitespace
        {
            if (temp == ' ')
                sum++;
        }
        Data.close();
    }

    cout << sum << endl;
    
    return 0;
}

// name:     Jordan Winkler
// date:     6/1/2017
// process:  Adds a struct of type img, then asks the user what 
//           they want to do. They can: add_head, add_tail, 
//           add_id, delete_id, delete_head, and delete_tail. 
//           They can also list_nodes and list_id to see what 
//           is happening. 
//           (optional) 
//           Resequencing can be done to preserve id, or to 
//           relable links 0,1,2,...,n. There is also a clear
//           screen option for bash terminals.


//include <iostream>
//include <math.h>
//include <stdlib.h>
 
#ifndef broken
struct img
{
    int id;
    char pxls[512][512];
    img* next;
};

int add_head(img*& head, int Id); 
int add_head(img*& head); 
img* add_head();

int add_tail(img* head); 

int add_id(img*& head, int Id); 

int delete_id(img*& head, int Id); 

int delete_head(img*& head);

int delete_tail(img*& head);
    
void list_nodes(img* head);

void list_id(img* head); 

int getInt();

void list_nodes(img* head);

void zero_pxls(img* node);

void clear_screen();

void sequence_list(img*& head);

void quickSort(img* arr[], int left, int right);


int wrap444()
{
    img* head = add_head();
    int UserInput;
    int Id;
    char Continue;

    do 
    {
        clear_screen();
        cout << "choose:\n"
             << "------------------\n"
             << "add_head       (1)\n"
             << "add_tail       (2)\n"
             << "add_id         (3)\n"
             << "delete_id      (4)\n"
             << "delete_head    (5)\n"
             << "delete_tail    (6)\n"
             << "list_nodes     (7)\n"      
             << "list_id        (8)\n"
             << "quit           (0)\n\n";

        UserInput = getInt();
        
        switch (UserInput)
        {
            case 1: add_head(head);     break;
            case 2: add_tail(head);     break;
            case 3: cout << "ID: ";
                    Id = getInt();
                    add_id(head, Id);   break;
            case 4: cout << "ID: ";
                    Id = getInt();
                    delete_id(head,Id); break;
            case 5: delete_head(head);  break;
            case 6: delete_tail(head);  break;
            case 7: list_nodes(head);   break;
            case 8: list_id(head);      break;
            case 0: clear_screen();
                    return 0;           break;
            default: cout << "Error: bad user input"; return 0;
        }
        Continue = cin.get(); //for pause between screen clears
    } while (UserInput != 0);

    return 0;
}



/****************************************************************
| Name: zero_pxls
|    
| Precodition: there exists a struct called img, with an array 
|              called pxls 512 by 512
| Postcondition: the pxls has been cleaned of random data
|
| Parameters:
|       
|   IN: pointer to an img
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void zero_pxls(img* node)
{
    for (int j = 0 ; j < 512 ; j++)
        for (int i = 0 ; i < 512 ; i++)
            node->pxls[i][j] = 0;
}

/****************************************************************
| Name: add_tail
|    
| Precodition: there exists a struct called img, or a list of
|              them.
| Postcondition: another img is added to the list
|
| Parameters:
|       
|   IN: pointer to the beginning of the chain of img
|   Out: Nothing
|   
| Returns: 0 for success, 1 for failure
\****************************************************************/
int add_tail(img* head)
{
    /* fail if no head to add to */
    if (head == NULL)
    {
        return 1;
    }

    /* add new image to the tail */
    img* p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = new img;
    p->next->next = NULL;

    /* zero out the pixels */
    zero_pxls(p->next);

    /* assign next sequential integer to image id */
    int ID = p->id;
    ID++;
    p->next->id = ID;

    return 0;
}

/****************************************************************
| Name: add_head
|    
| Precodition: there exists an struct called image
| Postcondition: a new linked list or adding to the front of
|                an existing one
|
| Parameters:
|       
|   IN: Nothing if creating new list, pointer to head if adding
|       an element
|   Out: pointer to head if working on existing list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_head(img*& head, int Id) 
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */

    sequence_list(head); //if you want to preserve id

/*
    int i = Id; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
int add_head(img*& head)
{
    /* Add new image to the head of the list */
    img* p = new img;
    p->next = head;
    head = p;

    /* zero out the pixels */
    zero_pxls(p);

    /* resequence image id */
    sequence_list(head); //if you want to preserve id
/*
    int i = 0; //otherwise
    while(p)
    {
        p->id = i++;
        p = p->next;
    }
*/

    return 0;
}
img* add_head()
{
    img* head = new img;
    head -> id = 0;
    head -> next = NULL;
    return head;
}

/****************************************************************
| Name: add_id
|    
| Precodition: There exists a list of structs called img
| Postcondition: an img of the given id is added to the list
|
| Parameters:
|       
|   IN: pointer to start of list, int of Id to look for
|   Out: Nothing
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int add_id(img*&head, int Id)
{
    /* handling adding id <= head->id */
    if (Id < head->id)
    {
        add_head(head, Id);
        return 0;
    }
    if (Id == head->id)
        return 1;
    
    /* get to Id */
    img* p = head; //lead
    img* q = head; //stays one step behind
    while (p->id < Id && p->next != NULL)
    {
        q = p;
        p = p->next;
    }   

    /* handling Id is at spot */
    if (p-> id == Id)
        return 1;

    /* handling Id is not at spot */
    if (p->id != Id)
    {
        img* r = p->next;
        p->next = new img;
        p->next->next = r;
        p->next->id = Id;
        zero_pxls(p->next);

        return 0;
    }
}

/****************************************************************
| Name: delete_id
|    
| Precodition: a list of structs called img
| Postcondition: an element of given id removed
|
| Parameters:
|       
|   IN: pointer to beginnning of list, Id of struct to be removed
|   Out: nothing
|   
| Returns: 0 if success, 1 if failure
\****************************************************************/
int delete_id(img*& head, int Id)
{
    /* handling id is head */
    if (head->id == Id)
    {
        delete_head(head);
        return 0;
    }

    /* removes the image with a given id */
    img* p = head; //lead
    img* q = head; //stays one step behind

    /* get to id or end */
    while (p->id < Id && p->next != NULL) 
    {
        q = p;
        p = p->next;
    }

    /* handling if id is here */
    img* r = p->next; 
    if (p->id == Id) 
    {
        delete q->next;
        q->next = r; 
    }

    return 0;
}

/****************************************************************
| Name: delete_head
|    
| Precodition: the exists a struct named img, or a list of them
| Postcondition: the head has been removed
|
| Parameters:
|       
|   IN: pointer to the begining of the list
|   Out: pointer to the begining of the list
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_head(img*& head)
{
    /* handling if no list elements */
    if (head == NULL) 
    {
        return 1;
    }
     
    /* handling if there is only a head */
    if (head -> next == NULL) 
    {
        delete head;
        head = NULL;
        return 0;
    }

    /* handling x > 1 elements */
    if (head -> next != NULL) 
    {
        img* tmp = head -> next;
        delete head;
        head = tmp;
        return 0;
    }
}

/****************************************************************
| Name: delete_tail
|    
| Precodition: the exists a list of structs called img
| Postcondition: the end element of the list has been removed
|
| Parameters:
|       
|   IN: pointer to head
|   Out: pointer to head
|   
| Returns: 0 on success, 1 on failure
\****************************************************************/
int delete_tail(img*& head)
{
    
    img* p = head; //lead
    img* q = head; //stays 1 behind lead

    /* head -> null, no linked list */
    if (p == NULL) 
    {
        return 1;
    }

    /* list has only one element */
    if (p -> next == NULL) 
    {
        delete head; 
        head = NULL;    
        return 0;
    }

    /* handling list elements > 1 */
    while (p -> next != NULL) 
    {
        q = p; 
        p = p -> next;
    }
    delete q -> next;
    q -> next = NULL;

    return 0;
}

/****************************************************************
| Name: list_nodes
|    
| Precodition: there exists a list of struct img
| Postcondition: the locations are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_nodes(img* head)
{
    cout << "list of nodes\n";
    img* p = head;
    while (p)
    {
        cout << p << endl;
        p = p->next;
    }
    cout << p << "\n\n";
}

/****************************************************************
| Name: list_id
|    
| Precodition: there exists a list of struct called img
| Postcondition: the id's of the list are printed to the terminal
|
| Parameters:
|       
|   IN: pointer to the beggining of the list
|   Out: Nothing
|   
| Returns: Nothing
\****************************************************************/
void list_id(img* head)
{
    cout << "list of ID\n";
    img* p = head;
    while (p)
    {
        cout << p->id << endl;
        p = p->next;
    }
    cout << endl;
}

/****************************************************************
| Name: getInt
|    
| Precodition: <iostream>, <stdlib> ,<math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  none
|   Out: none
|   
| Returns: an int from the user
\****************************************************************/
int getInt()
{
	const int ARRAY_SIZE = int(log10(pow(2, sizeof(int)*8))+1);
	char UserInput[ARRAY_SIZE] = {0};
	int ArraySpot = 0;
	int Rows = 0;

	do 
	{
		UserInput[ArraySpot] = cin.get();
		if (ArraySpot > ARRAY_SIZE)
		{
			cout << "\nSmaller number please\n";
			exit(1);
		}
	} while ( UserInput[ArraySpot++] != '\n');
	for (int i = 0 ; i < ArraySpot - 1 ; i++)
	{
		if (UserInput[i] <= '9' && UserInput[i] >= '0')
		{
			Rows += int(UserInput[i] - '0');
			Rows *= 10; 
		}
		else 
		{
			cout << "\nError: not a positive integer\n";
			exit(1);
		}
	}
	return Rows /= 10;
}

/****************************************************************
| Name: clear_screen
|    
| Precodition: there is a terminal screen
| Postcondition: it has been cleared
|
| Parameters:
|       
|   IN: None
|   Out: None
|   
| Returns: Nothing
\****************************************************************/
void clear_screen()
{
    /* for bash users */
    system("clear"); 

    /* in general */
//  for (int i = 0 ; i < 500 ; i++) cout << endl; 
}

/****************************************************************
| Name: sequence_list
|    
| Precodition: there is a list
| Postcondition: the list is sequenced from low to high
|
| Parameters:
|       
|   IN: pointer to img called head
|   Out: pointer to img called head
|   
| Returns: nothing
\****************************************************************/
void sequence_list(img*& head)
{
    /* get length of list */
    img* p = head; 
    int length = 0;
    while (p)
    {
        length++;
        p = p->next;
    }

    /* create array for list */
    img** list = new img*[length+1]; 

    /* point at each object */
    p = head; 
    int index = 0;
    while (p)
    {
        list[index] = p;
        
        index++;
        p = p->next;
    }

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    quickSort(list, 0, length-1); 

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/   
    
    /* fix img.next's */
    head = list[0];
    for (int i = 0 ; i < length-1 ; i++) 
    {
        list[i]->next = list[i+1];
    }
    list[length-1]->next = NULL;

/*
    for (int i = 0 ; i < length-1 ; i++) //for debug
    {
        cout << "a " << list[i]->id << endl;
        cout << "b " << list[i]->next->id << endl;
    } cout << endl;
*/

    delete [] list;
}

/****************************************************************
| Name: quicksort
|    
| Precodition: an array; 
|               information on the begining and end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: struct pointer array, int for start and end
|   Out: same array 
|   
| Returns: nothing
\****************************************************************/
void quickSort(img* arr[], int left, int right) 
{
      int i = left, j = right;
      img* tmp;
      int pivot = arr[(left + right) / 2]->id;
 
      /* partition */
      while (i <= j) {
            while (arr[i]->id < pivot)
                  i++;
            while (arr[j]->id > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;

                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

/*


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

1

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1
2


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 10

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
0
1
2
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

4
ID: 0

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
2
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

4
ID: 2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10
5


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

6

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

2

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

3
ID: 5

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
1
10
5
11
12
13


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

7
list of nodes
0x7efe9b742010
0x7efe9b6c0010
0x254b4a0
0x248b440
0x24cb460
0x250b480
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

1

choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

8
list of ID
0
1
5
10
11
12
13


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

7
list of nodes
0x258b4c0
0x7efe9b742010
0x254b4a0
0x7efe9b6c0010
0x248b440
0x24cb460
0x250b480
0


choose:
------------------
add_head       (1)
add_tail       (2)
add_id         (3)
delete_id      (4)
delete_head    (5)
delete_tail    (6)
list_nodes     (7)
list_id        (8)
quit           (0)

0

*/
//*****************************************************************
//  LinkedList.h
//  LinkedList_Project
//
//  Created by Jordan Winkler on June 12, 2014.
//  This header file contains the LinkedList class declarations.
//*****************************************************************

//#ifndef LinkedList_h
//#define LinkedList_h

//include <iostream>
//include <string>
 

//*****************************************************************
// Node structs contain data and a pointer to the next node.
// In this project, it will represent a song/artist combination.
//*****************************************************************
struct node
{
    string song;
    string artist;
    node * next;
};

//*******************************************************************
// LinkedList is a list of singly-linked nodes.
// In this project, it will represent a song playlist.
//*******************************************************************
class LinkedList
{
private:
    // Head of the list contains no song data, 
    // but points to the song playlist.
    node * head;
    int listLength;
    
public:
    // Default Constructor creates the head node.
    LinkedList();
    
    // Setter adds a node to the list at a given position.
    // Takes a node and list position as parameters.
    // Position must be between 1 and the number of data nodes.
    // Returns true if the operation is successful.
    bool insertNode( node * newNode, int position );
    
    // Setter removes a node by its given position.
    // Returns true if the operation is successful.
    bool removeNode( int position );

    // Prints each node in the list in consecutive order,
    // starting at the head and ending at the tail.
    // Prints list data to the console.
    void printList();
    
    // Destructor de-allocates memory used by the list.
    ~LinkedList();
};

//#endif

//----------------------------------------------------------------

//*****************************************************************
//  LinkedList.cpp
//  LinkedList_Project
//
//  Created by Jordan Winkler on June 12, 2014.
//  This source file contains the LinkedList class definitions.
//*****************************************************************

////include "LinkedList.h"

// Default Constructor creates the head node.
LinkedList::LinkedList()
{
    head -> song = "head (contains no song data)";
    head -> artist = "head (contains no artist data)";
    head -> next = NULL;
    listLength = 0;
}

// Setter adds a node to the list at a given position.
// Takes a node and list position as parameters.
// Position must be between 1 and the number of data nodes.
// Returns true if the operation is successful.
bool LinkedList::insertNode( node * newNode, int position )
{
    if ((position <= 0) || (position > listLength + 1))
    {
        cout << "nError: the given position is out of range.n";
        return false;
    }
    if (head -> next == NULL) 
    {
        head -> next = newNode;
        listLength++;
        return true;
    } 
    int count = 0;
    node * p = head;
    node * q = head;
    while (q)
    { 
        if (count == position)
        {
            p -> next = newNode;
            newNode -> next = q;
            length++;
            return true;
        }
        p = q;
        q = p -> next;
        count++;
    }
    if (count == position)
    {
        p -> next = newNode;
        newNode -> next = q;
        listLength++;
        return true;
    }
    cout << "nError: node was not added to list.n";
    return false;
}

// Setter removes a node by its given position.
// Returns true if the operation is successful.
bool LinkedList::removeNode( int position )
{
    if ((position <= 0) || (position > listLength + 1))
    {
        cout << "nError: the given position is out of range.n";
        return false;
    }
    if (head -> next == NULL)
    {
       cout << "nError: there is nothing to remove.n";
       return false;
    }
    int count = 0;
    node * p = head;
    node * q = head;
    while (q) 
    {
        if (count == position)
        {
            p -> next = q -> next;
            delete q;
            listLength--;
            return true;
        }
        p = q;
        q = p -> next;
        count++;
    }
    cout << "nError: nothing was removed from the list.n";
    return false;
}

// Prints each node in the list in consecutive order,
// starting at the head and ending at the tail.
// Prints the data to the console.
void LinkedList::printList()
{
    node * p = head;
    node * q = head;
    cout << "n---------------------------n";
    cout << "Song Playlist n";
    while (q)
    {
        p = q;
        cout << "n-----------------------------n";
        cout << "t position: " << p -> count << endl;
        cout << "t song: " << p -> song << endl;
        cout << "t artist: " << p -> artist << endl;
        q = p -> next;
        count++;
    }
}

// Destructor de-allocates memory used by the list.
LinkedList::~LinkedList() 
{
    node * p = head;
    node * q = head;
    while (q)
    {
        p = q;
        q = p -> next;
        if (q) delete p;
    }
}


int wrap555(int argc, char *argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
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
/*
# makefile for c++ programs

# would be nice to be able to clean files from this command
# or if makefiles kept track of files outside currect directory
# or if I used bash instead...

programs= countwords sum charStat primesBetween toAscii sigma polycoef \
          phiInverse pascalsTriangle nameConicSection lcm age dndroll \
          calcDR baseconvert
bin=/home/jordan/Backup/nonsensitive/programs/bin/
cc=g++
output=$(cc) -o $(bin)

# convert base 10 to another base
baseconvert : baseconverter.cpp
	$(output)baseconvert baseconverter.cpp

# calculates the actual hp of a elderscrolls character
calcDR : calcDR.cpp
	$(output)calcDR calcDR.cpp

# rolls large number of dice
dndroll : dndRoll.cpp
	$(output)dndroll dndRoll.cpp

# gets age of something, interactive
age : age.cpp
	$(output)age age.cpp

# least common multiple
lcm : lcm.cpp
	$(output)lcm lcm.cpp

# deduces the conic section
nameConicSection : nameTheConicSection.cpp
	$(output)nameConicSection nameTheConicSection.cpp

# prints out a section of pascals triangle
pascalsTriangle : PascalsTriangle.cpp
	$(output)pascalsTriangle PascalsTriangle.cpp

# number theoretic function phi inverse
phiInverse : phiInversePattern.cpp
	$(output)phiInverse phiInversePattern.cpp

# prints the coefficient of a given polnomial
polycoef : polycoeffiecient.cpp 
	$(output)polycoef polycoeffiecient.cpp

# number theoretic function called sigma
sigma : sigma.cpp
	g++ -o $(bin)sigma sigma.cpp

# translates ascii characters to their literal numbers in decimal 
toAscii : toAscii.cpp
	g++ -o $(bin)toAscii toAscii.cpp

# give all prime numbers between two numbers
primesBetween : seive.cpp
	g++ -o $(bin)primesBetween seive.cpp

# count the number of each alphabetical letter show up in a file
charStat : charStat.cpp
	g++ -o $(bin)charStat charStat.cpp

# counts sequences of alphabetical characters (words)
countwords : wordcount.cc
	gcc -o $(bin)countwords wordcount.cc

# sums up floating point numbers
sum : sumfloat.cpp
	g++ -o $(bin)sum sumfloat.cpp

all : $(programs)
*/
//this program gives the age difference between user and Bach
//include <iostream>
//include <cstdlib>
 

class DayOfYear
{
public:
	void Input();
	void Output();
	void set(int NewMonth, int NewDay);
	void set(int NewMonth);
	int GetMonthNumber();
	int GetDay();
private:
	int Month;
	int Day;
};

int examplecode()
{
	DayOfYear Today, BachBirthday;
	cout << "Enter today's date:\n";
	Today.Input();
	cout << "Today's date is ";
	Today.Output();
	cout << endl;

	BachBirthday.set(3, 21);
	cout << "J. S. Bach's birthday is ";
	BachBirthday.Output();
	cout << endl;
	if ( Today.GetMonthNumber() == BachBirthday.GetMonthNumber()
			&& Today.GetDay() == BachBirthday.GetDay()
       )
		cout << "Happy Birthday\n";
	else 
		cout << "Happy Unbirthday\n";
	return 0;
}

void DayOfYear::set(int NewMonth, int NewDay)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	if ((NewDay >= 1) && (NewMonth <= 31))
		Day = NewDay;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::set(int NewMonth)
{
	if ((NewMonth >= 1) && (NewMonth <= 12))
		Month = NewMonth;
	else 
	{
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	Day = 1;
}

int DayOfYear::GetMonthNumber()
{
	return Month;
}

int DayOfYear::GetDay()
{
	return Day;
}

//Uses iostream and cstdlib
void DayOfYear::Input()
{
	cout << "Enter the month as a number: ";
	cin >> Month;
	cout << "Enter the day of the month: ";
	cin >> Day;
	if ((Month < 1) || (Month > 12) || (Day < 1) || (Day > 31))
	{
		cout << "Illegal date! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::Output()
{
	switch (Month)
	{
		case 1: cout << "January "; break;
		case 2: cout << "February "; break;
		case 3: cout << "March "; break;
		case 4: cout << "April "; break;
		case 5: cout << "May "; break;
		case 6: cout << "June "; break;
		case 7: cout << "July "; break;
		case 8: cout << "August "; break;
		case 9: cout << "September "; break;
		case 10: cout << "October "; break;
		case 11: cout << "November "; break;
		case 12: cout << "December "; break;
		default:
			cout << "Error in DayOfYear::Output.";
	}
	cout << Day;
}
//I need a way to query the whole prereq list, look up trees

//include <iostream>
//include <fstream>
 

struct course //number of the course
{
    string name; //what the course is called
    int credits; //This is sometimes a range
    int prereq[6]; // I want a pointer of this class
    int coreq;
    bool classTaken;
} m[2000];

int wrap5()
{
    fstream data;
    data.open("data");
    int prereqStore[20];
    string nameStore[20];
    int index;
    for (int i = 0; i <= 61; i++) {
        data >> index;
        data >> m[index].name;
        data >> m[index].credits;
        for (int j = 0 ; j < 6 ; j++) {
        data >> m[index].prereq[j];     }
        data >> m[index].coreq;
        data >> m[index].classTaken;
    }
    /*
    index = 310;
    cout << index << " " 
    <<m[index].name << " "
    <<m[index].credits << " "
    <<m[index].prereq1 << " "
    <<m[index].prereq2 << " "
    <<m[index].prereq3 << " "
    <<m[index].prereq4 << " "
    <<m[index].prereq5 << " "
    <<m[index].prereq6 << " "
    <<m[index].coreq << " "
    <<m[index].classTaken;
    */
    /*for (int index = 311; index >= 216; index -= 95) {
        cout << index << " "
             << m[index].name << " "
             << m[index].credits << " "
             << m[index].prereq << " "
             << m[index].classTaken << endl; 
    }*/
    
    cout << "give me a class number\nm";
    cin >> index;
    cout << "For " << m[index].name 
         << " the following classes are prereqs:\n";
    int j = 0, k= 5;
    for (int l = 0; l < j+1; l++) //need variable instead of j+1
    {
        for (int i = 0; i < 6; i++) 
        {   
            if (m[index].prereq[i] != 0) 
            { 
                prereqStore[j] = m[index].prereq[i];
                j++; 
            }        
        }
        //cout << index << " ";
        index = prereqStore[l]; 
        cout << index << " ";
    } cout << endl;
    for (int i = 0 ; i < j ; i++) 
    {
        cout << prereqStore[i] << ", ";
    }
    /*
    cout << "The class numbers are: ";
    int indexName = index;
    while (index != 0) {
        cout << "m" << m[index].prereq[0] << ", "; //How do I get rid of 0?
        index = m[index].prereq[0];
    }
    cout << endl << "The names of these classes are:\n";
    while (indexName != 0) {
        cout << m[indexName].name << "\n"; //How do I get rid of 0?
        indexName = m[indexName].prereq[0];
    }
    cout << "\n 0 it the termination of the prereq string";
    */
    data.close();
    return 0;
}/*
 * I need a way to query the whole prereq list, look up 
 * trees just give each class an id, 
 * logic gates can determine letter and subject type
 * math 1, cs 2
 * math: m1, a2, b3, c4, n5, k6, t7, w8, p9
 */
//include <iostream>
//include <fstream>
 

void sort(double a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <= ... a[numberUsed - 1].
void swapValues(double& v1, double& v2);
//Interchanges the values of v1 and v2.
int indexOfSmallest(const double a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the
//values a[startIndex], a[startIndex + 1], ..., a[numberUsed - 1].

struct course //number of the course
{
    string name; //what the course is called
    int credits; //This is sometimes a range, so max is listed if class is not repeatable
    int prereq[6]; //  0 = empty
    //string prereqRelation; /*default && between prereqs, a sequence of || listed*/
    int coreq;
    int classTaken; //was bool
} m[30000]; // m[1] stands for unusual circumstance

class A
{
    
};

int wrap4()
{
    fstream data;
    data.open("data");
    int prereqStore[20];
    string nameStore[20];
    int index;
    for (int i = 0; i <= 110; i++) { 
        data >> index;
        data >> m[index].name;
        data >> m[index].credits;
        for (int j = 0 ; j < 6 ; j++) {
        data >> m[index].prereq[j];     }
        data >> m[index].coreq;
        data >> m[index].classTaken;
    }
    /*
    index = 29565;
    cout << index << " " 
    <<m[index].name << " "
    <<m[index].credits << " ";
    for (int j = 0 ; j < 6 ; j++) {
    cout<<m[index].prereq[j];     }
    cout<<m[index].coreq << " "
    <<m[index].classTaken;
     */
    
    m[1].name = "This has an unusual rule";
    
    
    string *strin;
    char *letter;
    int *number;
    cin >> strin >> letter >> number;
    if (strin == "math") int subject = 1; else int subject=0;//local
    if (strin == "csci") {int subject = 2;};
    if (letter == 'm') {int subject1 = 1;} else int subject1=0;
    if (letter == 'a') {int subject1 = 2;};
    if (letter == 'b') {int subject1 = 3;};
    if (letter == 'c') {int subject1 = 4;};
    if (letter == 'n') {int subject1 = 5;};
    if (letter == 'k') {int subject1 = 6;};
    if (letter == 't') {int subject1 = 7;};
    if (letter == 'w') {int subject1 = 8;};
    if (letter == 'p') {int subject1 = 9;};
    int identity = (subject*10000)+subject1*1000+number;
    cout << identity;
    
    
    /*
    cout << "Type in the class\n";
    cin >> index;
    cout << "For " << m[index].name 
         << " the following classes are prereqs:\n";
    int j = 0, k= 5;
    for (int l = 0; l < j+1; l++) //need variable instead of j+1
    {
        for (int i = 0; i < 6; i++) //404 causes segmentation fault
        {   //403 has a loop, how do I fix?
            if (m[index].prereq[i] != 0) 
            { 
                prereqStore[j] = m[index].prereq[i];
                j++; 
            }        
        }
        //cout << index << " ";
        index = prereqStore[l]; 
        cout << index << " ";
    } cout << endl; //sort than locally search for copies
    /*
    int redudant[10][10];
    for (int i = 0 ; i < j ; i++)
    {
        for (int c = (i+1) ; c < ((j+i) % (j+1)) ; c = (c + 1) % (j-1))
        {
            if (prereqStore[c] == prereqStore[i])
            { //need to redesign this to return only nonredundant elements
                //how to i remove flagged redundant elements after
            } // how do i sort this list, give each the name..
        } //have a flag for classes I have taken before
    } 
    for (int i = 0 ; i < j ; i++) 
    {
        cout << prereqStore[i] << ", ";
    }
    */
    data.close();
    return 0;
}

void sort (double a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
        indexOfNextSmallest = 
                indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
        //a[0] <= a[1] <= ... <= a[index] are the smallest of the
        //original array elements. The rest of the
        //elements are in the remaining positions.
    }
}
void swapValues(double& v1, double& v2)
{
    double temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
int indexOfSmallest(const double a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], 
            indexOfMin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }
    return indexOfMin;
}// deduces what connic section you have based on the polynomial
// you give it, interactive

//include <iostream>
//include <math.h>
 


int connic_driver(int argc, char** argv)
{
    if (argc != 7)
    {
        cout << "Enter in a general form equation for a conic section\n"
             << "Ax^2 + Bxy + Cy^2 + Dx + Ey + F = 0\n";
        return 1;
    }
    double A = stringToFloat(argv[1]);
    double B = stringToFloat(argv[2]);
    double C = stringToFloat(argv[3]);
    double D = stringToFloat(argv[4]);
    double E = stringToFloat(argv[5]);
    double F = stringToFloat(argv[6]);

    double L = pow (B, 2) - (4*A*C); //L is the discriminant

    //1 circle, 2 ellipse, 3 parabola, 4 hyperbola
    int type = 0;
    if (((A == 0) && (B == 0)) && (C == 0)) 
    {
        cout << "This is not a conic section.";
        return 0;
    }
    if (L < 0) {
        if (A == C) {
            type = 1;
        } else {
            type = 2;
        }
    } 
    
    if (L == 0) {
        type = 3;
    } 
    
    if (L > 0) {
        type = 4;
    } 
    
    switch (type) 
    {
            case 1: cout << "You have a circle\n"; break;
            case 2: cout << "You have an ellipse\n"; break;
            case 3: cout << "You have a parabola\n"; break;
            case 4: cout << "You have a hyperbola\n"; break;
            default: cout << "404 shape not found\n";
    }
    return 0;
}
//project to move and rename files
//include <iostream>
//include <string>
//include <fstream>
//include <stdio.h>
 

int wrap3()
{
	//cout << "Name the directory to move -> ";
	//string UserInput;
	//getline(cin, UserInput);
	int result;
	char OldFileName[] = "cat";
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName);
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}
//Finds where a function is 0
//created by: Jordan Winkler
//This is the equation for Newton's Method
//x_(n+1)=x_n-(f(x_n))/(f'(x_n))

//include <iostream>
 

int wrap222()
{
	cout << "Root of x^3-125 is\n";
    double X = -1;					//Starting point of search

    for (int i = 0 ; i < 15 ; i++)
    {
        X-= ((X*X*X)-125 )/(3*X*X); 
    }
    cout << X << endl;
    return 0;
}
//de Polignax's formula is being used to find number of primes p in n!
 


int wrap111()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b; //later include cin for prime
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        exit(1);
    }
    
    for (int i = a ; i <= b ; i++)
        cout << "S_p(" << i << ") = "
             << dePolignax(i,5) << endl;

    return 0;
}

//include <iostream>
//include <stdlib.h>
//include <math.h>
 

bool isPrime(int number);
void breakIntoPrimes(int CompositeNumber, int A[], int MAX);

int wrap333()
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



int wraplol()
{
    cout << "[a,b] -> ";
    unsigned int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }
    if (a % 2 == 0)
    {
        cout << "\npick an odd number\n";
        return 0;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i+=2)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "phi|primeStep " 
             << phin << ' '
             << primeStepn << endl;
        if (phin > primeStepn)
        {
            cout << "found at " << i << endl;
            return 0;
        }
    }

    return 0;
}
// number test from number theory

 

int wrap ()
{
    cout << "[a,b] -> ";
    unsigned int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }
    cout << "c^k <= b -> ";
    unsigned int c;
    cin >> c;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i *= c)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "n|phi|primeStep " 
             << i << ' '
             << phin << ' '
             << primeStepn << endl;
        if (phin > primeStepn)
        {
            cout << "found at " << i << endl;
            return 0;
        }
    }

    return 0;
}
// already coded one of these in bash
// opens a file

//include <iostream>
//include <string>
//include <stdlib.h>
//include <fstream>
 

int wrap ()
{
    cout << "Scan or open? 1/0 ";
    bool UserChoose;
    cin >> UserChoose;
    if (cin.fail())
    {
        cout << "not 1 or 0\n";
        return 1;
    }

    if (UserChoose == 1)
    {     
	    cout << "Give file path -> ";
        string UserInput;
    	getline(cin, UserInput);
    	fstream InData;
    }
    else //no need to check for 0
    {
        cout << "Give program path -> ";
	    cout << "Here is your current directory.\n";
        system("dir");
        string UserInput = UserInput.c_str();
        string Add = "xdg-open " + UserInput;
	    system(Add);
	}
	return 0;
}
 

int wrap666()
{


    cout << "min and max values\n";
    cout << "------------------\n";
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    cout << endl;

    startG = .5; endG = 1; preG = 0.000001;
    cout << "min: ";
    cout << "(" << minOnX(startG, endG, preG) << ",";
    cout << minf(startG,endG,preG) << ")" << endl;
    cout << "max: ";
    cout << "(" << maxOnX(startG, endG, preG) << ",";
    cout << maxf(startG,endG,preG) << ")" << endl;

    return 0;
}




    
// looks cool, computes pascals rule

//include <iostream>
 
 

int PascalsRule(int &N, int &K, int From, int To);

int wrap777()
{
	int n, k;
	cout << "choose an N and K --> ";
	cin >> n >> k;
	cout << choose(n, k) << endl;
	bool Success = PascalsRule(n, k, 1, 3);
	if (Success)
		cout << choose(n, k) << endl;
	else cout << "out of bounds\n";
	return 0;
}

	
int PascalsRule(int &N, int &K, int From, int To)
{
	if (1 <= K && K <= N)
	{
		if (From == 1 && To == 2)
			K--; 
		else if (From == 1 && To == 3)
			N++;
		else if (From == 2 && To == 1)
			K++;
		else if (From == 2 && To == 3)
		{
			N++; K++;
		}
		else if (From == 3 && To == 1)
			N--;
		else if (From == 3 && To == 2)
		{
			N--; K--;
		}
	}
	else return 0;
	return 1;
}
// prints out pascals triangle row by row
// need to add mpc library to improve this

 

int wrap999(int argc, char** argv)
{
    if (argc == 2) // 0 to end
    {
        int row = stringToPosInt(argv[1]);
        for (int j = 0 ; j <= row ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else if (argc == 3) // start to end
    {
        int start = stringToPosInt(argv[1]); 
        int end = stringToPosInt(argv[2]); 
        
        for (int j = start ; j <= end ; j++)
        {
            for (int i = 0 ; i <= j ; i++)
                cout << choose(j, i) << ' ';
            cout << endl;
        }
    }
    else
    {
        cout << "PascalsTriangle [start] [end]\n  or\n"
             << "PascalsTriangle [end row]\n";
        return 1;
    }
        
    return 0;
}
// not sure if this shell script worthy
// but it is a useful program for calculating max possible number of 
// phi^-1

 

int wrap ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad num \n";
        return 1;
    }

    for (int i = a ; i <= b ; i++)
        cout << i << ' ' 
             << phiInverseCap(i) << endl;

    return 0;
}
//This program prints inverse phi between two intervals
// not sure if this is the updated version
// seems slower than I remember
//created by: Jordan Winkler

 

int wrap (int argc, char** argv)
{
    if (argc != 3)
    {
        cout << "phiInverse [start] [end] ";
        return 1;
    }

    /* get interval to compute */
    int a = stringToPosInt(argv[1]);
    int b = stringToPosInt(argv[2]);

    /* allocate memory for up to max set */
    int MAX = phiInverseCap(b) - a; //number of elements
    int* arry = new int[MAX];

    /* rules for computation */
    if (b < 5760) //slow to compute after this
        for (int i = a ; i <= b ; i++)
        {
            phiInverse(i, arry, MAX);
            cout << "phi^-1(" << i << "):\n";
            for (int j = 0 ; arry[j] ; j++)
            {
                cout << arry[j] << ' ';
            } cout << endl;
        }
    else //if (b >= 5760) //room for different rules
        cout << "\nError: b too large\n";

    return 0;
}
//mod tricks
// no idea what this does

//include <iostream>
//include <math.h>
 

int wrap() 
{
    unsigned int x1 ;
    int y ;
    cout << "number " ;
    cin >> x1 ;
    cout << "order " ;
    cin >> y ;
    if (cin.fail())
    {
        cout << "invalid input\n";
        return 1;
    }
    
    x1 = x1 % (int) (pow (10, y));
    x1 = x1 * (pow (10, (-1*(y-1))));
    cout << x1 ; 
            
    return 0;
}
 

int wrap(int argc, char* argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    cout << pick(a, b) << endl;

    return 0;
}
//de Polignax's formula is being used to find number of primes p in n
// factorial
 


int wrap ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b; //later include cin for prime
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        exit(1);
    }
    
    for (int i = a ; i <= b ; i++)
        cout << "S_p(" << i << ") = "
             << dePolignax(i,5) << endl;

    return 0;
}

// prints the coefficient of a given polynomial

 

// uses binomial theorem
int polycoefficient(int ythDigit, int xc, int yc, int n);

int wrap (int argc, char** argv)
{
    if (argc != 5)
    {
        cout << "polyCoeffiecient [term] [coefficient x]"
                " [coefficient y] [degree]\n";
        return 1;
    }

    int yDigit = stringToInt(argv[1]);
    int xc = stringToInt(argv[2]);
    int yc = stringToInt(argv[3]);
    int n = stringToInt(argv[4]);

    cout << polycoefficient(yDigit, xc, yc, n) << endl;

    return 0;
}

int polycoefficient(int ythDigit, int xc, int yc, int n)
{
    int coefficient = 1;
    coefficient *= int(pow(xc, n-ythDigit));
    coefficient *= int(pow(yc, ythDigit));
    coefficient *= choose(n, ythDigit);

    return coefficient;
}

    
//include <iostream>

class dataType
{
public:
    int dat;
};
    

std::ostream& operator<< (std::ostream &out, dataType const& data) 
{
    out << data.dat << ':';

    return out;
}

int wrap ()
{
    dataType cheese;
    cheese.dat = 1;

    std::cout << cheese << '\n';

    return true;
}
//I did a proof to show this property
//include <iostream>
 
int wrap ()
{
    double sides;
    cin >> sides;
    double average;
    average = (sides/2.0)+0.5;
    cout << average;
    return 0;
}/*
This function tests whether it is likely that n is prime. It does this by
testing k positive integers a to determine whether they satisfy the
equation a^(n-1) mod n = 1 of Fermat’s Little Theorem. The boolean value
returned by the function may be incorrect. If k is large, the probability
of an incorrect answer is extremely small.
*/
bool is_prime(int n, int k)
{
    int a;
    for (int i=0; i<k; i++)
    {
        a = randint(2, n-1);
        if (power(a, n-1) % n != 1)
            return false;
    }
    return true;
}
//include <stdio.h>


int wrap ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "error\n";
        return 0;
    }

    for (int i = a ; i <= b ; i++)
        if (Carmichael(i))
            cout << "found at " << i << endl;

    cout << Carmichael(6601) << endl;

    return 0;
}
/*
int Carmichael(int n)
{
//n={n | composite ∧ ∀b b^(n-1)≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

//0={n | prime V ∃b b^(n-1) !≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

    if ((isPrime(n)))
        return 0;
    for (int b = 2 ; b < n ; b++)
        if (gcd(b,n) == 1)
            if (expAlg(b, n-1, n) != 1)
                return 0;
    
    return n;
}

*/
//gives an approximation of roots for ax^2+bx+c=0
// newton's method, but no parser, so kind of useless

//include <iostream>
//include <math.h>
 

int wrap ()
{
    cout << "enter the coefficeints -> ";
    double a, b, c;
    cin >> a >> b >> c;
    if (cin.fail())
    {
        cout << "error: bad num\n";
        return 0;
    }
    
    double x1 = -b + pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);
    double x2 = -b - pow ((b*b - 4*a*c), 1/2.0)/(2.0*a);

    cout << "roots: " << x1 << x2 << endl;

    return 0;
}

//program renames files demonstration

//include <iostream>
//include <fstream>
//include <stdio.h>
 

int wrap ()
{
	int result;
	char OldFileName[] = "cat"; 
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName); //takes name of old file and renames it
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}
// c++ riemanSum function without function parser
// useless

//include <iostream>
//include <math.h>
 

//made by: Jordan Winkler
//takes a string and puts it in a linked list, prints that list

//include <iostream>
 

//is used to capture the string as a list
struct dll
{
    char symbol;
    dll* prev;
    dll* next;
};

dll* add_head(char character);
dll* add_tail(dll* head, char character);

void print_list(dll* head);
void print_debug(dll* head);

//formalize statement

void mult_before_paren(dll* head, int strLength);
void add_symmetry(dll* head, int strLength);

int wrap (int argc, char* argv[])
{
    //repeat entered string
    cout << "starting phrase: ";
	for (int i = 1 ; i < argc ; i++)
	    cout << argv[i] << ' ';
	cout << endl;

	int stringLength = 0;

	cout << "first word: ";
	if (argc > 0)
	{
		for (int i = 0 ; argv[1][i] ; i++)
		{
	    	cout << argv[1][i];
			stringLength++;
		}
		cout << endl;
	}

	//make and add each element to string
    dll* head = add_head(argv[1][0]);
	for (int i = 1 ; argv[1][i] ; i++)
	{
		add_tail(head, argv[1][i]);
	}

	//print out doubly linked list
	cout << "first word, according to list: ";
	print_list(head);	

	add_symmetry(head, stringLength);

	cout << "first word, after change: ";
	print_list(head);	

	return 0;
}

dll* add_tail(dll* head, char character)
{
	while (head -> next != NULL)
		head = head -> next;

	dll* tail = new dll;
	head -> next = tail;
	tail -> prev = head;
	tail -> next = NULL;
	
	tail -> symbol = character;

	return tail;
}

dll* add_head(char first)
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;

	head -> symbol = first;

	return head;
}

void print_list(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << p -> symbol;
		p = p -> next;
	}
	cout << p -> symbol;
	cout << endl;
}

void print_debug(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << "prev: " << p -> prev << endl;
		cout << "node: " << p << endl;
		cout << "next: " << p -> next << endl;
		cout << "char: " << p -> symbol << endl;
		p = p -> next;
	}
	cout << "prev: " << p -> prev << endl;
	cout << "node: " << p << endl;
	cout << "char: " << p -> symbol << endl;
}

//a(b+c) = a*(b+c) or a(b) = a*(b) or a(b+...+c) = ..
void mult_before_paren(dll* head, int strLength)
{
    int minLength = 4;
	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
		p[3] = head->next->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '*')
			if (p[1]->symbol == '(');
				//get to later
	} while (0);
}

//a-b = a+-b
void add_symmetry(dll* head, int strLength)
{
    int minLength = 3;

	dll** p = new dll*[minLength];
    if (strLength >= minLength)
	{
		p[0] = head;
		p[1] = head->next;
		p[2] = head->next->next;
	}
	else return;
	
	do
	{
    	if (p[0]->symbol != '+')
		  if (p[1]->symbol == '-')
		  {
			dll* q = new dll;
			q->symbol  = '+';
			q->prev    = p[0];
			q->next    = p[1];
			p[0]->next = q;
			p[1]->prev = q;
		  }
	} while (0); //just do once for now
}
	
/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

//include <iostream>
//include <math.h>
 

//Replace unsigned long ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll base, ll exponent, ll mod);

ll getK();
ll getJ();
ll getPrime(unsigned int power);

int wrap ()
{
    ll p = 5;
    ll q = 7;
    
    ll n = p * q;
    ll k = 5;

    if (gcd(k, phi(p,q)) != 1 || k > phi(p,q)) 
        cout << "bad k\n";

    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
        cout << "bad j\n";

    ll M = 5;
    ll r;

    cout << "number to encrypt: " << M << endl;

    r = encrypt(M, n, k);
    
    cout << "encrypted: " << r << endl;

    M = decrypt(r, p, q, j);

    cout << "decrypted: " << M << endl;

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;

    cout << "M: " << M << endl;
    cout << "r: " << r << endl;
#endif //DEBUG

    return 0;
}

/****************************************************************
| Name: encrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers M, n, k of the equation M^k ≡ r (mod n)
|   Out: nothing
|   
| Returns: r, a number with an RSA encryption on it
\****************************************************************/
ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

/****************************************************************
| Name: decrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer r, p, q, j of the equation r^j ≡ M (mod p*q)
|   Out: nothing
|   
| Returns: M, a number that has had the RSA encryption removed
\****************************************************************/
ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

/****************************************************************
| Name: modInv
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v for equation u^-1(mod v)
|   Out: nothing
|   
| Returns: integer equal to u^-1(mod v)
\****************************************************************/
ll modInv(ll a, ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x, not a practical problem
        ll res = (x%m + m) % m;
        return res;
        cout << "Modular multiplicative inverse is " << res;
    }
}
 

/****************************************************************
| Name: gcdExtended
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers a,b,x,y such that gcd(a,b) = ax + by = c
|   Out: integers x and y
|   
| Returns: integer c
\****************************************************************/
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

/****************************************************************
| Name: phi
|    
| Precodition: nothing
| Postcondition: nothing 
|
| Parameters:
|       
|   IN: two primes
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
ll phi(ll p, ll q) //for RSA encryption alg
{
    return (p-1)*(q-1);
}

/****************************************************************
| Name: gcd
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two integers
|   Out: none
|   
| Returns: int the greatest common divisor of those two numbers
\****************************************************************/
ll gcd(ll A, ll B)
{
    ll T;
    while (B != 0)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    

ll expMod(ll base, ll exponent, ll mod) 
{
    if (mod == 1)
        return 0;
    ll c = 1;
    for (int i = 1 ; i <= exponent ; i++)
        c = (c * base) % mod;

    return c;
}
/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))

*/
 
//include <limits>

#define DEBUG

//replace unsigned long int with any integer like data structure
//Must be defined for operations: + - / * % > < != == =
//and be defined for used functions

ll encrypt(ll M, ll n, ll k);

ll decrypt(ll r, ll p, ll q, ll j);

void flipString(char a[], int start, int end);
void flipString(char a[]);

ll stringToValue(char a[], int start, int end);

void valueToString(ll value, char string[], int start, int end);

int wrap()
{
    ll p = 1000003; //prime 1
    ll q = 1000033; //prime 2
    
    ll n = p * q;
    ll k = 11;
    if (gcd(k, phi(p,q)) != 1) cout << "bad k\n";

    ll j = modinv(k, phi(p,q));

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;
#endif //DEBUG

    cout << "string -> ";
    int MaxString = 1000000; //arbitrary max
    char userM[MaxString] = {0}; 

    //get string from user 
    ll stringLength = -1; //user string length
    do
    {
        stringLength++;
        userM[stringLength] = cin.get();
        if (stringLength == MaxString - 1) //makes sure a \0 on end is left
        {
            cout << "\nerror: too many char\n";
            return 1;
        }
    } while (userM[stringLength] != '\n');

    ll* M = new ll[stringLength];
    ll* r = new ll[stringLength];

    for (int i = 0 ; i < stringLength ; i++)
    {
        M[i] = 0;
        r[i] = 0;
    }

    int charSpace = 3; //preferably multiples of 3 for ascii

    for (int i = 0 ; userM[charSpace*i] ; i++)
        M[i] = stringToValue(userM, charSpace*i, charSpace*(i+1));

#ifdef DEBUG
    cout << "User Input: " << userM; //includes \n already

    cout << "User Input char values: ";
    for (int i = 0 ; userM[i] ; i++)
        cout << int(userM[i]) << ' ';
    cout << endl;

    cout << "User Input as int: ";
    for (int i = 0 ; M[i] && i < stringLength ; i++)
        cout << "M[" << i << "]: " << M[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        r[i] = encrypt(M[i], n, k);

#ifdef DEBUG
    cout << "encrypted values: ";
    for (int i = 0 ; r[i] && i < stringLength ; i++)
        cout << "r[" << i << "]: " << r[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        M[i] = decrypt(r[i], p, q, j);

    for (int i = 0 ; i < stringLength ; i++)
        valueToString(M[i], userM, charSpace*i, charSpace*(i+1));

    cout << "decrypted: " << userM << endl;
    

    return 0;
}

void flipString(char a[])
{
    int length = 0;
    for (int i = 0 ; a[i] ; i++)
        length++;
    length--; //assuming 0 

#ifdef DEBUG
        cout << "inside flipString\n";
        cout << "length: " << length << endl;
#endif //DEBUG

    char* temp = new char[length+1];

    int start = 0;
    int end = length; //ignore \n, add -1, doesn't work if so
    while (end >= 0)
        temp[start++] = a[end--];

#ifdef DEBUG
    cout << "temp: " << temp << endl;
#endif //DEBUG

    for (int j = 0 ; a[j] ; j++)
        a[j] = temp[j];

    delete [] temp;
}
void flipString(char a[], int start, int end) //some bug
{
    int length = end - start;

    char* temp = new char[length+1];

    int i = start;
    int k = end;
    while (k >= i)
        temp[i++] = a[k--];

    for (int j = start ; a[j] && j <= end ; j++)
        a[j] = temp[j];
}

ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

ll stringToValue(char a[], int start, int end)
{
#ifdef DEBUG
    cout << "inside stringToValue\n";
#endif //DEBUG
    ll value = 0;

    flipString(a);

    for (int i = 0, j = start ; j <= end && a[j] ; j++, i++) 
    {
        if (numeric_limits<ll>::max() > long(pow(256, i)))
            value += a[j] * long(pow(1000, i)); //replace 1k w 256
        else
        {
            cout << "\nerror: need more memory\n";
            exit(1);
        }
    }

    flipString(a);

    return value;
}

void valueToString(ll value, char string[], int start, int end)
{
#ifdef DEBUG
    cout << "inside valueToString\n";
#endif //DEBUG

    for (int i = start ; i <= end ; i++) //may need to clean string
        string[i] = 0;                   //elsewhere
    
    ll temp;
    for (int i = 0, j = start ; temp > 0 && j <= end ; i++, j++) 
    {
        temp = value / long(pow(1000, i));
        temp = temp % 1000;
        string[j] = temp;
#ifdef DEBUG
       cout << "temp: " << temp << endl;
#endif //DEBUG
    }
    flipString(string, start, end);
}
/*
created by: Jordan Winkler

encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

 
//include <gmp.h> //complie as g++ __ -lgmpxx -lgmp
//include <gmpxx.h>

//Replace end of ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll a, ll n, ll m);

ll getK(ll p, ll q);
ll getK(ll p, ll q, ll start);
ll getJ(ll k, ll p, ll q);

bool isPrime(ll number); 
ll nextPrime(ll n);
ll getPrime(ll power);
ll expt(ll a, ll b);
ll ceilSquareRoot(ll a);
void changeToBase(ll x, int base, char string[], int Max);
int changeToBase(ll x, int base, ll string[], int Max);

int readFromFile(char a[], int max);
bool writeToFile(char a[], int max);
ll toNum(char a[], int start, int end);
char* toChar(ll num, int Max);
char toChar(ll num);


int wrap ()
{
#ifdef DEBUG
    cout << "starting program... \n";
    cout << "getting primes... \n";
#endif

    ll p = getPrime(64); //get prime > 2^n
    ll q = nextPrime(p);

#ifdef DEBUG
    cout << "prime1: " << p << endl;
    cout << "prime2: " << q << endl;
    cout << "getting k... \n";
#endif
    
    ll n = p * q; 
    ll k = getK(p,q); //slow for large primes

#ifdef DEBUG
    cout << "getting j... \n";
#endif
    ll j = getJ(k, p, q);

#ifdef DEBUG
    cout << "... \n";
#endif
    int maxInput = 50000; //random number

    ll* M = new ll[maxInput]; 
    
    char* string = new char[maxInput];

    int lengthOfStr = readFromFile(string, maxInput);

    cout << "To encrypt: " << string << endl;
    
    ll* r = new ll[maxInput];
    for (int i = 0 ; i < lengthOfStr ; i++)
    {
        M[i] = toNum(string, i, i);
        r[i] = encrypt(M[i], n, k);
    }

    cout << "encrypted: ";
    for (int i = 0 ; i < lengthOfStr ; i++)
        cout << r[i] << ' ';
    cout << endl;

    for (int i = 0 ; i < lengthOfStr ; i++)
    {
        M[i] = decrypt(r[i], p, q, j);
        string[i] = toChar(M[i]);
    }

    cout << "decrypted: " << string << endl;

#ifdef DEBUG
    cout << endl;
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;

    cout << "*M: " << M << endl;
    cout << "*r: " << r << endl;

    cout << "\ntest expMod\n";
    int a=233, b=11011, c=11111;
    cout << "expMod(" << a << ',' << b << ',' << c << ")\n";
    cout << expMod(a, b, c) << endl; 
    
#endif //DEBUG

    return 0;
}

/****************************************************************
| Name: encrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers M, n, k of the equation M^k ≡ r (mod n)
|   Out: nothing
|   
| Returns: r, a number with an RSA encryption on it
\****************************************************************/
ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

/****************************************************************
| Name: decrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer r, p, q, j of the equation r^j ≡ M (mod p*q)
|   Out: nothing
|   
| Returns: M, a number that has had the RSA encryption removed
\****************************************************************/
ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

/****************************************************************
| Name: modInv
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v for equation u^-1(mod v)
|   Out: nothing
|   
| Returns: integer equal to u^-1(mod v)
\****************************************************************/
ll modInv(ll a, ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x, not a practical problem
        ll res = (x%m + m) % m;
        return res;
        cout << "Modular multiplicative inverse is " << res;
    }
}
 

/****************************************************************
| Name: gcdExtended
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers a,b,x,y such that gcd(a,b) = ax + by = c
|   Out: integers x and y
|   
| Returns: integer c
\****************************************************************/
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

/****************************************************************
| Name: phi
|    
| Precodition: nothing
| Postcondition: nothing 
|
| Parameters:
|       
|   IN: two primes
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
ll phi(ll p, ll q) //for RSA encryption alg
{
    return (p-1)*(q-1);
}

/****************************************************************
| Name: gcd
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two integers
|   Out: none
|   
| Returns: int the greatest common divisor of those two numbers
\****************************************************************/
ll gcd(ll A, ll B)
{
    ll T;
    while (B != 0)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    


/****************************************************************
| Name: expMod
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: base^exponent ≡ c (mod mod)
|   Out: nothing
|   
| Returns: c
\****************************************************************/
ll expModJ(ll base, ll exponent, ll mod) //linear time
{
    if (mod == 1)
        return 0;
    ll c = 1;
    for (int i = 1 ; i <= exponent ; i++)
    {
        c = (c * base) % mod;
#ifdef DEBUG
        if (i % 1000 == 0)
            cout << "at base^" << i << endl;
#endif //DEBUG
    }
    return c;
}
ll expMod(ll a, ll n, ll m) //faster, exponential time
{
    ll x = a;
    ll y = (((n >> 0) & 1) == 1)?a:1;
    ll k = 4096; //for now
    for (int i = 1 ; i <= k ; i++)
    {
        x = (x*x) % m;
        if (((n >> i) & 1) == 1)
            y = (y == 1)?x:((x*y)%m);
    }
    return y;
}


/****************************************************************
| Name: getK
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: primes p and q
|   Out: nothing
|   
| Returns: k, from RSA encryption
\****************************************************************/
ll getK(ll p, ll q)
{
    if (p*q == 1)
    {
        cout << "bad primes for getK\n:";
        exit(1);
    }
    ll k = 2;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
#ifdef DEBUG
        if (k % 10000 == 0)
            cout << "k: " << k << endl;
#endif    
    }
    return k;
}
ll getK(ll p, ll q, ll start) //for choosing a larger k
{
    ll k = start;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
    }
    return k;
}

/****************************************************************
| Name: getJ
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: exponent k, and primes p, and q from RSA encryption process
|   Out: nothing
|   
| Returns: J
\****************************************************************/
ll getJ(ll k, ll p, ll q)
{
    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
    { 
        cout << "bad j\n";
        exit(1);
    }
    return j;
}

/****************************************************************
| Name: getPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: 2^power of the lower bound of the prime
|   Out: nothing
|   
| Returns: the next prime after that power
\****************************************************************/
ll getPrime(ll power)
{
    ll lowerBound = expt(2, power); 
    
    return nextPrime(lowerBound);
}


/****************************************************************
| Name: nextPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: positive integer k
|   Out: nothing
|   
| Returns: the closest prime after n
\****************************************************************/
ll nextPrime(ll n) 
{
    ll two = 2;
    if (n < two) //n< 2 bugged...
        return 2; 
    while (n > 0)
    {
        n++;
        if (isPrime(n) != 0)
            return n;
    }
}

/****************************************************************
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
\****************************************************************/
bool isPrime(ll number)
{
    if (number < 2)
        return 0;

    ll top = number;
    if (number > 100)  //uses sieve of Eratosthenes
        top = ceilSquareRoot(number);
    for (int i = 2 ; i < top ; i++)        
        if (number % i == 0)
            return 0;
    return 1;
}

/****************************************************************
| Name: expt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: a^b = c
|   Out: nothing
|   
| Returns: c
\****************************************************************/
/*
ll expt(ll a, ll n)
{
    ll x = a;
    ll y = (((n >> 0) & 1) == 1)?a:1;
    ll k = 4096; //for now
    for (int i = 1 ; i <= k ; i++)
    {
        x = (x*x) ;
        if (((n >> i) & 1) == 1)
            y = (y == 1)?x:((x*y));
    }                                //loses large values, then y=0
    return y; 
}
*/
ll expt(ll a, ll b)
{
    ll c = 1;
    
    ll i = 1;
    while (1) //large values reset when leaving block scope
    {
        c = (c * a);
        i++;
        if (i > b)
            break;
    }
    return c;
}

/****************************************************************
| Name: ceilSquareRoot
|    
| Precodition: nothing
| Postcondition: nothinng
|
| Parameters:
|       
|   IN: a for equation ceil(a^(1/2)) = c
|   Out: nothing
|   
| Returns: c
\****************************************************************/
ll ceilSquareRoot(ll a)
{   
    ll i = 1;
    while (1)
    {
        if (i*i > a) //little above
            break;
        i++;
    }
    return i;
}

/****************************************************************
| Name: readFromFile
|    
| Precodition: There is a file to read from
| Postcondition: the file has been read from
|
| Parameters:
|       
|   IN: The location of an array to read to, max size of array
|   Out: nothing
|   
| Returns: int for size of file
\****************************************************************/
int readFromFile(char a[], int max)
{
    int size = 0;
    fstream InData;
    cout << "Enter the name of the file you wish to scan "; 
    //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    InData.open(UserInput.c_str());
    
    while (InData >> a[size++])
    {
        if (size-2 > max)
            break;
    }

    InData.close();
    return size;
}

/****************************************************************
| Name: writeToFile
|    
| Precodition: nothing
| Postcondition: a file has been written to to the given string
|
| Parameters:
|       
|   IN: location of an array to copy to a file, max size of array
|   Out: nothing
|   
| Returns: 1 for success, 0 for failure
\****************************************************************/
bool writeToFile(char a[], int max)
{
    ofstream OutData;
    cout << "Enter name of file "; /*designate file path 
                                        using string*/
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());

    for (int i = 0 ; i < max ; i++)
        OutData << a[i];
    
    OutData.close();
    return 1;
}

/****************************************************************
| Name: toNum
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: location of array, start and end of it to read
|   Out: nothing
|   
| Returns: that substring as a number
\****************************************************************/
ll toNum(char a[], int start, int end)
{
    ll toReturn = 0;
    int j = 0;
    for (int i = start ; i <= end ; i++, j++)
        toReturn += a[i] * expt(256, j);

    return toReturn;
}

/****************************************************************
| Name: changeToBase
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number, base to change it to, string representing number
|       max size of string
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void changeToBase(ll x, int base, char string[], int Max)
{
    for (int i = 0 ; i < Max ; i++) //clean array
        string[i] = 0;

    for (int i = 0 ; toChar(x) && i < Max ; i++)
    {
        string[i] = toChar(x) % base;
        x = x/base;
    }
}
/****************************************************************
| Name: changeToBase
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number, base it turns into, number array representing
|       this, max size of this string
|   Out: nothing
|   
| Returns: number of digits of new number 
\****************************************************************/
int changeToBase(ll x, int base, ll string[], int Max)
{
    for (int i = 0 ; i < Max ; i++) //clean array
        string[i] = 0;

    int i = 0;
    while (1)
    {
        string[i] = x % base; 
        x = x/base;

        if (x == 0)
            break;
        if (i >= Max)
            break;
        i++;
    }
/* //original
    for (int i = 0 ; toChar(x) && i < Max ; i++)
    {
        string[i] = toChar(x) % base;
        x = x/base;
    }
*/
    return i; //length of array
}


/****************************************************************
| Name: toChar
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number to be turned into a char (truncates at 256)
|   Out: nothing
|   
| Returns: the char 
\****************************************************************/
char toChar(ll num) //will give wrong value if ll is too large
{
    return char(num.get_ui());
}

/* 
    RSA encryption
    by: Jordan Winkler

    encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

    decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

//include <iostream>
//include <fstream>
//include <string>
//include <math.h>
//include <cstdlib>

 

/*================================================================
|| 
|| Object: bigInt 
|| 
|| Purpose: a data type to calculate large integers
||      
|| Atributes: 
||      num, length, max
||
|| Functions:
||      + - * / % == <= >= < > = 
||      constructor, destructor, copy constructor, value,
||      print, confirmLength, resize, complement, bitshift
||      changeToBase, flipString
||
\*==============================================================*/
class bigInt
{ 
    public:
        //store of size __ call it __
        bigInt(); 
        bigInt(unsigned int twoToN);

        bigInt(const bigInt& obj);

        ~bigInt(); 

        /* input number */
        /* all in binary for now */
        void value(unsigned long int theNum); //from program
        void value(string fileName); // ./for file, else num
        void value(); //from cin 

        /* output number */
        void print(); //default base 2

        /* speed up */
        int confirmLength(); //faster computation
        void resize(); //less memory use

        friend const bigInt operator +(const bigInt &a,
                                       const bigInt &b);
        friend const bigInt operator -(const bigInt &a,
                                       const bigInt &d);
        friend const bigInt operator *(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator /(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator %(const bigInt &a, 
                                       const bigInt &mod);
        
        friend bool operator >=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator ==(const bigInt &a,
                                       const bigInt &b);
        friend bool operator !=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <(const bigInt &a,
                                       const bigInt &b);
        friend bool operator >(const bigInt &a,
                                       const bigInt &b);
        
        bigInt& operator =(const bigInt& rhs); 

        void complement();

        void setEqualTo(unsigned long int theNum);

        void bitShift(int n);

        friend void flipString(bool a[], int start, int end);

        friend void changeToBase(int x, int base, 
                                 int string[], int Max);
        /*
            could use all operators designed to non bigInt 
        */
        
    private:
        bool* num; //the number
        int length; //the length of storage
        int max; //4096
};



bigInt::bigInt() 
{
    max = 4096;
    num = new bool[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;
}
bigInt::bigInt(unsigned int twoToN)
{
    max = 4096;
  
    if (twoToN <= max)
        length = twoToN;
    else
    {
        cout << "\nerror: change size limit of bigInt\n";
        exit(1);
    } 

    num = new bool[length];

    for (int i = 0 ; i < length ; i++)
        num[i] = 0;

}

bigInt::bigInt(const bigInt& rhs)
{
    cout << "\ncopy constructor call\n";

    max = rhs.max;
    length = rhs.length;
    num = new bool[length];
    for (int i = 0 ; i < length ; i++)
        num[i] = rhs.num[i];
}

bigInt::~bigInt()
{
    cout << "\ndeconstructor running\n";
    cout << "times called: " << timesCalled() << endl;
    
//  delete [] num;
}

bigInt& bigInt::operator =(const bigInt& rhs)
{
    if (this == &rhs)
        return *this;
    

    length = rhs.length;
    max = rhs.max;
    for (int i = 0 ; i < max ; i++)
        num[i] = rhs.num[i];
        
    return *this;
}

//good for smaller values
void bigInt::value(unsigned long int theNum)
{
    max = 4096;
    num = new bool[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;

    if (theNum == 1) //common enough to get its own bypass
        num[0] = 1;
        
    //convert base 10 to base 2 array
    changeToBase(theNum, 2, num, 64); //unsigned long int is 2^64

}
void bigInt::value(string fileName)
{
    fstream inData;
    inData.open(fileName.c_str());
    char userInput;
    int userLength = 0;
    while (inData >> userInput)
    {
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = bool(userInput - '0');
            userLength++;
        }
        else 
            break;
        if (userLength > max)
            break;
    } 

    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
    
    inData.close();
}
void bigInt::value()
{
    char userInput;
    int userLength = 0;
    do
    {
        userInput = cin.get();
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = (userInput - '0');
            userLength++;
        }
        if (userLength > 4096)
            break;
    } while (userInput == '1' || userInput == '0');
    
    
    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
}



//save on computation
int bigInt::confirmLength()
{
    int index = max-1;

    while (1)
    {
        if (index == 0) break;
        if (num[index] == 1) break;
        index--;
    }
    length = index + 1; 

    return length;
}
//save on memory
void bigInt::resize()
{
    confirmLength();
    bool* temp = new bool[max];

    for (int i = 0 ; i < length ; i++)
        temp[i] = num[i];

    delete [] num;

    num = new bool[length];
    
    for (int i = 0 ; i < length ; i++)
        num[i] = temp[i];

    delete [] temp;
}


void bigInt::print()
{
    confirmLength();
    for (int i = length-1 ; i >= 0 ; i--)
        cout << num[i];

    cout << endl;
}

void bigInt::setEqualTo(unsigned long int theNum)
{
    for (int i = 0 ; i < length ; i++)
        num[i] = 0;

    int lengthOr64 = (length > 64)?64:length;

    changeToBase(theNum, 2, num, lengthOr64); //unsigned long int is 2^64
}
    

const bigInt operator +(const bigInt &a, const bigInt &b)
{
    bigInt c;

    int shortest = a.max;
    /* save on computaion */
    //int shortest = (a.length > b.length)?b.length:a.length;

    int carry = 0;
    for (int i = 0 ; i < shortest ; i++)
    {
        c.num[i] = (a.num[i] + b.num[i] + carry) % 2;
        if ((a.num[i]+b.num[i]+carry) < 2)
            carry = 0;
        else
            carry = 1;
    }
            
    return c;
}

const bigInt operator -(const bigInt &a, const bigInt &b)
{
    bigInt tempA;
    tempA = a;
    tempA.confirmLength();

    bigInt tempB;
    tempB = b;
    tempB.length = tempA.length;
    tempB.complement();

    tempA = tempA + tempB;

    bigInt one;
    one.value(1);

    tempA = tempA + one;
    
    
    tempA.num[tempA.confirmLength()-1] = 0; //take off last bit

    tempA.length = tempA.max;

    return tempA;
    //what if a > b and b - a?
}

void bigInt::complement()
{
    for (int i = 0 ; i < length ; i++)
        num[i] = num[i] ^ 1;
}
void bigInt::bitShift(int n)
{
    if (n > 0)
    {
        for (int i = length-1 ; i >= 0 ; i--)
            if (1 + n <= max-1)
                num[i+n] = num[i];
        for (int i = 0 ; i < n ; i++)
            num[i] = 0;
    }
    if (n < 0)
    {
        for (int i = 0 ; i < length ; i++)
            if (i+n >= 0)
                num[i+n] = num[i];
        for (int i = length-1 ; i >= max-1-n ; i--)
            num[i] = 0;
    }
}
    

const bigInt operator *(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp + one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator /(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp - one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(-i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator %(const bigInt &a, const bigInt &mod)
{
    bigInt c;
    c = a;

    while (c >= mod)
    {
        c = c - mod;
    }

    return c;
}

bool operator ==(const bigInt &a, const bigInt &b)
{
    if (a.length != b.length)
        return 0;
    
    int i = a.length-1;
    while (1)
    {
        if (a.num[i] != b.num[i])
            return 0;
        if (i == 0)
            break;
        i--;
    } 

    return 1;
}

bool operator !=(const bigInt &a, const bigInt &b)
{
    return !(a == b);
}

bool operator >(const bigInt &a, const bigInt &b)
{
    if (a.length > b.length)
        return 1;

    if (a.length < b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] > b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }
}


bool operator <=(const bigInt &a, const bigInt &b)
{
    return !(a > b);
}

bool operator <(const bigInt &a, const bigInt &b)
{
    if (a.length < b.length)
        return 1;

    if (a.length > b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] < b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }

}

bool operator >=(const bigInt &a, const bigInt &b)
{
    return !(a < b);
}

/*
encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/


//Replace unsigned long ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll base, ll exponent, ll mod);

ll getK();
ll getJ();
ll getPrime(unsigned int power);

/****************************************************************
| Name: encrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers M, n, k of the equation M^k ≡ r (mod n)
|   Out: nothing
|   
| Returns: r, a number with an RSA encryption on it
\****************************************************************/
ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

/****************************************************************
| Name: decrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer r, p, q, j of the equation r^j ≡ M (mod p*q)
|   Out: nothing
|   
| Returns: M, a number that has had the RSA encryption removed
\****************************************************************/
ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

/****************************************************************
| Name: modInv
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v for equation u^-1(mod v)
|   Out: nothing
|   
| Returns: integer equal to u^-1(mod v)
\****************************************************************/
ll modInv(ll a, ll m)
{
    ll m0 = m, t, q;
    ll x0;
    x0.value(0);
    ll x1; x1.value(1);

    ll one; one.value(1);
    ll zero; zero.value(0);
 
    if (m == one)
      return zero;
 
    while (a > one)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m; a = t;
 
        t = x0;
 
        x0 = x1 - (q * x0);
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < zero)
       x1 = x1 + m0;
 
    return x1; //then destructor gets called several thousand times
}
/*
ll modInv(ll a, ll m)
{
    bigInt one;
    one.value(1);
    
    bigInt zero;
    zero.value(0);

    ll x, y;
    ll g;
    g = gcdExtended(a, m, &x, &y); 
    if (g != one)
        cout << "Inverse doesn't exist";
    else
    {
        ll res;
        res = (x%m + m) % m;
        return res;
    }
}
*/ 

/****************************************************************
| Name: gcdExtended
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers a,b,x,y such that gcd(a,b) = ax + by = c
|   Out: integers x and y
|   
| Returns: integer c
\****************************************************************/
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    bigInt one;
    one.value(1);
    
    bigInt zero;
    zero.value(0);

    // Base Case
    if (a == zero)
    {
        *x = zero, *y = one;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd;
    gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

/****************************************************************
| Name: phi
|    
| Precodition: nothing
| Postcondition: nothing 
|
| Parameters:
|       
|   IN: two primes
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
ll phi(ll p, ll q) //for RSA encryption alg
{
    bigInt one;
    one.value(1);

    return (p-one)*(q-one);
}

/****************************************************************
| Name: gcd
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two integers
|   Out: none
|   
| Returns: int the greatest common divisor of those two numbers
\****************************************************************/
ll gcd(ll A, ll B)
{
    bigInt zero;
    zero.value(0);

    ll T;
    while (B != zero)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    

ll expMod(ll base, ll exponent, ll mod) 
{
    bigInt one;
    one.value(1);

    bigInt zero;
    zero.value(0);

    if (mod == one)
        return zero;
    ll c;
    c = one;
    bigInt i;
    i = one;
    while (1)
    {
        c = (c * base) % mod;
        i = i + one;
        if (i > exponent)
            break;
    }
    //for (int i = 1 ; i <= exponent ; i++) //uh oh
    //  c = (c * base) % mod;

    return c;
}

    
// never worked, old attempt at hilbert curve

//convert (x,y) tp d
int xy2d (int n, int x, int y) {
    int rx, ry, s, d = 0;
    for (s = n/2; s > 0; s/=2) {
        rx = (x & s) > 0;
        ry = (y & s) > 0;
        d += s * s * ((3 * rx) ^ ry);
        rot(s, &x, &y, rx, ry);
    }
    return d;
}

//convert d to (x,y)
void d2xy (int n, int d, int *x, int *y)
{
    int rx, ry, s, t=d;
    *x = *y = 0;
    for (s = 1 ; s < n ; s *=2) {
        rx = 1 & (t/2);
        ry = 1 & (t ^ rx);
        rot (s,x,y,rx,ry); //rotate?
        *x += s * rx;
        *y += s * ry;
        t /=4;
    }
}

//rotate/flip a quadrant approximately
void rot(int n, int *x, int *y, int rx, int ry) {
    if (ry == 0) {
        if (rx == 1) {
            *x = n - 1 - *x;
            *y = n - 1 - *y;
        }
        //Swap x and y
        int t = *x;
        *x = *y;
        *y = t;
    }
}
//broken, demonstration of time library

//include <iostream>
//include <math.h>
//include <ctime>
 
double timeDifference(int day, int month, int year);

int wrap ()
{
    int day=3, int month, int year
    time_t now;
    struct tm start;
    double seconds;
    
    time(&now);  /* get current time; same as: now = time(NULL)  */
    
    start = *localtime(&now);
    
    start.tm_hour = 0; start.tm_min = 0; start.tm_sec = 0;
    start.tm_mon = month-1;  start.tm_mday = day; start.tm_year = year-1900;
    
    seconds = difftime(now,mktime(&start));
    
    (seconds/ (60*60*24)); //returns day
    return 0;
}

double timeDifference(int day, int month, int year)
{
    time_t now;
    struct tm start;
    double seconds;
    
    time(&now);  /* get current time; same as: now = time(NULL)  */
    
    start = *localtime(&now);
    
    start.tm_hour = 0; start.tm_min = 0; start.tm_sec = 0;
    start.tm_mon = month-1;  start.tm_mday = day; start.tm_year = year-1900;
    
    seconds = difftime(now,mktime(&start));
    
    return (seconds/ (60*60*24)); //returns day
}
//Scans a document or several docuemnts for a string
//returns if it is found and what line it is on
// grep already does this, so this program is useless

//include <iostream>
//include <fstream>
//include <string>
 

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize);

int wrap ()
{
	cout << "Which file do you want to search?\n";
	const int ARRAY_SIZE = 10000;
	char Char[ARRAY_SIZE];
	fstream InData;
	InData.open("data");
	string UserChooseFile;
	getline(cin, UserChooseFile);
	int FileSize = 0;
	while (InData >> Char[FileSize++]);
	cout << "Keyword --> ";
	
	char KeyWord[20];
	int KeyWordSize = 0;
	char Temp = cin.get();
	while (Temp != '\n')
	{
		KeyWord[KeyWordSize++] = Temp;
	}
	int Location = CheckKey(KeyWord, KeyWordSize, Char, FileSize);
	cout << "Location " << Location;
	return 0;
}

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize)
{
	static int i = 0, j = 0;
	while (i < FileSize) 
	{
		if (Char[i] == KeyWord[j]) 
		{
			i++; j++; CheckKey(KeyWord, KeyWordSize, Char, FileSize);
		}
		if (j >= KeyWordSize) return j;
	}
	return -1;
}
// wrap to print primes

 

int wrap (int argc, char** argv)
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

// number theoretic function called sigma
// gets interval of sigma value or just value

 

int wrap (int argc, char** argv)
{
    if (argc == 2)
    {
        int i = stringToInt(argv[1]);
        cout << sigma(i) << endl;
        return 0;
    }
    if (argc == 3)
    {
        int a = stringToInt(argv[1]);
        int b = stringToInt(argv[2]);

        for (int i = a ; i <= b ; i++)
            cout << sigma(i) << endl;
        return 0;
    }
    else
    {
        cout << "sigma [int]\n or\n sigma [start] [end]";
        return 1;
    }

}
//include <iostream>
 
 

int wrap (int argc, char** argv)
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
// gives bite size and largest number of data types

//include <iostream>
//include <math.h>
//include <limits>
 

int wrap ()
{

    cout << "Sizes of various data types\n"
         << "int: " << sizeof(int) << endl
         << numeric_limits<int>::max() << endl
         << "float: " << sizeof(float) << endl
         << numeric_limits<float>::max() << endl
         << "double: " << sizeof(double) << endl
         << numeric_limits<double>::max() << endl
         << "short int: " << sizeof(short int) << endl
         << numeric_limits<short int>::max() << endl
         << "char: " << sizeof(char) << endl
         << numeric_limits<char>::max() << endl
         << "long int: " << sizeof(long int) << endl
         << numeric_limits<long int>::max() << endl
         << "long long: " << sizeof(long long) << endl
         << numeric_limits<long long>::max() << endl
         << "unsigned long int: " << sizeof(long int) << endl
         << numeric_limits<unsigned long int>::max() << endl;
       
         
    cout << "Size in possible positions\n"
         << "int: " << pow( 2 , sizeof(int) * 8) << endl

         << "float: " << sizeof(float) << endl
         << "double: " << sizeof(double) << endl
         << "short int: " << sizeof(short int) << endl
         << "char: " << sizeof(char) << endl;

    cout << "Size in array\n"
         << "long int: " << int(log10(pow(2, sizeof(long int) * 8))) + 1;


    return 0;
}
//created by: Jordan Winkler
//random program for fun, sorting numbers by overloaded functions,
//instead of arrays

 

void sort(int &a, int &b, int &c, int &d, int &e);
void sort(int &a, int &b, int &c, int &d);
void sort(int &a, int &b, int &c);
void sort(int &a, int &b);

int wrap ()
{
    srand(time(NULL));
    
    int a = rand(); 
    int b = rand();
    int c = rand();
    int d = rand();
    int e = rand();

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "\n\n";

    sort(a,b,c,d,e);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    return 0;
}

/****************************************************************
| Name: sort
|    
| Precodition: unsorted variable (max 5)
| Postcondition: sorted variables (max 5)
|
| Parameters:
|       
|   IN: a, b, or c, or d, or e
|   Out: a, b, or c, or d, or e
|   
| Returns: Nothing
\****************************************************************/
void sort(int &a, int &b)
{
    int aT = a;
    int bT = b;

    a = (aT<bT)?aT:bT;
    b = (aT>bT)?aT:bT;
}
void sort(int &a, int &b, int &c)
{
    for (int i = 0 ; i < 2 ; i++)
    {
        sort(a,b);
    
        int bT = b;
        int cT = c;
    
        b = (bT<cT)?bT:cT;
        c = (bT>cT)?bT:cT;
    }
}
void sort(int &a, int &b, int &c, int &d)
{
    for (int i = 0 ; i < 3 ; i++)
    {
        sort(a,b,c);
    
        int cT = c;
        int dT = d;
    
        c = (cT<dT)?cT:dT;
        d = (cT>dT)?cT:dT;
    }
}
void sort(int &a, int &b, int &c, int &d, int &e)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        sort(a, b, c, d);
        
        int dT = d;
        int eT = e;
    
        d = (dT<eT)?dT:eT;
        e = (dT>eT)?dT:eT;
    }
}
//messing with string, this program is useless

//include <iostream>
//include <string>

 

int wrap ()
{
    string face = "face";
    
    cout << "name " << face << endl;
    cout << "size " << face.size() << endl;

    for (int i = 0 ; i < face.length() ; i++)
    {
        cout << "a[" << i << "] " << face[i] << endl;
    }

    face[0] = face[1];
    
    cout << face << endl;

    face.insert(0,"f");


    cout << face << endl;

    face.insert(1,5,'a');
    
    cout << face << endl;

    cout << "max_size " << face.max_size() << endl;

    cout << "c_string " << face.c_str() << endl;

    cout << "sub string " << face[0] << face.substr(7) << endl;

    int aceStart = face.find("ace");

    cout << "without counting " << face[0] 
         << face.substr(aceStart) << endl;


    return 0;

}
// demonstration of changing arrays to linked lists
// takes a string and puts it in a linked list, prints that list

//include <iostream>
 

//is used to capture the string as a list
struct dll
{
    char symbol;
    dll* prev;
    dll* next;
};

dll* add_head(char character);
dll* add_tail(dll* head, char character);

void print_list(dll* head);
void print_debug(dll* head);

int wrap (int argc, char* argv[])
{
    //repeat entered string
    cout << "starting phrase: ";
	for (int i = 1 ; i < argc ; i++)
	    cout << argv[i] << ' ';
	cout << endl;

	cout << "first word: ";
	if (argc > 0)
	{
		for (int i = 0 ; argv[1][i] ; i++)
	    	cout << argv[1][i];
		cout << endl;
	}

	//make and add each element to string
    dll* head = add_head(argv[1][0]);
	for (int i = 1 ; argv[1][i] ; i++)
	{
		add_tail(head, argv[1][i]);
	}

	//print out doubly linked list
	cout << "first word, according to list: ";
	print_list(head);	

//  print_debug(head);

	return 0;
}

dll* add_tail(dll* head, char character)
{
	while (head -> next != NULL)
		head = head -> next;

	dll* tail = new dll;
	head -> next = tail;
	tail -> prev = head;
	tail -> next = NULL;
	
	tail -> symbol = character;

	return tail;
}

dll* add_head(char first)
{
    dll* head = new dll;
	head -> prev = NULL;
	head -> next = NULL;

	head -> symbol = first;

	return head;
}

void print_list(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << p -> symbol;
		p = p -> next;
	}
	cout << p -> symbol;
	cout << endl;
}

void print_debug(dll* head)
{
	dll* p = head;
	while (p -> next != NULL)
	{
		cout << "prev: " << p -> prev << endl;
		cout << "node: " << p << endl;
		cout << "next: " << p -> next << endl;
		cout << "char: " << p -> symbol << endl;
		p = p -> next;
	}
	cout << "prev: " << p -> prev << endl;
	cout << "node: " << p << endl;
	cout << "char: " << p -> symbol << endl;
}
 

int wrap (int argc, char* argv[])
{
    if (argc != 3)
	{
	    cout << "sum [a] [b]\n";
		return 0;
	}
	cout << stringToInt(argv[1]) + stringToInt(argv[2]) << endl;

	return 0;
}
// adds an arbitrary list of numbers together

 

int wrap (int argc, char** argv)
{
    if (argc == 1)
	{
	    cout << "sum [a_1] [a_2] ... [a_n] \n";
	    return 0;
	}

    double sum = 0;
    for (int i = 1 ; i < argc ; i++)
        sum += stringToFloat(argv[i]);

    cout << sum << endl;
    
    return 0;
}
//include <stdio.h>
 

int wrap ()
{
    
    
    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",~i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",((~i)+1));

    return 0;
}
//include <iostream>
 

int wrap ()
{
    char* string = new char[25];
    cout << "type something with m in it\n";
    cin >> string;

    cout << string << '\n';

    // find the 'm'
    char m = '5';

    ios_base::sync_with_stdio(false);

    cout << cin.gcount() << endl;
    cin.unget();
    cin.unget(); //if called twice it simply closes buffer
    cin >> m; //this never reads

    cout << m;
    cout << endl;

    return 0;

}

    
// testing complex numbers I made

//include "complexNum.h"
//include <iostream>
 

int wrap ()
{
    com a;
    com b;
    cout << "enter a, b\n";
    cin >> a.Real >> a.Imaginary;
    cin >> b.Real >> b.Imaginary;

    com c;

    c = a + b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a - b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a * b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    c = a / b;
    cout << "c: " << c.Real << c.Imaginary << endl;

    return 0;
}
//include <iostream>
 

int wrap () {return 0;};
//test program for a class of rational numbers called rat

//include <iostream>
 
 

int ()
{
    cout << "choose two rational numbers ";
    int anum, aden, bnum, bden;
    cin >> anum >> aden >> bnum >> bden;
    rat A(anum, aden);
    rat B(bnum, bden);
    rat C(1,1);
    
    cout << "\n+ "; C = A + B; C.p(); cout << endl;
    cout << "\n- "; C = A - B; C.p(); cout << endl;
    cout << "\n* "; C = A * B; C.p(); cout << endl;
    cout << "\n/ "; C = A / B; C.p(); cout << endl;
    cout << "\n> " << ((A > B)?1:0) << endl;
    cout << "\n< " << ((A < B)?1:0) << endl;
    cout << "\n= " << ((A == B)?1:0) << endl;
    cout << "\n>= " << ((A >= B)?1:0) << endl;
    cout << "\n<= " << ((A <= B)?1:0) << endl;
    return 0;
}


// experimenting with time functions

//include <iostream>
//include <time.h>
 
// Translates ascii characters to their literal numbers in decimal

 

int wrap (int argc, char* argv[])
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
// This is a comment
/*
 * Multi-line comment
 */

// Tells the compiler iostream library which contains the function cout
//include <iostream>

// Allows us to use vectors
//include <vector>

// Allows us to use strings
//include <string>

// Allow us to work with files
//include <fstream>

// Allows functions in the std namespace to be used without their prefix
// std::cout becomes cout
 

// ---------- FUNCTIONS ----------
// The function has return type, function name and attributes with 
// their data types
// The attribute data types must match the value passed in
// This data is passed by value
// You can define default values to attributes as long as they come last
// This is known as a function prototype
int addNumbers(int firstNum, int secondNum = 0){

		int combinedValue = firstNum + secondNum;

		return combinedValue;

}

// An overloaded function has the same name, but different attributes
int addNumbers(int firstNum, int secondNum, int thirdNum){

	return firstNum + secondNum + thirdNum;

}

// A recursive function is one that calls itself

int getFactorial(int number){

	int sum;
	if(number == 1) sum = 1;
	else sum = (getFactorial(number - 1) * number);
	return sum;

	// getFactorial(2) [Returns 2] * 3
	// getFactorial(1) [Returns 1] * 2 <This value goes above>
	// 2 * 3 = 6

}

// Doesn't have a return type so use void
// Since I'm getting a pointer use int*
// Refer to the referenced variable with *age
void makeMeYoung(int* age){

	cout << "I used to be " << *age << endl;	
	*age = 21;

}

// A function that receives a reference can manipulate the value globally
void actYourAge(int& age){

	age = 39;

}

// ---------- END OF FUNCTIONS ----------

// ---------- CLASSES ----------
// classes start with the name class

class Animal
{

// private variables are only available to methods in the class
private:
	int height;
	int weight;
	string name;

	// A static variable shares the same value with every object in the class
	static int numOfAnimals;

// Public variables can be accessed by anything with access to the object
public:
	int getHeight(){return height;}
	int getWeight(){return weight;}
	string getName(){return name;}
	void setHeight(int cm){ height = cm; }
	void setWeight(int kg){ weight = kg; }
	void setName(string dogName){ name = dogName; }

	// Declared as a prototype
	void setAll(int, int, string);

	// Declare the constructor
	Animal(int, int, string);

	// Declare the deconstructor
	~Animal();

	// An overloaded constructor called when no data is passed
	Animal();

	// protected members are available to members of the same class and 
	// sub classes

	// Static methods aren't attached to an object and can only access
	// static member variables
	static int getNumOfAnimals() { return numOfAnimals; }

	// This method will be overwritten in Dog
	void toString();

};

int Animal::numOfAnimals = 0;

// Define the protoype method setAll
void Animal::setAll(int height, int weight, string name){

	// This is used to refer to an object created of this class type
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;

}

// A constructor is called when an object is created
Animal::Animal(int height, int weight, string name) {

	this -> height = height;
	this -> weight = weight;
	this -> name = name;

}

// The destructor is called when an object is destroyed
Animal::~Animal() {

	cout << "Animal " << this -> name << " destroyed" << endl;

}

// A constructor called when no attributes are passed
Animal::Animal() {
	numOfAnimals++;
}

// This method prints object info to screen and will be overwritten
void Animal::toString(){

	cout << this -> name << " is " << this -> height << " cms tall and "
		<< this -> weight << " kgs in weight" << endl;

}

// We can inherit the variables and methods of other classes
class Dog : public Animal{

	private:
		string sound = "Woof";
	public:
		void getSound() { cout << sound << endl; }

		// Declare the constructor
		Dog(int, int, string, string);

		// Declare the default constructor and call the default superclass
		// constructor
		Dog() : Animal(){};

		// Overwrite toString
		void toString();

};

// Dog constructor passes the right attributes to the superclass
// constructor and then handles the attribute bark that remains
Dog::Dog(int height, int weight, string name, string bark) : 
Animal(height, weight, name){

	this -> sound = bark;

}

// toString method overwritten
void Dog::toString(){

	// Because the attributes were private in Animal they must be retrieved 
	// by called the get methods
	cout << this -> getName() << " is " << this -> getHeight() << 
		" cms tall and " << this -> getWeight() << " kgs in weight and says " << 
		this -> sound << endl;

}

// ---------- END OF CLASSES ----------

// This is where execution begins. Attributes can be sent to main
int wrap() {

	// cout outputs text and a carriage return with endl
	// Statements must end with a semicolon
	// Strings must be surrounded by "
	// << sends the text via standard output to the screen
	cout << "Hello Internet" << endl;

	// ---------- VARIABLES / DATA TYPES ----------
	// Variables start with a letter and can contain letters, numbers and _
	// They are case sensitive

	// A value that won't change is a constant
	// Starts with const and it should be uppercase
	const double PI = 3.1415926535;

	// chars can contain 1 character that are surrounded with ' and is one byte in size
	char myGrade = 'A';

	// bools have the value of (true/1) or (false/0)
	bool isHappy = true;

	// ints are whole numbers
	int myAge = 39;

	// floats are floating point numbers accurate to about 6 decimals
	float favNum = 3.141592;

	// doubles are floating point numbers accurate to about 15 digits
	double otherFavNum = 1.6180339887;

	// You can output a variable value like this
	cout << "Favorite Number " << favNum << endl;

	// Other types include
	// short int : At least 16 bits
	// long int : At least 32 bits
	// long long int : At least 64 bits
	// unsigned int : Same size as signed version
	// long double : Not less then double

	// You can get the number of bytes for a data type with sizeof

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherFavNum) << endl;

	int largestInt = 2147483647;

	cout << "Largest int " << largestInt << endl;

	// ---------- ARITHMETIC ----------
	// The arithmetic operators are +, -, *, /, %, ++, --

	cout << "5 + 2 = " << 5+2 << endl;
	cout << "5 - 2 = " << 5-2 << endl;
	cout << "5 * 2 = " << 5*2 << endl;
	cout << "5 / 2 = " << 5/2 << endl;
	cout << "5 % 2 = " << 5%2 << endl;

	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	// Shorthand assignment operators
	// a += b == a = a + b
	// There is also -=, *=, /=, %=

	// Order of Operation states * and / is performed before + and -

	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;

	// ---------- CASTING ----------
	// You convert from one data type to another by casting
	// char, int, float, double

	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float) 4 / 5 << endl;

	// ---------- IF STATEMENT ----------
	// Executes different code depending upon a condition

	// Comparison operators include ==, !=, >, <, >=, <=
	// Will return true (1) if the comparison is true, or false (0)

	// Logical operators include &&, ||, !
	// Used to test 2 or more conditionals

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1) && (age < 16)){
		cout << "You can't drive" << endl;
	} else if(!isNotIntoxicated){
		cout << "You can't drive" << endl;
	} else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
		cout << "You can't drive" << endl;
	} else {
		cout << "You can drive" << endl;
	}

	// ---------- SWITCH STATEMENT ----------
	// switch is used when you have a limited number of possible options

	int greetingOption = 2;

	switch(greetingOption){

	case 1 :
		cout << "bonjour" << endl;
		break;

	case 2 :
		cout << "Hola" << endl;
		break;

	case 3 :
		cout << "Hallo" << endl;
		break;

	default :
		cout << "Hello" << endl;
	}

	// ---------- TERNARY OPERATOR ----------
	// Performs an assignment based on a condition
	// variable = (condition) ? if true : if false

	int largestNum = (5 > 2) ? 5 : 2;

	cout << "The biggest number is " << largestNum << endl;

	// ---------- ARRAYS ----------
	// Arrays store multiple values of the same type

	// You must provide a data type and the size of the array
	int myFavNums[5];

	// You can declare and add values in one step
	int badNums[5] = {4, 13, 14, 24, 34};

	// The first item in the array has the label (index) of 0
	cout << "Bad Number 1: " << badNums[0] << endl;

	// You can create multidimensional arrays
	char myName[5][5] = {{'D','e','r','e','k'},{'B','a','n','a','s'}};

	cout << "2nd Letter in 2nd Array: " << myName[1][1] << endl;

	// You can change a value in an array using its index
	myName[0][2] = 'e';

	cout << "New Value " << myName[0][2] << endl;

	// ---------- FOR LOOP ----------
	// Continues to execute code as long as a condition is true

	for(int i = 1; i <= 10; i++){

		cout << i << endl;

	}

	// You can also cycle through an array by nesting for loops
	for(int j = 0; j < 5; j++){

		for(int k = 0; k < 5; k++){
			cout << myName[j][k];
		}

		cout << endl;

	}

	// ---------- WHILE LOOP ----------
	// Use a while loop when you don't know ahead of time when a loop will end

	// Generate a random number between 1 and 100
	int randNum = (rand() % 100) + 1;

	while(randNum != 100){

		cout << randNum << ", ";

		// Used to get you out of the loop
		randNum = (rand() % 100) + 1;

	}

	cout << endl;

	// You can do the same as the for loop like this
	// Create an index to iterate out side the while loop
	int index = 1;

	while(index <= 10){

		cout << index << endl;

		// Increment inside the loop
		index++;

	}

	// ---------- DO WHILE LOOP ----------
	// Used when you want to execute what is in the loop at least once

	// Used to store a series of characters
	string numberGuessed;
	int intNumberGuessed = 0;

	do {
	    cout << "Guess between 1 and 10: ";

	    // Allows for user input
	    // Pass the source and destination of the input
	    getline (cin,numberGuessed);

	    // stoi converts the string into an integer
	    intNumberGuessed = stoi(numberGuessed);
	    cout << intNumberGuessed << endl;

	    // We'll continue looping until the number entered is 4
	} while (intNumberGuessed != 4);

	  cout << "You Win" << endl;

	// ---------- STRINGS ----------
	// The string library class provides a string object
	// You must always surround strings with "
	// Unlike the char arrays in c, the string object automatically resizes

	// The C way of making a string
	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

	// The C++ way
	string birthdayString = " Birthday";

	// You can combine / concatenate strings with +
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name? ";
	getline (cin,yourName);

	cout << "Hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;
	cout << "What is Euler's Constant? ";
	getline (cin,eulerGuess);

	// Converts a string into a double
	// stof() for floats
	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant){

		cout << "You are right" << endl;

	} else {

		cout << "You are wrong" << endl;

	}

	// Size returns the number of characters
	cout << "Size of string " << eulerGuess.size() << endl;

	// empty tells you if string is empty or not
	cout << "Is string empty " << eulerGuess.empty() << endl;

	// append adds strings together
	cout << eulerGuess.append(" was your guess") << endl;

	string dogString = "dog";
	string catString = "cat";

	// Compare returns a 0 for a match, 1 if less than, -1 if greater then
	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	// assign copies a value to another string 
	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	// You can get a substring as well by defining the starting index and the
	// number of characters to copy
	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

	// find returns the index for the string your searching for starting
	// from the index defined
	int lastNameIndex = yourName.find("Banas", 0);
	cout << "Index for last name " << lastNameIndex << endl;

	// insert places a string in the index defined
	yourName.insert(5, " Justin");
	cout << yourName << endl;

	// erase will delete 6 characters starting at index 7
	yourName.erase(6,7);
	cout << yourName << endl;

	// replace 5 characters starting at index 6 with the string Maximus
	yourName.replace(6,5,"Maximus");
	cout << yourName << endl;

	// ---------- VECTORS ----------
	// Vectors are like arrays, but their size can change

	vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {4, 13, 14, 24, 34};

	// Add the array to the vector starting at the beginning of the vector
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

	// Insert a value into the 5th index
	lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

	// at gets the value in the specified index
	cout << "Value in 5 " << lotteryNumVect.at(5) << endl;

	// push_back adds a value at the end of a vector
	lotteryNumVect.push_back(64);

	// back gets the value in the final index
	cout << "Final Value " << lotteryNumVect.back() << endl;

	// pop_back removes the final element
	lotteryNumVect.pop_back();

	// front returns the first element
	cout << "First Element " << lotteryNumVect.front() << endl;

	// back returns the last element
	cout << "Last Element " << lotteryNumVect.back() << endl;

	// empty tells you if the vector is empty
	cout << "Vector Empty " << lotteryNumVect.empty() << endl;

	// size returns the total number of elements
	cout << "Number of Vector Elements " << lotteryNumVect.size() << endl;

	// ---------- FUNCTIONS ----------
	// Functions allow you to reuse and better organize your code

	cout << addNumbers(1) << endl;

	// You can't access values created in functions (Out of Scope)
	// cout << combinedValue << endl;

	cout << addNumbers(1, 5, 6) << endl;

	cout << "The factorial of 3 is " << getFactorial(3) << endl;

	// ---------- FILE I/O ----------
	// We can read and write to files using text or machine readable binary

	string steveQuote = "A day without sunshine is like, you know, night";

	// Create an output filestream and if the file doesn't exist create it
	ofstream writer("stevequote.txt");

	// Verify that the file stream object was created
	if(! writer){

		cout << "Error opening file" << endl;

		// Signal that an error occurred
		return -1;

	} else {

		// Write the text to the file
		writer << steveQuote << endl;

		// Close the file
		writer.close();

	}

	// Open a stream to append to whats there with ios::app
	// ios::binary : Treat the file as binary
	// ios::in : Open a file to read input
	// ios::trunc : Default
	// ios::out : Open a file to write output
	ofstream writer2("stevequote.txt", ios::app);

	if(! writer2){

		cout << "Error opening file" << endl;

		// Signal that an error occurred
		return -1;

	} else {

		writer2 << "\n- Steve Martin" << endl;
		writer2.close();

	}

	char letter;

	// Read characters from a file using an input file stream
	ifstream reader("stevequote.txt");

	if(! reader){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		// Read each character from the stream until end of file
		for(int i = 0; ! reader.eof(); i++){

			// Get the next letter and output it
			reader.get(letter);
			cout << letter;

		}

		cout << endl;
		reader.close();

	}

	// ---------- EXCEPTION HANDLING ----------
	// You can be prepared for potential problems with exception handling

	int number = 0;

	try{

		if(number != 0){
			cout << 2/number << endl;
		} else throw(number);

	} 
	catch(int number){

		cout << number << " is not valid input" << endl;

	}

	// ---------- POINTERS ----------
	// When data is stored it is stored in an appropriately sized box based
	// on its data type 

	int myAge = 39;
	char myGrade = 'A';

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;

	// You can reference the box (memory address) where data is stored with 
	// the & reference operator

	cout << "myAge is located at " << &myAge << endl;

	// A pointer can store a memory address
	// The data type must be the same as the data referenced and it is followed
	// by a *

	int* agePtr = &myAge;

	// You can access the memory address and the data 
	cout << "Address of pointer " << agePtr << endl;

	// * is the dereference or indirection operator
	cout << "Data at memory address " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 34};
	int* numArrayPtr = badNums;

	// You can increment through an array using a pointer with ++ or --
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++; 
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	// An array name is just a pointer to the array
	cout << "Address " << badNums << " Value " << *badNums << endl;

	// When you pass a variable to a function you are passing the value
	// When you pass a pointer to a function you are passing a reference
	// that can be changed

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " years old now" << endl;

	// & denotes that ageRef will be a reference to the assigned variable
	int& ageRef = myAge;

	cout << "ageRef : " << ageRef << endl;

	// It can manipulate the other variables data
	ageRef++; 

	cout << "myAge : " << myAge << endl;

	// You can pass the reference to a function
	actYourAge(ageRef);

	cout << "myAge : " << myAge << endl;

	// When deciding on whether to use pointers or references
	// Use Pointers if you don't want to initialize at declaration, or if
	// you need to assign another variable
	// otherwise use a reference

	// ---------- CLASSES & OBJECTS ----------
	// Classes are the blueprints for modeling real world objects
	// Real world objects have attributes, classes have members / variables
	// Real world objects have abilities, classes have methods / functions
	// Classes believe in hiding data (encapsulation) from outside code

	// Declare a Animal type object
	Animal fred;

	// Set the values for the Animal
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	// Get the values for the Animal
	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;

	fred.setAll(34, 12, "Fred");

	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;

	// Creating an object using the constructor
	Animal tom(36, 15, "Tom");

	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
		<< tom.getWeight() << " kgs in weight" << endl;

	// Demonstrate the inheriting class Dog
	Dog spot(38, 16, "Spot", "Woof");

	// static methods are called by using the class name and the scope operator
	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

	spot.getSound();

	// Test the toString method that will be overwritten
	tom.toString();
	spot.toString();

	// We can call the superclass version of a method with the class name 
	// and the scope operator
	spot.Animal::toString();

	// When a function finishes it must return an integer value
	// Zero means that the function ended with success
	return 0;
}
// counts words in a text file

//include <stdio.h>

int countwords(char* string, int size);

int wrap (int argc, char** argv)
{
    #define MAX 5000
    char a[MAX] = {0};

    for (int i = 0 ; i < MAX && a[i] != '\n' ; i++)
        a[i] = getchar(); //cin.get();

    int n = countwords(a,MAX);

    printf("%d\n",n);

    #undef MAX
    return 0;
}


// function style word counter
int countwords(char* string, int size)
{
    #define isLetter ( \
    (string[iter] <= 'z' && string[iter] >= 'a') || \
    (string[iter] <= 'Z' && string[iter] >= 'A'))

    int iter = 0;
    bool inWord = 0;
    int wordCount = 0;

    while (iter < size)
    {
        if (isLetter)
            inWord = 1;
        else if (inWord == 1 && !(isLetter))
        {
            inWord = 0;
            wordCount++;
        }
        iter++;
    }

    #undef isLetter

    return wordCount;
}
        
// demonstration of writing to a file

//include <fstream>
 

int wrap ()
{
	ofstream Data;
	Data.open("lol.txt");

	Data << 'h';
	return 0;
}
// a program that writes pgm files
// pgm files are black and white pictures

//include <iostream>
//include <math.h>

 

#endif



int main(){return 0;};

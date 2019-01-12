//Name: Jordan Winkler
//Date: 10/24/2016
//Homework: c++ hw 8
//Action: adds two fractions and returns a fraction in simplest form

#include <iostream>
#include <iomanip>
using namespace std;

void ReadInputData(int &, int &, int &, int &);
void SumFractions(int, int, int, int, int &, int &);
int GreatestCommonDivisor(int, int);
void DisplayResults(int, int, int, int, int, int);

int main ()
{
    int A, B, C, D;
    char Ch = 'Y';
    int Numerator, Denominator;
    int LikePrime;
    while (Ch == 'Y')
    { 
        ReadInputData(A, B, C, D);
        SumFractions(A, B, C, D, Numerator, Denominator);
        do
        {
            LikePrime = GreatestCommonDivisor(Numerator, Denominator);
            Numerator /= LikePrime;
            Denominator /= LikePrime;
        } while (LikePrime != 1);
        
        DisplayResults(A, B, C, D, Numerator, Denominator);
        
        cout << setw(45) << setfill('-') << '-' << endl;
        cout << "Continue? Y or N! ==> ";
        cin >> Ch;
        cout << endl;
    }

    return 0;
}


/************************ReadInputData *****************************
Action:  Prompts the user to input numerators and denominators for 
         two fractions. It then assigns this data to variables.

Parameters: 

    IN:  none
    OUT: integers A (numerator 1), B (denominator 1), 
         C (numerator 2), D (denominator 2)
 
Returns: Nothing
Precondition: Input should be an integer.
-------------------------------------------------------------------*/
void ReadInputData(int & A, int & B, int & C, int & D)
{
    cout << "This program adds fractions. 'Y' continues, "
                "any other key exits program\n";
    cout << setw(71) << setfill('=') << '=' << endl;
    cout << "Enter   numerator 1 ==> ";
    cin >> A;
    cout << "Enter denominator 1 ==> ";
    cin >> B;
    
    cout << "\nEnter   numerator 2 ==> ";
    cin >> C;
    cout << "Enter denominator 2 ==> ";
    cin >> D;
}


/********************** SumFractions **********************
Action: Adds two fractions together

Parameters: 

    IN: the numerator and denominator of both fractions
    OUT: the numerator and denominator of the sum

Returns: Nothing
Precondition: The numbers need to be integers
-------------------------------------------------------------------*/
void SumFractions(int A, int B, int C, int D, int & Numerator, int & Denominator)
{
    Numerator = A*D+B*C;
    Denominator = B*D;
}

/********************** GreatestCommonDivisor **********************
Action: gives back the greatest common divisor of two numbers

Parameters: 

    IN: integer A and B to be compared
    OUT: Nothing

Returns: The Greatest Common Divisor
Precondition: The numbers need to be integers
-------------------------------------------------------------------*/
int GreatestCommonDivisor(int A, int B) 
{  //This is based on the Euclidean algorithm
    int T;  
    while (B != 0) 
    {  
        T = B;  
        B = A % B;  
        A = T;  
    }  
    return A;  
}

/********************** DisplayResults ****************************
Action: Displays the addition of two fractions

Parameters: 

    IN: variable of type int fill these spots A/B+C/D=E/F
    OUT: Nothing

Returns: Nothing
Precondition: Input integers need to be of value 50 or less
-------------------------------------------------------------------*/
void DisplayResults(int A, int B, int C, int D, int E, int F)
{
    cout << endl;
    
    if (E == 0)
    {
        cout << setw(2) << setfill(' ') << A
             << setw(6) << setfill(' ') << C << endl
             << "--- + --- = 0\n"
             << setw(2) << setfill(' ') << B 
             << setw(6) << setfill(' ') << D << endl;
    }
    else if (F == 1)
    {
        cout << setw(2) << setfill(' ') << A 
             << setw(6) << setfill(' ') << C << endl
             << "--- + --- = " << E << endl
             << setw(2) << setfill(' ') << B 
             << setw(6) << setfill(' ') << D << endl;
    }
    else 
    {
        cout << setw(2) << setfill(' ') << A 
             << setw(6) << setfill(' ') << C 
             << setw(6) << setfill(' ') << E << endl
             << "--- + --- = ---\n"
             << setw(2) << setfill(' ') << B 
             << setw(6) << setfill(' ') << D 
             << setw(6) << setfill(' ') << F << endl;
    }
    cout << endl;
}

/*
This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 1
Enter denominator 1 ==> 3

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 6

 1     1     1
--- + --- = ---
 3     6     2

---------------------------------------------
Continue? Y or N! ==> Y   

This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 2
Enter denominator 1 ==> 2

Enter   numerator 2 ==> 2
Enter denominator 2 ==> 2

 2     2
--- + --- = 2
 2     2

---------------------------------------------
Continue? Y or N! ==> Y

This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> -1
Enter denominator 1 ==> 2

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 2

-1     1
--- + --- = 0
 2     2

---------------------------------------------
Continue? Y or N! ==> Y

This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 13
Enter denominator 1 ==> 2

Enter   numerator 2 ==> 2
Enter denominator 2 ==> 2

13     2    15
--- + --- = ---
 2     2     2

---------------------------------------------
Continue? Y or N! ==> Y

This program adds fractions. 'Y' continues, any other key exits program
=======================================================================
Enter   numerator 1 ==> 7
Enter denominator 1 ==> 6

Enter   numerator 2 ==> 1
Enter denominator 2 ==> 3

 7     1     3
--- + --- = ---
 6     3     2

---------------------------------------------
Continue? Y or N! ==> N
*/

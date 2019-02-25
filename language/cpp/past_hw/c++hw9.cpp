//Name: Jordan Winkler
//Date: 11/01/2016
//Homework: c++ hw 9
//Action: Takes the users loan information: (principal, interest, years, 
//        payments), calculates monthly payments, and returns all of this 
//        information to the user.

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void ReadLoanInfo(float & Principal, float & AnnualInterestRate,
		 int & Years, int & PaymentsPerYear);
float MonthlyPayment(float Principal, float AnnualInterestRate,
		 int Years, int PaymentsPerYear);
void ShowTable(float Principal, float AnnualInterestRate,
		 int Years, int PaymentsPerYear);

int main ()
{   
    float Principal, AnnualInterestRate;
    int Years, PaymentsPerYear;
    char Ch = 'Y';
    do
    {
        ReadLoanInfo(Principal, AnnualInterestRate, Years, PaymentsPerYear);
        ShowTable(Principal, AnnualInterestRate, Years, PaymentsPerYear);
        
        cout << "\n\nContinue (Y/N) ";
        cin >> Ch;
        cout << endl;
    } while (Ch == 'Y');
    
    return 0;
}


/********************** ReadLoanInfo *******************************
Action: prompts the user to enter in the principal, annual interest 
        rate, number of years of the loan, and desired payments per 
        year

Parameters: 

    IN: Nothing
    OUT: Principal, AnnualInterestRate, Years, PaymentsPerYear

Returns: Nothing
Precondition: All variables should be positive
-------------------------------------------------------------------*/
void ReadLoanInfo(float & Principal, float & AnnualInterestRate, 
        int & Years, int & PaymentsPerYear)
{
    cout << "Enter Principal --> ";
    cin >> Principal;
    cout << "Enter Annual Interest Rate --> ";
    cin >> AnnualInterestRate;
    cout << "Enter Years --> ";
    cin >> Years;
    cout << "Enter Payments Per Year --> ";
    cin >> PaymentsPerYear;
}

/********************** MonthlyPayment *******************************
Action: Calculates the monthly payment

Parameters: 

    IN: Principal, AnnualInterestRate, Years, PaymentsPerYear
    OUT: Nothing

Returns: Monthly payment
Precondition: All variables should be positive
-------------------------------------------------------------------*/
float MonthlyPayment(float Principal, float AnnualInterestRate, 
        int Years, int PaymentsPerYear)
{
    float MonthlyInterest = AnnualInterestRate/1200.0; //converting to decimal and per month
    float Term = (Years * PaymentsPerYear);
    float Denominator = 1- pow (MonthlyInterest+1 , -1*Term);
    float Temp = (Principal * (MonthlyInterest / Denominator));
    return Temp;
}


/********************** ShowTable ***********************************
Action: Displays the information calculated in the program so far

Parameters: 

    IN: Principal, AnnualInterestRate, Years, PaymentsPerYear
    OUT: Nothing

Returns: Nothing
Precondition: All variables should be positive
-------------------------------------------------------------------*/
void ShowTable(float Principal, float AnnualInterestRate, int Years, 
        int PaymentsPerYear)
{
    cout.setf(ios::fixed, ios::floatfield);
    cout << "\nPrincipal\t\t$" << setprecision(2) << Principal; 
    cout << "\nInterest Rate\t\t" << setprecision(2) << AnnualInterestRate 
         << "%";
    cout << "\nNo. of Years\t\t" << Years;
    cout << "\nPayments per year\t" << PaymentsPerYear;
    cout << "\nNo. of Payments\t\t" << Years * PaymentsPerYear;
    cout << "\nMonthly Payment\t\t$" 
         << MonthlyPayment(Principal, AnnualInterestRate, Years, 
                PaymentsPerYear);
}

/*
Enter Principal --> 11000
Enter Annual Interest Rate --> 10
Enter Years --> 4
Enter Payments Per Year --> 12

Principal               $11000.00
Interest Rate           10.00%
No. of Years            4
Payments per year       12
No. of Payments         48
Monthly Payment         $278.99

Continue (Y/N) Y

Enter Principal --> 15500
Enter Annual Interest Rate --> 5.7
Enter Years --> 5
Enter Payments Per Year --> 12

Principal               $15500.00
Interest Rate           5.70%
No. of Years            5
Payments per year       12
No. of Payments         60
Monthly Payment         $297.50

Continue (Y/N) Y

Enter Principal --> 115000
Enter Annual Interest Rate --> 7.75
Enter Years --> 30
Enter Payments Per Year --> 12

Principal               $115000.00
Interest Rate           7.75%
No. of Years            30
Payments per year       12
No. of Payments         360
Monthly Payment         $823.88

Continue (Y/N) N

*/
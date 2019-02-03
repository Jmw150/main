/******************************************************************
Name :      Jordan Winkler and Matt Holloway
Date : 10/6/2016
Homework # :  Homework #6 Problem #1
Source  :    
Action  :  Menu is displayed allows user to calculate
		   Miles per Gallon, Total minutes and seconds
		   and determine if number is a prime number or not

Notes  :
********************************************************************/
#include <iostream>
#include <stdlib.h>      // this header file requires the .h
using namespace std;

void DisplayMenu(void);
void FindMilesPerGallon(void);
void ConvertTotalSeconds(void);
void FindIfPrime(void); 

int main()
{
  int Choice;

  system("cls");	// this clears the output screen

  DisplayMenu();
  cin >> Choice;
  while (Choice != 4)
    {
      switch (Choice)
        {
	  case 1: FindMilesPerGallon();
			    break;
          case 2: ConvertTotalSeconds();
                            break;
          case 3: FindIfPrime();
                            break;
          default : cout << "Sorry illegal choice, Please try again\n\n";
        }
      DisplayMenu();
      cin >> Choice;

    }
  return 0;
}

/*********************  DisplayMenu  ************************************
Action  :  This just displays the menu to the screen
Parameters  : none
returns     : nothing
***********************************************************************/
void DisplayMenu()
{
  cout << "\n\nDo you want to:\n";
  cout << "   1) Find miles per gallon\n";
  cout << "   2) Convert total seconds to minutes and seconds\n";
  cout << "   3) Determine if number is a prime number or not\n";
  cout << "   4) QUIT\n\n";
  cout << "  CHOICE --> ";
}

/********************  FindMilesPerGallon  ******************************
Action  : Ask user to input number of miles traveled and number of
          gallons used then display the miles per gallon obtained.
Parameters : none
returns    : nothing
------------------------------------------------------------------------*/
void FindMilesPerGallon(void)
{
  float Miles, Gallons;
  cout << "Input Miles and Gallons --> ";
  cin >> Miles >> Gallons;
  cout << "Your approximate miles per gallon is " << Miles/Gallons;
}

/******************** ConvertTotalSeconds *********************
Action  : Ask user to input a given total number of seconds and then
          displays the corresponding number of minutes and seconds
Parameters : none
returns    : nothing
-------------------------------------------------------------------------*/

void ConvertTotalSeconds(void)
{
    int Seconds;
    cout << "Input the total number of seconds --> ";
    cin >> Seconds;
    cout << "Minutes: " << Seconds / 60
         << "\nSeconds: " << Seconds % 60;
}

/*********************** IsPrimeNumber()****************************
Action  : Ask user to input positive integer and will determine if number
          is a prime number or not.
Parameters  : none
Returns     : nothing
-------------------------------------------------------------------*/

void FindIfPrime(void)
{
    int X, Test = 0;
    cout << "Enter a number --> ";
    cin >> X;
    for (int i = X - 1; i > 1 ; i--)
    {
        if (X % i == 0)
        {
            Test++;
        }
    }
    if (Test)
    {
        cout << "Not Prime";
    }
    else cout << "Prime";
}


/*
Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 1
Input Miles and Gallons --> 6 6
Your approximate miles per gallon is 1

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 1
Input Miles and Gallons --> 2 3
Your approximate miles per gallon is 0.666667

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2
Input the total number of seconds --> 181
Minutes: 3
Seconds: 1

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 2
Input the total number of seconds --> 59
Minutes: 0
Seconds: 59

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3
Enter a number --> 5
Prime

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 3
Enter a number --> 123
Not Prime

Do you want to:
   1) Find miles per gallon
   2) Convert total seconds to minutes and seconds
   3) Determine if number is a prime number or not
   4) QUIT

  CHOICE --> 4

*/
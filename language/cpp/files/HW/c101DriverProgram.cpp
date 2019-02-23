/*************************************************************************

PROGRAMMER :                   and Matt Holloway
COMPILER   :  Visual C++ .NET
SOURCE FILE:  a13shell.cpp

DESCRIPTION:  A driver program designed to test the following functions:

              void Upcase (char S[ ]);
              void DeleteFirst (char S[ ]);
              void InsertBlank (char S[ ], int  Pos);
              int Position (char Ch, char S[]);
=========================================================================*/
#include <iostream>
#include <ctype.h>
using namespace std;

void Upcase (char S[ ]);
void DeleteFirst (char S[ ]);
void InsertBlank (char S[ ], int  Pos);
int  Position (char Ch, char S[]);

void TestUpcaseFunction();
void TestDeleteFirstFunction();
void TestInsertBlankFunction();
void TestPositionFunction();

const int MAX_LENGTH = 50;

//**************************  main  **************************************

int main()
{
  char MenuChoice;

  do
    {
    cout << "1)  TestUpcaseFunction\n";
    cout << "2)  TestDeleteFirstFunction\n";
    cout << "3)  TestInsertBlankFunction\n";
    cout << "4)  TestPositionFunction\n";
    cout << "5)  EXIT                 \n\n";

    cout << "Choice => ";
    cin  >> MenuChoice;

    switch (MenuChoice)
      {
      case '1':  TestUpcaseFunction();
               break;
      case '2':  TestDeleteFirstFunction();
               break;
      case '3':  TestInsertBlankFunction();
               break;
      case '4':  TestPositionFunction();
               break;
      case '5': cout << "Good Bye!\n\n";
               break;
      default :  cout << "INCORRECT INPUT, PLEASE CHOOSE AGAIN\n\n";
               break;
      }
        }
  while ( MenuChoice != '5' );
  return 0;
}

/*********************  TestUpcaseFunction  ******************************

  Facilitates the testing of the function, Upcase. To exit, the user
  enters a null string, which becomes the final test case.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void TestUpcaseFunction()
{
  char Str[MAX_LENGTH] = "";

  cout << "\n\n================= Testing Upcase Function ================\n\n";
  cout << "Enter null string to terminate\n";

  cin.ignore(100, '\n');     // Eat newline left over from main() input

  do
    {
    cout << "\nEnter string => ";
    cin.getline(Str, MAX_LENGTH);          // Read string, discard '\n'
    if (Str[0] != 0)                      //if not null string then do
      {
       cout << "\nStr = '" << Str << "'\n";

       Upcase(Str);

       cout << "\nAfter calling Upcase,\n";
       cout << "\nStr = '" << Str << "'\n\n";

       cout << "----------------------------------------------------------\n";
      }
    }
  while ( Str[0] != 0 );                   // While null string not entered.

  cout << endl << endl;
}

/*********************  TestDeleteFirstFunction  *************************

  Facilitates the testing of the function, DeleteFirst.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void TestDeleteFirstFunction()
{
  char Str[MAX_LENGTH] = "";

  cout << "\n\n========== Testing Delete First Function ================\n\n";
  cout << "Enter null string to terminate\n";

  cin.ignore(100, '\n');     // Eat newline left over from main() input

  do
    {
     cout << "\nEnter string => ";
     cin.getline(Str, MAX_LENGTH);          // Read string, discard '\n'
     if ( Str[0] != 0 )                 // if not null string not entered.
       {
        cout << "\nStr = '" << Str << "'\n";

        DeleteFirst(Str);

        cout << "\nAfter calling DeleteFIrst,\n";
        cout << "\nStr = '" << Str << "'\n\n";

        cout << "--------------------------------------------------------\n";
       }
    }
  while (Str[0] != 0);          //while not null string continue

  cout << endl << endl;
}

/*********************  TestInsertBlankFunction  *************************

  Facilitates the testing of the function, InsertBlank.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void TestInsertBlankFunction()
{
  char Str[MAX_LENGTH] = "";
  int Position;             //Place in string to insert blank

  cout << "\n\n========== Testing Insert Blank Function ===============\n\n";
  cout << "Enter null string to terminate\n";

  cin.ignore(100, '\n');  // Eat newline left over from main() input

  cout << "\nEnter string => ";
  cin.getline(Str, MAX_LENGTH);          // Read string, discard '\n'

  while ( Str[0] != 0 )                 // While null string not entered.
     {
      cout << "\nEnter the position to insert blank ---> ";
      cin >> Position;
      cout << "\nStr = '" << Str << "'\n";

      InsertBlank(Str,Position);

      cout << "\nAfter calling InsertBlank,\n";
      cout << "\nStr = '" << Str << "'\n\n";

      cout << "----------------------------------------------------------\n";
      cout << "\nEnter string => ";
      cin.ignore(100, '\n');               // Gets rid of newline from before
      cin.getline(Str, MAX_LENGTH);        // Read string, discard '\n'
     }

  cout << endl << endl;
}

/*********************  TestPositionFunction  ****************************

  Facilitates the testing of the function, Position.
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void TestPositionFunction()
{
  char Str[MAX_LENGTH] = "";
  char Ch;                     //character to look for

  cout << "\n\n========== Testing Position Function ===============\n\n";
  cout << "Enter null string to terminate\n";

  cin.ignore(100, '\n');  // Eat newline left over from main() input

  cout << "\nEnter string => ";
  cin.getline(Str, MAX_LENGTH);          // Read string, discard '\n'

  while ( Str[0] != 0 )                 // While null string not entered.
     {
      cout << "\nEnter the character to find location in string ---> ";
      cin >> Ch;

      cout << "\nAfter calling Position Function,\n";
      cout << "'" << Ch << "'"<< " is found in " << Position(Ch,Str)
           << " position of string" << "\n\n";

      cout << "----------------------------------------------------------\n";
      cout << "\nEnter string => ";
      cin.ignore(100, '\n');               // Gets rid of newline from before
      cin.getline(Str, MAX_LENGTH);        // Read string, discard '\n'
     }

  cout << endl << endl;

}

/***************************  Upcase  ************************************
DESCRIPTION : This function will accept a character string and convert
              all the characters to uppercase if they are not already.
PARAMETERS  :
  S[]       : Pointer to string address
returns     : nothing
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void Upcase (char S[ ])
{
  for (int i = 0 ; S[i] ; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = S[i] - 32;
        }
    }
  
}

/***************************  DeleteFirst  *******************************
DESCRIPTION : This function will delete the first character of any string
PARAMETERS  :
  S[]       : 
returns     : 
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void DeleteFirst (char S[ ])
{
    for (int i = 0 ; S[i] ; i++)
    {
        S[i] = S[i+1];
    }    
}

/*************************** InsertBlank  ********************************
DESCRIPTION : This function will insert a blank into a string given
              location specified by the user.  If the position is outside
              the length of the string then nothing happens.
PARAMETERS  :
  S[]       : 
  Pos       : 
returns     : 
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
void InsertBlank (char S[ ], int  Pos)
{
    int End = 0;
    for (int i = 0 ; S[i] ; i++)
        End++;
  for (int i = End - 1 ; i >= Pos ; i--)
    {
        S[i+1] = S[i];
    }
    S[Pos] = ' ';
}

/*************************** Position  ********************************
DESCRIPTION : This function will tell you what position or location
              a given character is in the string.  If character is not
              found a -1 is returned. Function is case sensitive.
PARAMETERS :
  Ch       : 
  S[]      : 
returns    : 

note     : my position starts at 1, so "this is fun" and look for "t" then
           found in position 1.
Precondition:
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
int Position (char Ch, char S[])
{
  for (int i = 0 ; S[i] ; i++)
    {
        if (S[i] == Ch)
            return i+1;
    }
    return -1;
}
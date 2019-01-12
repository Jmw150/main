//Name: Jordan Winkler
//Date: 11/25/2016
//Homework: c++ hw 10
//Action: extracts an unsigned short integer from the user and displays it

#include <iostream>
using namespace std;

int ReadInt(unsigned short int & FinalStorage);

int main ()
{
    unsigned short int FinalStorageMain;
    int Error;
    char ChooseEnding;
    
    do
    {
        cout << "Enter a number --> ";
        Error = ReadInt(FinalStorageMain);
        if (Error == 1)
            cout << "Error: " << Error << " illegal case\n";
        else if (Error == 2)
            cout << "Error: " << Error << " overflow\n";
        else cout << "Number: " << FinalStorageMain;
        cout << endl << "Continue? (Y/N) ";
        cin.get(ChooseEnding);
    } while (!(ChooseEnding == 'n' || ChooseEnding == 'N'));
    return 0;
}


/********************** ReadInt **********************************
Action: Extracts and tests input from the keyboard. If a number
 is typed, it is returned, else error code is returned.

Parameters: 

    IN: Nothing
    OUT: A small positive integer from the keyboard, tab on the buffer size

Returns: Error 0 (no error), Error 1 (illegal input), Error 2 (overflow)
Precondition: 
-------------------------------------------------------------------*/
int ReadInt(unsigned short int & FinalStorage)
{
    char UserInput;
    unsigned int BigStorage = 0;
    static int Buffer = 0;
    cin.ignore(Buffer,'\n');
    
    do 
    {
        cin.get(UserInput);
        Buffer++;
    }
    while (UserInput == ' ');
    
    while (UserInput != '\n')
    {
        if (UserInput <= '9' && UserInput >= '0')
            BigStorage += (int) (UserInput - '0');
        else return 1;
        if (BigStorage > 65535) return 2;
        else FinalStorage = BigStorage;
        cin.get(UserInput);
        if (UserInput != '\n') 
        {
            BigStorage *= 10;
        }
    }
    //cin.ignore(10000,'\n');
    return 0;
}

/*
Enter a number --> 123

Number: 123
Continue? (Y/N) y
Enter a number --> 321

Number: 321
Continue? (Y/N) y
Enter a number --> 55578

Number: 55578
Continue? (Y/N) n

Enter a number --> n
Error: 1 illegal case

Continue? (Y/N) n 

Enter a number --> 100000
Error: 2 overflow

Continue? (Y/N) n
 

*/
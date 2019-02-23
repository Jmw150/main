//Name: Jordan Winkler
//Date: 10/16/2016
//Homework: c++ hw 7 part 1
//Action: Displays time in seconds, minutes, and hours. 
//Entering 0 ends the program


#include <iostream>
#include <iomanip>
using namespace std;

void DisplayTime(int);

int main ()
{
    int N;
    do
    {
        cout << "Enter total seconds --> ";
        cin >> N;
        if (N != 0)
        {
            DisplayTime(N);
        }
    } while (N != 0); 
    return 0;
}


/*************** DisplayTime *******************************
Action: Takes seconds and displays hr:min:sec
Parameters: Uses iostream and iomanip
IN: integer representing seconds
OUT: display hours:minutes:seconds in terminal
Returns: Nothing
Precondition: Input needs to be non-negative.
-------------------------------------------------------------------*/
void DisplayTime(int N)
{
    int Seconds = N % 60;
    int Minutes = N / 60; Minutes = Minutes % 60;
    int Hours = N / 3600;
    
    cout << Hours << ":";
    cout << setw(2) << setfill('0') << Minutes << ":"; 
    cout << setw(2) << setfill('0') << Seconds << endl;
}

/*
Enter total seconds --> 1
0:00:01
Enter total seconds --> 61
0:01:01
Enter total seconds --> 3661
1:01:01
Enter total seconds --> 1212121212
336700:20:12
Enter total seconds --> 0
*/
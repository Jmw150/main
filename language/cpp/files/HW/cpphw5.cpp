// name:     Jordan Winkler
// date:     4/9/2017
// homework: 5
// process:  A function called main tests a class called Month.

#include <stdlib.h>
#include <iostream>

using namespace std;

class Month
{
    public:
        Month();
        Month(int theindex);
        Month(char letrOne, char letrTwo, char letrThree);
        
        void update(int theindex);
        void update(char letrOne, char letrTwo, char letrThree);

        int Int();
        void Chars(char &letrOne, char &letrTwo, char &letrThree);
        
        Month nextMonth();
    private:
        int index;
};

int main ()
{   
    /* test Month(char,char,char) */
    cout << "Enter the first three letters of a month -> ";
    char Monthletr[4];
    for (int i = 0 ; i < 4 ; i++) 
        Monthletr[i] = cin.get();

    Month charMonth(Monthletr[0], Monthletr[1], Monthletr[2]);


    /* test Month(int) */
    cout << "\nWhat is the order of this month? -> ";
    int MonthNum;
    cin >> MonthNum; 
    if (cin.fail())
    {
        cout << "\nerror: not an int\n";
        return 1;
    }

    Month intMonth(MonthNum);


    /* test return of int member function */
    if (charMonth.Int() == intMonth.Int())
        cout << "\nCorrect!\n";
    else
        cout << "\nIncorrect\n";


    /* test return of chars member function */
    cout << "\nHere are the first three letters backwards: ";

    charMonth.Chars(Monthletr[2], Monthletr[1], Monthletr[0]);

    for (int i = 0 ; i < 4 ; i++) //more control than 
        cout << Monthletr[i];     //cout << Monthletr


    /* test default constructor and member function that  |
    |  returns the next month                            */
    cout << "\nHow many months ahead do you want to jump? -> ";
    int jumps;
    cin >> jumps;
    if (cin.fail())
    {
        cout << "\nerror: not an int\n";
        return 1;
    }
    cin.ignore(); //cin.get() will not ignore whitespace

    Month newMonth; 

    newMonth = charMonth;
    for (int i = 1 ; i <= jumps ; i++) 
        newMonth = newMonth.nextMonth();

    cout << "\nMonth #" << newMonth.Int() << ' ';
    newMonth.Chars(Monthletr[0], Monthletr[1], Monthletr[2]);
    for (int i = 0 ; i < 4 ; i++)
        cout << Monthletr[i];
    cout << endl;


    /* test both update functions */
    cout << "update month -> ";
    for (int i = 0 ; i < 4 ; i++) 
       Monthletr[i] = cin.get();
    cin >> MonthNum; 
    if (cin.fail())
    {
        cout << "\nerror: not an int\n";
        return 1;
    }
    charMonth.update(Monthletr[0], Monthletr[1], Monthletr[2]);
    intMonth.update(MonthNum);
    
    cout << "\nMonth #" << intMonth.Int() << ' ';
    charMonth.Chars(Monthletr[0], Monthletr[1], Monthletr[2]);
    for (int i = 0 ; i < 4 ; i++)
        cout << Monthletr[i];
    cout << endl;
    
    return 0;
}

/****************************************************************
| Name: Month
|    
| Precodition: <stdlib.h> is included
| Postcondition: an object of type month is created
|
| Parameters:
|       
|   IN: nothing, or an int for the month, or 3 chars for the
|       first three letters of the month
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
Month::Month() { }
Month::Month(int theindex)
{
    if (theindex <= 12 && theindex >= 1)
        index = theindex;
    else
    {
        cout << "\nerror: bad integer initialization\n";
        exit(1);
    }
}
Month::Month(char letrOne, char letrTwo, char letrThree)
{
    if (letrOne == 'j' && letrTwo == 'a' && letrThree == 'n')
        index = 1;
    else if (letrOne == 'f' && letrTwo == 'e' && letrThree == 'b')
        index = 2;
    else if (letrOne == 'm' && letrTwo == 'a' && letrThree == 'r')
        index = 3;
    else if (letrOne == 'a' && letrTwo == 'p' && letrThree == 'r')
        index = 4;
    else if (letrOne == 'm' && letrTwo == 'a' && letrThree == 'y')
        index = 5;
    else if (letrOne == 'j' && letrTwo == 'u' && letrThree == 'n')
        index = 6;
    else if (letrOne == 'j' && letrTwo == 'u' && letrThree == 'l')
        index = 7;
    else if (letrOne == 'a' && letrTwo == 'u' && letrThree == 'g')
        index = 8;
    else if (letrOne == 's' && letrTwo == 'e' && letrThree == 'p')
        index = 9;
    else if (letrOne == 'o' && letrTwo == 'c' && letrThree == 't')
        index = 10;
    else if (letrOne == 'n' && letrTwo == 'o' && letrThree == 'v')
        index = 11;
    else if (letrOne == 'd' && letrTwo == 'e' && letrThree == 'c')
        index = 12;
    else
    {
        cout << "\nerror: bad char initialization\n";
        exit(1);
    }
}


/****************************************************************
| Name: update
|    
| Precodition: there exists an object of type Month
| Postcondition: Month.index was changed
|
| Parameters:
|       
|   IN: int for the index, or 3 chars representing the first three
|       letters of the month.
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void Month::update(int theindex)
{
    if (theindex <= 12 && theindex >= 1)
        index = theindex;
    else
    {
        cout << "\nerror: bad integer argument inMonth\n";
        exit(1);
    }
}
void Month::update(char letrOne, char letrTwo, char letrThree)
{
    if (letrOne == 'j' && letrTwo == 'a' && letrThree == 'n')
        index = 1;
    else if (letrOne == 'f' && letrTwo == 'e' && letrThree == 'b')
        index = 2;
    else if (letrOne == 'm' && letrTwo == 'a' && letrThree == 'r')
        index = 3;
    else if (letrOne == 'a' && letrTwo == 'p' && letrThree == 'r')
        index = 4;
    else if (letrOne == 'm' && letrTwo == 'a' && letrThree == 'y')
        index = 5;
    else if (letrOne == 'j' && letrTwo == 'u' && letrThree == 'n')
        index = 6;
    else if (letrOne == 'j' && letrTwo == 'u' && letrThree == 'l')
        index = 7;
    else if (letrOne == 'a' && letrTwo == 'u' && letrThree == 'g')
        index = 8;
    else if (letrOne == 's' && letrTwo == 'e' && letrThree == 'p')
        index = 9;
    else if (letrOne == 'o' && letrTwo == 'c' && letrThree == 't')
        index = 10;
    else if (letrOne == 'n' && letrTwo == 'o' && letrThree == 'v')
        index = 11;
    else if (letrOne == 'd' && letrTwo == 'e' && letrThree == 'c')
        index = 12;
    else
    {
        cout << "\nerror: bad char arguments inMonth\n";
        exit(1);
    }
}


/****************************************************************
| Name: Int
|    
| Precodition: object of class Month exists
| Postcondition: no change
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: Month.index
\****************************************************************/
int Month::Int()
{   
    return index;
}

/****************************************************************
| Name: Chars
|    
| Precodition: object of class Month exists
| Postcondition: no change
|
| Parameters:
|       
|   IN: chars of the first three letters of object month
|   Out: chars of the first three letters of object month
|   
| Returns: nothing
\****************************************************************/
void Month::Chars(char &letrOne, char &letrTwo, char &letrThree)
{
    if (index == 1)
    {
        letrOne = 'j';
        letrTwo = 'a';
        letrThree = 'n';
    }
    else if (index == 2)
    {
        letrOne = 'f';
        letrTwo = 'e';
        letrThree = 'b';
    }
    else if (index == 3)
    {
        letrOne = 'm';
        letrTwo = 'a';
        letrThree = 'r';
    }
    else if (index == 4)
    {
        letrOne = 'a';
        letrTwo = 'p';
        letrThree = 'r';
    }
    else if (index == 5)
    {
        letrOne = 'm';
        letrTwo = 'a';
        letrThree = 'y';
    }
    else if (index == 6)
    {
        letrOne = 'j';
        letrTwo = 'u';
        letrThree = 'n';
    }
    else if (index == 7)
    {
        letrOne = 'j';
        letrTwo = 'u';
        letrThree = 'l';
    }
    else if (index == 8)
    {
        letrOne = 'a';
        letrTwo = 'u';
        letrThree = 'g';
    }
    else if (index == 9)
    {
        letrOne = 's';
        letrTwo = 'e';
        letrThree = 'p';
    }
    else if (index == 10)
    {
        letrOne = 'o';
        letrTwo = 'c';
        letrThree = 't';
    }
    else if (index == 11)
    {
        letrOne = 'n';
        letrTwo = 'o';
        letrThree = 'v';
    }
    else if (index == 12)
    {
        letrOne = 'd';
        letrTwo = 'e';
        letrThree = 'c';
    }
    else //error if called early
    {
        letrOne = 'N';
        letrTwo = 'I';
        letrThree = 'L';
    }
}

/****************************************************************
| Name: nextMonth
|    
| Precodition: There exists a month
| Postcondition: The month
|
| Parameters:
|       
|   IN: nothing
|   Out: nothing
|   
| Returns: an object of class Month
\****************************************************************/
Month Month::nextMonth()
{
    Month returnMonth(index);
    returnMonth.index = (index % 12) + 1 ;
    
    return returnMonth;
}

/*
Enter the first three letters of a month -> jan

What is the order of this month? -> 1

Correct!

Here are the first three letters backwards: naj

How months ahead do you want to jump? -> 2

Month #3 mar

update month -> feb 2

Month #2 feb 
*/

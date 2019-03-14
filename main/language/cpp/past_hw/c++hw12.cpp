//Name: Jordan Winkler
//Date: 11/29/2016
//Homework: c++ hw 12
//Action: an assortment of char array functions (each describes what they do)

/********************** Upcase **********************************
Action: Upcase will change each character of S array to its uppercase 
        equivalent, if there is one. Nonalphabetic characters remained 
        unchanged.

Parameters: 

    IN: Nothing
    OUT: A character array

Returns: Nothing
-------------------------------------------------------------------*/
void Upcase( char S[] )
{
    for (int i = 0 ; S[i] ; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            S[i] = S[i] - 32;
        }
    }
}


/********************** DeleteFirst **********************************
Action: Function will delete the first character of the array S.

Parameters: 

    IN: Nothing
    OUT: A character Array

Returns: Nothing
-------------------------------------------------------------------*/
void DeleteFirst( char S[] )
{
    for (int i = 0 ; S[i] ; i++)
    {
        S[i] = S[i+1];
    }
}

/********************** InsertBlank **********************************
Action: Function inserts a blank in position, Pos, of array S.

Parameters: 

    IN: Position in the array
    OUT: A character Array

Returns: Nothing
-------------------------------------------------------------------*/
void InsertBlank(char S[], int Pos)
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

/********************** Position **********************************
Action: Function returns the first position of the occurrence of Ch 
        in array S.

Parameters: 

    IN: character to test
    OUT: a character array

Returns: location of a chosen character in an array, or -1
-------------------------------------------------------------------*/
int Position(char Ch, char S[] )
{
    for (int i = 0 ; S[i] ; i++)
    {
        if (S[i] == Ch)
            return i+1;
    }
    return -1;
}

/*
1)  TestUpcaseFunction
2)  TestDeleteFirstFunction
3)  TestInsertBlankFunction
4)  TestPositionFunction
5)  EXIT                 

Choice => 1


================= Testing Upcase Function ================

Enter null string to terminate

Enter string => five

Str = 'five'

After calling Upcase,

Str = 'FIVE'

----------------------------------------------------------

Enter string => 


1)  TestUpcaseFunction
2)  TestDeleteFirstFunction
3)  TestInsertBlankFunction
4)  TestPositionFunction
5)  EXIT                 

Choice => 2


========== Testing Delete First Function ================

Enter null string to terminate

Enter string => hhat

Str = 'hhat'

After calling DeleteFIrst,

Str = 'hat'

--------------------------------------------------------

Enter string => 


1)  TestUpcaseFunction
2)  TestDeleteFirstFunction
3)  TestInsertBlankFunction
4)  TestPositionFunction
5)  EXIT                 

Choice => 3


========== Testing Insert Blank Function ===============

Enter null string to terminate

Enter string => lollol

Enter the position to insert blank ---> 3

Str = 'lollol'

After calling InsertBlank,

Str = 'lol lol'

----------------------------------------------------------

Enter string => 


1)  TestUpcaseFunction
2)  TestDeleteFirstFunction
3)  TestInsertBlankFunction
4)  TestPositionFunction
5)  EXIT                 

Choice => 4


========== Testing Position Function ===============

Enter null string to terminate

Enter string => Where is the z?

Enter the character to find location in string ---> z

After calling Position Function,
'z' is found in 14 position of string

----------------------------------------------------------

Enter string => 


1)  TestUpcaseFunction
2)  TestDeleteFirstFunction
3)  TestInsertBlankFunction
4)  TestPositionFunction
5)  EXIT                 

Choice => 5
Good Bye!

*/
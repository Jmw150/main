//Name: Jordan Winkler
//Date: 10/1/2016
//Homework: c++ hw 5 part 1
//Action: Reads a set of characters and gives the following 
//information about them: each Character, each ACII value, 
//next two ASCII characters for each inputted, total upper and lower case,
//total numbers, and total characters

#include <iostream>
using namespace std;

int main ()
{
    char Ch;
    int UpperCase = 0, LowerCase = 0, 
        NumberOfInt = 0, NumberOfChar = 0;
    cout << "Enter a character or string and end with a #.\n";
    do
    {
        cin >> Ch;
        cout << "\nEntered Character: " << Ch 
             << "\nACII Value: " << (int) Ch 
             << "\nNext 2 ACII Values: " 
             << (char) (Ch + 1) << " "
             << (char) (Ch + 2) << endl;
        if (Ch >= 'A' && Ch <= 'Z') UpperCase++;
        else if (Ch >= 'a' && Ch <= 'z') LowerCase++;
        else if (Ch >= '0' && Ch <= '9') NumberOfInt++;
        NumberOfChar++;
    } while (Ch != '#');
    cout << "\nUpper Case: " << UpperCase
        << "\nLower Case: " << LowerCase
        << "\nNumbers: " << NumberOfInt
        << "\nNumber of Characters: " << NumberOfChar;
    return 0;
}

/*
Enter a character or string and end with a #.
K

Entered Character: K
ACII Value: 75
Next 2 ACII Values: L M
A

Entered Character: A
ACII Value: 65
Next 2 ACII Values: B C
#

Entered Character: #
ACII Value: 35
Next 2 ACII Values: $ %

Upper Case: 2
Lower Case: 0
Numbers: 0
Number of Characters: 3


Enter a character or string and end with a #.
Le3#

Entered Character: L
ACII Value: 76
Next 2 ACII Values: M N

Entered Character: e
ACII Value: 101
Next 2 ACII Values: f g

Entered Character: 3
ACII Value: 51
Next 2 ACII Values: 4 5

Entered Character: #
ACII Value: 35
Next 2 ACII Values: $ %

Upper Case: 1
Lower Case: 1
Numbers: 1
Number of Characters: 4


Enter a character or string and end with a #.
Okay Sure thing.#

Entered Character: O
ACII Value: 79
Next 2 ACII Values: P Q

Entered Character: k
ACII Value: 107
Next 2 ACII Values: l m

Entered Character: a
ACII Value: 97
Next 2 ACII Values: b c

Entered Character: y
ACII Value: 121
Next 2 ACII Values: z {

Entered Character: S
ACII Value: 83
Next 2 ACII Values: T U

Entered Character: u
ACII Value: 117
Next 2 ACII Values: v w

Entered Character: r
ACII Value: 114
Next 2 ACII Values: s t

Entered Character: e
ACII Value: 101
Next 2 ACII Values: f g

Entered Character: t
ACII Value: 116
Next 2 ACII Values: u v

Entered Character: h
ACII Value: 104
Next 2 ACII Values: i j

Entered Character: i
ACII Value: 105
Next 2 ACII Values: j k

Entered Character: n
ACII Value: 110
Next 2 ACII Values: o p

Entered Character: g
ACII Value: 103
Next 2 ACII Values: h i

Entered Character: .
ACII Value: 46
Next 2 ACII Values: / 0

Entered Character: #
ACII Value: 35
Next 2 ACII Values: $ %

Upper Case: 2
Lower Case: 11
Numbers: 0
Number of Characters: 15


*/
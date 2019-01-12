//an attempt at algebra without using b-trees
#include <stdlib.h>
#include <iostream>
using namespace std;

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

int main ()
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

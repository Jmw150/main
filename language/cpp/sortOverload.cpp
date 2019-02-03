//created by: Jordan Winkler
//random program for fun, sorting numbers by overloaded functions,
//instead of arrays

#include "mylib.cpp"

void sort(int &a, int &b, int &c, int &d, int &e);
void sort(int &a, int &b, int &c, int &d);
void sort(int &a, int &b, int &c);
void sort(int &a, int &b);

int main ()
{
    srand(time(NULL));
    
    int a = rand(); 
    int b = rand();
    int c = rand();
    int d = rand();
    int e = rand();

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "\n\n";

    sort(a,b,c,d,e);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    return 0;
}

/****************************************************************
| Name: sort
|    
| Precodition: unsorted variable (max 5)
| Postcondition: sorted variables (max 5)
|
| Parameters:
|       
|   IN: a, b, or c, or d, or e
|   Out: a, b, or c, or d, or e
|   
| Returns: Nothing
\****************************************************************/
void sort(int &a, int &b)
{
    int aT = a;
    int bT = b;

    a = (aT<bT)?aT:bT;
    b = (aT>bT)?aT:bT;
}
void sort(int &a, int &b, int &c)
{
    for (int i = 0 ; i < 2 ; i++)
    {
        sort(a,b);
    
        int bT = b;
        int cT = c;
    
        b = (bT<cT)?bT:cT;
        c = (bT>cT)?bT:cT;
    }
}
void sort(int &a, int &b, int &c, int &d)
{
    for (int i = 0 ; i < 3 ; i++)
    {
        sort(a,b,c);
    
        int cT = c;
        int dT = d;
    
        c = (cT<dT)?cT:dT;
        d = (cT>dT)?cT:dT;
    }
}
void sort(int &a, int &b, int &c, int &d, int &e)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        sort(a, b, c, d);
        
        int dT = d;
        int eT = e;
    
        d = (dT<eT)?dT:eT;
        e = (dT>eT)?dT:eT;
    }
}

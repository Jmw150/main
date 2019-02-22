/* 
    RSA encryption
    by: Jordan Winkler

    encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

    decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

/*================================================================
|| 
|| Object: bigInt 
|| 
|| Purpose: a data type to calculate large integers
||      
|| Atributes: 
||      num, length, max
||
|| Functions:
||      + - * / % == <= >= < > = 
||      constructor, destructor, copy constructor, value,
||      print, confirmLength, resize, complement, bitshift
||      changeToBase, flipString
||
\*==============================================================*/
class bigInt
{ 
    public:
        //store of size __ call it __
        bigInt(); 
        bigInt(unsigned int twoToN);

        bigInt(const bigInt& obj);

        ~bigInt(); 

        /* input number */
        /* all in binary for now */
        void value(unsigned long int theNum); //from program
        void value(string fileName); // ./for file, else num
        void value(); //from cin 

        /* output number */
        void print(); //default base 2

        /* speed up */
        int confirmLength(); //faster computation
        void resize(); //less memory use

        friend const bigInt operator +(const bigInt &a,
                                       const bigInt &b);
        friend const bigInt operator -(const bigInt &a,
                                       const bigInt &d);
        friend const bigInt operator *(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator /(const bigInt &a, 
                                       const bigInt &b);
        friend const bigInt operator %(const bigInt &a, 
                                       const bigInt &mod);
        
        friend bool operator >=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator ==(const bigInt &a,
                                       const bigInt &b);
        friend bool operator !=(const bigInt &a,
                                       const bigInt &b);
        friend bool operator <(const bigInt &a,
                                       const bigInt &b);
        friend bool operator >(const bigInt &a,
                                       const bigInt &b);
        
        bigInt& operator =(const bigInt& rhs); 

        void complement();

        void setEqualTo(unsigned long int theNum);

        void bitShift(int n);

        friend void flipString(bool a[], int start, int end);

        friend void changeToBase(int x, int base, 
                                 int string[], int Max);
        /*
            could use all operators designed to non bigInt 
        */
        
    private:
        bool* num; //the number
        int length; //the length of storage
        int max; //4096
};



bigInt::bigInt() 
{
    max = 4096;
    num = new bool[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;
}
bigInt::bigInt(unsigned int twoToN)
{
    max = 4096;
  
    if (twoToN <= max)
        length = twoToN;
    else
    {
        cout << "\nerror: change size limit of bigInt\n";
        exit(1);
    } 

    num = new bool[length];

    for (int i = 0 ; i < length ; i++)
        num[i] = 0;

}

bigInt::bigInt(const bigInt& rhs)
{
    cout << "\ncopy constructor call\n";

    max = rhs.max;
    length = rhs.length;
    num = new bool[length];
    for (int i = 0 ; i < length ; i++)
        num[i] = rhs.num[i];
}

bigInt::~bigInt()
{
    cout << "\ndeconstructor running\n";
    cout << "times called: " << timesCalled() << endl;
    
//  delete [] num;
}

bigInt& bigInt::operator =(const bigInt& rhs)
{
    if (this == &rhs)
        return *this;
    

    length = rhs.length;
    max = rhs.max;
    for (int i = 0 ; i < max ; i++)
        num[i] = rhs.num[i];
        
    return *this;
}

//good for smaller values
void bigInt::value(unsigned long int theNum)
{
    max = 4096;
    num = new bool[max];
    length = max;

    for (int i = 0 ; i < max ; i++)
        num[i] = 0;

    if (theNum == 1) //common enough to get its own bypass
        num[0] = 1;
        
    //convert base 10 to base 2 array
    changeToBase(theNum, 2, num, 64); //unsigned long int is 2^64

}
void bigInt::value(string fileName)
{
    fstream inData;
    inData.open(fileName.c_str());
    char userInput;
    int userLength = 0;
    while (inData >> userInput)
    {
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = bool(userInput - '0');
            userLength++;
        }
        else 
            break;
        if (userLength > max)
            break;
    } 

    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
    
    inData.close();
}
void bigInt::value()
{
    char userInput;
    int userLength = 0;
    do
    {
        userInput = cin.get();
        if (userInput == '1' || userInput == '0')
        {
            num[userLength] = (userInput - '0');
            userLength++;
        }
        if (userLength > 4096)
            break;
    } while (userInput == '1' || userInput == '0');
    
    
    if (userLength > 1)
        flipString(num, 0, userLength-1);
    if (userLength == 0)
    {
        cout << "\nerror: did not read a num\n";
        exit(1);
    }
}



//save on computation
int bigInt::confirmLength()
{
    int index = max-1;

    while (1)
    {
        if (index == 0) break;
        if (num[index] == 1) break;
        index--;
    }
    length = index + 1; 

    return length;
}
//save on memory
void bigInt::resize()
{
    confirmLength();
    bool* temp = new bool[max];

    for (int i = 0 ; i < length ; i++)
        temp[i] = num[i];

    delete [] num;

    num = new bool[length];
    
    for (int i = 0 ; i < length ; i++)
        num[i] = temp[i];

    delete [] temp;
}


void bigInt::print()
{
    confirmLength();
    for (int i = length-1 ; i >= 0 ; i--)
        cout << num[i];

    cout << endl;
}

void bigInt::setEqualTo(unsigned long int theNum)
{
    for (int i = 0 ; i < length ; i++)
        num[i] = 0;

    int lengthOr64 = (length > 64)?64:length;

    changeToBase(theNum, 2, num, lengthOr64); //unsigned long int is 2^64
}
    

const bigInt operator +(const bigInt &a, const bigInt &b)
{
    bigInt c;

    int shortest = a.max;
    /* save on computaion */
    //int shortest = (a.length > b.length)?b.length:a.length;

    int carry = 0;
    for (int i = 0 ; i < shortest ; i++)
    {
        c.num[i] = (a.num[i] + b.num[i] + carry) % 2;
        if ((a.num[i]+b.num[i]+carry) < 2)
            carry = 0;
        else
            carry = 1;
    }
            
    return c;
}

const bigInt operator -(const bigInt &a, const bigInt &b)
{
    bigInt tempA;
    tempA = a;
    tempA.confirmLength();

    bigInt tempB;
    tempB = b;
    tempB.length = tempA.length;
    tempB.complement();

    tempA = tempA + tempB;

    bigInt one;
    one.value(1);

    tempA = tempA + one;
    
    
    tempA.num[tempA.confirmLength()-1] = 0; //take off last bit

    tempA.length = tempA.max;

    return tempA;
    //what if a > b and b - a?
}

void bigInt::complement()
{
    for (int i = 0 ; i < length ; i++)
        num[i] = num[i] ^ 1;
}
void bigInt::bitShift(int n)
{
    if (n > 0)
    {
        for (int i = length-1 ; i >= 0 ; i--)
            if (1 + n <= max-1)
                num[i+n] = num[i];
        for (int i = 0 ; i < n ; i++)
            num[i] = 0;
    }
    if (n < 0)
    {
        for (int i = 0 ; i < length ; i++)
            if (i+n >= 0)
                num[i+n] = num[i];
        for (int i = length-1 ; i >= max-1-n ; i--)
            num[i] = 0;
    }
}
    

const bigInt operator *(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp + one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator /(const bigInt &a, const bigInt &b)
{
    bigInt one;
    one.value(1);

    bigInt temp;
    temp = a;

    if (b.num[0] == 1) temp = temp - one;
    int i = 1;
    while (1)
    {
        if (b.num[i] == 1)
            temp.bitShift(-i);
        i++;
        if (i == a.max)
            break;
    }

    return temp;
}


const bigInt operator %(const bigInt &a, const bigInt &mod)
{
    bigInt c;
    c = a;

    while (c >= mod)
    {
        c = c - mod;
    }

    return c;
}

bool operator ==(const bigInt &a, const bigInt &b)
{
    if (a.length != b.length)
        return 0;
    
    int i = a.length-1;
    while (1)
    {
        if (a.num[i] != b.num[i])
            return 0;
        if (i == 0)
            break;
        i--;
    } 

    return 1;
}

bool operator !=(const bigInt &a, const bigInt &b)
{
    return !(a == b);
}

bool operator >(const bigInt &a, const bigInt &b)
{
    if (a.length > b.length)
        return 1;

    if (a.length < b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] > b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }
}


bool operator <=(const bigInt &a, const bigInt &b)
{
    return !(a > b);
}

bool operator <(const bigInt &a, const bigInt &b)
{
    if (a.length < b.length)
        return 1;

    if (a.length > b.length)
        return 0;

    int i = a.length;
    while (1)
    {
        if (a.num[i] == b.num[i])
            i--;
        else
            if (a.num[i] < b.num[i])
                return 1;
            else
                return 0;
        if (i <= 0)
            return 0;
    }

}

bool operator >=(const bigInt &a, const bigInt &b)
{
    return !(a < b);
}

/*
encryption: 
    public encryption key: (n,k)
    computation: M^k ≡ r (mod n)
    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
    n : n = pq

decryption:
    private decryption key: (p, q, j)
    computation: r^j ≡ M (mod n)
    j : 1 < j < phi(n), kj = 1 (mod phi(n))
*/


//Replace unsigned long ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =
#define ll bigInt

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll base, ll exponent, ll mod);

ll getK();
ll getJ();
ll getPrime(unsigned int power);

int main ()
{
    cout << "program loading\n";

    bigInt one;
    one.value(1);

    bigInt zero;
    zero.value(0);

    ll p;
    p.value(5);
    ll q;
    q.value(7);
    
    ll n;
    n = p * q;
    ll k;
    k.value(5);


    //if ((gcd(k, phi(p,q)) != one) || (k > phi(p,q))) 
//      cout << "bad k\n";

    ll phin;
    phin = phi(p,q);

    ll j;
    j = modInv(k, phin);

//  if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
//      cout << "bad j\n";

    ll M;
    M.value(5);
    ll r;

    cout << "number to encrypt: ";
    M.print();
    cout << endl;

    r = encrypt(M, n, k);
    
    cout << "encrypted: ";
    r.print();
    cout << endl;

    M = decrypt(r, p, q, j);

    cout << "decrypted: ";
    M.print();
    cout << endl;

#ifdef DEBUG
    cout << "(n, k) : ";
    n.print();
    cout << ' ';
    k.print();
    cout << endl;

    cout << "(p, q, j) : ";
    p.print();
    cout << ' ';
    q.print(); 
    cout << ' ';
    j.print(); 
    cout << endl;

    cout << "M: ";
    M.print(); 
    cout << endl;
    cout << "r: ";
    r.print();
    cout << endl;
#endif //DEBUG

    return 0;
}
/****************************************************************
| Name: encrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers M, n, k of the equation M^k ≡ r (mod n)
|   Out: nothing
|   
| Returns: r, a number with an RSA encryption on it
\****************************************************************/
ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

/****************************************************************
| Name: decrypt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer r, p, q, j of the equation r^j ≡ M (mod p*q)
|   Out: nothing
|   
| Returns: M, a number that has had the RSA encryption removed
\****************************************************************/
ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

/****************************************************************
| Name: modInv
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: u and v for equation u^-1(mod v)
|   Out: nothing
|   
| Returns: integer equal to u^-1(mod v)
\****************************************************************/
ll modInv(ll a, ll m)
{
    ll m0 = m, t, q;
    ll x0;
    x0.value(0);
    ll x1; x1.value(1);

    ll one; one.value(1);
    ll zero; zero.value(0);
 
    if (m == one)
      return zero;
 
    while (a > one)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m; a = t;
 
        t = x0;
 
        x0 = x1 - (q * x0);
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < zero)
       x1 = x1 + m0;
 
    return x1; //then destructor gets called several thousand times
}
/*
ll modInv(ll a, ll m)
{
    bigInt one;
    one.value(1);
    
    bigInt zero;
    zero.value(0);

    ll x, y;
    ll g;
    g = gcdExtended(a, m, &x, &y); 
    if (g != one)
        cout << "Inverse doesn't exist";
    else
    {
        ll res;
        res = (x%m + m) % m;
        return res;
    }
}
*/ 

/****************************************************************
| Name: gcdExtended
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integers a,b,x,y such that gcd(a,b) = ax + by = c
|   Out: integers x and y
|   
| Returns: integer c
\****************************************************************/
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    bigInt one;
    one.value(1);
    
    bigInt zero;
    zero.value(0);

    // Base Case
    if (a == zero)
    {
        *x = zero, *y = one;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd;
    gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

/****************************************************************
| Name: phi
|    
| Precodition: nothing
| Postcondition: nothing 
|
| Parameters:
|       
|   IN: two primes
|   Out: Nothing
|   
| Returns: an integer representing the number of positive 
|          integers not exceeding 'number' that are relatively
|          prime to 'number'
\****************************************************************/
ll phi(ll p, ll q) //for RSA encryption alg
{
    bigInt one;
    one.value(1);

    return (p-one)*(q-one);
}

/****************************************************************
| Name: gcd
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: two integers
|   Out: none
|   
| Returns: int the greatest common divisor of those two numbers
\****************************************************************/
ll gcd(ll A, ll B)
{
    bigInt zero;
    zero.value(0);

    ll T;
    while (B != zero)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    

ll expMod(ll base, ll exponent, ll mod) 
{
    bigInt one;
    one.value(1);

    bigInt zero;
    zero.value(0);

    if (mod == one)
        return zero;
    ll c;
    c = one;
    bigInt i;
    i = one;
    while (1)
    {
        c = (c * base) % mod;
        i = i + one;
        if (i > exponent)
            break;
    }
    //for (int i = 1 ; i <= exponent ; i++) //uh oh
    //  c = (c * base) % mod;

    return c;
}

    

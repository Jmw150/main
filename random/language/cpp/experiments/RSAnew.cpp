/*
created by: Jordan Winkler

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

#include "mylib.cpp"
#include <gmp.h> //complie as g++ __ -lgmpxx -lgmp
#include <gmpxx.h>

//Replace end of ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =
#define ll mpz_class

#define DEBUG

ll encrypt(ll M, ll n, ll k);
ll decrypt(ll r, ll p, ll q, ll j);
ll modInv(ll u, ll v);
ll gcdExtended(ll a, ll b, ll *x, ll *y);
ll gcd(ll A, ll B);
ll phi(ll p, ll q); 
ll expMod(ll a, ll n, ll m);

ll getK(ll p, ll q);
ll getK(ll p, ll q, ll start);
ll getJ(ll k, ll p, ll q);

bool isPrime(ll number); 
ll nextPrime(ll n);
ll getPrime(ll power);
ll expt(ll a, ll b);
ll ceilSquareRoot(ll a);
void changeToBase(ll x, int base, char string[], int Max);
int changeToBase(ll x, int base, ll string[], int Max);

int readFromFile(char a[], int max);
bool writeToFile(char a[], int max);
ll toNum(char a[], int start, int end);
char* toChar(ll num, int Max);
char toChar(ll num);


int main ()
{
#ifdef DEBUG
    cout << "starting program... \n";
    cout << "getting primes... \n";
#endif

    ll p = getPrime(64); //get prime > 2^n
    ll q = nextPrime(p);

#ifdef DEBUG
    cout << "prime1: " << p << endl;
    cout << "prime2: " << q << endl;
    cout << "getting k... \n";
#endif
    
    ll n = p * q; 
    ll k = getK(p,q); //slow for large primes

#ifdef DEBUG
    cout << "getting j... \n";
#endif
    ll j = getJ(k, p, q);

#ifdef DEBUG
    cout << "... \n";
#endif
    int maxInput = 50000; //random number

    ll* M = new ll[maxInput]; 
    
    char* string = new char[maxInput];

    int lengthOfStr = readFromFile(string, maxInput);

    cout << "To encrypt: " << string << endl;
    
    ll* r = new ll[maxInput];
    for (int i = 0 ; i < lengthOfStr ; i++)
    {
        M[i] = toNum(string, i, i);
        r[i] = encrypt(M[i], n, k);
    }

    cout << "encrypted: ";
    for (int i = 0 ; i < lengthOfStr ; i++)
        cout << r[i] << ' ';
    cout << endl;

    for (int i = 0 ; i < lengthOfStr ; i++)
    {
        M[i] = decrypt(r[i], p, q, j);
        string[i] = toChar(M[i]);
    }

    cout << "decrypted: " << string << endl;

#ifdef DEBUG
    cout << endl;
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;

    cout << "*M: " << M << endl;
    cout << "*r: " << r << endl;

    cout << "\ntest expMod\n";
    int a=233, b=11011, c=11111;
    cout << "expMod(" << a << ',' << b << ',' << c << ")\n";
    cout << expMod(a, b, c) << endl; 
    
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
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x, not a practical problem
        ll res = (x%m + m) % m;
        return res;
        cout << "Modular multiplicative inverse is " << res;
    }
}
 

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
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
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
    return (p-1)*(q-1);
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
    ll T;
    while (B != 0)
    {
        T = B;
        B = A % B;
        A = T;
    }
    return A;
}    


/****************************************************************
| Name: expMod
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: base^exponent ≡ c (mod mod)
|   Out: nothing
|   
| Returns: c
\****************************************************************/
ll expModJ(ll base, ll exponent, ll mod) //linear time
{
    if (mod == 1)
        return 0;
    ll c = 1;
    for (int i = 1 ; i <= exponent ; i++)
    {
        c = (c * base) % mod;
#ifdef DEBUG
        if (i % 1000 == 0)
            cout << "at base^" << i << endl;
#endif //DEBUG
    }
    return c;
}
ll expMod(ll a, ll n, ll m) //faster, exponential time
{
    ll x = a;
    ll y = (((n >> 0) & 1) == 1)?a:1;
    ll k = 4096; //for now
    for (int i = 1 ; i <= k ; i++)
    {
        x = (x*x) % m;
        if (((n >> i) & 1) == 1)
            y = (y == 1)?x:((x*y)%m);
    }
    return y;
}


/****************************************************************
| Name: getK
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: primes p and q
|   Out: nothing
|   
| Returns: k, from RSA encryption
\****************************************************************/
ll getK(ll p, ll q)
{
    if (p*q == 1)
    {
        cout << "bad primes for getK\n:";
        exit(1);
    }
    ll k = 2;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
#ifdef DEBUG
        if (k % 10000 == 0)
            cout << "k: " << k << endl;
#endif    
    }
    return k;
}
ll getK(ll p, ll q, ll start) //for choosing a larger k
{
    ll k = start;
    while (1)
    {
        if (gcd(k, phi(p,q)) == 1)
            if (k <= phi(p,q))
                break;
        k++;
    }
    return k;
}

/****************************************************************
| Name: getJ
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: exponent k, and primes p, and q from RSA encryption process
|   Out: nothing
|   
| Returns: J
\****************************************************************/
ll getJ(ll k, ll p, ll q)
{
    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
    { 
        cout << "bad j\n";
        exit(1);
    }
    return j;
}

/****************************************************************
| Name: getPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: 2^power of the lower bound of the prime
|   Out: nothing
|   
| Returns: the next prime after that power
\****************************************************************/
ll getPrime(ll power)
{
    ll lowerBound = expt(2, power); 
    
    return nextPrime(lowerBound);
}


/****************************************************************
| Name: nextPrime
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: positive integer k
|   Out: nothing
|   
| Returns: the closest prime after n
\****************************************************************/
ll nextPrime(ll n) 
{
    ll two = 2;
    if (n < two) //n< 2 bugged...
        return 2; 
    while (n > 0)
    {
        n++;
        if (isPrime(n) != 0)
            return n;
    }
}

/****************************************************************
| Name: isPrime
|    
| Precodition: a number to check
| Postcondition: 1 or 0 if the number is prime
|
| Parameters:
|       
|   IN: int number
|   Out: nothing
|   
| Returns: bool prime or not prime
\****************************************************************/
bool isPrime(ll number)
{
    if (number < 2)
        return 0;

    ll top = number;
    if (number > 100)  //uses sieve of Eratosthenes
        top = ceilSquareRoot(number);
    for (int i = 2 ; i < top ; i++)        
        if (number % i == 0)
            return 0;
    return 1;
}

/****************************************************************
| Name: expt
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: a^b = c
|   Out: nothing
|   
| Returns: c
\****************************************************************/
/*
ll expt(ll a, ll n)
{
    ll x = a;
    ll y = (((n >> 0) & 1) == 1)?a:1;
    ll k = 4096; //for now
    for (int i = 1 ; i <= k ; i++)
    {
        x = (x*x) ;
        if (((n >> i) & 1) == 1)
            y = (y == 1)?x:((x*y));
    }                                //loses large values, then y=0
    return y; 
}
*/
ll expt(ll a, ll b)
{
    ll c = 1;
    
    ll i = 1;
    while (1) //large values reset when leaving block scope
    {
        c = (c * a);
        i++;
        if (i > b)
            break;
    }
    return c;
}

/****************************************************************
| Name: ceilSquareRoot
|    
| Precodition: nothing
| Postcondition: nothinng
|
| Parameters:
|       
|   IN: a for equation ceil(a^(1/2)) = c
|   Out: nothing
|   
| Returns: c
\****************************************************************/
ll ceilSquareRoot(ll a)
{   
    ll i = 1;
    while (1)
    {
        if (i*i > a) //little above
            break;
        i++;
    }
    return i;
}

/****************************************************************
| Name: readFromFile
|    
| Precodition: There is a file to read from
| Postcondition: the file has been read from
|
| Parameters:
|       
|   IN: The location of an array to read to, max size of array
|   Out: nothing
|   
| Returns: int for size of file
\****************************************************************/
int readFromFile(char a[], int max)
{
    int size = 0;
    fstream InData;
    cout << "Enter the name of the file you wish to scan "; 
    //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    InData.open(UserInput.c_str());
    
    while (InData >> a[size++])
    {
        if (size-2 > max)
            break;
    }

    InData.close();
    return size;
}

/****************************************************************
| Name: writeToFile
|    
| Precodition: nothing
| Postcondition: a file has been written to to the given string
|
| Parameters:
|       
|   IN: location of an array to copy to a file, max size of array
|   Out: nothing
|   
| Returns: 1 for success, 0 for failure
\****************************************************************/
bool writeToFile(char a[], int max)
{
    ofstream OutData;
    cout << "Enter name of file "; /*designate file path 
                                        using string*/
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());

    for (int i = 0 ; i < max ; i++)
        OutData << a[i];
    
    OutData.close();
    return 1;
}

/****************************************************************
| Name: toNum
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: location of array, start and end of it to read
|   Out: nothing
|   
| Returns: that substring as a number
\****************************************************************/
ll toNum(char a[], int start, int end)
{
    ll toReturn = 0;
    int j = 0;
    for (int i = start ; i <= end ; i++, j++)
        toReturn += a[i] * expt(256, j);

    return toReturn;
}

/****************************************************************
| Name: changeToBase
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number, base to change it to, string representing number
|       max size of string
|   Out: nothing
|   
| Returns: nothing
\****************************************************************/
void changeToBase(ll x, int base, char string[], int Max)
{
    for (int i = 0 ; i < Max ; i++) //clean array
        string[i] = 0;

    for (int i = 0 ; toChar(x) && i < Max ; i++)
    {
        string[i] = toChar(x) % base;
        x = x/base;
    }
}
/****************************************************************
| Name: changeToBase
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number, base it turns into, number array representing
|       this, max size of this string
|   Out: nothing
|   
| Returns: number of digits of new number 
\****************************************************************/
int changeToBase(ll x, int base, ll string[], int Max)
{
    for (int i = 0 ; i < Max ; i++) //clean array
        string[i] = 0;

    int i = 0;
    while (1)
    {
        string[i] = x % base; 
        x = x/base;

        if (x == 0)
            break;
        if (i >= Max)
            break;
        i++;
    }
/* //original
    for (int i = 0 ; toChar(x) && i < Max ; i++)
    {
        string[i] = toChar(x) % base;
        x = x/base;
    }
*/
    return i; //length of array
}

/****************************************************************
| Name: toChar
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number being changed to a char*, max size of char*
|   Out: nothing
|   
| Returns: char* representing number in characters
\****************************************************************/
char* toChar(ll num, int Max)
{
    char* temp = new char[Max];
    changeToBase(num, 256, temp, Max);

    return temp;
}

/****************************************************************
| Name: toChar
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: number to be turned into a char (truncates at 256)
|   Out: nothing
|   
| Returns: the char 
\****************************************************************/
char toChar(ll num) //will give wrong value if ll is too large
{
    return char(num.get_ui());
}


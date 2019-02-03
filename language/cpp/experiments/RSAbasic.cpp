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

#include <iostream>
#include <math.h>
using namespace std;

//Replace unsigned long ll with integer like data structure 
//Must be defined for operations: + * % - / > < != == =
#define ll unsigned long int

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
    ll p = 5;
    ll q = 7;
    
    ll n = p * q;
    ll k = 5;

    if (gcd(k, phi(p,q)) != 1 || k > phi(p,q)) 
        cout << "bad k\n";

    ll j = modInv(k, phi(p,q));

    if (j > phi(p,q) || (k*j) % phi(p,q) != 1)
        cout << "bad j\n";

    ll M = 5;
    ll r;

    cout << "number to encrypt: " << M << endl;

    r = encrypt(M, n, k);
    
    cout << "encrypted: " << r << endl;

    M = decrypt(r, p, q, j);

    cout << "decrypted: " << M << endl;

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;

    cout << "M: " << M << endl;
    cout << "r: " << r << endl;
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

ll expMod(ll base, ll exponent, ll mod) 
{
    if (mod == 1)
        return 0;
    ll c = 1;
    for (int i = 1 ; i <= exponent ; i++)
        c = (c * base) % mod;

    return c;
}

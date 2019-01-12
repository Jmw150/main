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
#include <limits>

#define DEBUG

//replace unsigned long int with any integer like data structure
//Must be defined for operations: + - / * % > < != == =
//and be defined for used functions
#define ll unsigned long int

ll encrypt(ll M, ll n, ll k);

ll decrypt(ll r, ll p, ll q, ll j);

void flipString(char a[], int start, int end);
void flipString(char a[]);

ll stringToValue(char a[], int start, int end);

void valueToString(ll value, char string[], int start, int end);

int main()
{
    ll p = 1000003; //prime 1
    ll q = 1000033; //prime 2
    
    ll n = p * q;
    ll k = 11;
    if (gcd(k, phi(p,q)) != 1) cout << "bad k\n";

    ll j = modinv(k, phi(p,q));

#ifdef DEBUG
    cout << "(n, k) : " << n << ' ' << k << endl;
    cout << "(p, q, j) : " << p << ' ' << q << ' ' << j << endl;
#endif //DEBUG

    cout << "string -> ";
    int MaxString = 1000000; //arbitrary max
    char userM[MaxString] = {0}; 

    //get string from user 
    ll stringLength = -1; //user string length
    do
    {
        stringLength++;
        userM[stringLength] = cin.get();
        if (stringLength == MaxString - 1) //makes sure a \0 on end is left
        {
            cout << "\nerror: too many char\n";
            return 1;
        }
    } while (userM[stringLength] != '\n');

    ll* M = new ll[stringLength];
    ll* r = new ll[stringLength];

    for (int i = 0 ; i < stringLength ; i++)
    {
        M[i] = 0;
        r[i] = 0;
    }

    int charSpace = 3; //preferably multiples of 3 for ascii

    for (int i = 0 ; userM[charSpace*i] ; i++)
        M[i] = stringToValue(userM, charSpace*i, charSpace*(i+1));

#ifdef DEBUG
    cout << "User Input: " << userM; //includes \n already

    cout << "User Input char values: ";
    for (int i = 0 ; userM[i] ; i++)
        cout << int(userM[i]) << ' ';
    cout << endl;

    cout << "User Input as int: ";
    for (int i = 0 ; M[i] && i < stringLength ; i++)
        cout << "M[" << i << "]: " << M[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        r[i] = encrypt(M[i], n, k);

#ifdef DEBUG
    cout << "encrypted values: ";
    for (int i = 0 ; r[i] && i < stringLength ; i++)
        cout << "r[" << i << "]: " << r[i] << endl;
#endif //DEBUG

    for (int i = 0 ; i < stringLength ; i++)
        M[i] = decrypt(r[i], p, q, j);

    for (int i = 0 ; i < stringLength ; i++)
        valueToString(M[i], userM, charSpace*i, charSpace*(i+1));

    cout << "decrypted: " << userM << endl;
    

    return 0;
}

void flipString(char a[])
{
    int length = 0;
    for (int i = 0 ; a[i] ; i++)
        length++;
    length--; //assuming 0 

#ifdef DEBUG
        cout << "inside flipString\n";
        cout << "length: " << length << endl;
#endif //DEBUG

    char* temp = new char[length+1];

    int start = 0;
    int end = length; //ignore \n, add -1, doesn't work if so
    while (end >= 0)
        temp[start++] = a[end--];

#ifdef DEBUG
    cout << "temp: " << temp << endl;
#endif //DEBUG

    for (int j = 0 ; a[j] ; j++)
        a[j] = temp[j];

    delete [] temp;
}
void flipString(char a[], int start, int end) //some bug
{
    int length = end - start;

    char* temp = new char[length+1];

    int i = start;
    int k = end;
    while (k >= i)
        temp[i++] = a[k--];

    for (int j = start ; a[j] && j <= end ; j++)
        a[j] = temp[j];
}

ll encrypt(ll M, ll n, ll k)
{
    return expMod(M, k, n);
}

ll decrypt(ll r, ll p, ll q, ll j)
{
    return expMod(r, j, (p*q));
}

ll stringToValue(char a[], int start, int end)
{
#ifdef DEBUG
    cout << "inside stringToValue\n";
#endif //DEBUG
    ll value = 0;

    flipString(a);

    for (int i = 0, j = start ; j <= end && a[j] ; j++, i++) 
    {
        if (numeric_limits<ll>::max() > long(pow(256, i)))
            value += a[j] * long(pow(1000, i)); //replace 1k w 256
        else
        {
            cout << "\nerror: need more memory\n";
            exit(1);
        }
    }

    flipString(a);

    return value;
}

void valueToString(ll value, char string[], int start, int end)
{
#ifdef DEBUG
    cout << "inside valueToString\n";
#endif //DEBUG

    for (int i = start ; i <= end ; i++) //may need to clean string
        string[i] = 0;                   //elsewhere
    
    ll temp;
    for (int i = 0, j = start ; temp > 0 && j <= end ; i++, j++) 
    {
        temp = value / long(pow(1000, i));
        temp = temp % 1000;
        string[j] = temp;
#ifdef DEBUG
       cout << "temp: " << temp << endl;
#endif //DEBUG
    }
    flipString(string, start, end);
}

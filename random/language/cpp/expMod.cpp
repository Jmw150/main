//made by: Jordan Winkler
//License: GNU Public Licence

/****************************************************************
| Name: expMod
|    
| Precodition: nothing
| Postcondition: nothing
|
| Parameters:
|       
|   IN: integer for base, exponent, and mod
|   Out: nothing
|   
| Returns: integer d for a^n ≡ d (mod m)
\****************************************************************/
unsigned long int expMod(unsigned long int a, unsigned long int n, unsigned long int m) 
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

#
#created by: Jordan Winkler
#
#encryption: 
#    public encryption key: (n,k)
#    computation: M^k ≡ r (mod n)
#    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
#    n : n = pq
#
#decryption:
#    private decryption key: (p, q, j)
#    computation: r^j ≡ M (mod n)
#    j : 1 < j < phi(n), kj = 1 (mod phi(n))

def expMod(base, exp, mod): #way too slow
    if mod == 1:
     return 0
    c = 1
    i = 1
    while (i <= exp):
     c = (c * base) % mod
     i = i + 1
    return c

def encrypt(M, n, k):
    return expMod(M, k, n)

def decrypt(r, p, q, j):
    return expMod(r, j, (p*q))

def egcd(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = egcd(b % a, a)
        return (g, x - (b // a) * y, y)

def modinv(a, m):
    g, x, y = egcd(a, m)
    if g != 1:
        raise Exception('modular inverse does not exist')
    else:
        return x % m

def phi(p, q):
    return (p-1)*(q-1);
    
p = 1000003
q = 1000033
    
n = p * q
k = 23

j = modinv(k, phi(p,q))

print("testing encryption")

userInput = 25 # int(input())

print(userInput)
print(encrypt(userInput, n, k))
print(decrypt(encrypt(userInput, n, k), p, q, j))



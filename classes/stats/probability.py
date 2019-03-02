
# probability library
# contains:
## probability variable object
## probability distributions

# to load use this
# execfile('probability.py')



from fractions import Fraction as frac

def factorial (x) :
    x = frac(x)
    if x > 0 :
        return x * factorial(x-1)
    elif x == 0 :
        return 1
    elif x < 0 :
        return "false"

def choose (n, k) :
    n = frac(n)
    k = frac(k)
    if n < 1 or k < 1 or n < k :
        return "false"
    return factorial(n)/(factorial(k)*factorial(n-k))

def binomial (n, k, p) :
    n = frac(n)
    k = frac(k)
    p = frac(p)
    if p < 0 or p > 1 :
        return "false"
    return choose(n,k)*p**k*(1-p)**(n-k)

def hyperGeometric (N, n, K, k) :
    ""  ""

    N = frac(N)
    n = frac(n)
    K = frac(K)
    k = frac(k)
    return choose(K,k)*choose(N-K,n-k)/choose(N,n)

def binomialSum (n, k, p) :
    temp = 0
    for i in range(k,n) :
        temp += binomial(n,i,p)
    return temp

    
def binomialSumb (start, end, n, k, p) :
    temp = 0
    for i in range(start,end) :
        temp += binomial(n,i,p)
    return temp

# bernouli distribution
#
# binomial distribution
#   p(y) = nCy p^y*q^{n-y}, y = 0,1,2,...,n and 0 <= p <= 1
#   n = trials, p = success, q = 1-p
#   mu = E(Y) = np, sigma^2 = V(Y) = npq
#
# geometric distribution
#   p(y) = q^{y-1}*p, y = 1,2,3,..., and 0 <= p <= 1
#   
#   mu = E(Y) = 1/p, sigma^2 = V(Y) = (1-p)/p^2
#
# negative binomial distribution
#   p(y) = (y-1)C(r-1)p^r*q^{y-r}, y = r,r+1,r+2,..., and 0 <= p <= 1
#
#   mu = E(Y) = r/p, sigma^2 - V(Y) = r(1-p)/p^2
# 
# hypergeometric 
#   p(y) = rCy*(N-r)C(n-y)/NCn, y = 0,1,2,...,n and y <= r and n-y <= N-r
#   
#
#   mu = E(Y) = nr/N, sigma^2 = V(Y) = n(r/N)((N-r)/N)((N-n)/(N-1))
#

#!/usr/bin/env python3

'''
made by: Jordan Winkler

'''

import math as m
import matplotlib as mpl
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import sys

# function, start, stop, iterations
def compositeTrap (f,a,b,n) :
    h = (b-a)/float(n)

    # get sum part
    summ = 0
    i = 1
    while (i <= n-1):
        xi = a + i*h
        summ += f(xi)
        i += 1

    return h/2*(f(a) + 2*summ + f(b))

def compositeSimson (f,a,b,n) :
    'args: function, start, stop, iterations'
    h = (b-a)/float(n)

    # get sum part
    sum1 = 0
    j = 1
    while (j <= n/2-1):
        index = 2*j
        sum1 += f(a + index*h)
        j += 1

    sum2 = 0
    j = 1
    while (j <= n/2):
        index = 2*j-1
        sum2 += f(a+index*h)
        j += 1

    return h/3*(f(a) + 2*sum1 + 4*sum2 + f(b))

def midSum (function, start, end, intervals):
    'a riemann sum'
    deltaX = (end - start)/float(intervals) 
    rightPush = deltaX/2
    Sum = 0
    i = 0
    while i < intervals:
        Sum += function(start+rightPush)*deltaX
        start += deltaX
        i += 1
    return Sum

def Gamma(alpha) :
    if alpha > 1 :
        return (alpha-1)*Gamma(alpha-1)
    g = lambda t : t**(alpha-1)*m.exp(-t)
    
    # precision
    a = 4
    b = 5
    
    return midSum(g,0,10**a,10**b) 


def factorial (n) :
    if n < 0 :
        return "error"
    if n == 0 :
        return 1
    return n * factorial(n-1)


def choose (n,k) :
    if (n < 0 or k < 0 or k > n) :
       return 0
    return factorial(n)/(factorial(k)*factorial(n-k))

def pick (n,k) :
    if (n < 0 or k < 0 or k > n) :
       return 0
    return factorial(n)/(factorial(n-k))

def max (a,b) :
    if a > b :
        return a
    else :
        return b


def min (a,b) :
    if a > b :
        return a
    else :
        return b

# including print
def gcd (a,b) :
    while (b != 0) :
        t = b
        print(str(a) + ' ' + str(b) + ' ' + str(a % b))
        b = a % b
        a = t
    return a

def Sum (f,i,n) :
    '''a functional style sum
       sum [function] [start] [stop] 
       function must have arity == 1
    '''
    ret = 0
    while i <= n :
        ret += f(i)
        i += 1

    return ret

def strSum (i, start, end, f) :
    ''' strSum [start] [end] [function] 
        made to mimic \sum^end_i=start f
        i is string, start is int, end is int, f is string
    '''
    ret = f.replace(i,str(start))
    start += 1
    while start <= end :
        ret = ret + ' + ' + f.replace(i,str(start))
        start += 1
    return ret

def strSumV (i, start, end, f) :
    ''' strSum [start] [end] [function] 
        made to mimic \sum^end_i=start f
        i is string, start is int, end is int, f is string
        this version is made to add vectors instead of scalars
    '''
    ret = f.replace(i,str(start))
    start += 1
    while start <= end :
        ret = 'addvect('+ret+','+f.replace(i,str(start))+')'
        start += 1
    return ret

"""
from functools import partial
def lambdaSum (f, start, end) :
    ''' adds functions, of arity 2
        work in progress
    '''
    # self addition f = f + g, is defined as recursion
    # so a little more cleverness is needed
    
    # first get a list of funnctions
    i = start
    fn = []
    while i <= end :
        fn.append(partial(f,i))
        i += 1

    # then akwardly glue them together
    def ftotal (fn, x) :
        i = 0
        ret = 0
        while i < len(fn) :
            ret += fn[i](x)
            i += 1
        return ret
    
    return partial(ftotal,fn)
"""    
"""    
def lambdaSumv (f, start, end) :
    ''' adds functions, of arity 2
        work in progress
        right now works for functions on vector spaces
    '''
    # self addition f = f + g, is defined as recursion
    # so a little more cleverness is needed
    
    # first get a list of functions
    i = start
    fn = []
    while i <= end :
        fn.append(partial(f,i))
        i += 1

    # then akwardly glue them together
    def ftotal (fn, x) :
        i = 0
        ret = [0] * len(fn[i](x)) # vector case

        #print (ret) # debug
        #print (fn[i](x)) # debug

        while i < len(fn) :
            ret = addvect(ret, fn[i](x))
            i += 1
        return ret
    
    return partial(ftotal,fn)
"""

### vector space operations ###


# dot product of two tuples
def dot (a,b) :
    ''' dot product, also known ass inner product '''
    #print("dot") # debug
    if len(a) != len(b) :
        return "error"
    i = 0
    ret = 0
    while i < len(a) :
        ret += a[i] * b[i]
        i += 1
    return ret
      

def scalarmult (a, x) :
    ' scalar_multiple [scalar] [vector] '
    y = x
    i = 0
    while i < len(x) :
        y[i] = x[i] * a
        i += 1
    return y

def addvect (a,b) :
    ''' vector addtion '''
    if len(a) != len(b) :
        return "error"

    c = a # python sometimes acts odd
    i = 0
    while i < len(a) :
        c[i] = a[i] + b[i]
        i += 1
    return c

def length (a) :
    ''' length of a tuple in terms of vector length
        instead of number of elements 
        also known as L^2 metric or euclidean metric
    '''
    return dot(a,a)**0.5

def taxi (a) :
    ''' taxi cab metric, 
        Found a need for this when considering probability vectors.
        Who knew?
    '''
    ab = a
    i = 0
    while i < len(a) :
        ab[i] = abs(a[i])
        ret += ab[i]
    return ret

def exptv (a, n) :
    ''' multiply a vector times itself n times '''
    ret = a
    i = 1
    while i <= n :
        ret = dot(ret,a)
        i += 1
    return ret

def isneg (x) :
    ''' are any elements negative '''
    i = 0
    while i < len(x) :
        if x[i] < 0 :
            return 1
        
    return 0

def cross (u,v) :
    dim = len(u)
    s = []
    for i in range(dim):
        if i == 0:
            j,k = 1,2
            s.append(u[j]*v[k] - u[k]*v[j])
        elif i == 1:
            j,k = 2,0
            s.append(u[j]*v[k] - u[k]*v[j])
        else:
            j,k = 0,1
            s.append(u[j]*v[k] - u[k]*v[j])
    return s

        

### end-vector space operations ###

### string tricks ###


def strGenSimple (start, end) :
    ''' generates combinations of strings 
        This version only produces ascii strings of length 1
    '''
    a = ord(start)
    b = ord(end)

    string = ''
    while a <= b :
        string += chr(a)
        a += 1

    return string


def strToAscii (string) :
    ' returns list of ascii numbers of string in a list '
    a = []
    i = len(string)-1 
    while i >= 0 :
        a.append(ord(string[i]))
        i -= 1
    return a

def asciiToStr (numberList) :
    ' takes a list of ascii numbers and makes them into a string '
    string = ''
    i = len(numberList)-1
    while i >= 0 :
        string += chr(numberList[i])
        i -= 1
    return string

def iterate(num, bottom, top) :
    ''' iterate [num : int list] 
                [a : int list] 
                [b : int list]

        Takes num and increase it by 1.
        For a given index i, a[i] is the lower bound, 
        b[i] is the upper bound
    '''
    i = 0
    num[i] = num[i] + 1 # do the basic operation
    
    # create actual upper bound for num
    # python integers have no upper bound, this would be unsafe in C

    #maxx = bottom  #makes locations equal, and breaks scope... bad python!
    maxx = []
    while i < len(top) :
        maxx.append(top[i] + 1)
        i += 1
    i = 0

    # check for overflow
    while num[i] % maxx[i] == 0 and i < len(top) :
        num[i] = bottom[i]
        i += 1
        if i == len(top) :
            return bottom # or change this to returning an error
        else :
            num[i] += 1
    return num
        

def strGen (start, end) :
    ''' generates combinations of strings 
        start and end are strings

        For simplicity: (and flexibility)
         all string combinations are the same length
         and tuples are modded by index, instead of being 
         a set polynomial base
    '''
    if len(start) != len(end) :
        return '' # error is null string
    
    # print backwards for a and b
    a = strToAscii(start)
    #print (a) # debug
    b = strToAscii(end)
    #print (b) #debug
    c = strToAscii(start)

    string = ''
    ok = 0
    while asciiToStr(c) != asciiToStr(b) and ok < 20 :
        #print (c) # debug
        #print (b) # debug
        string += asciiToStr(c)
        c = iterate(c,a,b)
        #print (c) # debug
        #print(string) #debug
        ok += 1

    string += asciiToStr(b) # last bit

    return string 


### end-string tricks ###

### 3d graphing stuff ###


def Plot3d(x,y,z) :
    # wrapper stuff
    mpl.rcParams['legend.fontsize'] = 10
    fig = plt.figure()
    ax = fig.gca(projection='3d') # type of plot
    ax.plot(x, y, z, label='test')
    #ax.legend()
    plt.show()

def Plot3dFun(f) :
    ''' plot a function that takes one variable input and outputs
        a 3d vector
    '''
    # 0 to 1, 100 steps
    x = np.linspace(0.0,1.0,100) #iterator for graph

    # wrapper stuff
    mpl.rcParams['legend.fontsize'] = 10
    fig = plt.figure()
    ax = fig.gca(projection='3d') # type of plot
    ax.plot(f(x)[0], f(x)[1], f(x)[2], label='test')
    ax.legend()
    plt.show()

def primes (n) :
    p = []
    i = 2
    while (i <= n) :
        if (n % i == 0) :
            p.append(i)
            n /= i
            i = 2
        else :
            i += 1

    return p


def subspace2(p, i, j) :
    ''' returns the average of two vectors from a ordered pair of
        a list of vectors.
    
    subspace [p] [i] [j]
    p = [[vector_i], [vector_j]]

    '''
    return scalarmult(.5, addvect(p[0][i], p[1][j]))

def subspace3(p, i, j) :
    ''' experimental, see code
        subspace [p] [i] [j]
        p = [[vector_i], [vector_j]]
    '''
    if (i+j) >= max(len(p[0]), len(p[1])) :
        if i > j :
            return subspace3(p,i-1,j)
        if j > i :
            return subspace3(p,i,j-1)
        else :
            return subspace3(p,i-1,j-1)
    else :
        return addvect(p[0][i], p[1][j])

'''
from numpy import *
import math
import matplotlib.pyplot as plt

t = linspace(0, 2*math.pi, 400)
a = sin(t)
b = cos(t)
c = a + b

plt.plot(t, a, 'r') # plotting t, a separately 
plt.plot(t, b, 'b') # plotting t, b separately 
plt.plot(t, c, 'g') # plotting t, c separately 
plt.show()
'''
    
    
## example
# iterators
#theta = np.linspace(-4 * np.pi, 4 * np.pi, 100)
#xi = np.linspace(-1,1,100)

# eqation output in 3d
#z = theta 
#x = 3 * np.sin(theta)
#y = 3 + 3 * np.cos(theta)

#Plot3d(x,y,z)
##


## unfinished experiements

"""
def bezierSpace (p, n) :
    ''' bezierSpace [points] [desired number of dimensions]
        bezier n-dimensional shape
        each dimension is d(start,end) == 1

        bez(u[0],...,u[n]) 
           = sum^m[0]_i[0]=0 ... sum^m[n]_i[n]=0
             B^m[0]_i[0](u[0]) 
             ...
             B^m[n]_i[n](u[n]) 
             k_{i[0]...i[n]}

        number of dimensions <= factors of number of points
        for example prime number points gives only a bezier curve
        
    '''
    # Bernstein polynomial basis
    # 3 variables, so 3 namespace domains
    # For safty (laziness) namespaces will be alphabetical characters.
    # Let n = z, iteration a-k, variables l-x.
    basis = 'choose(n,a)*(1-x)**(n-a)*x**a'

    factors = 0
    i = len(p)
"""

'''
def berntuple (n, x, f) :
    'vector space version of Bernstein polynomial'

    # check for domain limitations
    if isneg(x) or 1 < taxi(x) : 
        return 'error'

    # reduce arity to 1 
    fun = lambda k : scalarmult(f(float(k)/n)*choose(n,k), cross(exptv(x,k),exptv((1-x),(n-k))))

    # issue: x is a vector, for probability use, 1-x is not unique
    # so this does not have an unique output
'''
'''
    # general form
    def bezFormula (p,n,i,t) :
        ' broken? binding comes off randomly'
        if t < 0 or 1 < t :
            return 'error'
        print (choose(n, i)*(1-t)**(n-i)*t**i)
        return scalarmult(choose(n, i)*(1-t)**(n-i)*t**i, p[i-1])

    #Bni = lambda n,i,t : scalarmult(choose(n, i)*(1-t)**(n-i)*t**i, p[i-1])
        
    # remove what can be deduced
    Bni = partial(bezFormula,p)
    Bi = partial(Bni,n)
    B = lambdaSumv(Bi,1,n)
'''

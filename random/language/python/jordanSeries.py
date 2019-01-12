# This is a function approximation that I made for fun. 
# it includes the functions derivative in computation.
# So it is not very practical, like taylor polynomials.


from math import * # same as using include and namespace
from sympy import *
from mpmath import fac #factorial

x = Symbol('x')

k = nDerivatives = eval(raw_input("number of derivatives: "))
function = raw_input("function ")

derivative = []
derivative.append(function)
index = 0
while index <= nDerivatives :
    derivative.append(str(diff(derivative[index],x)))
    index += 1
del derivative[0]

print("derivative" + str(derivative))

derivativef = []
index = 0
while index < nDerivatives :
    derivativef.append(lambda x: eval(derivative[index])) # <3
    index += 1


factorials = []
index = 1
while index <= nDerivatives :
    factorials.append(fac(index))
    index += 1

print("factorials" + str(factorials))

polynomial = []
index = 1
while index <= nDerivatives :
    polynomial.append((x)**index)
    index += 1

print ("polynomial" + str(polynomial))

jordanPolynomial = []
index = 0
while index < nDerivatives :
    jordanPolynomial.append(derivativef[index](x)/factorials[index] * polynomial[index])
    index += 1

print (jordanPolynomial)

jordanPolynomialf = 0
index = 0
while index < nDerivatives :
    if index % 2 == 0 :
        jordanPolynomialf += jordanPolynomial[index]
    else :
        jordanPolynomialf -= jordanPolynomial[index]
    index += 1

print (jordanPolynomialf)

jordanPolynomialfunction = lambda x : eval(str(jordanPolynomialf))

test = eval(raw_input("test value: "))

functionf = lambda x : eval(function)

print("T(x) " + str(jordanPolynomialfunction(test)))
print("f(x) " + str(functionf(test)))



    


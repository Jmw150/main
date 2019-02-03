# grabs basic information from a given function
# Note: not always accurate for concavity trending to infinity, 
# plots only a few of each for functions like sin(x) which has 
# infinite critical and inflection points. Beware.

from math import * # same as using include and namespace
from sympy import *
from sympy.solvers import solve #sympy.solvers.solve
from sys import stdout

x = Symbol('x') 

#strings
function = raw_input("f(x)    = ")
derivative1 = str(diff(function,x))
derivative2 = str(diff(function,x,x))
derivative3 = str(diff(function,x,x,x))

print ("f(x)'   = " + derivative1)
print ("f(x)''  = " + derivative2)
print ("f(x)''' = " + derivative3)

#functions
functionf = lambda x : eval(function)
derivative1f = lambda x : eval(derivative1)
derivative2f = lambda x : eval(derivative2)
derivative3f = lambda x : eval(derivative3)

fzero = solve(function, x) #all are lists
fpzero = solve(derivative1, x)
fppzero = solve(derivative2, x)
fpppzero = solve(derivative3, x)

print ("f(0)    = " + str(fzero))
print ("f(0)'   = " + str(fpzero))
print ("f(0)''  = " + str(fppzero))

criticalPoints = []
criticalInfo = []
inflectionPoints = []
inflectionInfo= []

index = 0 
while index < len(fpzero) :
    x = fpzero[index] 
    if x.is_real : # meaning is_only_real, stupid sympy...
        if derivative2f(x) < 0:
            criticalInfo.append(("max", fpzero[index], functionf(x)))
            criticalPoints.append(fpzero[index])
        elif derivative2f(x) > 0:
            criticalInfo.append(("min", fpzero[index], functionf(x)))
            criticalPoints.append(fpzero[index])
        elif derivative2f(x) == 0:
            criticalInfo.append(("saddle?", fpzero[index], functionf(x)))
            criticalPoints.append(fpzero[index])
    index += 1

print ("criticalPoints: " + str(criticalInfo))

index = 0 
while index < len(fppzero) :
    x = fppzero[index] #can feed in complex numbers
    if x.is_real : #meaning is_only_real
        inflectionPoints.append(fppzero[index])
        inflectionInfo.append((fppzero[index],functionf(x)))
    index += 1


print ("inflectionPoints: " + str(inflectionInfo))

ip = inflectionPoints
concavityIntervals = []

index = 0
if len(inflectionPoints) == 0 and len(criticalPoints) != 0: #odd case
    if derivative3f(criticalPoints[index]) > 0 : 
        concavityIntervals.append(("down","-oo","oo"))
    if derivative3f(criticalPoints[index]) < 0 :
        concavityIntervals.append(("up","-oo","oo"))
else :
    while index < len(inflectionPoints):
        if derivative3f(ip[index]) > 0 :
            if index-1 < 0:
                concavityIntervals.append(("down","-oo",ip[index]))
            else :
                concavityIntervals.append(("down",ip[index-1],ip[index]))
            if index+1 == len(ip):
                concavityIntervals.append(("up",ip[index],"oo"))
            else :
                concavityIntervals.append(("up",ip[index],ip[index+1]))
        elif derivative3f(ip[index]) < 0 :
            if index-1 < 0:
                concavityIntervals.append(("up","-oo",ip[index]))
            else :
                concavityIntervals.append(("up",ip[index-1],ip[index]))
            if index+1 == len(ip):
                concavityIntervals.append(("down",ip[index],"oo"))
            else :
                concavityIntervals.append(("down",ip[index],ip[index+1]))
        index += 1

print ("concavity intervals: " + str(concavityIntervals))

from sympy import *

x = Symbol('x')

function = raw_input("f(x) = ")
(num, den) = fraction(function)

numSolution = solve(num)
denSolution = solve(den) 

#must compare solutions, if they match they are holes
denIndex = 0
numIndex = 0
while denIndex < len(denSolution):
    while numIndex < len(numSolution):
        if denSolution[denindex] == numSolution[numIndex]:
            del denSolution[denindex]
        numIndex += 1
    numIndex = 0
    denIndex += 1

verticalAss = denSolution

if len(verticalAss) == 0:
    print ("no vertical assymptote")
else :
    print ("vertical assymptotes: " + str(verticalAss))

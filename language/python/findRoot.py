#!/usr/bin/env python

from sympy.solvers import solve
from sympy import Symbol
import sys

x = Symbol('x')

if len(sys.argv) != 2 :
    print "findRoot [function]"
    exit()

function = eval(sys.argv[1])

print (solve(function, x))

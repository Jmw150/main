from math import *

def maxf (function, start, end, precision): 
    maxNum = function(start)
    while start <= end:
        if function(start) > maxNum:
            maxNum = function(start)
        start += precision
    return maxNum

def minf (function, start, end, precision):
    minNum = function(start)
    while start <= end :
	if function(start) < minNum:
            minNum = function(start)
        start += precision
    return minNum

def maxOnX (function, start, end, precision):
    maxNum = start
    while start <= end:
        if function(start) > maxNum:
            maxNum = start
        start += precision
    return maxNum

def minOnX (function, start, end, precision):
    minNum = start
    while start <= end :
        if function(start) < minNum:
            minNum = start
        start += precision
    return minNum

def main ():
    minMax = raw_input("min/max/both ")
    start = eval(raw_input("start "))
    end = eval(raw_input("end "))
    pre = 0.0001 #precision
    functionarg = raw_input("function ")
    function = lambda x: eval(functionarg)

    if minMax == 'min':
        minX = minOnX(function, start,end,pre)
        minonf = minf(function, start,end,pre)
        print("min: " + str(minX) + ',' + str(minonf))
        if minX - pre * 3 < start or minX + pre * 3 > end :
            print("min likely outside bounds, try higher precision")

    elif minMax == 'max':
        maxX = maxOnX(function, start,end,pre)
        maxonf = maxf(function, start,end,pre)
        print("max: " + str(maxX) + ',' + str(maxonf))
        if maxX - pre * 3 < start or maxX + pre * 3 > end :
            print("max likely outside bounds, try higher precision")

    elif minMax == 'both':
        maxX = maxOnX(function, start,end,pre)
        maxonf = maxf(function, start,end,pre)
        print("max: " + str(maxX) + ',' + str(maxonf))
        if maxX - pre * 3 < start or maxX + pre * 3 > end :
            print("max likely outside bounds, try higher precision")

        minX = minOnX(function, start,end,pre)
        minonf = minf(function, start,end,pre)
        print("min: " + str(minX) + ',' + str(minonf))
        if minX - pre * 3 < start or minX + pre * 3 > end :
            print("min likely outside bounds, try higher precision")

main()

#import numpy as np
#from scipy.optimize import fmin
#import math
#
#def f(x):
#    exp = (math.pow(x[0],2) + math.pow(x[1], 2)) * -1
#    return math.exp(exp) * math.cos(x[0] * x[1]) * math.sin(x[0] * x[1])
#
#fmin(f, np.array([0,0]))
#

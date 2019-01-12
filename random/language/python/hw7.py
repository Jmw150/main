\documentclass{article} 
\usepackage{amsfonts} % for blackboard bold charactes like Z R
\usepackage{amsmath} % for arguments vertically underneath like lim
\usepackage{amssymb} % came with intermediate value thrm
\usepackage{listings} % more literal, makes hw easier
\setlength{\parindent}{0in} %neutralizes annoying paragraph indent

\newcommand{\f}{\frac}
\newcommand{\ra}{\rightarrow}

\begin{document}

\begin{verbatim}

#!/usr/bin/env python

# problem 3
#
#0.4402938672    0.0293975028089     0.0136364456982
#0.420035016671  0.0272728913964     0.0134045000191
#0.410004271354  0.0268090000381     0.0133505590281
#0.4000390625    0.0266666687017     0.0133333335877

from numpy import *

h = 0.1

f = lambda x : exp(2*x) - cos(2*x)
def f (x) :
    return exp(2*x) - cos(2*x)

def twoPforward (x, h) :
    return (f(x+h)-f(x))/h

def twoPforwardbound (x, h) :
    return [x, x+h]

def threePForward (x, h) :
    return (-3*f(x) + 4*f(x+h) - f(x+2*h))/(2*h)

def threePForwardbound (x, h) :
    return [x, x+h, x+2*h]

def threePMid (x, h) :
    return (f(x+h) - f(x-h))/(2*h)

def threePMidbound (x, h) :
    return [x-h,x+h]

def twoPforwardErr (bound) :
    err = []
    for x in range(0,len(bound)) :
        err.append(0)
    for x in range(0,len(bound)) :
        err[x] = abs(-(h/2)*(4*exp(2*bound[x]) + 4*cos(2*bound[x])))
    return err

def threePForwardErr (bound) :
    err = []
    for x in range(0,len(bound)) :
        err.append(0)
    for x in range(0,len(bound)) :
        err[x] = abs((h**2)/3*(8*exp(2*bound[x]) - 8*sin(2*bound[x])))
    return err

def threePMidErr (bound) :
    err = []
    for x in range(0,len(bound)) :
        err.append(0)
    for x in range(0,len(bound)) :
        err[x] = abs(-(h**2)/6*(8*exp(2*bound[x]) - 8*sin(2*bound[x])))
    return err

def compute () :
    h = 0.1
    print(max(twoPforwardErr(twoPforwardbound(0,h))))
    print(max(threePForwardErr(threePForwardbound(0,h))))
    print(max(threePMidErr(threePMidbound(0,h))))

    h = h/2
    print(max(twoPforwardErr(twoPforwardbound(0,h))))
    print(max(threePForwardErr(threePForwardbound(0,h))))
    print(max(threePMidErr(threePMidbound(0,h))))

    h = h/2
    print(max(twoPforwardErr(twoPforwardbound(0,h))))
    print(max(threePForwardErr(threePForwardbound(0,h))))
    print(max(threePMidErr(threePMidbound(0,h))))

    h = h/(2**8)
    print(max(twoPforwardErr(twoPforwardbound(0,h))))
    print(max(threePForwardErr(threePForwardbound(0,h))))
    print(max(threePMidErr(threePMidbound(0,h))))

compute()

\end{verbatim}
\end{document}

#!/usr/bin/env python3

''' 
   projects:
   * Berstien polynomial 
   * Bezier curve generator 
     Bezier curve 3d graph
   * Bezier surface generator
     Bezier surface 3d graph
   ?rational Bezier curves
   ?de Casteljau Algorithm for making curves
   ?curve fitting using Casteljau Algorithm, measuring convergence rate of this
   ?degree elevation of a bezier curve
   ?prove convex hull property of bezier curves
   ?prove bezier curves form a vector space
   ?use hausdorff distance to prove bezier curves form a metric space
   ?is the bezier curve space complete (all cauchy == limit convergence)
   ?make function to take derivative of bezier curves (hodograph)
   ?prove if the hodograph passes through the origin, there is a cusp corresponding to that point on the original curve!
   ?recursive bezier curves
   ?experiment with other blending functions besides berstien poly
   ?prove that a perspective drawing of a 3D Bézier curve (polynomial or rational) is a rational Bézier curve.
   ?convergence of rational bezier curve to convex hull as w_i -> inf
   ?de casteljau algorithm and degree elevation of rational bezier curves involve an n+1 dimensional projection to a polynomial bezier curve, then c algorithm or degree elevation is used, then the polynomial is projected back to n dimensional bezier curve.
   ?calculate osculating circle of bezier curve
   ?3d graph of osculating circle on bezier curve
   ?checker to see if data points are colinear:
      calculation, partial double derivative == 0.
      gives useful properties to data
   ?advanced graphics
   ?convex hull properties
'''

# my personal library of common use functions
from mainlib import *

"""
doc standard:
  for functions
    1. what does this function return, or what does it do
    2. valid input for function, type does not need to be specified if
       it is already implied by the input description
"""
 

def bern (n, x, f) :
    ''' 
    returns a Bernstein polynomial
    bern [degree] [input between 0 and 1] [function]
    '''
    # check for domain limitations
    if x < 0 or 1 < x : 
        return 'error'

    # reduce arity to 1 
    fun = lambda k : f(float(k)/n)*choose(n,k)*x**k*(1-x)**(n-k)

    return Sum(fun,1,n)

def bezierCurve (p) :
    ''' returns a bezier curve
        bezierPoly [list of points in n dimensions]
    '''
    n = len(p)-1

    formula = 'scalarmult(choose(n, i)*(1-t)**(n-i)*t**i, p[i])'
    # bind variables
    formula = formula.replace('n',str(n))
    formula = formula.replace('p',str(p))
    #print(formula) # debug
    formula = strSumV('i',0,n,formula)

    #print(formula) #debug

    B = lambda t : eval(formula)
    return B

def subspace(p, i, j) :
    ''' returns the addition of two vectors from a ordered pair of
        a list of vectors.
    
        subspace [p] [i] [j]
        p = [[vector_i], [vector_j]]
    '''
    return addvect(p[0][i], p[1][j])

def bezierSurface (z) :
    ''' bezierSurface [points] 
        bezier n-dimensional surface

        There are a lot of ways set up control points for a surface
        like this. I decided to go with the combination of two
        bezier curves, instead of tessellating triangles or squares of
        control points. (or an n-cube based on composite number
        control points)

        I did this for a few reasons:

        - It better reflects paths on graphs that I would want to
          embed in a vector space.

        - It is easier to generalize for an n-dimensional surface

        - It should be able to mimick the other methods with this 
          anyway by sharing points
    '''

    n = len(z[0]) - 1
    m = len(z[1]) - 1

    # Bernstein polynomial basis
    basisu = 'choose(n,i)*(1-u)**(n-i)*u**i'
    basisv = 'choose(m,j)*(1-v)**(m-j)*v**j'

    basisu = basisu.replace('n',str(n))
    basisv = basisv.replace('m',str(m))

    basis  = 'scalarmult('+basisu+'*'+basisv+',subspace(z,i,j))'
    
    formula = strSumV('i',0,n,basis) 
    formula = strSumV('j',0,m,formula)
    formula = formula.replace('z',str(z))

    # print(formula) # debug
    B = lambda u,v : eval(formula)

    return B

def bezier (p, x) :
    ''' direct computation of bezier curve 
        bezier [list of points] [value] 
    '''
    B = bezierCurve(p)
    return B(x)

def plotCurve(p) :
    ''' plots a bezier curve '''
    B = bezierCurve(p)

    t = list(map(list, zip(*p))) #transpose matrix
    #print(t) # debug 
    #print(p) # debug

    # 0 to 1, 100 steps
    x = np.linspace(0.0,1.0,100) #iterator for graph

    # wrapper stuff
    fig = plt.figure()
    ax = fig.gca(projection='3d') # type of plot
    ax.plot(B(x)[0], B(x)[1], B(x)[2])
    ax.plot(t[0],t[1],t[2])
    plt.show()

# needed for 3d plot
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter

def plotSurface(ok) :
    ''' plots a bezier surface '''
    p = ok[:] # because python chooses to have weird defaults

    B = bezierSurface(p)

    p[0] = list(map(list, zip(*p[0]))) #transpose
    p[1] = list(map(list, zip(*p[1]))) #transpose
    #print (p) # debug

    # 0 to 1, 20 steps
    #u = np.linspace(0.0,1.0,100) #iterator for graph
    #v = np.linspace(0.0,1.0,100) #iterator for graph
    u = np.arange(0,1,0.05)
    v = np.arange(0,1,0.05)
    u, v = np.meshgrid(u, v)

    # wrapper stuff
    fig = plt.figure()
    ax = fig.gca(projection='3d') # type of plot
    ax.plot_surface(B(u,v)[0], B(u,v)[1], B(u,v)[2],  # curve
                    cmap=cm.coolwarm, linewidth=0, antialiased=True)


    ax.plot(p[0][0],p[0][1],p[0][2]) #control points
    ax.plot(p[1][0],p[1][1],p[1][2]) #control points
    plt.show()


### demonstration ###
'''
# to calculate Bernstein
fun = 'x**2'
f = lambda x : eval(fun)
print("Bernstein of " + str(fun))
print(bern(5,1,f))
'''

# different control points for bezier curve and surfaces
'''
# simple surface
p = [[[0.0,0.0,0.0], [0.0,0.0,1.0], [0.5,0.0,2.0]], 
     [[0.0,0.0,0.0], [0.0,1.0,0.0], [0.5,2.0,0.0]]]
''' 
'''
# corners meet
p = [[[0.0,0.0,0.0], [0.0,0.0,1.0], [0.5,0.0,2.0], [2.0,2.0,2.0]], 
     [[0.0,0.0,0.0], [0.0,1.0,0.0], [0.5,2.0,0.0], [2.0,2.0,2.0]]]
'''
'''
# fan 
p = [[[0.0,0.0,0.0], [0.0,0.0,1.0], [0.0,1.0,0.0]],
     [[0.0,0.0,0.0], [0.0,1.0,0.0], [0.0,0.0,1.0]]]
'''
# hill
p = [[[0.0,0.0,0.0], 
      [1.0,0.0,0.0], 
      [1.0,0.0,1.0],
      [0.0,0.0,1.0]],
     [[0.0,0.0,0.0], 
      [1.0,0.0,0.0], 
      [1.0,1.0,0.0],
      [0.0,1.0,0.0]]]
'''
# loop
p = [[[0.0,0.0,0.0], 
      [1.0,0.0,0.0], 
      [1.0,0.0,1.0],
      [0.0,0.0,1.0],
      [0.0,0.0,0.0]],
     [[0.0,0.0,0.0], 
      [1.0,0.0,0.0], 
      [1.0,1.0,0.0],
      [0.0,1.0,0.0],
      [0.0,0.0,0.0]]]
'''
'''
# 2 leaf lotus
p = [[[0.0,0.0,0.0], 
      [1.0,0.0,0.0], 
      [1.0,1.0,0.0], 
      [1.0,1.0,1.0]], 
     [[0.0,0.0,0.0], 
      [0.0,0.0,1.0], 
      [0.0,1.0,1.0], 
      [1.0,1.0,1.0]]]
'''

plotCurve(p[0])
plotSurface(p)


'''
# calculation of bezier curve and surface
P = [[0.0,0.0,0.0],
     [0.0,0.0,1.0],
     [0.0,1.0,0.0],
     [0.0,1.0,1.0]]

'''
P = [[5.0,1.0,2.0], 
     [0.0,2.0,0.0], 
     [0.0,0.0,0.0], 
     [2.0,2.0,2.0], 
     [1.3,1.4,1.2], 
     [2.3,3.4,5.2]] 
'''

print("points: " + str(P))

f = bezierCurve(P)

#Plot3dFun(f)

#plotCurve(P)

print("\nbezier curve [0,1/4,2/4,3/4,1]")
print(f(0))
print(f(.25))
print(f(.5))
print(f(.75))
print(f(1))

'''
'''
f = bezierSurface(p)

print("\nbezier surface ")
print(f(0,0))
print(f(0,1))
print(f(1,0))
print(f(1,1))
'''

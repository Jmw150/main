

from numpy import *
execfile('../probability_class/probability.py')

recterr = lambda x : fpp(x)*(b-a)**2/2
traperr = lambda x : -fpp(x)*(b-a)**3/12
simperr = lambda x : -1/90.0*((b-a)/2)**5*f4p(x)
f = lambda x : x*sin(x)
fp = lambda x : x*cos(x) + sin(x)
fpp = lambda x : -x*sin(x) + 2*cos(x)
fppp = lambda x : -x*cos(x) - 3*sin(x)
f4p = lambda x : x*sin(x) - 4*cos(x)

b = pi/2
a = 0

print('done')

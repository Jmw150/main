import numpy as np
from scipy.optimize import fmin
import math

def f(x):
    return x[0] ** 2 + 2 # why sin(x[0] * x[1])

fmin(f, np.array([0,0])) # fmin is based on the neder-mead simplex algorithm
                         # it needs a starting guess in the form of an array

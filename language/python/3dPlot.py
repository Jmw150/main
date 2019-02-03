#!/usr/bin/env python

'''
======================
3D surface (color map)
======================

'''

from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
from numpy import * 
import sys


fig = plt.figure()
ax = fig.gca(projection='3d')

# get data
#start = eval(raw_input("start-xyz "))
#end = eval(raw_input("end-xyz "))
start = eval(sys.argv[2])
end = eval(sys.argv[3])

# Make data.
x =  arange(start, end, 0.25)
y =  arange(start, end, 0.25)
x, y =  meshgrid(x, y)
f = sys.argv[1]
z = eval(f)

# Plot the surface.
surf = ax.plot_surface(x, y, z, cmap=cm.coolwarm,
                       linewidth=0, antialiased=False)

# Customize the z axis.
ax.set_zlim(start-0.01, end+0.01)
ax.zaxis.set_major_locator(LinearLocator(10))
ax.zaxis.set_major_formatter(FormatStrFormatter('%.02f'))

# Add a color bar which maps values to colors.
fig.colorbar(surf, shrink=0.5, aspect=5)

plt.title(f)

plt.show()

"""
Demo of a line plot on a polar axis.
"""
from numpy import *
import matplotlib.pyplot as plt

# function argument start, stop, precision
r = np.arange(0, 2, 0.01)
theta = 2 * pi * r

ax = plt.subplot(111, projection='polar')
ax.plot(theta, r)
ax.set_rmax(2)
ax.set_rticks([0.5, 1, 1.5, 2])  # less radial ticks
ax.set_rlabel_position(-22.5)  # get radial labels away from plotted line
ax.grid(True)

ax.set_title("A line plot on a polar axis", va='bottom')
plt.show()
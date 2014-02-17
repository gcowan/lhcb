from sympy import legendre, Zlm, N
from math import acos
import numpy
import matplotlib.pyplot as plt

i_max = 4
j_max = 4
k_max = 4

c = numpy.zeros((i_max+1, k_max+1, j_max+1))

c[0][0][0] = 3.751380 # +- 0.003279
c[0][0][2] = 0.389126 # +- 0.007649
c[0][0][4] = 0.030584 # +- 0.007621
c[0][1][2] = -0.070560 # +- 0.007141
c[0][2][2] = 0.024890 # +- 0.006402
c[1][0][0] = -0.902080 # +- 0.010274
c[1][0][2] = -0.127467 # +- 0.013467
c[1][1][2] = -0.112539 # +- 0.010787
c[2][0][0] = -1.015832 # +- 0.014660
c[2][0][2] = -0.111755 # +- 0.018161
c[3][0][0] = -0.323921 # +- 0.017012
c[3][0][2] = -0.065175 # +- 0.021149 *
c[3][1][2] = 0.071212 # +- 0.017406  *
c[4][0][0] = -0.204681 # +- 0.019563 

print c

def acceptance( cosTheta1, phi, cosTheta2, i_max, j_max, k_max, numEvents, c):
	returnValue = 0.
        for i in range(i_max+1):
		for k in range(3):
			for j in range(0, 5, 2): # must have l >= k
 				if (j < k): continue
 				P_i  = N(legendre(i,    cosTheta2))
				Y_jk = abs(N(Zlm(j, k, acos(cosTheta1), phi)))
				#print returnValue, P_i, Y_jk, c[i][j][k]
 				returnValue += c[i][k][j]*(P_i * Y_jk);
	return returnValue

def integrate( func ):
	random

import random

x = numpy.linspace(-1, 1, 20)
xproj = numpy.zeros((20))
for coord in x:
	index = 0
	val = 0.
	for i in range(100):
		rand_y = random.uniform(-numpy.pi, numpy.pi)
		rand_z = random.uniform(-1, 1)
		val += acceptance( coord, rand_y, rand_z, i_max, j_max, k_max, 0, c )	
		#print rand_y, rand_z, val
	xproj[index] = val
	index += 1
print x
print xproj
plt.plot(x,xproj)
plt.show()


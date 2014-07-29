f = open('acceptance_weights_bins_of_time.txt')

a = [[],[],[],[],[],[],[],[],[],[]]
e = [[],[],[],[],[],[],[],[],[],[]]

i = 0
for line in f.readlines():
	print line
	if "\pm" in line:
		a[i%10].append(float(line.split()[0]))
		e[i%10].append(float(line.split()[2]))
		i += 1


bins = [1,2,3,4,5]

import numpy as np
import matplotlib.pyplot as plt

# First illustrate basic pyplot interface, using defaults where possible.
plt.figure()
plt.errorbar(bins, a[0], xerr=0, yerr=e[0])
plt.show()

print a
print e

for n in a:
	print "{"
	for i in range(5):
		print n[i]/a[0][i], ",", 
	print "};"

for n in e:
	print "{",
	for i in range(5):
		print n[i], ",",
	print "};"



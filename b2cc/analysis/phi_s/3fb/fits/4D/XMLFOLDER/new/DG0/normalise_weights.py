from pylab import *
rcParams['figure.figsize'] = 25, 10
import numpy as np

f = open('/tmp/g3.txt')

a = [[],[],[],[],[],[],[],[],[],[]]
e = [[],[],[],[],[],[],[],[],[],[]]
b = np.zeros((10, 5))
d = np.zeros((10, 5))

i = 0
for line in f.readlines():
	#print line
	if "\pm" in line:
		a[i%10].append(float(line.split()[0]))
		e[i%10].append(float(line.split()[2]))
		i += 1

#For DG=0 sample
correlations = [
[1,	-0.6966,	-0.6694,	-0.0005706,	0.2917,	0.0006797,	-0.08607,	-0.00126,	-0.0009027,	-0.000235]	
]
#For DG!=0 sample
correlations = [
[1,	-0.6795,	-0.696,	0.001435,	0.2703,	-0.002331,	-0.05034,	9.662e-06,	-0.0003762,	-0.001343]	
]
#For DG!=0 sample and exclusively biased triggers
correlations = [
[1,	-0.6756,	-0.6985,	0.001179,	0.2685,	-0.002717,	-0.05771,	0.0007205,	-0.0003729,	-4.277e-05]	
]

#Now divide through by the first weight
for i in range(10):
    for j in range(1):
        f = a[i][j]/a[0][j]
	df = f*np.sqrt( (e[i][j]/a[i][j])**2 + (e[0][j]/a[0][j])**2 - 2*correlations[j][i]*e[i][j]/a[i][j]*e[0][j]/a[0][j])
        b[i][j] = f
        d[i][j] = abs(df)
	print "$ %.5g \\pm %.2g $ \\\\" % (f, abs(df))



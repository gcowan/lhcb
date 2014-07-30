#! /cvmfs/lhcb.cern.ch/lib/lcg/releases/LCG_68_root6/Python/2.7.6/x86_64-slc6-gcc48-opt/bin/python
from sympy import *
from scipy import stats
from sys import argv

name = argv[1]

f = open(name)

gen = {'gamma' :0.6654, 'deltaGamma':0.09165, 'Aperp_sq':0.2490, 'Azero_sq':0.5213, 'delta_para':3.30, 'delta_perp':3.07, 'deltaM':17.8, 'Phi_s':0.07, 'lambda':1.}
#gen = {'gamma' :0.6654, 'deltaGamma':0.00000, 'Aperp_sq':0.2490, 'Azero_sq':0.5213, 'delta_para':3.30, 'delta_perp':3.07, 'deltaM':17.8, 'Phi_s':0.07, 'lambda':1.}
#gen = {'gamma' :0.6653, 'deltaGamma':0.0917, 'Aperp_sq':0.24883, 'Azero_sq':0.52093, 'delta_para':3.30, 'delta_perp':3.07, 'deltaM':17.8, 'Phi_s':0.07, 'lambda':1.}

rows = []
diff = []
sigma = []
names = []
vals = []
errs = []
chi2_naive = 0.

external = False
for line in f.readlines():
	l = line.split()
	if l[1] in gen.keys():
		diff.append(   float(l[2]) - gen[l[1]] )
		names.append( l[1] )
		vals .append( float(l[2]) )
		errs .append( float(l[3]) )
		sigma.append( (float(l[2]) - gen[l[1]]) / float(l[3]) )
		chi2_naive += sigma[-1]**2 
	if external:
		rows.append([float(i) for i in l])		
	if l[0] == 'EXTERNAL': external = True

cov = Matrix(rows)
vec = Matrix(diff)

for i in range(len(names)):
	print "%s \t $%.5g \\pm %.4g$ \t & \t $%+.2g$" % (names[i], vals[i], errs[i], sigma[i])
print vec
print cov

for i in range(len(errs)):
	print
	for j in range(len(errs)):
		v = cov[i,j]/errs[i]/errs[j] 
		print "%+0.2g" % v, 
print

chi2 = (vec.T)*(cov.inv())*vec

chi2_val = chi2[0]
ndf = len(diff)

print "chi2/ndof = %g/%g" % (chi2_val, ndf)
#print "p-value = %g" % (1-stats.chi2.cdf(chi2_val, ndf))
print "naive chi2 =", chi2_naive

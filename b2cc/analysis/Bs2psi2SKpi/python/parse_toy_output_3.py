import numpy as np
import re
from glob import glob
import matplotlib.pyplot as plt
plt.rc('font', family='serif')
import pylab
pylab.rcParams['figure.figsize'] = 15,5 
import sys

def process( dir, prefix_list, failed, N, param, param_initial ):
	vals = []
	errs = []
	pull = []
	postfix = ["_fitFractions_with_bkg_nominal_stdout"]
	for i in prefix_list:
	    names = [dir + '/' + i + p for p in postfix] 
	    for name in names:
		f = open(name)
		number = len(vals)
		isOK = False
		for line in f.readlines():
			if re.search("Review", line): isOK = True
			if not isOK: continue
			if re.match(param, line):
				l = re.findall("\s[+-]?[0-9]*\.?[0-9]+", line)
				v = float(l[0].split()[0])
				e = float(l[1].split()[0])
				p = (param_initial - v)/e
				if abs(p) > 5: continue
				vals.append( v )
				errs.append( e )
				pull.append( p )
	    if len(vals) - number != N:
		print number, name
	return vals, errs, pull

dir = sys.argv[1]

files = glob(dir+"/*stdout")

prefix = []
for f in files:
	for g in f.split("/"):
		for h in g.split("_f"):
			if "d" in h and "stdout" not in h:
				prefix.append(h)
prefix_set = set(prefix)

#mR vs mKpi toy
failed = []
N = 1
#params = ["magApKst892", "magAmKst892", "phaseApKst892", "phaseAmKst892", "magA0K21430", "magApK21430", "magAmK21430", "phaseA0K21430", "phaseApK21430", "phaseAmK21430", "magA0NR", "phaseA0NR"]
#params_initial = [0.35389, 0.86876, 5.3932, 2.9064, 12.663, 7.3218, 10.989, 2.2611, -1.6235, 4.5402, 5.5496, 0.434]
#params = ["magApKst892", "magAmKst892", "phaseApKst892", "phaseAmKst892", "magA0K01430", "phaseA0K01430", "magA0NR", "phaseA0NR"]
#params_initial = [0.31385, 0.9006, 5.42, 2.92, 2.07, -0.16, 3.86, 0.67]
#Fit5
params = ["magApKst892", "magAmKst892", "phaseApKst892", "phaseAmKst892", "mag_LASS", "phase_LASS", "a_LASS", "r_LASS"]
params_initial = [0.32651, 0.89572, 5.4226, 2.9362, 0.63362, -0.26876, 1.6642, 3.3195]
label = [" value", " error", " pull"] 

def plot_binned_data(axes, binedges, data,
               *args, **kwargs):
    #The dataset values are the bin centres
    x = (binedges[1:] + binedges[:-1]) / 2.0
    #The weights are the y-values of the input binned data
    weights = data
    return axes.hist(x, bins=binedges, weights=weights,
               *args, **kwargs)

from scipy.stats import norm
import matplotlib.mlab as mlab

for i in range(len(params)): 
 fractions = process( dir, prefix_set, failed, N, params[i], params_initial[i] )
 fig, ax = plt.subplots(1,3)
 #locator = plt.MaxNLocator(nbins=10) 
 count = 0
 for l in fractions:
	print params[i], count, l 
	hist, bins = np.histogram(l, bins=10)
	width = (bins[1] - bins[0])
	plot_binned_data(ax[count], bins, hist, histtype="step")
	ax[count].set_xlabel(params[i] + label[count])
	ax[count].text(0.05, 0.9, "mean = %0.3f +- %0.3f" % (np.average(l), np.std(l)/np.sqrt(len(l))) , va='center', transform=ax[count].transAxes)
	ax[count].text(0.05, 0.8, "std dev = %0.3f + - %0.3f" % (np.std(l), np.std(l)/np.sqrt(2*(len(l)-1))), va='center', transform=ax[count].transAxes)
	#ax[count].xaxis.set_major_locator(locator)
	count += 1

 fig.savefig("plot_%s.png" % params[i])


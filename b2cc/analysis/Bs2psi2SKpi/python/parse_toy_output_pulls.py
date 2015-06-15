import numpy as np
import re
from glob import glob
import matplotlib.pyplot as plt
plt.rc('font', family='serif')
import pylab
pylab.rcParams['figure.figsize'] = 12,10 
import os
import sys

def process( dir, prefix_list, failed, N ):
	K892 = []
	K01430 = []
	K21430 = []
	NR = []
	LASS = []
	K800 = []
	bkg = []
	sum = []
	fL = []
	vals = [K892, K01430, NR, LASS, K21430, K800, bkg, fL]
	postfix = ["_fitFractions_with_bkg_nominal_stdout", "_fitFractions_without_bkg_nominal_stdout", "_fitFractions_with_bkg_modified_stdout", "_fitFractions_without_bkg_modified_stdout"]
	count = 0
	for i in prefix_list:
	    count += 1
	    sys.stdout.write("\r%d/%d" % (count, len(prefix_list)))
	    sys.stdout.flush()
	    names = [dir + '/' + i + p for p in postfix] 
	    
	    # Check if all files exists, if not, move to next prefix
	    isOK = [ os.path.isfile(fname) for fname in names ]
	    if False in isOK:
		print isOK
		print names
		continue

	    # Now check if a fit failed
	    fitFailed = False
	    for name in names:
	       f = open(name)
	       for line in f.readlines():
		 fit = re.search('(ForceContinue)', line)
		 if fit: 
			fitFailed = True 
	    if fitFailed:
		print "fit failed", names 
		continue

	    numbers = [len(l) for l in vals]
	    for name in names:
		f = open(name)
		for line in f.readlines():
			K892_frac = re.match('892\s*fraction: (0.[0-9]*)', line)
			if K892_frac:
				K892.append(float(K892_frac.group(1)))
			K01430_frac = re.match('1430\s*fraction: (0(.[0-9]*)?)', line)
			if K01430_frac:
				K01430.append(float(K01430_frac.group(1)))
			K21430_frac = re.match('1430_2\s*fraction: (0(.[0-9]*)?)', line)
			if K21430_frac:
				K21430.append(float(K21430_frac.group(1)))
			NR_frac = re.match('NR\s*fraction: ([0-1](.[0-9]*)?)', line)
			if NR_frac:
				NR.append(float(NR_frac.group(1)))
			LASS_frac = re.match('LASS\s*fraction: (0(.[0-9]*)?)', line)
			if LASS_frac:
				LASS.append(float(LASS_frac.group(1)))
			K800_frac = re.match('800\s*fraction: (0(.[0-9]*)?)', line)
			if K800_frac:
				K800.append(float(K800_frac.group(1)))
			bkg_frac = re.match('background\s*fraction: ([-+]?[0-9]*\.?[0-9]*)', line)
			if bkg_frac:
				bkg.append(float(bkg_frac.group(1)))
			sum_frac = re.match('Sum\s*of\s*fractions\s*\(not\s*necessarily\s*1!\): ([0-9].[0-9]*)', line)
			if sum_frac:
				sum.append(float(sum_frac.group(1)))
			fL_value = re.match('K\*\(892\) fL ([0-9].[0-9]*)', line)
			if fL_value:
				fL.append(float(fL_value.group(1)))
	    # check that we got everything
	    for l in range(len(vals)):
	    	diff = len(vals[l]) - numbers[l] 
	     	if (diff != 0) and (diff != N):
		 # remove the elements that have just been added
            	 print l, numbers[l], name, diff, len(vals[l])
		 vals[l] = vals[l][:-diff]
	return K892, K01430, NR, LASS, K21430, K800, bkg, fL, sum

dir = sys.argv[1]

files = glob(dir + "/*stdout")

prefix = []
for f in files:
	for g in f.split("/"):
		for h in g.split("_f"):
			if "d" in h and "stdout" not in h:
				prefix.append(h)
prefix_set = set(prefix)

#mR vs mKpi toy
failed_2 = []
N_2 = 4 
fractions_2 = process( dir, prefix_set, failed_2, N_2 )

fractions = []

# Use this to get the central values of each fraction from the toy.
# Use the resulting distributions to cross-check that this
# extraction procedure actually gives the correct values for the fit fractions
# and the uncertainties that were obtained using normal toy experiment running
'''
label = ["K892 fit fraction", "K01430 fit fraction", "NR fit fraction", "LASS fit fraction", "K21430 fit fraction", "K800 fit fraction",  "bkg fit fraction", "fL", "sum"]
for f in range(len(label)):
	if f != 6:
		fractions.append(fractions_2[f][3::N_2] )
	else:
		fractions.append(fractions_2[f][2::N_2] )
'''
# Now we want to plot, for each toy, the difference between the nominal and modified
# fit result.
#
# Toy1: Background normalisation
'''
label = ["K892 frac diff", "K21430 frac diff", "NR frac diff", "bkg frac diff", "fL diff"]
for f in range(5):
	if f != 3:
		fractions.append(np.subtract(fractions_1[f][1::N_1], fractions_1[f][3::N_1]))
	else:
		fractions.append(np.subtract(fractions_1[f][0::N_1], fractions_1[f][2::N_1]))
'''

# Toy6: eff parameterisation 
'''
label = ["K892 frac (nominal - modified)", "K21430 frac (nominal - modified)", "NR frac (nominal - modified)", "bkg frac (nominal - modified)", "fL (nominal - modified)"]
for f in range(5):
	if f != 3:
		fractions.append(np.subtract(fractions_2[f][1::N_2], fractions_2[f][3::N_2]))
	else:
		fractions.append(np.subtract(fractions_2[f][0::N_2], fractions_2[f][2::N_2]))
'''
# Toy4: S-wave 
'''
label = ["K892 frac (nominal - modified)", "bkg frac (nominal - modified)", "fL (nominal - modified)"]
fr = [fractions_2[0], fractions_2[5], fractions_2[6]] 
fractions_2 = fr
for f in range(3):
	if f != 1:
		fractions.append(np.subtract(fractions_2[f][1::N_2], fractions_2[f][3::N_2]))
	else:
		fractions.append(np.subtract(fractions_2[f][0::N_2], fractions_2[f][2::N_2]))
'''
# Toy2: mR vs mKpi AND...
# Toy3: BW radius
# Toy5: mKpi model
label = ["K892 frac (nominal - modified)", "LASS frac (nominal - modified)", "bkg frac (nominal - modified)", "fL (nominal - modified)"]
fr = [fractions_2[0], fractions_2[3], fractions_2[6], fractions_2[7]] # no K2(1430) comp here
fractions_2 = fr
for f in range(4):
	if f != 2: # this identifies the background index so that we can take the results of the FF from case where background is included
		fractions.append(np.subtract(fractions_2[f][1::N_2], fractions_2[f][3::N_2]))
	else:
		fractions.append(np.subtract(fractions_2[f][0::N_2], fractions_2[f][2::N_2]))

def plot_binned_data(axes, binedges, data,
               *args, **kwargs):
    #The dataset values are the bin centres
    x = (binedges[1:] + binedges[:-1]) / 2.0
    #The weights are the y-values of the input binned data
    weights = data
    return axes.hist(x, bins=binedges, weights=weights,
               *args, **kwargs)

fig, ax = plt.subplots(3,3)
from scipy.stats import norm
import matplotlib.mlab as mlab
import matplotlib.ticker as ticker
locator = plt.MaxNLocator(nbins=20, prune='lower') 
count = 0
for l in fractions:
	print count, l 
	hist, bins = np.histogram(l, bins=10)
	#(mu, sigma) = norm.fit(l)
	#print mu, sigma
	#y = mlab.normpdf( bins, mu, sigma)
	width = (bins[1] - bins[0])
	plot_binned_data(ax[count % 3, count / 3], bins, hist, histtype="step")
	ax[count % 3, count / 3].set_xlabel(label[count])
	ax[count % 3, count / 3].text(0.05, 0.9, "mean = %0.3f +- %0.3f" % (np.average(l), np.std(l)/np.sqrt(len(l))) , va='center', transform=ax[count % 3, count / 3].transAxes)
	ax[count % 3, count / 3].text(0.05, 0.8, "std dev = %0.3f + - %0.3f" % (np.std(l), np.std(l)/np.sqrt(2*(len(l)-1))), va='center', transform=ax[count % 3, count / 3].transAxes)
	ax[count % 3, count / 3].xaxis.set_major_formatter(ticker.FormatStrFormatter('%0.2f'))
	if False: ax[count % 3, count / 3].text(0.05, 0.7, "syst = %0.3f" % np.sqrt(np.average(l)**2 + np.std(l)**2), va='center', transform=ax[count % 3, count / 3].transAxes)
	#ax[count % 3, count / 3].plot(bins, y, 'r--', linewidth=2)
	count += 1

fig.savefig("plot1.png")


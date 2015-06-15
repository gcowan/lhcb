import numpy as np
import re
import matplotlib.pyplot as plt
plt.rc('font', family='serif')
import pylab
pylab.rcParams['figure.figsize'] = 12,10 

def process( file_list, failed, N ):
	K892 = []
	K21430 = []
	NR = []
	bkg = []
	sum = []
	fL = []
	for i in file_list:
		if i in failed: continue # list of failed jobs
		name = '/Home/gcowan1/logs/run_toy.sh.o%d' % i
		f = open(name)
		number = len(K892)
		for line in f.readlines():
			K892_frac = re.match('892\s*fraction: (0.[0-9]*)', line)
			if K892_frac:
				K892.append(float(K892_frac.group(1)))
			K21430_frac = re.match('1430_2\s*fraction: (0.[0-9]*)', line)
			if K21430_frac:
				K21430.append(float(K21430_frac.group(1)))
			NR_frac = re.match('NR\s*fraction: (0.[0-9]*)', line)
			if NR_frac:
				NR.append(float(NR_frac.group(1)))
			bkg_frac = re.match('background\s*fraction: ([-+]?[0-9]*\.?[0-9]*)', line)
			if bkg_frac:
				bkg.append(float(bkg_frac.group(1)))
			sum_frac = re.match('Sum\s*of\s*fractions\s*(not\s*necessarily\s*1!): ([0-9].[0-9]*)', line)
			if sum_frac:
				sum.append(float(sum_frac.group(1)))
			fL_value = re.match('K\*\(892\) fL ([0-9].[0-9]*)', line)
			if fL_value:
				fL.append(float(fL_value.group(1)))
		if len(K892) - number != N:
			print number, name
	return K892, K21430, NR, bkg, fL

# background normalisationg toy
failed_1 = [814]
N_1 = 4
fractions_1 = process( range(808, 899), failed_1, N_1 )
#mR vs mKpi toy
failed_2 = [1052]
N_2 = 3
fractions_2 = process( range(1001, 1102), failed_2, N_2 )

fractions = []

# Use this to get the central values of each fraction from the combination
# of two toys. Use the resulting distributions to cross-check that this
# extraction procedure actually gives the correct values for the fit fractions
# and the uncertainties that were obtained using normal toy experiment running
label = ["K892 fit fraction", "K21430 fit fraction", "NR fit fraction", "bkg fit fraction", "fL"]
'''
for f in range(5):
	if f != 3:
		fractions.append(fractions_2[f][1::N_2] + fractions_1[f][1::N_1] )
	else:
		fractions.append(fractions_2[f][0::N_2] + fractions_1[f][0::N_1] )
'''
# Now we want to plot, for each toy, the difference between the nominal and modified
# fit result.
#
# Toy1: Background normalisation

label = ["K892 frac diff", "K21430 frac diff", "NR frac diff", "bkg frac diff", "fL diff"]
for f in range(5):
	if f != 3:
		fractions.append(np.subtract(fractions_1[f][1::N_1], fractions_1[f][3::N_1]))
	else:
		fractions.append(np.subtract(fractions_1[f][0::N_1], fractions_1[f][2::N_1]))


def plot_binned_data(axes, binedges, data,
               *args, **kwargs):
    #The dataset values are the bin centres
    x = (binedges[1:] + binedges[:-1]) / 2.0
    #The weights are the y-values of the input binned data
    weights = data
    return axes.hist(x, bins=binedges, weights=weights,
               *args, **kwargs)

fig, ax = plt.subplots(3,2)
from scipy.stats import norm
import matplotlib.mlab as mlab

count = 0
for l in fractions:
	print count, l 
	hist, bins = np.histogram(l, bins=10)
	(mu, sigma) = norm.fit(l)
	print mu, sigma
	y = mlab.normpdf( bins, mu, sigma)
	width = (bins[1] - bins[0])
	plot_binned_data(ax[count % 3, count / 3], bins, hist, histtype="step")
	ax[count % 3, count / 3].set_xlabel(label[count])
	ax[count % 3, count / 3].text(0.05, 0.9, "mean = %0.3f +- %0.3f" % (np.average(l), np.std(l)/np.sqrt(len(l))) , va='center', transform=ax[count % 3, count / 3].transAxes)
	ax[count % 3, count / 3].text(0.05, 0.8, "std dev = %0.3f + - %0.3f" % (np.std(l), np.std(l)/np.sqrt(2*(len(l)-1))), va='center', transform=ax[count % 3, count / 3].transAxes)
	if True: ax[count % 3, count / 3].text(0.05, 0.7, "syst = %0.3f" % np.sqrt(np.average(l)**2 + np.std(l)**2), va='center', transform=ax[count % 3, count / 3].transAxes)
	ax[count % 3, count / 3].plot(bins, y, 'r--', linewidth=2)
	count += 1

fig.savefig("plot1.png")


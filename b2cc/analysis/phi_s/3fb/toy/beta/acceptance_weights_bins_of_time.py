from pylab import *
rcParams['figure.figsize'] = 25, 10
import numpy as np

f = open('acceptance_weights_bins_of_time_MC2012_sim08e.txt')

t = ['A0A0', 'AparApar', 'AperpAperp', 'AparAperp', 'A0Apar', 'A0Aperp', 'ASAS', 'ASApar', 'ASAperp', 'ASA0']
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

bins = [0.5,1.5,2.5,3.5,4.5]
boundaries = [0.3, 0.634675, 1.06613, 1.67419, 2.71351, 14.]
centers = np.zeros(5)
xlow    = np.zeros(5)
xhigh   = np.zeros(5)

for i in range(5):
    min_val = boundaries[i]
    max_val = boundaries[i+1]
    centers[i] = -np.log(np.e**(-max_val)+np.e**(-min_val))+np.log(2.)
    xlow[i] = centers[i] - min_val
    xhigh[i] = max_val - centers[i]
print centers

#correlations with the first weight, for each of the 5 bins
correlations = [
[1, -0.6931, -0.6772, -0.001455, 0.2873, -6.111e-05, -0.07162, 0.0002994, -0.0007474, -0.001778],
[1, -0.6915, -0.6842, 0.001506, 0.2808, -0.0008156, -0.07052, -7.609e-05, -0.0009383, -0.000972],
[1, -0.686, -0.6928, 0.002225, 0.2763, -0.0008043, -0.06244, -0.0003305, 0.0006264, -0.001116],
[1, -0.6787, -0.7059, 0.002968, 0.2668, -0.004252, -0.04581, 0.000178, -0.001291, 0.0003019],
[1, -0.6511, -0.7353, 0.002566, 0.2413, -0.005883, 0.004665, -0.0001948, 0.0004069, -0.003265]]

#Now divide through by the first weight
for i in range(10):
    for j in range(len(bins)):
        f = a[i][j]/a[0][j]
        df = f*np.sqrt( (e[i][j]/a[i][j])**2 + (e[0][j]/a[0][j])**2 - 2*correlations[j][i]*e[i][j]/a[i][j]*e[0][j]/a[0][j])
        b[i][j] = f
        d[i][j] = df

import matplotlib.pyplot as plt

# First illustrate basic pyplot interface, using defaults where possible.
f, ax = plt.subplots(2, 5, sharex=True)
f1, ax1 = plt.subplots(2, 5, sharex=True)

def f(x,m,c):
    return (x*m)+c

import scipy.optimize as opt

x_values = np.arange(0.3, 14, 0.1)

def plot( ax, bins, b, d, t, xlim, log ):
 for i in range(10):
    for axis in ['top','bottom','left','right']:
      ax[i / 5, i % 5].spines[axis].set_linewidth(1.5)
      ax[i / 5, i % 5].spines[axis].set_linewidth(1.5)
    ax[i / 5, i % 5].set_title(t[i], fontsize=12)
    ax[i / 5, i % 5].set_xlim(xlim)
    if log:
        ax[i / 5, i % 5].errorbar(bins, b[i], xerr=(xlow, xhigh), yerr=d[i], fmt='o')
        ax[1, i % 5].set_xlabel('true time [ps]', fontsize=12)
        if i > 0:
            popt, pcov = opt.curve_fit(f, bins, b[i], sigma=d[i])
            print popt[0], "+-", np.sqrt(pcov[0][0]), popt[1], "+-", np.sqrt(pcov[1][1])
            ynew = f(x_values, *popt)
            ax[i / 5, i % 5].plot(x_values, ynew, 'r-')
    else:
        ax[i / 5, i % 5].errorbar(bins, b[i], xerr=0, yerr=d[i], fmt='o')
        ax[i / 5, i % 5].set_xlabel('true time bin', fontsize=12)
    if i == 0:
        ax[i / 5, i % 5].set_ylim([0.995, 1.006])
    elif i in (1, 2):
        ax[i / 5, i % 5].set_ylim([1.046, 1.060])
    elif i == 6:
        ax[i / 5, i % 5].set_ylim([1.006, 1.020])
    else:
        ax[i / 5, i % 5].set_ylim([-0.010, 0.004])

import ROOT
c = ROOT.TCanvas()
g = ROOT.TGraphErrors(len(centers), centers, b, np.zeros(5), d)
d.Draw()

plot(ax, bins, b, d, t, [0,5], False)
plt.savefig('weights_in_time_bins1.pdf', dpi=300)
plot(ax1, centers, b, d, t, [0.0, 14.0], True)
plt.savefig('weights_in_time_bins2.pdf', dpi=300)

plt.show()


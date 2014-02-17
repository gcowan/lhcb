from pylab import *
from scipy import *

from scipy import optimize

x = array([0, 0.07, 0.2, 0.3])
y = array([0., 0.006, 0.034, 0.057])
yerr = array([0.03, 0.010, 0.007, 0.010])
#yerr = array([0.000001, 0.010, 0.007, 0.010])

# define our (line) fitting function
#fitfunc = lambda p, x: p[0] + p[1] * x
fitfunc = lambda p, x: p[0] + p[1] * x + p[2] * x * x
errfunc = lambda p, x, y, err: (y - fitfunc(p, x)) / err

#pinit = [1.0, -1.0]
pinit = [1.0, -1.0, 1.0]
out = optimize.leastsq(errfunc, pinit,
                       args=(x, y, yerr), full_output=1)

pfinal = out[0]
covar = out[1]
print pfinal
print covar

print "Bias at fitted value of phi_s = 0.07", fitfunc(pfinal, 0.07)

clf()
plot(x, fitfunc(pfinal, x))     # Fit
errorbar(x, y, yerr=yerr, fmt='k.')  # Data
text(0.15, 0.0, 'shift(phi_s = 0.07) = %5.4f' % fitfunc(pfinal, 0.07))
xlabel('phi_s value [rad]')
ylabel('Absolute shift [rad]')
xlim(-0.05, 0.35)

savefig('fit.png')

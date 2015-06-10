from ROOT import *
import numpy as np

f = open('BES2008dataRZ.dat')

lines = f.readlines()
bins = len(lines)
E = np.zeros(bins, dtype=float)
R = np.zeros(bins, dtype=float)
X = np.zeros(bins, dtype=float)
U = np.zeros(bins, dtype=float)

i = 0
for l in lines:
	e = float(l.split()[0])
	r = float(l.split()[1])
	u = np.sqrt(float(l.split()[2])**2 + float(l.split()[3])**2)
	E[i] = e
	R[i] = r
	U[i] = u
	i += 1

def daughterMomentum(m, m1, m2):
    momentum = (m*m-(m1+m2)*(m1+m2))*(m*m-(m1-m2)*(m1-m2))
    momentum = sqrt(momentum)
    momentum /= 2.*m
    return momentum

def function(z): return np.sqrt(1+z)

def barrierL0(p0, p): return 1.

def barrierL1(p0, p):
    '''Near threshold (p->0) conservation of angular momemtum
    implies amp \propto phase_space*p^{2L}. For p->\inf, need
    to apply a correction to prevent amplitude diverging.
    '''
    R = 1.6 # resonance radius parameter
    z  = p*p*R*R
    z0 = p0*p0*R*R
    factor = function(z0)/function(z)
    return factor

def gamma(m, m1, m2, m0, G0):
    LR  = 1 # just consider one angular momemtum for the moment
    pR0 = daughterMomentum(m0, m1, m2) # momentum of daughter at the pole mass
    pp  = daughterMomentum(m , m1, m2) # momentum of daughter at the actual mass
    bb  = barrierL1(pR0,pp)  # Blatt-Weiskopf Barrier factor
    #print bb
    gg = G0 * m0/m * bb * bb * (pp/pR0)**(2*LR+1)
    return gg

def BreitWigner(m, m1, m2, m0, G0):
    '''
    Currently just use an approximation to the width
    '''
    g = G0#gamma(m, m1, m2, m0, G0)
    result = complex(m0*sqrt(g*g),0.)
    denominator = complex(m*m - m0*m0, m0*g)
    result /= denominator
    return result

def resonance(m, m1, m2, m0, G0):
    res = BreitWigner(m, m1, m2, m0, G0)
    return res

def background(m, c0, c1, c2):
	return c0 + c1*(m-2*1.8) + c2*(m-2*1.8)**2

def amplitude(x, par):
    '''
    What are the masses of the two body final state m1, m2?
    We need these to calculate the momentum, I think.
    '''
    m = x[0]
    m1 = 0.1
    m2 = 0.2

    mass1 = resonance(m, m1, m2, par[0], par[1])
    amp1  = 1.
    mass2 = resonance(m, m1, m2, par[2], par[3])
    amp2  = np.exp(complex(0.,1.)*par[4])
    mass3 = resonance(m, m1, m2, par[5], par[6])
    amp3  = np.exp(complex(0.,1.)*par[7])
    mass4 = resonance(m, m1, m2, par[8], par[9])
    amp4  = np.exp(complex(0.,1.)*par[10])
    return amp1*mass1 + amp2*mass2 + amp3*mass3 + amp4*mass4

def rate(x, par):
	amp = amplitude(x, par)
	return abs(amp)**2 + background(x[0], par[11], par[12], par[13])

fit1 = TF1("fit1", rate, 3.7, 4.8, 14)
params = [3.77, 0.0254,
                4.04, 0.0812, 1.5,
                4.159, 0.0727, 3.,
                4.415, 0.0733, 3.,
		        2.1, 4.1, -2.9]
npp = np.array(params)
fit1.SetParameters(npp)
fit1.SetParLimits(0,3.7, 3.9)
fit1.SetParLimits(1,0.0, 0.03)
fit1.SetParLimits(2,4.0, 4.1)
fit1.SetParLimits(3,0.03,0.19)
fit1.SetParLimits(5,4.1, 4.2)
fit1.SetParLimits(6,0.05, 0.19)
fit1.SetParLimits(8,4.4, 4.5)
fit1.SetParLimits(9,0.05,0.18)

fit1.SetLineColor(kRed)

'''
fit1.FixParameter(0,0)
fit1.FixParameter(1,0)
fit1.FixParameter(2,4.04)
fit1.FixParameter(3,0.812)
fit1.FixParameter(4,0)
fit1.FixParameter(5,4.159)
fit1.FixParameter(6,0.0727)
fit1.FixParameter(7,0)
fit1.FixParameter(8,4.415)
fit1.FixParameter(9,0.0733)
fit1.FixParameter(10,0)
fit1.FixParameter(11,2.1)
fit1.FixParameter(12,4.1)
fit1.FixParameter(13,-2.9)
'''
gStyle.SetOptFit(0)
lhcbFont = 132
gStyle.SetLabelFont(lhcbFont,"x");
gStyle.SetLabelFont(lhcbFont,"y");
gStyle.SetLabelFont(lhcbFont,"z");
gStyle.SetTitleFont(lhcbFont);
gStyle.SetTitleFont(lhcbFont,"x");
gStyle.SetTitleFont(lhcbFont,"y");
gStyle.SetTitleFont(lhcbFont,"z");

graph = TGraphErrors(bins, E, R, X, U)
graph.Fit(fit1, "R")
graph.SetTitle("")
graph.GetXaxis().SetTitle("E/GeV")
graph.GetYaxis().SetTitle("R/GeV^{-1}")
graph.Draw("AP")

print fit1.GetChisquare();


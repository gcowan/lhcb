from Gaudi.Configuration import *
from Configurables import LHCbApp, LHCb__ParticlePropertySvc

app = LHCbApp()
# Sim08a (MC2012)
#app.DDDBtag = 'Sim08-20130503-1'
#app.CondDBtag = 'Sim08-20130503-vc-md100'
# Sim05 (MC11a)
#app.DDDBtag = 'MC11-20111102'
#app.CondDBtag = 'sim-20111111-vc-md100'
# Sim08e (MC2012)
app.DDDBtag = 'dddb-20130929-1'
app.CondDBtag = 'sim-20130522-1-vc-md100'

ApplicationMgr().ExtSvc += [LHCb__ParticlePropertySvc()]

from GaudiPython.Bindings import AppMgr
import PartProp.Service

appMgr = AppMgr()
appMgr.initialize()

ppSvc = appMgr.ppSvc()
B_s0H = ppSvc.find("B_s0H")
B_s0L = ppSvc.find("B_s0L")

GH = 1./B_s0H.lifetime()/1000
GL = 1./B_s0L.lifetime()/1000

G  = (GL + GH)/2.
DG = (GL - GH)
y = DG/(2*G)

#MC2012 values
Azero_sq = 0.5213
Apara_sq = 0.2300
Aperp_sq = 0.2490
phi_s = 0.07

'''
#MC11a values
Azero_sq = 0.600
Apara_sq = 0.240
Aperp_sq = 0.160
phi_s = -0.04
'''
from math import cos
c = cos(phi_s)

RL = (1+c)*Azero_sq/2 + (1+c)*Apara_sq/2 + (1-c)*Aperp_sq/2
RH = (1-c)*Azero_sq/2 + (1-c)*Apara_sq/2 + (1+c)*Aperp_sq/2
A = (RH - RL)/(RH + RL) 

def tau_eff(g, y, A):
	return 1/g*1/(1-y*y)*(1 + 2*A*y + y*y)/(1+A*y)

print "tau_H", B_s0H.lifetime()/1000
print "tau_L", B_s0L.lifetime()/1000

print "G ",  G
print "DG", DG 
print "y ",  y

print "RH", RH
print "RL", RL
print "cos(phi_s)", c
print "A ", A

print "tau_eff", tau_eff(G, y, A)


#MC2012
#Unbiased and untagged results
Azero_sq = 5.17487e-01 
Aperp_sq = 2.51049e-01
Apara_sq = 1 - Azero_sq - Aperp_sq
delta_para = 3.33536e+00
delta_perp = 3.07 # fixed
phi_s = 0.07 #fixed
G  = 6.79911e-01
DG = 8.36331e-02
'''
#MC2011
#Unbiased and untagged results
Azero_sq = 5.19027e-01
Aperp_sq = 2.52568e-01
Apara_sq = 1 - Azero_sq - Aperp_sq
delta_para = 3.23668e+00
delta_perp = 3.07 # fixed
phi_s = 0.07 #fixed
G  = 6.76733e-01
DG = 8.55382e-02
'''
'''
#MC generator values
Azero_sq = 0.5213
Aperp_sq = 0.2490
Apara_sq = 1 - Azero_sq - Aperp_sq
delta_para = 3.30
delta_perp = 3.07 # fixed
phi_s = 0.07 #fixed
G  = 0.6653
DG = 0.0917
'''

y = DG/(2*G)

from math import cos
c = cos(phi_s)

RL = (1+c)*Azero_sq/2 + (1+c)*Apara_sq/2 + (1-c)*Aperp_sq/2
RH = (1-c)*Azero_sq/2 + (1-c)*Apara_sq/2 + (1+c)*Aperp_sq/2
A = (RH - RL)/(RH + RL) 

def tau_eff(g, y, A):
	return 1/g*1/(1-y*y)*(1 + 2*A*y + y*y)/(1+A*y)

print "tH", 1/(G-DG/2)
print "tL", 1/(G+DG/2)
print "G ",  G
print "DG", DG 
print "y ",  y

print "RH", RH
print "RL", RL
print "cos(phi_s)", c
print "A ", A

print "tau_eff", tau_eff(G, y, A)



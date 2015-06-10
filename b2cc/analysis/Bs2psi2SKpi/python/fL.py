#from math import sqrt, cos, sin
from sympy import *

A0 = Symbol('A0')
At = Symbol('At')
Ap = Symbol('Ap')

Hp = Symbol('Hp')
Hm = Symbol('Hm')
H0 = Symbol('H0')
mHp = Symbol('mHp', real=True)
mHm = Symbol('mHm', real=True)
mH0 = Symbol('mH0', real=True)
pHp = Symbol('pHp', real=True)
pHm = Symbol('pHm', real=True)
pH0 = Symbol('pH0', real=True)
fL = Symbol('fL', real=True)

H0 = mH0 * (cos(pH0) + I * sin(pH0))
Hp = mHp * (cos(pHp) + I * sin(pHp))
Hm = mHm * (cos(pHm) + I * sin(pHm))

A0 = H0
At = (Hp - Hm)/sqrt(2)
Ap = (Hp + Hm)/sqrt(2)

fL = Abs(A0)**2/(Abs(A0)**2 + Abs(At)**2 + Abs(Ap)**2)
print fL

df_dmHp   = diff(fL, mHp)
df_dmHm   = diff(fL, mHm)
df_dpHp   = diff(fL, pHp)
df_dpHm   = diff(fL, pHm)

'''
This is really unnecessary since fL cannot depend on the phases
'''

# Jacobian
J = Matrix( [df_dmHp, df_dmHm, df_dpHp, df_dpHm] )
print J

# The results
#nominal
mHp_val  = 0.3959
mHp_stat = 0.1777
mHm_val  = 1.0691
mHm_stat = 0.1307
pHp_val  = 5.5699
pHp_stat = 0.4526
pHm_val  = 2.8410
pHm_stat = 0.2591
rho = -0.343

#with no efficiency
#mHp_val  = 0.62281
#mHp_stat = 0.25787
#mHm_val  = 1.6733
#mHm_stat = 0.21326
#rho = -0.235

mHp_val   = 0.4377
mHp_stat = 0.2251
mHm_val   = 1.4917
mHm_stat = 0.1789
pHp_val  = 5.5669
pHp_stat = 0.5226
pHm_val  = 2.7345
pHm_stat = 0.2829
rho = -0.28

mHp_val   = 0.40822
mHp_stat = 0.17979
mHm_val   = 1.0552
mHm_stat = 0.13028
pHp_val  = 5.6107
pHp_stat = 0.44293
pHm_val  = 2.8835
pHm_stat = 0.26025
rho = -0.28


print
# Jacobian in numerical form
J_num = J.subs([[mH0, 1.], [pH0, 0.], [mHp, mHp_val], [pHp, pHp_val], [mHm,  mHm_val], [pHm, pHm_val]])
print J_num
print

# Covariance matrix
Vstat = Matrix( [
             [mHp_stat**2,           mHp_stat*mHm_stat*rho, mHp_stat*pHp_stat*rho, mHp_stat*pHm_stat*rho]
            ,[mHp_stat*mHm_stat*rho, mHm_stat**2,           mHm_stat*pHp_stat*rho, mHm_stat*pHm_stat*rho]
            ,[mHp_stat*pHp_stat*rho, mHm_stat*pHp_stat*rho, pHp_stat**2,           pHp_stat*pHm_stat*rho]
            ,[mHp_stat*pHm_stat*rho, mHm_stat*pHm_stat*rho, pHp_stat*pHm_stat*rho, pHm_stat**2]
            ])
print Vstat

# Covariance matrix in fL space
cov_stat = (J_num.T)*Vstat*J_num
#print cov_stat

f = lambda x: sqrt(x)
std_dev_stat = cov_stat.applyfunc(f)
#print std_dev_stat

# Numerical values
fL_val = fL.subs([[mH0, 1.], [pH0, 0.], [mHp, mHp_val], [pHp, pHp_val], [mHm,  mHm_val], [pHm, pHm_val]])

print
print "fL = %.4g +- %.4g" % (fL_val, std_dev_stat[0,0])

from math import sqrt

def fL(H0, Hp, Hm):
    return H0**2/(H0**2 + Hp**2 + Hm**2)

def dfL(H0, Hp, dHp, Hm, dHm, rho):
    f = fL(H0, Hp, Hm)
    den = (H0**2 + Hp**2 + Hm**2)
    #print "f", f
    #print "den", den
    dfLdHp = f*2*Hp/den
    dfLdHm = f*2*Hm/den
    #print "dfdH", dfLdHp, dfLdHm
    dfL = sqrt(dfLdHp**2 * dHp**2 + dfLdHm**2 * dHm**2 + 2*dfLdHp*dfLdHm*dHp*dHm*rho)
    return dfL

Hp  = 0.3959
dHp = 0.1777
Hm  = 1.0691
dHm = 0.1307
rho = 0.
print fL(1, Hp, Hm), dfL(1, Hp, dHp, Hm, dHm, rho)

Hp  = 0.4377
dHp = 0.2251
Hm  = 1.4917
dHm = 0.1789
rho = 0.
print fL(1, Hp, Hm), dfL(1, Hp, dHp, Hm, dHm, rho)

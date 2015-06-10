from sympy.physics.quantum.spin import Rotation
from sympy import pi, Symbol, symbols, simplify, exp, I, S
from sympy.functions import conjugate

thetaK, phi, thetaL = symbols('thetaK phi thetaL', real = True)

J_K = 1
J_L = 1

coeffs = []
phases = []

amp = 0
for lam1 in [-S(1)/2, S(1)/2]:
    for lam2 in [-S(1)/2, S(1)/2]:
        lam_l = lam2 - lam1
        for lam in [1]:
            coeffs += [Symbol('A_' + str(J_L) + '_' + str(lam) + '_' + str(lam1) + '_' + str(lam2), real = True)]
            phases += [Symbol('d_' + str(J_L) + '_' + str(lam) + '_' + str(lam1) + '_' + str(lam2), real = True)]
            A = coeffs[-1]
            '''A = coeffs[-1] * exp(I*phases[-1])'''
            B = Rotation.D(J_K, lam, 0,     0,   thetaK, 0)
            C = Rotation.D(J_L, lam, lam_l, phi, thetaL, -phi)
            amp += A * B * C
            print
            print amp.doit()
            print

amp1    = amp.doit().expand(complex=True)
amp1_st = amp.doit().expand(complex=True).conjugate()
amp_sq  = amp1*amp1_st
print simplify(amp_sq.expand())

'''
print amp1
print
print amp1_st
print
print amp_sq.expand()
print
print simplify(amp_sq.expand())
'''

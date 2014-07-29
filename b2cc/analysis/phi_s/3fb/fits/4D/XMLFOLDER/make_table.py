v =  []
#MC2012 unbiased and biased
'''
b = {
'gamma'                     : [0.67773        ,  0.00078539],
'deltaGamma'                : [0.083631       ,  0.0024771],
'Aperp_sq'                  : [0.25194        ,  0.0013309],
'Azero_sq'                  : [0.51896        ,  0.00091635],
'delta_para'                : [3.2937         ,  0.028308],
'delta_perp'                : [3.0633         ,  0.041342],
'deltaM'                    : [17.816         ,  0.016135],
'Phi_s'                     : [0.068273       ,  0.011691]
}
v.append(b)
b={
'gamma'                     : [0.67749        ,  0.0013488],
'deltaGamma'                : [0.079941       ,  0.0043276],
'Aperp_sq'                  : [0.25601        ,  0.0023807],
'Azero_sq'                  : [0.50826        ,  0.001578],
'delta_para'                : [3.3331         ,  0.04268],
'delta_perp'                : [2.9733         ,  0.085978],
'deltaM'                    : [17.739         ,  0.033298],
'Phi_s'                     : [0.059987       ,  0.022396]
}
v.append(b)
b={
'gamma'                     : [0.66787        ,  0.0018339],
'deltaGamma'                : [0.085748       ,  0.0057524],
'Aperp_sq'                  : [0.24767        ,  0.0031509],
'Azero_sq'                  : [0.52358        ,  0.00215],
'delta_para'                : [3.3549         ,  0.05318],
'delta_perp'                : [3.0379         ,  0.097828],
'deltaM'                    : [17.818         ,  0.039896],
'Phi_s'                     : [0.063389       ,  0.028635]
}
v.append(b)
b={
'gamma'                     : [0.67063        ,  0.0019485],
'deltaGamma'                : [0.083068       ,  0.006033],
'Aperp_sq'                  : [0.2484         ,  0.0031518],
'Azero_sq'                  : [0.52489        ,  0.0022766],
'delta_para'                : [3.233          ,  0.074122],
'delta_perp'                : [3.1184         ,  0.11233],
'deltaM'                    : [17.872         ,  0.03929],
'Phi_s'                     : [0.060755       ,  0.029648]
}
v.append(b)
b={
'gamma'                     : [0.68727        ,  0.0014011],
'deltaGamma'                : [0.086896       ,  0.0043916],
'Aperp_sq'                  : [0.25107        ,  0.0022713],
'Azero_sq'                  : [0.52496        ,  0.0016221],
'delta_para'                : [3.2559         ,  0.05417],
'delta_perp'                : [3.0844         ,  0.060504],
'deltaM'                    : [17.833         ,  0.022903],
'Phi_s'                     : [0.082277       ,  0.018414]
}
v.append(b)
'''
#MC2012 unbiased

b={

'gamma'                     : [ 0.67858        ,  0.00089075],
'deltaGamma'                : [ 0.081122       ,  0.0028048],
'Aperp_sq'                  : [ 0.25308        ,  0.0014817],
'Azero_sq'                  : [ 0.51712        ,  0.0010173],
'delta_para'                : [ 3.2959         ,  0.031248],
'delta_perp'                : [ 3.0367         ,  0.045929],
'deltaM'                    : [ 17.813         ,  0.018616],
'Phi_s'                     : [ 0.070956       ,  0.013233]
}
v.append(b)
b={


'gamma'                     : [ 0.67791        ,  0.0015369],
'deltaGamma'                : [ 0.079646       ,  0.0049326],
'Aperp_sq'                  : [ 0.25516        ,  0.0026449],
'Azero_sq'                  : [ 0.50922        ,  0.0017585],
'delta_para'                : [ 3.3077         ,  0.054814],
'delta_perp'                : [ 2.8811         ,  0.095232],
'deltaM'                    : [ 17.733         ,  0.037551],
'Phi_s'                     : [ 0.071625       ,  0.025294]
}
v.append(b)
b={


'gamma'                     : [ 0.67104        ,  0.0020935],
'deltaGamma'                : [ 0.085135       ,  0.0066075],
'Aperp_sq'                  : [ 0.24924        ,  0.0035361],
'Azero_sq'                  : [ 0.51988        ,  0.0024028],
'delta_para'                : [ 3.3761         ,  0.054459],
'delta_perp'                : [ 3.009          ,  0.11392],
'deltaM'                    : [ 17.795         ,  0.049567],
'Phi_s'                     : [ 0.049994       ,  0.032713]
}
v.append(b)
b={


'gamma'                     : [ 0.67333        ,  0.0022114],
'deltaGamma'                : [ 0.078846       ,  0.0068343],
'Aperp_sq'                  : [ 0.25113        ,  0.0035158],
'Azero_sq'                  : [ 0.52185        ,  0.0025286],
'delta_para'                : [ 3.2436         ,  0.074363],
'delta_perp'                : [ 3.1048         ,  0.12313],
'deltaM'                    : [ 17.863         ,  0.045584],
'Phi_s'                     : [ 0.049725       ,  0.033748]
}
v.append(b)
b={
'gamma'                     : [ 0.68614        ,  0.0015739],
'deltaGamma'                : [ 0.081833       ,  0.0048912],
'Aperp_sq'                  : [ 0.2534         ,  0.00254],
'Azero_sq'                  : [ 0.52167        ,  0.0017861],
'delta_para'                : [ 3.2697         ,  0.0599],
'delta_perp'                : [ 3.0933         ,  0.067203],
'deltaM'                    : [ 17.842         ,  0.026681],
'Phi_s'                     : [ 0.09313        ,  0.020855]
}
v.append(b)

#MC2012
deltaTau = 30.5e-03
beta = -deltaTau/1.43**2

names = ['gamma', 'deltaGamma','Aperp_sq','Azero_sq','delta_para','delta_perp','deltaM','Phi_s']
titles = ['$\Gamma_s$','$\Delta\Gamma_s$','$|A_{\perp}|^{2}$','$|A_{0}|^{2}$','$\delta_{\parallel} -\delta_{0} $','$\delta_{\perp} - \delta_{0}$','$\Delta m_s$','$\phi_s$']
j = 0
for n in names:
	print '%s' % (titles[j]),
	offset = 0.
 	if n == 'gamma': offset = beta
	for i in v:
		s = i[n][0] + offset
		print '& $%.3f \pm %.3f$' % (s, i[n][1]),
	j += 1
	print '\\\\'

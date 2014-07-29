# coding=utf-8
'''
#unbiased, untagged
v = {
'gamma'                     : [0.68356,  0.0008795],
'deltaGamma'                : [0.084,  0.002787],
'Aperp_sq'                  : [0.24923,  0.001479],
'Azero_sq'                  : [0.51941,  0.00099052],
'delta_para'                : [3.3923,  0.022114]
}
'''
#MC2012
#almost unbiased, tagged
v = {
'gamma'                     : [0.68008        ,  0.0008915],
'deltaGamma'                : [0.082196       ,  0.0028114],
'Aperp_sq'                  : [0.25145        ,  0.0014879],
'Azero_sq'                  : [0.51728        ,  0.001012],
'delta_para'                : [3.3271         ,  0.027634],
'delta_perp'                : [3.057          ,  0.044962],
'deltaM'                    : [17.815         ,  0.018619],
'Phi_s'                     : [0.067083       ,  0.013046]
}
#MC2012
#almost unbiased, tagged, weighted
v = {
'gamma'                     : [0.6677         ,  0.00087546],
'deltaGamma'                : [0.08188        ,  0.0028271],
'Aperp_sq'                  : [0.25082        ,  0.0014944],
'Azero_sq'                  : [0.51702        ,  0.0010148],
'delta_para'                : [3.3389         ,  0.026183],
'delta_perp'                : [3.0711         ,  0.043776],
'deltaM'                    : [17.819         ,  0.017895],
'Phi_s'                     : [0.090939       ,  0.012977]
}
##MC2012
#almost unbiased, untagged, weighted with 1/(1+beta*t+gamma*t*t)
v = {
'gamma'                     : [0.66596        ,  0.0008777],
'deltaGamma'                : [0.086674       ,  0.0028094],
'Aperp_sq'                  : [0.24951        ,  0.0015243],
'Azero_sq'                  : [0.51808        ,  0.0010194],
'delta_para'                : [3.3452         ,  0.027977],
'delta_perp'                : [0,1],
'deltaM'                    : [0,1],
'Phi_s'                     : [0,1]
}
#MC2012
#almost unbiased, untagged, weighted with 1/(1+beta*t+gamma*t*t)
v = {
'gamma'                     : [0.66639        ,  0.00074021],
'deltaGamma'                : [0,1],
'Aperp_sq'                  : [0.24807        ,  0.0010914],
'Azero_sq'                  : [0.51915        ,  0.00076519],
'delta_para'                : [3.343          ,  0.02778],
'delta_perp'                : [0,1],
'deltaM'                    : [0,1],
'Phi_s'                     : [0,1]
}
'''
#MC2012
#exclusively biased, tagged
v = {
'gamma'                     : [0.66873        ,  0.0016826],
'deltaGamma'                : [0.091441       ,  0.0053168],
'Aperp_sq'                  : [0.24654        ,  0.0030885],
'Azero_sq'                  : [0.52542        ,  0.0021342],
'delta_para'                : [3.3216         ,  0.05791],
'delta_perp'                : [3.2036         ,  0.096681],
'deltaM'                    : [17.834         ,  0.033049],
'Phi_s'                     : [0.067361       ,  0.02583]
}
'''
'''
#MC2012
#combined unbiased and exclusively biased, tagged
v = {
'gamma'                     : [0.67768        ,  0.00078745],
'deltaGamma'                : [0.084037	, 0.0024837],
'Aperp_sq'                  : [0.25054        ,  0.0013408],
'Azero_sq'                  : [0.5188         ,  0.00091443],
'delta_para'                : [3.3264         ,  0.024903],
'delta_perp'                : [3.0793         ,  0.040654],
'deltaM'                    : [17.816         ,  0.016141],
'Phi_s'                     : [0.067625       ,  0.01165]
}
'''
'''
#MC2012
#combined unbiased and exclusively biased, tagged with correct angular acceptance
v = {
'gamma'                     : [0.67784        ,  0.00078492],
'deltaGamma'                : [0.083766	, 0.0024763],
'Aperp_sq'                  : [0.25189        ,  0.0013291],
'Azero_sq'                  : [0.51903         ,  0.00091527],
'delta_para'                : [3.2924         ,  0.028451],
'delta_perp'                : [3.0613         ,  0.041237],
'deltaM'                    : [17.816         ,  0.016121],
'Phi_s'                     : [0.067758       ,  0.011664]
}
'''
'''
#MC2012
#combined unbiased and exclusively biased, tagged with correct angular acceptance, different truth match and non-DEC triggers
#using the MCtruth acceptance histogram does not change the situation...
v = {
'gamma'                     : [0.67769        ,  0.00078524],
'deltaGamma'                : [0.083519       ,  0.0024759],
'Aperp_sq'                  : [0.25198        ,  0.0013307],
'Azero_sq'                  : [0.51893        ,  0.00091622],
'delta_para'                : [3.2936         ,  0.028312],
'delta_perp'                : [3.0633         ,  0.041342],
'deltaM'                    : [17.816         ,  0.016135],
'Phi_s'                     : [0.068286       ,  0.011693]
}
'''
'''
#MC2011
#combined unbiased and exclusively biased, tagged
v = {
'gamma'                     : [0.67506        ,  0.00075288],   
'deltaGamma'                : [0.085477       ,  0.0023904],    
'Aperp_sq'                  : [0.25181        ,  0.0012724],   
'Azero_sq'                  : [0.51958        ,  0.00088284],   
'delta_para'                : [3.2939         ,  0.024995],     
'delta_perp'                : [3.0464         ,  0.037878],     
'deltaM'                    : [17.793         ,  0.015457],     
'Phi_s'                     : [0.062283       ,  0.011129] 
}
'''
'''
#MC2011 - I used the wrong trigger for this
#almost unbiased, tagged
v = {
'gamma'                     : [0.6768         ,  0.00082444],
'deltaGamma'                : [0.084241       ,  0.002617],
'Aperp_sq'                  : [0.25214        ,  0.0013688],
'Azero_sq'                  : [0.51862        ,  0.00094971],
'delta_para'                : [3.2994         ,  0.025767],
'delta_perp'                : [3.0549         ,  0.040406],
'deltaM'                    : [17.791         ,  0.017],
'Phi_s'                     : [0.066112       ,  0.012065]
}
'''
#MC2012
deltaTau = 30.5e-03
#MC2011
#deltaTau = 23.0e-03
beta = -deltaTau/1.43**2
beta = 0.
gen = {'gamma' :0.6653, 'deltaGamma':0.0917, 'Aperp_sq':0.2490, 'Azero_sq':0.5213, 'delta_para':3.30, 'delta_perp':3.07, 'deltaM':17.8, 'Phi_s':0.07}

for name, val in v.iteritems():
 offset = 0.
 if name == 'gamma': offset = beta
 f = (val[0] + offset - gen[name])/val[1]
 print name, "\t $%0.4f \pm %0.4f$	&	$%+.2f$" % (val[0] + offset, val[1], f)

y = v['deltaGamma'][0]/(2*v['gamma'][0])

from math import cos
c = cos(v['Phi_s'][0])
Azero_sq = v['Azero_sq'][0]
Aperp_sq = v['Aperp_sq'][0]
Apara_sq = 1 - Azero_sq - Aperp_sq

RL = (1+c)*Azero_sq/2 + (1+c)*Apara_sq/2 + (1-c)*Aperp_sq/2
RH = (1-c)*Azero_sq/2 + (1-c)*Apara_sq/2 + (1+c)*Aperp_sq/2
A = (RH - RL)/(RH + RL) 

def tau_eff(g, y, A):
	return 1/g*1/(1-y*y)*(1 + 2*A*y + y*y)/(1+A*y)

print "A ", A

print "tau_eff", tau_eff(v['gamma'][0], y, A)


f = open('norm_weights_nPV_Bpt_binsMC2012_bigDataset.txt')

weights = {'A0_AS':[]
	,'A0_Aperp':[]
	,'AS_AS':[]
	,'A0_Apar':[]
	,'Aperp_Aperp':[]
	,'Aperp_AS':[]
	,'Apar_Apar':[]
	,'Apar_AS':[]
	,'Apar_Aperp':[]
	,'A0_A0':[]
}

for l in f.readlines():
	ll = l.split()
	if len(ll) > 0 and ll[0] in weights.keys():
		weights[ll[0]].append(float(ll[1]))

terms = ['A0_A0', 'Apar_Apar', 'Aperp_Aperp', 'Apar_Aperp', 'A0_Apar', 'A0_Aperp', 'AS_AS', 'Apar_AS', 'Aperp_AS', 'A0_AS']

for i in range(len(weights['A0_A0'])):
	for j in terms:
		print "weights.push_back(%+g);" % weights[j][i] 



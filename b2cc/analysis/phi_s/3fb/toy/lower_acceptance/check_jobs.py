import glob
import os.path

dir = '50bin_gen_20bin_fit_test'

list = glob.glob(dir+'/*jobRunning')

files = ['_stdout_gen', '_stdout_fit', '_pulls.root']

numJobsSubmitted = len(list)
numJobsCompleted = 0
expectedNumberOutputs = len(files)

for i in list:
	numberOutputs = len(files)
	root = i.split("/")[1].split("_")
	id = root[0]+"_"+root[1]
	numJobsCompleted += 1
	for f in files:
		if not os.path.isfile(dir+'/'+id+f):
			numberOutputs -= 1 
		if numberOutputs != expectedNumberOutputs:
			f = open(i).readlines()
			print id, f[0]

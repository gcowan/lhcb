import ROOT
import sys

data = sys.stdin.read()
d = data.split()

cols = 1 

num = len(d)/cols

print num

hists = []

hists.append(ROOT.TH1D("hist1","hist1", 40, -4, 4))
hists.append(ROOT.TH1D("hist2","hist2", 40, -4, 4))
hists.append(ROOT.TH1D("hist3","hist3", 40, -4, 4))
hists.append(ROOT.TH1D("hist4","hist4", 40, -4, 4))

print d

for i in range(num):
	for j in range(cols):
		hists[ j ].Fill(float(d[i*cols+j]))
		print float(d[i*cols+j])


c = ROOT.TCanvas()
c.Divide(1,1)
for i in range(cols):
	c.cd(i+1)
	hists[i].GetXaxis().SetTitle("(par1-par2)/sqrt(dpar1^2+dpar2^2)")
	hists[i].GetYaxis().SetTitle("Entries")
	hists[i].Draw()
c.SaveAs("plots_pt.pdf")


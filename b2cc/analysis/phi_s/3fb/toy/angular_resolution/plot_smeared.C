{
_file0 = TFile::Open("test_1.root");
_file1 = TFile::Open("dataNTuple_test_1.root"); 
tree0 = (TTree*)_file0->Get("dataNTuple");
tree1 = (TTree*)_file1->Get("dataNTuple");
tree0->AddFriend(tree1,"smeared");
TCanvas * c = new TCanvas();
gPad->SetLogy();
c->Divide(2,2);
c->cd(1);
tree0->Draw("acos(helcosthetaK)-acos(smeared.helcosthetaK)");
c->cd(2);
tree0->Draw("acos(helcosthetaL)-acos(smeared.helcosthetaL)");
c->cd(3);
tree0->Draw("helphi-smeared.helphi");
}

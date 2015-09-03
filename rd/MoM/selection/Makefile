CC  = c++
CXX = c++

CXXFLAGS  = -O2 -Wall -Wno-deprecated -D__ROOFIT_NOBANNER
ROOTFLAGS = `root-config --cflags --libs` `gsl-config --cflags` -lHtml -lThread -lMinuit -lMathCore -lMinuit2 -lRooStats -lRooFit -lRooFitCore -lFoam -lTreePlayer -lTMVA 
INCPATH   = -Isrc/

all : objects apply_BDT_weights 

clean :
	rm -f bin/*.o

objects : bin/apply_BDT_weights.o

bin/apply_BDT_weights.o : src/apply_BDT_weights.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

apply_BDT_weights : bin/apply_BDT_weights.o 
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

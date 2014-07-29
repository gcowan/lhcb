CC  = c++
CXX = c++

CXXFLAGS  = -O2 -Wall -Wno-deprecated -D__ROOFIT_NOBANNER
ROOTFLAGS = `root-config --cflags --libs` `gsl-config --cflags` -lHtml -lThread -lMinuit -lMathCore -lMinuit2 -lRooStats -lRooFit -lRooFitCore -lFoam -lTreePlayer 
INCPATH   = -Isrc/

all : 	objects getHltAcceptance.exe getHltAcceptance_MCtruth.exe \
	getStrippingAcceptance.exe getStrippingAcceptance_MCtruth.exe \
	TriggerComposition.exe fitLifetime.exe \
	fluctuateAcceptance.exe fluctuateStrippingAcceptance.exe \
	compareTuples.exe compareTuplessPlot.exe \
	TupleOutput.exe FlatTupleOutput.exe BaryTupleOutput.exe

clean :
	rm -f bin/*.o *.exe

objects : 	bin/RooStudentT.o bin/RooApollonios.o bin/RooBiApollonios.o bin/RooPartBiApollonios.o \
		bin/RooIpatia.o bin/RooIpatia2.o bin/RooLousonna.o bin/RooPartBiLousonna.o \
		bin/getHltAcceptance.o bin/getHltAcceptance_MCtruth.o \
		bin/getStrippingAcceptance.o bin/getStrippingAcceptance_MCtruth.o \
		bin/TriggerComposition.o bin/fitLifetime.o \
		bin/fluctuateAcceptance.o bin/fluctuateStrippingAcceptance.o \
		bin/compareTuples.o bin/compareTuplessPlot.o \
		bin/TupleOutput.o bin/FlatTupleOutput.o bin/BaryTupleOutput.o

bin/RooStudentT.o : src/RooStudentT.cxx src/RooStudentT.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooLousonna.o : src/RooLousonna.cxx src/RooLousonna.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooPartBiLousonna.o : src/RooPartBiLousonna.cxx src/RooPartBiLousonna.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooApollonios.o : src/RooApollonios.cxx src/RooApollonios.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooPartBiApollonios.o : src/RooPartBiApollonios.cxx src/RooPartBiApollonios.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooBiApollonios.o : src/RooBiApollonios.cxx src/RooBiApollonios.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooIpatia.o : src/RooIpatia.cxx src/RooIpatia.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/RooIpatia2.o : src/RooIpatia2.cxx src/RooIpatia2.h
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

bin/getHltAcceptance.o : src/getHltAcceptance.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

getHltAcceptance.exe : bin/getHltAcceptance.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/getStrippingAcceptance.o : src/getStrippingAcceptance.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

getStrippingAcceptance.exe : bin/getStrippingAcceptance.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/getStrippingAcceptance_MCtruth.o : src/getStrippingAcceptance_MCtruth.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

getStrippingAcceptance_MCtruth.exe : bin/getStrippingAcceptance_MCtruth.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/getHltAcceptance_MCtruth.o : src/getHltAcceptance_MCtruth.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

getHltAcceptance_MCtruth.exe : bin/getHltAcceptance_MCtruth.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/TriggerComposition.o : src/TriggerComposition.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

TriggerComposition.exe : bin/TriggerComposition.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/fitLifetime.o : src/fitLifetime.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

fitLifetime.exe : bin/fitLifetime.o bin/RooStudentT.o bin/RooApollonios.o bin/RooPartBiApollonios.o bin/RooBiApollonios.o bin/RooLousonna.o bin/RooPartBiLousonna.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/fluctuateAcceptance.o : src/fluctuateAcceptance.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

fluctuateAcceptance.exe : bin/fluctuateAcceptance.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/fluctuateStrippingAcceptance.o : src/fluctuateStrippingAcceptance.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

fluctuateStrippingAcceptance.exe : bin/fluctuateStrippingAcceptance.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/compareTuples.o : src/compareTuples.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

compareTuples.exe : bin/compareTuples.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/compareTuplessPlot.o : src/compareTuplessPlot.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

compareTuplessPlot.exe : bin/compareTuplessPlot.o bin/RooBiApollonios.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/TupleOutput.o : src/TupleOutput.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

TupleOutput.exe : bin/TupleOutput.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/FlatTupleOutput.o : src/FlatTupleOutput.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

FlatTupleOutput.exe : bin/FlatTupleOutput.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

bin/BaryTupleOutput.o : src/BaryTupleOutput.C src/particleProperties.C src/particleProperties.C src/particleProperties.C
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@

BaryTupleOutput.exe : bin/BaryTupleOutput.o
	$(CXX) $(CXXFLAGS) $(ROOTFLAGS) -o $@ $^

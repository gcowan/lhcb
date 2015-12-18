#include "TCanvas.h"
#include "TAxis.h"
#include "TH1.h"
#include "TTree.h"
#include "TFile.h"
#include "TCut.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "calculate_angles.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void find_multiple_candidates(const char * fileName, const char * treePath, const char * cuts, const unsigned int verbose = 0){ 
    TFile* file = TFile::Open( fileName );
    if( !file ) std::cout << "file " << fileName << " does not exist" << std::endl;

    TTree* tree = (TTree*)file->Get( treePath );
    if( !tree ) std::cout << "tree " << treePath << " does not exist" << std::endl;

    unsigned int n = tree->GetEntries(cuts);
    std::cout << "Applying cuts " << cuts << std::endl;
    std::cout << "Total number of selected candidates " << n << std::endl;

    tree->Draw("runNumber:eventNumber", cuts, "goff");
    double * listOfRunNumbers   = tree->GetV1(); 
    double * listOfEventNumbers = tree->GetV2(); 

    unsigned int totalNumberOfDuplicates(0);
    unsigned int numberOfCandidatesInThisEvent(1);
    unsigned int numberOfCandidates[n];
    std::fill(numberOfCandidates, numberOfCandidates+n, 1);
    unsigned int i, j, offset;
    for (i = 0; i < n; i += offset)
    {
        for (j = i + 1; j < n; ++j)
        {
            if ((UInt_t(listOfRunNumbers[i]) == UInt_t(listOfRunNumbers[j])) && (ULong64_t(listOfEventNumbers[i]) == ULong64_t(listOfEventNumbers[j])) )
            {
                if (verbose)
                {
                    printf("Found a duplicate of %u\t %lli\t %u\t %u\n", UInt_t(listOfRunNumbers[i]), ULong64_t(listOfEventNumbers[j]), i, j);
                }
                numberOfCandidates[i] = numberOfCandidates[i] + 1;
            }
        }
        offset = numberOfCandidates[i];
        totalNumberOfDuplicates += numberOfCandidates[i] - 1;
    }

    std::cout << "Number of duplicates " << totalNumberOfDuplicates << std::endl;
    std::cout << "Fraction of duplicates " << double(totalNumberOfDuplicates)/n << std::endl;
}

int main(int argc, const char * argv[])
{
    if ( argc != 5 ) return 1;
    const char * fileName = argv[1];
    const char * treePath = argv[2];
    const char * cuts = argv[3];
    const unsigned int verbose = atoi(argv[4]);
    find_multiple_candidates(fileName, treePath, cuts, verbose);  
    return 0;
}

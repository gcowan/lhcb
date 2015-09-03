// Include files 

 // from Gaudi
#include "GaudiKernel/ToolFactory.h"

// local
#include "TupleBuKmmFit.h"
#include <sstream>
#include <Kernel/GetIDVAlgorithm.h>
#include "DecayTreeFitter/Fitter.h"

#include "LHCbMath/ParticleParams.h"

//-----------------------------------------------------------------------------
// Implementation file for class : BuKmmFit
//
// 2013-05-10 : Thomas Blake
//-----------------------------------------------------------------------------



// Declaration of the Tool Factory
DECLARE_TOOL_FACTORY( TupleBuKmmFit )


//=============================================================================
// Standard constructor, initializes variables
//=============================================================================

TupleBuKmmFit::TupleBuKmmFit( const std::string& type,
                              const std::string& name,
                              const IInterface* parent )
  : TupleToolBase( type, name, parent ) , 
    dva_( NULL ), 
    des_( NULL )
{
  declareInterface<IParticleTupleTool>(this);
}

//=============================================================================
// Destructor
//=============================================================================

TupleBuKmmFit::~TupleBuKmmFit() {} ;


//=============================================================================
// Initialization
//=============================================================================

StatusCode TupleBuKmmFit::initialize() {
  StatusCode sc = TupleToolBase::initialize(); // must be executed first
  if ( sc.isFailure() ) return sc;  // error printed already by GaudiAlgorithm

  dva_ = Gaudi::Utils::getIDVAlgorithm ( contextSvc(), this ) ;
  des_ = tool<IParticleDescendants>("ParticleDescendants");
  
  if ( msgLevel(MSG::DEBUG) ) debug() << "==> Initialize" << endmsg;
  
  return StatusCode::SUCCESS;
}



//=============================================================================
//  Finalize
//=============================================================================
StatusCode TupleBuKmmFit::finalize() {

  if ( msgLevel(MSG::DEBUG) ) debug() << "==> Finalize" << endmsg;

  return TupleToolBase::finalize();  // must be called after all other actions
}

//=============================================================================

StatusCode TupleBuKmmFit::fill( const LHCb::Particle* mother, 
                                const LHCb::Particle* P, 
                                const std::string& head, 
                                Tuples::Tuple& tuple )
{
  if( !P ) return StatusCode::FAILURE;
  
  const std::string prefix = fullName(head);
  
  // Only use the head of the decay chain
  if ( mother != P ) return StatusCode::SUCCESS ;
  
  const LHCb::VertexBase* PV = dva_ ->bestVertex( P );

  if (!PV) {
    return Error("Could not find associated PV", StatusCode::FAILURE );
  }
  
  // Fit the decay tree 
  
  LHCb::Particle::ConstVector daughters = des_->descendants( P );
  LHCb::Particle::ConstVector::const_iterator it ;

  const LHCb::Particle* dimuon;
  const LHCb::Particle* piplus;
  const LHCb::Particle* piminus;

  for ( it = daughters.begin(); it != daughters.end(); ++it ){
    if ( (*it)->particleID().pid() == 443 ){
      dimuon = (*it);
    } 
    if ( (*it)->particleID().pid() == 211 ){
      piplus = (*it);
    } 
    if ( (*it)->particleID().pid() == -211 ){
      piminus = (*it);
    } 
  }


  DecayTreeFitter::Fitter fitter( *P, *PV );
  
  fitter.setMassConstraint( *P ) ;
  //fitter.setMassConstraint( *dimuon ) ;

  fitter.fit();
  

  Gaudi::LorentzVector fittedmother = fitter.fitParams( P )->momentum();
  Gaudi::LorentzVector fittedjpsi   = fitter.fitParams( dimuon )->momentum();
  //Gaudi::LorentzVector fittedpiplus   = fitter.fitParams( piplus )->momentum();
  //Gaudi::LorentzVector fittedpiminus   = fitter.fitParams( piminus )->momentum();
  //Gaudi::LorentzVector fittedpsi2s = fittedjpsi+fittedpiplus+fittedpiminus; 
  bool test = true ;

  test &= tuple->column( prefix + "_fitted_"       , fittedmother );
  test &= tuple->column( prefix + "_fitted_dimuon_", fittedjpsi   );
 // test &= tuple->column( prefix + "_fitted_piplus_", fittedpiplus   );
  //test &= tuple->column( prefix + "_fitted_piminus_", fittedpiminus  );
  //test &= tuple->column( prefix + "_fitted_psi2s_", fittedpsi2s  );
 // test &= tuple->column( prefix + "_fitted_deltamass_", fittedpsi2s.M()-fittedjpsi.M()  );

  // test &= tuple->column( prefix + "_fitted_"       , fittedmother );
  test &= tuple->column( prefix + "_fitted_dimuon_M", fittedjpsi.M()   );
 

  double upperside = 5500;
  for (int i=0; i<5; i++)
  {
    double mass = upperside + i*80;
    std::ostringstream s;
    s << mass;
    fitter.setMassConstraint( *P, false);
    fitter.setMassConstraint( *P, mass);
    fitter.fit();
    fittedjpsi   = fitter.fitParams( dimuon )->momentum();
  //  fittedpiplus   = fitter.fitParams( piplus )->momentum();
   // fittedpiminus   = fitter.fitParams( piminus )->momentum();
  //  fittedpsi2s = fittedjpsi+fittedpiplus+fittedpiminus; 
    test &= tuple->column( prefix + "_fitted_dimuon_M_" + s.str(), fittedjpsi.M()   );
   // test &= tuple->column( prefix + "_fitted_deltamass_" + s.str(),fittedpsi2s.M() - fittedjpsi.M()   );
  }

 
  return StatusCode( test ); 
}


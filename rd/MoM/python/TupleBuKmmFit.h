#ifndef BUKMMFIT_H 
#define BUKMMFIT_H 1

// Include files 
// from DaVinci.

#include "DecayTreeTupleBase/TupleToolBase.h"
#include "Kernel/IParticleTupleTool.h"
#include "Kernel/IDVAlgorithm.h"
#include "Kernel/IParticleDescendants.h"

/** @class TupleBuKmmFit TupleBuKmmFit.h
 *  
 *
 *  @author Thomas Blake
 *  @date   2013-05-10
 */

class TupleBuKmmFit : public TupleToolBase, virtual public IParticleTupleTool 
{
public: 
  /// Standard constructor
    
  TupleBuKmmFit( const std::string& type,
                 const std::string& name,
                 const IInterface* parent );

  virtual ~TupleBuKmmFit( ); ///< Destructor

  virtual StatusCode initialize();    ///< Algorithm initialization
  virtual StatusCode finalize  ();    ///< Algorithm finalization
  
  virtual StatusCode fill( const LHCb::Particle*, 
                           const LHCb::Particle*, 
                           const std::string&, 
                           Tuples::Tuple& );

protected:

private:
  IDVAlgorithm* dva_;
  IParticleDescendants* des_;
  
};
#endif // BUKMMFIT_H

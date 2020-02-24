#ifndef EventContext_h
#define EventContext_h

/** simulator libs **/
#include "core/macros.h"
#include "CaloCluster/CaloClusterContainer.h"
#include "CaloCell/CaloCellCollection.h"
//#include "/EventInto.h"

/** geant 4 libs **/
#include "G4Step.hh"



/// Description of a event context
///
/// @author Joao victor da Fonseca Pinto <jodafons@cern.ch, jodafons@lps.ufrj.br>
///
/// $Revision: 1 $
/// $Date: 2020-02-01$
///
class EventContext
{
  public:

    /** Constructor **/
    EventContext();
    /** Destructor **/
    ~EventContext();

    /*! Attach the geant step point */
    void attach( G4Step * );
    /*! Attach the calo cluster container into the context */
    void attach( xAOD::CaloClusterContainer * );
    /*! Attach the collection into the context */
    void attach( xAOD::CaloCellCollection * );
    /*! Attach the event info into the context */
    //void attach( xAOD::EventInto * );
    
    /*! retrieve the geant step point */
    void retrieve( G4Step * );
    /*! retrieve the calo cluster container pointer */
    void retrieve( xAOD::CaloClusterContainer * );
    /*! retrieve the calo cell collection pointer */
    void retrieve( xAOD::CaloCellCollection * );
    /*! retrieve the event info  pointer */
    //void retrieve( xAOD::EventInto * );
  
  private:
    
    // G4Step point from geant
    G4Step *m_step;
    // Calo cluster container
    xAOD::CaloClusterConteiner *m_caloClusterCont;
    // Calo cell collection
    xAOD::CaloCellCollection *m_collection;
    // Event info from reader
    xAOD::EventInto *m_eventInfo;

};

  
  

#endif

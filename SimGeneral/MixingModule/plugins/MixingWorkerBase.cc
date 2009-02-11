// File: MixingWorkerBase.cc
// Description:  see MixingWorkerBase.h
// Author:  Ursula Berthon, LLR Palaiseau
//
//--------------------------------------------

#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/Utilities/interface/EDMException.h"
#include "FWCore/Framework/interface/ConstProductRegistry.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "FWCore/Framework/interface/EventPrincipal.h"
#include "DataFormats/Common/interface/Handle.h"
#include "DataFormats/Provenance/interface/ModuleDescription.h"
#include "MixingWorkerBase.h"
#include "boost/shared_ptr.hpp"

namespace edm
{

  // Constructor 
  //FIXME: subdet here?
  MixingWorkerBase::MixingWorkerBase(int minBunch,int maxBunch,int bunchSpace,std::string &subdet, std::string &label, unsigned int maxNbSources, InputTag &tag, bool checktof, bool isTracker) :
	  minBunch_(minBunch),
	  maxBunch_(maxBunch),
	  bunchSpace_(bunchSpace),
	  subdet_(subdet),
	  label_(label),
	  maxNbSources_(maxNbSources),
	  tag_(tag),
	  checktof_(checktof),
	  isTracker_(isTracker)
  {
   opp_=InputTag();
  }

  // Virtual destructor needed.
  MixingWorkerBase::~MixingWorkerBase() { 
  }  

}//edm

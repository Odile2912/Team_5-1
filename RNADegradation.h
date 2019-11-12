#ifndef RNADEGRADATION_H
#define RNADEGRADATION_H

#include "ChemicalReaction.h"

class RNADegradation : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif

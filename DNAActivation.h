#ifndef DNAACTIVATION_H
#define DNAACTIVATION_H

#include "ChemicalReaction.h"

class DNAActivation : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif

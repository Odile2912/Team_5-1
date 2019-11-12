#ifndef DNADESACTIVATION_H
#define DNADESACTIVATION_H

#include "ChemicalReaction.h"

class DNADesactivation : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif


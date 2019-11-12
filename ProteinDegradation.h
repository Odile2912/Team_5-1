#ifndef PROTEINDEGRADATION_H
#define PROTEINDEGRADATION_H

#include "ChemicalReaction.h"

class ProteinDegradation : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif

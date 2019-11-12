#ifndef RNANEGATIVREGUL_H
#define RNANEGATIVREGUL_H

#include "Regulation.h"

class RNADNegativRegul : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif

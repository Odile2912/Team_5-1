#ifndef RNAPOSITIVREGUL_H
#define RNAPOSITIVREGUL_H

#include "Regulation.h"

class RNAPositivRegul : public Regulation{
	public:
	virtual void react(Gene* gene) override;
};

#endif

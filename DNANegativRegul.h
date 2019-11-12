#ifndef DNANEGATIVREGUL_H
#define DNANEGATIVREGUL_H

#include "Regulation.h"

class DNANegativRegul : public Regulation{
	public:
	virtual void react(Gene* gene) override;
};

#endif

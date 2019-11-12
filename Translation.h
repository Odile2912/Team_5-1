#ifndef TRANSLATION_H
#define TRANSLATION_H

#include "ChemicalReaction.h"

class Translation : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif


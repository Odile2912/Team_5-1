#ifndef TRANSCRIPTION_H
#define TRANSCRIPTION_H

#include "ChemicalReaction.h"

class Transcription : public ChemicalReaction{
	public:
	virtual void react(Gene* gene) override;
};

#endif

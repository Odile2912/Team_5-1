#include "DNANegativRegul.h"

using namespace std;

void DNANegativRegul::react(Gene* gene){
	double nb_DNA (gene->get_DNA_ON());
	nb_DNA-=1;
	gene-> set_DNA_ON(nb_DNA);
}

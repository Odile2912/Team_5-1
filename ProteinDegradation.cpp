#include "ProteinDegradation.h"

using namespace std;

void ProteinDegradation::react(Gene* gene){
	double nb_protein (gene->get_protein_nb());
	nb_protein-=1;
	gene-> set_protein_nb(nb_protein);
}


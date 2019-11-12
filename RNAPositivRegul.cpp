#include "RNAPositivRegul.h"

using namespace std;

void RNAPositivRegul::react(Gene* gene){
	double nb_RNA (gene->get_RNA_nb());
	nb_RNA+=1;
	gene-> set_RNA_nb(nb_RNA);
}


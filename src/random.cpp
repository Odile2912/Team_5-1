#include "random.h"


RandomNumbers::RandomNumbers(unsigned long int s)
:seed(s)
{
	if (s==0) {
		std::random_device rd;
		seed = rd();
	}
	rng = std::mt19937(seed);
}

double RandomNumbers::uniform_double(double lower, double upper){
	std::uniform_real_distribution<double> dis(lower, upper);
	return dis(rng);
}

double RandomNumbers::exponential(double mean){
	std::exponential_distribution<double> dis(mean);
	return dis(rng);
}

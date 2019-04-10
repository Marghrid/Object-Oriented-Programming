// Region.h

#ifndef __REGION__
#define __REGION__

#include "Beneficiary.h"
#include "Individual.h"
#include "Village.h"
#include <iostream>

class Region : public Beneficiary {
public:
	void add(Individual &individual) {
		Beneficiary::add(&individual);
	}

	void add(Village &village) {
		Beneficiary::add(&village);
	}

friend std::ostream &operator<<(std::ostream &os, const Region &r) {
		os << "Region - " << (Beneficiary&)r;
		return os;
	}
};

#endif
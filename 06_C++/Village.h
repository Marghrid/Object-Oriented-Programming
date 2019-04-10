// Village.h

#ifndef __VILLAGE__
#define __VILLAGE__

#include "Beneficiary.h"
#include "Individual.h"
#include <iostream>

class Village : public Beneficiary {
public:
	void add(Individual &individual) {
		Beneficiary::add(&individual);
	}

friend std::ostream &operator<<(std::ostream &os, const Village &v) {
		os << "Village - " << (Beneficiary&)v;
		return os;
	}

};

#endif
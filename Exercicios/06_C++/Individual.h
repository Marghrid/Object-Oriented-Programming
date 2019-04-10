// Individual.h

#ifndef __INDIVIDUAL__
#define __INDIVIDUAL__

#include "Beneficiary.h"
#include <iostream>

class Individual : public Beneficiary {
public:
	friend std::ostream &operator<<(std::ostream &os, const Individual &i) {
		os << "Individual - " << (Beneficiary&)i;
		return os;
	}

};

#endif
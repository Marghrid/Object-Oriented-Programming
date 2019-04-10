#ifndef __MEDIUMCAR__
#define __MEDIUMCAR__

#include <iostream>
#include "Economy.h"
#include "BasicCar.h"

class MediumCar : public BasicCar {
public:
	void swapEngine(Economy engine) {
		_originalEngine = engine;
	}

	virtual std::ostream &toOstream(std::ostream &os) const override { 
		os << "Medium ";
		BasicCar::toOstream(os);
		return os;
	}
};

#endif
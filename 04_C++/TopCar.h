//file: TopCar.h

#ifndef __TOPCAR__
#define __TOPCAR__

#include <iostream>
#include "MediumCar.h"
#include "Xtreme.h"

class TopCar : public MediumCar {
private:
	Xtreme *_extraEngine = NULL;
public:
	~TopCar() { delete _extraEngine; }

	void go() const override {
		MediumCar::go();
		if (_extraEngine)
			_extraEngine->turnOn();
	}

	void stop() const override  {
		MediumCar::stop();
		if (_extraEngine)
			_extraEngine->turnOff();
	}

	void addEngine(Xtreme *engine) {
		if (!_extraEngine)
			_extraEngine = engine;
		std::cout << "Can't add any more engines to this car." << std::endl;
	}

	virtual std::ostream &toOstream(std::ostream &os) const override { 
		os << "Top ";
		BasicCar::toOstream(os);
		return os;
	}
};

#endif
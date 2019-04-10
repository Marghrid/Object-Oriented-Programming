//file: BasicCar.h


#ifndef __BASICCAR__
#define __BASICCAR__

#include <iostream>
#include "Economy.h"

class BasicCar {
protected:
	Economy _originalEngine = Economy();
public:
	virtual void go() const {
		_originalEngine.turnOn();
		std::cout << *this << " is moving." << std::endl;
	}
	
	virtual void stop() const {
		_originalEngine.turnOff();
		std::cout << *this << " has stopped." << std::endl;
	}

	virtual std::ostream &toOstream(std::ostream &os) const { 
		os << "Car";
		return os;
	}

	friend std::ostream &operator<<(std::ostream &os, const BasicCar &e) {
		e.toOstream(os);
	}
};

#endif
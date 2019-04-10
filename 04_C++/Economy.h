/* Margarida Ferreira *
 *        80832       */
 
//file Economy.h

#ifndef __ECONOMY__
#define __ECONOMY__

#include <iostream>
#include "Engine.h"

class Economy : public Engine {
public:
	virtual std::ostream &toOstream(std::ostream &os) const override { 
		os << "Economy engine";
		return os;
	}
};

#endif
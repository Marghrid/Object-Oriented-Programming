#ifndef __XTREME__
#define __XTREME__

#include <iostream>
#include "Engine.h"

class Xtreme : public Engine {
public:
	virtual std::ostream &toOstream(std::ostream &os) const override { 
		os << "Xtreme engine";
		return os;
	}
};

#endif
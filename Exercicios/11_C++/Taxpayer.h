#ifndef __TAXPAYER__
#define __TAXPAYER__

#include "FlexyIRS.h"

class Taxpayer {
public:
	virtual double accept(FlexyIRS& irs) = 0;
};

#endif
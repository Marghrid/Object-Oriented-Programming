#ifndef __PERSON__
#define __PERSON__

#include "FlexyIRS.h"

class Person : public Taxpayer {
public:
	virtual double accept(FlexyIRS& irs) override {
		return irs.visitPerson(*this);
	}
};

#endif
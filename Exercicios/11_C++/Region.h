#ifndef __REGION__
#define __REGION__

#include "FlexyIRS.h"
#include <vector>

class Region : public Taxpayer {
private:
	std::vector<Company> _companies;
	
public:
	virtual double accept(FlexyIRS& irs) override {
		return irs->visitRegion(*this);
	}
};

#endif
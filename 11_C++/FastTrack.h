#ifndef __FASTTRACK__
#define __FASTTRACK__

#include "FlexyIRS.h"

class FastTrack : public FlexyIRS {
public:
	virtual double visitPerson(Person& person) override {
		return 1;
	}

	virtual double visitCompany(Company& company) override {
		double tax = 0;
		int size = company.size();
		for(int i = 0; i < size; i++)
			tax += company.get(i).accept(*this);
		if(size < 4) tax *= 0.4;
		return tax;
	}

//	virtual double visitRegion(Region* region) override {
//		double tax = 0;
//		bool discount = false;
//		for(int i = 0; i < region->size(); i++) {
//			Company *company = region->get(i);
//			tax += company->accept(this);
//			if(company->size() < 10) discount = true;
//		}
//		if(discount) tax *= 0.2;
//		return tax;
//	}
};

#endif
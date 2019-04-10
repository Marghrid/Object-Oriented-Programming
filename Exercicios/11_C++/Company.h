#ifndef __COMPANY__
#define __COMPANY__

#include "FlexyIRS.h"
#include <vector>

class Company : public Taxpayer {
private:
	std::vector<Person> _people;

public:
	double accept(FlexyIRS& irs) override {
		return irs.visitCompany(*this);
	}

	int size() const { return _people.size(); }

	Person& get(int i) { return _people.at(i); }

	void add(Person& p) { _people.push_back(p); }
};

#endif
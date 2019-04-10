#ifndef __FLEXYIRS__
#define __FLEXYIRS__

class Person;
class Company;
class Region;

class FlexyIRS {
public:
	virtual double visitPerson(Person& person) = 0;
	virtual double visitCompany(Company& company) = 0;
//	virtual double visitRegion(Region* region) = 0;
};

#endif
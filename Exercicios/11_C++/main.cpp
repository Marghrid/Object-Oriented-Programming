#include "Taxpayer.h"
#include "Person.h"
#include "Company.h"
//#include "Region.h"
#include "FastTrack.h"
#include "FlexyIRS.h"
#include <iostream>

int main() {
	FastTrack f;
	Company c;
	Person p1;
	Person p2;
	Person p3;
	Person p4;

	c.add(p1);
	c.add(p2);

	std::cout << c.accept(f) << std::endl << p3.accept(f) << std::endl;


	return 0;
}
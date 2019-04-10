#include "BasicCar.h"
#include "MediumCar.h"
#include "TopCar.h"
#include <iostream>


Economy e = Economy();

int main() {
	BasicCar car1;
	MediumCar car2;
	TopCar car3;
	Economy eng0;
	Economy eng1;
	Xtreme eng2;
	
	car1.go();

	car2.go();
	car2.stop();
	car2.swapEngine(eng0);

	car3.go();
	car3.stop();
	car3.swapEngine(eng1);
	car3.addEngine(&eng2);

	return 0;
}
#include "WashingMachine.h"
#include "MachineState.h"
#include "Ready.h"
#include "Washing.h"
#include "Open.h"
#include "Locked.h"
#include <iostream>

void wait_for(int seconds, WashingMachine &machine) {
	for( ; seconds > -1; seconds--)
		machine.tick();
}

int main() {
	WashingMachine machine;
	machine.closed();
	machine.power();
	wait_for(5000, machine);
	std::cout << "*Child presses the OPEN button before"
		<< "the machine is finished washing*" << std::endl;
	machine.open();
	wait_for(400, machine);
	wait_for(120, machine);
	machine.open();

	return 0;
}

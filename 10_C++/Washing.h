/*  FILE: Washing.h   **   Margarida Fereira   **   80832  */
#ifndef __WASHING__
#define __WASHING__

#include "MachineState.h"
#include "WashingMachine.h"

class Washing : public MachineState {
public:
	Washing(WashingMachine* machine) : MachineState(machine) {}

	void open() override;
	void power() override;
	void tick() override;
};

#endif
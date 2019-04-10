/*  FILE: Ready.h   **   Margarida Fereira   **   80832  */
#ifndef __READY__
#define __READY__

#include "MachineState.h"
#include "WashingMachine.h"

class Ready : public MachineState {
public:
	Ready(WashingMachine* machine) : MachineState(machine) {}

	void open() override;
	void power() override;
	void tick() override {}
};

#endif
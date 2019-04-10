/*  FILE: Locked.h   **   Margarida Fereira   **   80832  */
#ifndef __LOCKED__
#define __LOCKED__

#include "MachineState.h"
#include "WashingMachine.h"

class Locked : public MachineState {
public:
	Locked(WashingMachine* machine) : MachineState(machine) {}

	void open() override;
	void power() override {}
	void tick() override;
};

#endif
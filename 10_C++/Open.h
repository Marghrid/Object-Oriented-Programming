/*  FILE: Open.h   **   Margarida Fereira   **   80832  */
#ifndef __OPEN__
#define __OPEN__

#include "MachineState.h"
#include "WashingMachine.h"

class Open : public MachineState {
public:
	Open(WashingMachine* machine) : MachineState(machine) {}

	void open() override;
	void closed() override;
	void power() override;
	void tick() override {}
};

#endif

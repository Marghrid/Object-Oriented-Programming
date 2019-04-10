/*  FILE:MachineState.h   **   Margarida Ferreira   **   80832  */
#ifndef __MACHINESTATE__
#define __MACHINESTATE__

#include <iostream>

class WashingMachine;

class MachineState {
protected:
	WashingMachine *_machine;
	int _ticks;
public:
	MachineState(WashingMachine* machine) {
		_machine = machine;
		_ticks = 0;
	}

	virtual ~MachineState() {}
	virtual void open()   = 0;
	virtual void closed() {}
 	virtual void power()  = 0;
 	virtual void tick()   = 0;
};

#endif
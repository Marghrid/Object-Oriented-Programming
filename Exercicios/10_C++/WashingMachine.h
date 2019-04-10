/*  FILE: WashingMachine.h   **   Margarida Ferreira   **   80832  */
#ifndef __WASHINGMACHINE__
#define __WASHINGMACHINE__

#include "MachineState.h"

class WashingMachine {
private:
	MachineState* _state;

public:
	WashingMachine();
	virtual ~WashingMachine() { delete _state; }

	void setState(MachineState* state) {
		delete _state;
		_state = state;
	}

	void power()  { _state->power(); }
	void open()   { _state->open();  }
	void closed() { _state->closed();}
	void tick()   { _state->tick();  }
};

#endif
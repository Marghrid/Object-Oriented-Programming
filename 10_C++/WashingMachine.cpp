/*  FILE: WashingMachine.cpp   **   Margarida Ferreira   **   80832  */
#include "WashingMachine.h"
#include "MachineState.h"
#include "Open.h"

WashingMachine::WashingMachine() {
	_state = new Open(this);
}
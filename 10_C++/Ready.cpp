/*  FILE: Ready.cpp   **   Margarida Fereira   **   80832  */
#include "Ready.h"
#include "Washing.h"
#include "Open.h"

void Ready::open() {
	std::cout << "Door open." << std::endl;
	_machine->setState(new Open(_machine));
}

void Ready::power() {
	std::cout << "Power ON" << std::endl;
	_machine->setState(new Washing(_machine));
}

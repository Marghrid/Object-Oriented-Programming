/*  FILE: Locked.cpp   **   Margarida Fereira   **   80832  */
#include "Locked.h"
#include "Ready.h"
#include <iostream>

void Locked::open() {
	std::cout << "Machine cannot be opened at this time." << std::endl;
}

void Locked::tick() {
	if(_ticks++ >= 120)
		std::cout << "Machine door can now be opened." << std::endl;
		_machine->setState(new Ready(_machine));
}

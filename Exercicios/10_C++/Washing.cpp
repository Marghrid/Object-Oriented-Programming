/*  FILE: Washing.cpp   **   Margarida Fereira   **   80832  */
#include "Washing.h"
#include "Locked.h"
#include <iostream>

void Washing::open() {
	std::cout << "Machine cannot be opened at this time." << std::endl;
}

void Washing::power() {
	std::cout << "Machine interrupted while washing." << std::endl;
	_machine->setState(new Locked(_machine));
}

void Washing::tick() {
	if(_ticks++ >= 5400) {
		std::cout << "Machine finished washing." << std::endl;
		_machine->setState(new Locked(_machine));
	}
}
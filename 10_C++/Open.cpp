/*  FILE: Open.cpp   **   Margarida Fereira   **   80832  */
#include "Open.h"
#include "Ready.h"
#include <iostream>

void Open::open() {
    std::cout << "Machine is already open." << std::endl;
}

void Open::closed() {
    std::cout << "The door has been closed. Press POWER to wash." << std::endl;
    _machine->setState(new Ready(_machine));
}

void Open::power() {
    std::cout << "Please close the door before washing." << std::endl;
}

/*   File Animal.cpp  *
 * Margarida Ferreira *
 *        80832       */

#include <iostream>
#include "Animal.h"

Animal::Animal(int age) { 
	_age = age;
	_name = "";
}

Animal::Animal(std::string name, int age) {
	_name = name;
	_age = age;
}

void Animal::sleep() const {
	std::cout << name() << " is sleeping." << std::endl;
}


bool Animal::operator==(const Animal &a) const {
	return name() == a.name() && age() == a.age();
}

std::ostream &operator<<(std::ostream &os, const Animal &animal) {
    os << "Animal, " << (animal.name() != "" ? animal.name() : "unnamed" )
    	<< ", " << animal.age();
	return os;
}
/*    File Dog.cpp    *
 * Margarida Ferreira *
 *        80832       */

#include <iostream>
#include "Dog.h"
#include "Animal.h"

Dog::Dog(std::string name, int age, double weight)
	: Animal(name, age) {
	_weight = weight;
}

void Dog::bark() const {
	std::cout << name() << " is barking." << std::endl;
}

bool Dog::operator==(const Dog &d) const {
	return Animal::operator==(d) && weight() == d.weight();
}

std::ostream &operator<<(std::ostream &os, const Dog &dog) {
    os << "Dog, ";
    operator<<(os, (Animal&)dog);
    os << ", " << dog.weight() << std::endl;
	return os;
}
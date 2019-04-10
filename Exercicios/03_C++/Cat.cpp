/*    File Cat.cpp    *
 * Margarida Ferreira *
 *        80832       */

#include <iostream>
#include "Cat.h"

Cat::Cat(std::string name, int age, int lives)
	: Animal(name, age) {
	_lives = lives;
}

void Cat::climb() const {
		std::cout << name() << " is climbing." << std::endl;
}

bool Cat::operator==(const Cat &c) const {
	return Animal::operator==(c) && _lives == c.lives();
}

std::ostream &operator<<(std::ostream &os, const Cat &cat) {
    os << "Cat, " << cat.name() << ", " << cat.age();
	return os;
}
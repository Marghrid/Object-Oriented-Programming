/*    File main.cpp   *
 * Margarida Ferreira *
 *        80832       */

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
	Animal a("White", 2);
	Animal a2(3);
	Dog d("Blue", 2, 3.14);
	Cat c("Yellow", 3, 35);

	std::cout << a << std::endl;
	std::cout << a2 << std::endl;
	std::cout << d << std::endl;
	std::cout << c << std::endl;

	a.sleep();
	d.bark();
	d.sleep();
	c.climb();
	
	Cat c1("Foi às filhozes", 2, 9);
	Cat c2("Foi às filhozes", 2, 9);

	std::cout << (c1 == c2) << std::endl; // prints 1;
	std::cout << (c1 == c) << std::endl;  // prints 0;

	return 0;
}
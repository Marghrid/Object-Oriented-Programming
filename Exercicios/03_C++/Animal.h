/*    File Animal.h   *
 * Margarida Ferreira *
 *        80832       */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal {
private:
	std::string _name;
	int _age;

public:
	Animal(int age);
	Animal(std::string name, int age);

	std::string name() const { return _name; }
	void set_name(std::string name) { _name = name; }

	int age() const { return _age; }
	void set_age(int age) { _age = age; }

	void sleep() const;

	bool operator==(const Animal &a) const;

	friend std::ostream &operator<<(std::ostream &os, const Animal &animal);

};

#endif
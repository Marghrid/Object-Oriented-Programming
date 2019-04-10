/*     File Dog.h     *
 * Margarida Ferreira *
 *        80832       */

#ifndef __DOG_H__
#define __DOG_H__

#include <iostream>
#include "Animal.h"

class Dog : public Animal {
private:
	double _weight;

public:
	Dog(std::string name, int age, double weight);

	double weight() const { return _weight; }
	void set_weight(double weight) { _weight = weight; }

	void bark() const;

	bool operator==(const Dog &d) const;

	friend std::ostream &operator<<(std::ostream &os, const Dog &dog);
};

#endif
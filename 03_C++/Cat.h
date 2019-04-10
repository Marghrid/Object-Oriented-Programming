/*     File Cat.h     *
 * Margarida Ferreira *
 *        80832       */

#ifndef __CAT_H__
#define __CAT_H__

#include <iostream>
#include "Animal.h"

class Cat : public Animal {
private:
	int _lives;

public:
	Cat(std::string name, int age, int lives);

	int lives() const { return _lives; }
	void set_lives(int lives) { _lives = lives; }
	
	void climb() const; 

	bool operator==(const Cat &c) const;

	friend std::ostream &operator<<(std::ostream &os, const Cat &cat);
};

#endif
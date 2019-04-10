#ifndef __CAT__
#define __CAT__

#include <iostream>

class Cat {
private:
	double _age;
	std::string _name;

public:
	Cat() {
		_name = "anonimo"; _age = 0;
	}

	Cat(std::string name, double age) {
		_name = name; _age = age;
	}

	friend std::ostream& operator<<(std::ostream& os, Cat& cat) {
		os << cat._name << ' ' << cat._age;
		return os;
	}

	friend std::istream& operator>>(std::istream& is, Cat& cat) {
		is >> cat._name >> cat._age;
		return is;
	}
};

#endif
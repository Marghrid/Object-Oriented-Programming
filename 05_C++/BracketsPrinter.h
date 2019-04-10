#include "Printer.h"
#include <iostream>
#include <sstream>

class BracketsPrinter : public Printer {
public:
	std::string format(int number) const override {
		std::ostringstream s;
		s << "[" << number << "]";
		return s.str();
	}
};
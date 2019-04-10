#include "Printer.h"
#include <iostream>
#include <sstream>

class DuplicatePrinter : public Printer {
public:
	std::string format(int number) const override {
		std::ostringstream s;
		s << number << " " << number;
		return s.str();
	}
};
/* FILE: IntValue.h   **   Margarida Ferreira   **   80832 */

#ifndef __INTLITERAL___
#define __INTLITERAL___

#include "Literal.h"
#include <iostream>

class IntLiteral : public Literal {
private:
	int _value;

public:
	IntLiteral(int value) { _value = value; }

	int value() const { return _value; }

	std::ostream &toOstream(std::ostream &os) const override {
		os << value();
		return os;
	}

	// void accept(Visitor v) { v.visit(this); }
};

#endif
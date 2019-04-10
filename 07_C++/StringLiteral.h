/* FILE: StringValue.h	**   Margarida Ferreira   **   80832 */

#ifndef __STRINGLITERAL___
#define __STRINGLITERAL___

#include "Literal.h"
#include <iostream>

class StringLiteral : public Literal {
private:
	std::string _value;

public:
	StringLiteral(std::string value) { _value = value; }

	std::string value() const { return _value; }

	std::ostream &toOstream(std::ostream &os) const override {
		os << value();
		return os;
	}

	// void accept(Visitor v) { v.visit(this); }
};

#endif
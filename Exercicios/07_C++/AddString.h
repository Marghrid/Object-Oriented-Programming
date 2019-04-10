/* FILE: AddString.h   **   Margarida Ferreira   **   80832 */

#ifndef __ADDSTRING__
#define __ADDSTRING__

#include "Literal.h"
#include <iostream>

class AddString: public CellValue {
private:
	StringLiteral _arg1;
	StringLiteral _arg2;
public:
	AddString(StringLiteral arg1, StringLiteral arg2)
	: _arg1(arg1), _arg2(arg2) {}

	StringLiteral evaluate() const {
		return StringLiteral(_arg1.value() + _arg2.value());
	}

	std::ostream &toOstream(std::ostream &os) const override {
		os << _arg1 << " + " << _arg2 << " = " << evaluate().value();
		return os;
	}
};

#endif
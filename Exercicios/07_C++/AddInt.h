/* FILE: AddInt.h   **   Margarida Ferreira   **   80832 */

#ifndef __ADDINT__
#define __ADDINT__

#include "Literal.h"
#include <iostream>

class AddInt : public CellValue {
private:
	IntLiteral _arg1;
	IntLiteral _arg2;
public:
	AddInt(IntLiteral arg1, IntLiteral arg2) 
	: _arg1(arg1), _arg2(arg2) {}

	IntLiteral evaluate() const {
		return IntLiteral(_arg1.value() + _arg2.value());
	}

	std::ostream &toOstream(std::ostream &os) const override {
		os << _arg1 << " + " << _arg2 << " = " << evaluate().value();
		return os;
	}
};

#endif
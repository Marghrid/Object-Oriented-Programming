/* FILE: CellValue.h   **   Margarida Ferreira   **   80832 */

// class CellValue is not meant to be instanciated.
#ifndef __CELLVALUE__
#define __CELLVALUE__

//#include "Literal.h"
#include <iostream>

class CellValue {
private:

public:
	//virtual ~CellValue() {}

	virtual std::ostream &toOstream(std::ostream &os) const {
		os << "sdfghjkl";
		return os;
	}

	friend std::ostream &operator<<(std::ostream &os, const CellValue &cellValue) {
		cellValue.toOstream(os);
		return os;
	}
};

#endif
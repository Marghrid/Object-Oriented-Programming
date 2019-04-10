/* FILE: Cell.h   **   Margarida Ferreira   **   80832 */

#ifndef __CELL__
#define __CELL__

#include "Position.h"
#include "CellValue.h"
#include <vector>
#include <iostream>

class Cell {
	
	CellValue *_value;

public:
	Cell(CellValue *value) {
		_value = value;
	}

	//~Cell() { delete _value; }

	CellValue *cellValue() const { return _value; }

	friend std::ostream &operator<<(std::ostream &os, const Cell &cell) {
		os << *cell.cellValue() << std::endl;
		return os;
	}
};

#endif
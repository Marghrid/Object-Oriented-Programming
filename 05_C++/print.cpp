/* Margarida Ferreira, 80832 */

//File Printer.h

#ifndef __PRINTER__
#define __PRINTER__

#include <iostream>

class Printer {
public:
	virtual std::string format(int number) const=0;
};

#endif


//File DuplicatePrinter.h

#ifndef __DUPLICATEPRINTER__
#define __DUPLICATEPRINTER__

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

#endif


//File BracketsPrinter.h

#ifndef __BRACKETSPRINTER__
#define __BRACKETSPRINTER__

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

#endif




















//Margarida Ferreira, 80832
//File Table.h

#ifndef __TABLE__
#define __TABLE__

#include "Printer.h"

class Table {
private:
	int *_numbers;
	int _size;

public:
	Table(int size) {
		_numbers = new int[size];
		_size = size;

		for(int i = 0; i < size; ++i)
			_numbers[i] = 0;
	}

	~Table() { delete _numbers; }

	void print(Printer const &printer) const {
		for (int i = 0; i < _size; ++i) {
			std::cout << printer.format(getValue(i)) << std::endl;
		}
	}

	void setValue(int position, int value) {
		_numbers[position] = value;
	}

	int getValue(int position) const { return _numbers[position]; }
};

#endif


//File main.cpp

#include "Table.h"
#include "BracketsPrinter.h"
#include "DuplicatePrinter.h"

int main() {
	BracketsPrinter bp;
	DuplicatePrinter dp;

	Table t(5);

	t.setValue(0, 1);
	t.setValue(1, 2);
	t.setValue(2, 4);
	t.setValue(3, 7);
	t.setValue(4, 3456);

	t.print(bp);
	t.print(dp);

	return 0;
}
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
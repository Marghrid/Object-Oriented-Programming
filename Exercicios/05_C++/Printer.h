#ifndef __PRINTER__
#define __PRINTER__

#include <iostream>

class Printer {
public:
	virtual std::string format(int number) const=0;
};

#endif
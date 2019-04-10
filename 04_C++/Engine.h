#ifndef __ENGINE__
#define __ENGINE__

class Engine {
public:
	virtual void turnOn() const {
		std::cout << *this << " is ON." << std::endl;
	}

	virtual void turnOff() const {
		std::cout << *this << " is OFF." << std::endl;
	}

};

#endif
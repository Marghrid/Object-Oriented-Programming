/* FILE: Position.h   **   Margarida Ferreira   **   80832 */

#ifndef __POSITION___
#define __POSITION___

#include <utility>
#include <iostream>

class Position {
private:
	std::pair<int, int> _coordinates;
public:
	Position(int line, int column) {
		_coordinates = std::make_pair(line, column);
	}

	int line() const {
		return _coordinates.first;
	}

	int column() const {
		return _coordinates.second;
	}

	bool operator<(const Position &other) const {
		if(other.line() != line())
			return line() < other.line();
		return column() < other.column();
	}

	friend std::ostream &operator<<(std::ostream &os, const Position &p) {
		os << "[" << p.line() << ", " << p.column() << "]";
		return os;
	}


};

#endif
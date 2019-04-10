/* FILE: Spreadsheet.h   **   Margarida Ferreira   **   80832 */

#ifndef __SPREADSHEET__
#define __SPREADSHEET__

#include "Position.h"
#include "Cell.h"
#include <map>
#include <vector>

// #define MAP_ENTRY_TYPE std::vector<int>, Cell

class Spreadsheet {
private:
	std::map<Position, Cell*> _cells;

public:

	void addCell(int line, int column, Cell cell) {
		Position p(line, column);
		_cells.insert(std::pair<Position, Cell*>(p, &cell));
	}

	Cell readCell(Position position) {
		return *_cells.at(position);
	}

	void deleteCell(Position position) {
		_cells.erase(position);
	}

	/*void moveCell(Position oldPosition, Position newPosition) {
		Cell oldCell = *_cells.at(oldPosition);
		Cell newCell(newPosition, oldCell.cellValue());
		addCell(newCell);
		deleteCell(oldPosition);
	}*/

	std::ostream &toOstream(std::ostream &os) {
		std::map<Position, Cell*>::iterator it;
		for(it = _cells.begin(); it != _cells.end(); it++)
			os << it->first << ":\t" << *(it->second) << std::endl;
		return os;
	}

	friend std::ostream &operator<<(std::ostream &os, Spreadsheet &ss) {
		ss.toOstream(os);
		return os;
	}
};

#endif
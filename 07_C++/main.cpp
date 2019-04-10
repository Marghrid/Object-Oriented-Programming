// FILE: main.cpp   **   Margarida Ferreira   **   80832 */
#include "Cell.h"
#include "CellValue.h"
#include "IntLiteral.h"
#include "StringLiteral.h"
#include "Spreadsheet.h"
#include "AddInt.h"
#include "AddString.h"

#include <iostream>

int main() {

	Spreadsheet s;

	Cell c00(new IntLiteral(2));
	s.addCell(0, 0, c00);

	Cell c01(new AddInt(IntLiteral(1), IntLiteral(3)));
	s.addCell(0, 1, c01);

	Cell c10(new StringLiteral("One String "));
	s.addCell(1, 0, c10);
	
	Cell c11(new AddString(StringLiteral("1010"), StringLiteral("1111")));
	s.addCell(1, 1, c11);


	std::cout << s << std::endl;

	return 0;

}
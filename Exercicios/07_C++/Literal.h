/* FILE: Literal.h   **   Margarida Ferreira   **   80832 */

#ifndef __LITERAL__
#define __LITERAL__

#include "CellValue.h"

class Literal : public CellValue {
public:
	Literal *evaluate() { return this; }
};

#endif
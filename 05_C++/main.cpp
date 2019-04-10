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
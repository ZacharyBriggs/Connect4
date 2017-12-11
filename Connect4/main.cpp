#include "Cell.h"
#include <cassert>
#include "Column.h"

int main()
{
	char x = 'x';
	char y = 'y';
	Cell X(x);
	Cell Y(y);
	Cell X2(x);
	assert(X == X);
	Column colTest(5);
	colTest.m_LastOccupied == 7;
	colTest.PlaceToken(x);
}

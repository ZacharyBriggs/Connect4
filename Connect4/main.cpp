#include "Cell.h"
#include <cassert>
#include "Column.h"
#include "ConnectFour.h"
int main()
{
	ConnectFour Board(8,7);
	while (Board.CheckVictory() == false)
		Board.Update();
}
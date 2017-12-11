#include "ConnectFour.h"
#include <iostream>
ConnectFour::ConnectFour()
{
}
ConnectFour::ConnectFour(int numCols, int colHeight)
{
	m_Columns = new Column[numCols];
	m_NumCols = numCols;
	m_ColHeights = colHeight;
}
bool ConnectFour::Update()
{
	PrintBoard();
	std::cout << "Choose a column to drop you piece into.\n";
	return false;
}
bool ConnectFour::PlacePiece(int col)
{
	m_Columns[col].PlaceToken(m_ActiveToken);
	return false;
}
bool ConnectFour::CheckVictory()
{
	if()
	return false;
}
void ConnectFour::PrintBoard()
{
}
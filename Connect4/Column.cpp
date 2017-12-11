#include "Column.h"
Column::Column()
{
	m_Height = 7;
	m_Cells = new Cell[7];
	m_LastOccupied = 0;
}
Column::Column(int height)
{
	m_Height = height;
	m_Cells = new Cell[7];
	m_LastOccupied = 0;
}
bool Column::PlaceToken(char token)
{
	if (IsFull() == false);
	{
		m_Cells->m_Token = token;
		m_LastOccupied++;
	}
	return false;
}
bool Column::IsFull()
{
	if (m_LastOccupied == m_Height)
		return false;
	return true;
}
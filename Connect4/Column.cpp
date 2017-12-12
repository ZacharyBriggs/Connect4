#include "Column.h"
Column::Column()
{
	m_Height = 7;
	m_Cells = new Cell[m_Height];
	m_LastOccupied = 0;
}
Column::Column(int height)
{
	m_Height = height;
	m_Cells = new Cell[m_Height];
	m_LastOccupied = 0;
}
bool Column::PlaceToken(char token)
{
	if (!IsFull());
	{
		m_Cells[m_LastOccupied].m_Token = token;
		m_LastOccupied++;
	}
	if (IsFull())
	{
		std::cout << "That column is full.\n";
		system("pause");
	}
	return false;
}
bool Column::IsFull()
{
	if (m_LastOccupied == m_Height + 1)
		return true;
	return false;
}
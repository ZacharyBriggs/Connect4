#include "ConnectFour.h"
ConnectFour::ConnectFour()
{
}
ConnectFour::ConnectFour(int numCols, int colHeight)
{
	m_NumCols = numCols;
	m_ColHeights = colHeight;
	m_Columns = new Column[numCols];
	for (int i = 0; i < m_NumCols; i++)
		m_Columns[i] = Column(colHeight);
	m_ActiveToken = 'O';
	m_State = eState::PLAYER_ONE;
}
bool ConnectFour::Update()
{
	m_ActiveToken == 88 ? m_ActiveToken = 79 : m_ActiveToken = 88;
	PrintBoard();
	int col;
	std::cout << m_ActiveToken << " choose a column to drop you piece into.\n";
	std::cin >> col;
	while (col > 7 || col < 1)
	{
		std::cout << "Invalid input.";
		std::cin >> col;
	}
	PlacePiece(col-1);
	return false;
}
bool ConnectFour::PlacePiece(int col)
{
	m_Columns[col].PlaceToken(m_ActiveToken);
	return false;
}
bool ConnectFour::CheckVictory()
{
	if (m_State == eState::PLAYER_ONE || m_State == eState::PLAYER_TWO)
		m_State = eState::CHECK_VICTORY;
	if(m_State == eState::CHECK_VICTORY)
	for (int i = 0; i < m_NumCols;i++)
	{
		for (int j = 0; j < m_ColHeights; j++)
		{
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i].m_Cells[j + 1]
				&& m_Columns[i].m_Cells[j + 1] == m_Columns[i].m_Cells[j + 2] && m_Columns[i].m_Cells[j + 2] == m_Columns[i].m_Cells[j + 3])
			{
				PrintBoard();
				std::cout << m_ActiveToken << " wins!\n";
				system("pause");
				m_State = eState::GAME_OVER;
				return true;
			}
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i+1].m_Cells[j]
				&& m_Columns[i+1].m_Cells[j] == m_Columns[i+2].m_Cells[j] && m_Columns[i+2].m_Cells[j] == m_Columns[i+3].m_Cells[j])
			{
				PrintBoard();
				std::cout << m_ActiveToken << " wins!\n";
				system("pause");
				m_State = eState::GAME_OVER;
				return true;
			}
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i + 1].m_Cells[j+1]
				&& m_Columns[i + 1].m_Cells[j+1] == m_Columns[i + 2].m_Cells[j+2] && m_Columns[i + 2].m_Cells[j+2] == m_Columns[i + 3].m_Cells[j+3])
			{
				PrintBoard();
				std::cout << m_ActiveToken << " wins!\n";
				system("pause");
				m_State = eState::GAME_OVER;
				return true;
			}
			if (j == 0)
				continue;
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i - 1].m_Cells[j + 1]
				&& m_Columns[i - 1].m_Cells[j + 1] == m_Columns[i - 2].m_Cells[j + 2] && m_Columns[i - 2].m_Cells[j + 2] == m_Columns[i - 3].m_Cells[j + 3])
			{
				PrintBoard();
				std::cout << m_ActiveToken << " wins!\n";
				system("pause");
				m_State = eState::GAME_OVER;
				return true;
			}
		}
	}
	return false;
}
void ConnectFour::PrintBoard()
{
	system("CLS");
	for (int i = m_ColHeights; i > 0; i-=1)
	{
		for (int j = 0; j < m_NumCols-1; j++)
			std::cout << "|" << m_Columns[j].m_Cells[i-1].m_Token << "|";
		std::cout << std::endl;
	}

}
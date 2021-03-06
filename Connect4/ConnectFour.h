#pragma once
#include "Column.h"
#include <stdlib.h>
#include <iostream>

class ConnectFour
{
public:
	Column *m_Columns;
	char m_ActiveToken;
	int m_NumCols;
	int m_ColHeights;
	ConnectFour();
	ConnectFour(int numCols, int colHeight);
	bool Update();
	bool PlacePiece(int col);
	bool CheckVictory();
	void PrintBoard();
	enum eState { INIT, PLAYER_ONE, PLAYER_TWO, CHECK_VICTORY, GAME_OVER, EXIT };
	eState m_State = eState::INIT;
};
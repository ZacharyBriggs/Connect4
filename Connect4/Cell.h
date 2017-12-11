#pragma once
#include <cstddef>
class Cell
{
public:
	char m_Token;
	Cell();
	Cell(char tokens);
	bool operator ==(Cell &other);
};
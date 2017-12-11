#include "Cell.h"
Cell::Cell()
{
	m_Token = 0;
}
Cell::Cell(char tokens)
{
	m_Token = tokens;
}
bool Cell::operator==(Cell & other)
{
	return m_Token == other.m_Token;
}
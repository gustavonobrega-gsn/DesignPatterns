#include "../inc/TerminalExpression.hpp"

TerminalExpression::TerminalExpression(int value)
:m_value(value)
{

}

TerminalExpression::~TerminalExpression()
{

}

bool TerminalExpression::interpret() const
{
	if(m_value == 0)
	{
		return false;
	}

	return true;
}

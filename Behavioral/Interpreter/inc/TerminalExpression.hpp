#ifndef TERMINALEXPRESSION_HPP
#define TERMINALEXPRESSION_HPP

#include "AbstractExpression.hpp"

class TerminalExpression : public AbstractExpression
{
public:

	TerminalExpression(int value);
	virtual ~TerminalExpression();

	bool interpret() const override;

private:

	int m_value;
};

#endif

#include "../inc/NonTerminalExpressionAND.hpp"

NonTerminalExpressionAND::NonTerminalExpressionAND(AbstractExpression* const abstract_expression1,AbstractExpression* const abstract_expression2)
:m_abstract_expression1(abstract_expression1),m_abstract_expression2(abstract_expression2)
{

}

NonTerminalExpressionAND::~NonTerminalExpressionAND()
{

}

bool NonTerminalExpressionAND::interpret() const
{
	return m_abstract_expression1->interpret() && m_abstract_expression2->interpret();
}

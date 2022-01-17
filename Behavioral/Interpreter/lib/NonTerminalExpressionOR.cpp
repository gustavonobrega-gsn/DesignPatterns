#include "../inc/NonTerminalExpressionOR.hpp"

NonTerminalExpressionOR::NonTerminalExpressionOR(AbstractExpression* const abstract_expression1,AbstractExpression* const abstract_expression2)
:m_abstract_expression1(abstract_expression1),m_abstract_expression2(abstract_expression2)
{

}

NonTerminalExpressionOR::~NonTerminalExpressionOR()
{

}

bool NonTerminalExpressionOR::interpret() const
{
	return m_abstract_expression1->interpret() || m_abstract_expression2->interpret();
}

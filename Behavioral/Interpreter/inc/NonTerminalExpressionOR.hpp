#ifndef NONTERMINALEXPRESSIONOR_HPP
#define NONTERMINALEXPRESSIONOR_HPP

#include "AbstractExpression.hpp"

class NonTerminalExpressionOR : public AbstractExpression
{
public:

	NonTerminalExpressionOR(AbstractExpression* const abstract_expression1,AbstractExpression* const abstract_expression2);
	virtual ~NonTerminalExpressionOR();

	bool interpret() const override;

private:

	AbstractExpression* m_abstract_expression1;
	AbstractExpression* m_abstract_expression2;

};

#endif

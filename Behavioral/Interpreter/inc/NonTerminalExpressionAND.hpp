#ifndef NONTERMINALEXPRESSIONAND_HPP
#define NONTERMINALEXPRESSIONAND_HPP

#include "AbstractExpression.hpp"

class NonTerminalExpressionAND : public AbstractExpression
{
public:

	NonTerminalExpressionAND(AbstractExpression* const abstract_expression1,AbstractExpression* const abstract_expression2);
	virtual ~NonTerminalExpressionAND();

	bool interpret() const override;

private:

	AbstractExpression* m_abstract_expression1;
	AbstractExpression* m_abstract_expression2;

};

#endif

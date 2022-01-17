#include "../inc/TerminalExpression.hpp"
#include "../inc/NonTerminalExpressionAND.hpp"
#include "../inc/NonTerminalExpressionOR.hpp"

#include <iostream>

int main()
{
	AbstractExpression* abstract_expression_true = new TerminalExpression(1);
	AbstractExpression* abstract_expression_false = new TerminalExpression(0);

	AbstractExpression* abstract_expression_OR1 = new NonTerminalExpressionOR(abstract_expression_false,abstract_expression_false);
	AbstractExpression* abstract_expression_OR2 = new NonTerminalExpressionOR(abstract_expression_false,abstract_expression_true);

	AbstractExpression* abstract_expression_AND = new NonTerminalExpressionAND(abstract_expression_OR1,abstract_expression_OR2);

	std::cout << abstract_expression_OR1->interpret() << std::endl;
	std::cout << abstract_expression_OR2->interpret() << std::endl;
	std::cout << abstract_expression_AND->interpret() << std::endl;

	delete abstract_expression_true;
	delete abstract_expression_false;
	delete abstract_expression_OR1;
	delete abstract_expression_OR2;
	delete abstract_expression_AND;

	return 0;
}

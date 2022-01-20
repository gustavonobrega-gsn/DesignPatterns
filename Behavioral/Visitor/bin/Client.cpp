#include "../inc/ConcreteProductA.hpp"
#include "../inc/ConcreteProductB.hpp"
#include "../inc/ConcreteVisitor.hpp"

int main()
{

	AbstractVisitor* abstract_visitor = new ConcreteVisitor();

	AbstractProduct* abstract_product;

	abstract_product = new ConcreteProductA();
	abstract_product->accept(abstract_visitor);
	delete abstract_product;

	abstract_product = new ConcreteProductB();
	abstract_product->accept(abstract_visitor);
	delete abstract_product;

	delete abstract_visitor;


	return 0;
}

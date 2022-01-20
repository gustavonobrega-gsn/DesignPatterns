#include "../inc/ConcreteProductA.hpp"
#include "../inc/ConcreteProductB.hpp"

int main()
{

	AbstractProduct* abstract_product;

	abstract_product = new ConcreteProductA();
	abstract_product->template_method();
	delete abstract_product;

	abstract_product = new ConcreteProductB();
	abstract_product->template_method();
	delete abstract_product;

	return 0;
}

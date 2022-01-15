#include "../inc/ConcreteProductDecoratorA.hpp"
#include "../inc/ConcreteProductDecoratorB.hpp"

#include "../inc/ConcreteProduct.hpp"

int main()
{

	AbstractProduct* abstract_product = new ConcreteProduct();
	abstract_product->operation();


	AbstractProduct* abstract_product_decorator;

	abstract_product_decorator = new ConcreteProductDecoratorA(abstract_product);
	abstract_product_decorator->operation();

	delete abstract_product_decorator;


	abstract_product_decorator = new ConcreteProductDecoratorB(abstract_product);
	abstract_product_decorator->operation();

	delete abstract_product_decorator;


	delete abstract_product;

	return 0;
}

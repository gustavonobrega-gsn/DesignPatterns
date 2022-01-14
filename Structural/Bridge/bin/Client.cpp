
#include "../inc/ConcreteProductAbstractionA.hpp"
#include "../inc/ConcreteProductAbstractionB.hpp"

#include "../inc/ConcreteProductImplementation1.hpp"
#include "../inc/ConcreteProductImplementation2.hpp"

int main()
{
	AbstractProductImplementation* abstract_product_impl1 = new ConcreteProductImplementation1();
	AbstractProductImplementation* abstract_product_impl2 = new ConcreteProductImplementation2();

	AbstractProductAbstraction* abstract_product_abstract;

	abstract_product_abstract = new ConcreteProductAbstractionA(abstract_product_impl1);
	abstract_product_abstract->operation();
	delete abstract_product_abstract;

	abstract_product_abstract = new ConcreteProductAbstractionA(abstract_product_impl2);
	abstract_product_abstract->operation();
	delete abstract_product_abstract;

	abstract_product_abstract = new ConcreteProductAbstractionB(abstract_product_impl1);
	abstract_product_abstract->operation();
	delete abstract_product_abstract;

	abstract_product_abstract = new ConcreteProductAbstractionB(abstract_product_impl2);
	abstract_product_abstract->operation();
	delete abstract_product_abstract;

	delete abstract_product_impl1;
	delete abstract_product_impl2;

	return 0;
}

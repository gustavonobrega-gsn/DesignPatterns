#include "../inc/ConcreteProductA.hpp"
#include "../inc/ConcreteProductB.hpp"
#include "../inc/ConcreteMediator.hpp"

int main()
{
	AbstractProduct* abstract_product1;
	AbstractProduct* abstract_product2;

	AbstractMediator* abstract_mediator = new ConcreteMediator(abstract_product1,abstract_product2);

	abstract_product1 = new ConcreteProductA(abstract_mediator);
	abstract_product2 = new ConcreteProductB(abstract_mediator);

	abstract_product1->operation1();
	abstract_product2->operation1();


	delete abstract_mediator;
	delete abstract_product1;
	delete abstract_product2;

	return 0;
}

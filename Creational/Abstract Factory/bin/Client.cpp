#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteFactoryB.hpp"

int main()
{
	const AbstractFactory* abst_factory;

	const AbstractProductA* abst_a;
	const AbstractProductB* abst_b;
	const AbstractProductC* abst_c;

	abst_factory = new ConcreteFactoryA();

	abst_a = abst_factory->createProductA();
	abst_b = abst_factory->createProductB();
	abst_c = abst_factory->createProductC();

	abst_a->operationA();
	abst_b->operationB();
	abst_c->operationC();

	delete abst_a;
	delete abst_b;
	delete abst_c;

	delete abst_factory;


	abst_factory = new ConcreteFactoryB();

	abst_a = abst_factory->createProductA();
	abst_b = abst_factory->createProductB();
	abst_c = abst_factory->createProductC();

	abst_a->operationA();
	abst_b->operationB();
	abst_c->operationC();

	delete abst_a;
	delete abst_b;
	delete abst_c;

	delete abst_factory;

    return 0;
}





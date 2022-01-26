#include "../inc/ConcreteFactory1.hpp"
#include "../inc/ConcreteFactory2.hpp"

int main()
{
	std::unique_ptr<AbstractFactory> abst_factory;

	std::unique_ptr<AbstractProductA> abst_a;
	std::unique_ptr<AbstractProductB> abst_b;
	std::unique_ptr<AbstractProductC> abst_c;


	abst_factory = std::unique_ptr<AbstractFactory>(new ConcreteFactory1());

	abst_a = abst_factory->createProductA();
	abst_b = abst_factory->createProductB();
	abst_c = abst_factory->createProductC();

	abst_a->operationA();
	abst_b->operationB();
	abst_c->operationC();



	abst_factory.reset(new ConcreteFactory2());

	abst_a = abst_factory->createProductA();
	abst_b = abst_factory->createProductB();
	abst_c = abst_factory->createProductC();

	abst_a->operationA();
	abst_b->operationB();
	abst_c->operationC();


	return 0;
}

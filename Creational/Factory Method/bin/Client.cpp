#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteFactoryB.hpp"

int main()
{
	const AbstractFactory* abst_factory;
	
	abst_factory = new ConcreteFactoryA();
	abst_factory->operation();
	delete abst_factory;
	
	abst_factory = new ConcreteFactoryB();
	abst_factory->operation();
	delete abst_factory;
	
    return 0;       
}

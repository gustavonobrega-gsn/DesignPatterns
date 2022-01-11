#include "../inc/ConcreteFactoryA.h"
#include "../inc/ConcreteFactoryB.h"

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
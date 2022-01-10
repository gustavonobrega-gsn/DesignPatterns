#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

ConcreteFactoryA::ConcreteFactoryA()
{
}

ConcreteFactoryA::~ConcreteFactoryA()
{
}
	
AbstractProduct* ConcreteFactoryA::factory_method()
{
	return new ConcreteProductA();
};
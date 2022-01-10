#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"

ConcreteFactoryB::ConcreteFactoryB()
{
}

ConcreteFactoryB::~ConcreteFactoryB()
{
}
	
AbstractProduct* ConcreteFactoryB::factory_method()
{
	return new ConcreteProductB();
};
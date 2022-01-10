#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"

ConcreteFactoryB::ConcreteFactoryB()
{
}

ConcreteFactoryB::~ConcreteFactoryB()
{
}
	
AbstractProduct* ConcreteFactoryB::create_product()
{
	return new ConcreteProductB();
};
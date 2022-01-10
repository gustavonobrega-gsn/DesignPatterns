#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

ConcreteFactoryA::ConcreteFactoryA()
{
}

ConcreteFactoryA::~ConcreteFactoryA()
{
}
	
AbstractProduct* ConcreteFactoryA::create_product()
{
	return new ConcreteProductA();
};
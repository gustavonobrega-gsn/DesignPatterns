#include "../inc/ConcreteFactoryA.h"
#include "../inc/ConcreteProductA.h"

ConcreteFactoryA::ConcreteFactoryA()
{
}

ConcreteFactoryA::~ConcreteFactoryA()
{
}
	
AbstractProduct* ConcreteFactoryA::factory_method() const
{
	return new ConcreteProductA();
};

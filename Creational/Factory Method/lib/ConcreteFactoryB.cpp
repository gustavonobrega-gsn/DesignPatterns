#include "../inc/ConcreteFactoryB.h"
#include "../inc/ConcreteProductB.h"

ConcreteFactoryB::ConcreteFactoryB()
{
}

ConcreteFactoryB::~ConcreteFactoryB()
{
}
	
AbstractProduct* ConcreteFactoryB::factory_method() const
{
	return new ConcreteProductB();
};

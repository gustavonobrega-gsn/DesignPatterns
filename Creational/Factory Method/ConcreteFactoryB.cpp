#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"

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

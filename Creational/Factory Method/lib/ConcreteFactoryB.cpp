#include "../inc/ConcreteFactoryB.hpp"

#include "../inc/ConcreteProductB.hpp"

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

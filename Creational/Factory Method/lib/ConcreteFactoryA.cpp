#include "../inc/ConcreteFactoryA.hpp"

#include "../inc/ConcreteProductA.hpp"

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

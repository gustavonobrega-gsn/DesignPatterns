#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteProductA_A.hpp"
#include "../inc/ConcreteProductB_A.hpp"
#include "../inc/ConcreteProductC_A.hpp"

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}

AbstractProductA* ConcreteFactoryA::createProductA() const
{
	return new ConcreteProductA_A();
}

AbstractProductB* ConcreteFactoryA::createProductB() const
{
	return new ConcreteProductB_A();
}

AbstractProductC* ConcreteFactoryA::createProductC() const
{
	return new ConcreteProductC_A();
}


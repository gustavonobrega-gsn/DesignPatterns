#include "../inc/ConcreteFactoryB.hpp"
#include "../inc/ConcreteProductA_B.hpp"
#include "../inc/ConcreteProductB_B.hpp"
#include "../inc/ConcreteProductC_B.hpp"

ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}

AbstractProductA* ConcreteFactoryB::createProductA() const
{
	return new ConcreteProductA_B();
}

AbstractProductB* ConcreteFactoryB::createProductB() const
{
	return new ConcreteProductB_B();
}

AbstractProductC* ConcreteFactoryB::createProductC() const
{
	return new ConcreteProductC_B();
}

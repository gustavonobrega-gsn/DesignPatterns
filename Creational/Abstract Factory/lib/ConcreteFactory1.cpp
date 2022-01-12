#include "../inc/ConcreteFactory1.hpp"

#include "../inc/ConcreteProductA_1.hpp"
#include "../inc/ConcreteProductB_1.hpp"
#include "../inc/ConcreteProductC_1.hpp"

ConcreteFactory1::ConcreteFactory1()
{

}

ConcreteFactory1::~ConcreteFactory1()
{

}

AbstractProductA* ConcreteFactory1::createProductA() const
{
	return new ConcreteProductA_1();
}

AbstractProductB* ConcreteFactory1::createProductB() const
{
	return new ConcreteProductB_1();
}

AbstractProductC* ConcreteFactory1::createProductC() const
{
	return new ConcreteProductC_1();
}


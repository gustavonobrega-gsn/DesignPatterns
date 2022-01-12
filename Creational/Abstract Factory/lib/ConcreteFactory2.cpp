#include "../inc/ConcreteFactory2.hpp"

#include "../inc/ConcreteProductA_2.hpp"
#include "../inc/ConcreteProductB_2.hpp"
#include "../inc/ConcreteProductC_2.hpp"

ConcreteFactory2::ConcreteFactory2()
{

}

ConcreteFactory2::~ConcreteFactory2()
{

}

AbstractProductA* ConcreteFactory2::createProductA() const
{
	return new ConcreteProductA_2();
}

AbstractProductB* ConcreteFactory2::createProductB() const
{
	return new ConcreteProductB_2();
}

AbstractProductC* ConcreteFactory2::createProductC() const
{
	return new ConcreteProductC_2();
}

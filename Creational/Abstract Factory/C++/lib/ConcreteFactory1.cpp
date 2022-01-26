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

std::unique_ptr<AbstractProductA> ConcreteFactory1::createProductA() const
{
	return std::unique_ptr<AbstractProductA>(new ConcreteProductA_1());
}

std::unique_ptr<AbstractProductB> ConcreteFactory1::createProductB() const
{
	return std::unique_ptr<AbstractProductB>(new ConcreteProductB_1());
}

std::unique_ptr<AbstractProductC> ConcreteFactory1::createProductC() const
{
	return std::unique_ptr<AbstractProductC>(new ConcreteProductC_1());
}


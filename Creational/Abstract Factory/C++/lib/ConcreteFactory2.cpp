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

std::unique_ptr<AbstractProductA> ConcreteFactory2::createProductA() const
{
	return std::unique_ptr<AbstractProductA>(new ConcreteProductA_2());
}

std::unique_ptr<AbstractProductB> ConcreteFactory2::createProductB() const
{
	return std::unique_ptr<AbstractProductB>(new ConcreteProductB_2());
}

std::unique_ptr<AbstractProductC> ConcreteFactory2::createProductC() const
{
	return std::unique_ptr<AbstractProductC>(new ConcreteProductC_2());
}

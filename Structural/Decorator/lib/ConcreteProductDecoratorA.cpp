#include "../inc/ConcreteProductDecoratorA.hpp"

#include <iostream>

ConcreteProductDecoratorA::ConcreteProductDecoratorA(AbstractProduct* const abstract_product)
{
	m_abstract_product = abstract_product;
}

ConcreteProductDecoratorA::~ConcreteProductDecoratorA()
{

}

void ConcreteProductDecoratorA::operation() const
{
	std::cout << "ConcreteProductDecoratorA making additional operation - ";

	m_abstract_product->operation();
}

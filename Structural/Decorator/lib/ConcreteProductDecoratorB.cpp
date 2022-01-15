#include "../inc/ConcreteProductDecoratorB.hpp"

#include <iostream>

ConcreteProductDecoratorB::ConcreteProductDecoratorB(AbstractProduct* const abstract_product)
{
	m_abstract_product = abstract_product;
}

ConcreteProductDecoratorB::~ConcreteProductDecoratorB()
{

}

void ConcreteProductDecoratorB::operation() const
{
	std::cout << "ConcreteProductDecoratorB making additional operation - ";

	m_abstract_product->operation();
}

#include "../inc/ConcreteCommandA.hpp"

#include <iostream>

ConcreteCommandA::ConcreteCommandA(Product* const product)
:m_product(product)
{

}

ConcreteCommandA::~ConcreteCommandA()
{
	delete m_product;
}

void ConcreteCommandA::operation() const
{
	std::cout << "CommandA Calling Product operation - ";
	m_product->operation();
}


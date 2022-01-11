#include "../inc/ConcreteProductA.hpp"

#include <iostream> 

ConcreteProductA::ConcreteProductA()
{
}

ConcreteProductA::~ConcreteProductA()
{
}

void ConcreteProductA::operation() const
{
	std::cout << "ProductA doing operation" << std::endl;
}

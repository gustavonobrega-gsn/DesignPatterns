#include "ConcreteProductA.h"

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

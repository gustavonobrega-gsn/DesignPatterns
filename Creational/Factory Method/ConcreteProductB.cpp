#include "ConcreteProductB.h"

#include <iostream> 

ConcreteProductB::ConcreteProductB()
{
}

ConcreteProductB::~ConcreteProductB()
{
}

void ConcreteProductB::operation() const
{
	std::cout << "ProductB doing operation" << std::endl;
}

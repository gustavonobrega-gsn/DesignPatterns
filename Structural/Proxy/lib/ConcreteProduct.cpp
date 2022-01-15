#include "../inc/ConcreteProduct.hpp"

#include <iostream>

ConcreteProduct::ConcreteProduct()
{

}

ConcreteProduct::~ConcreteProduct()
{

}

void ConcreteProduct::operation() const
{
	std::cout << "ConcreteProduct doing operation" << std::endl;
}

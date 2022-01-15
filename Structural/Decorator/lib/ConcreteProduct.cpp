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
	std::cout << "Product doing operation" << std::endl;
}

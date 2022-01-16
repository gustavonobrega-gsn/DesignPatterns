#include "../inc/ConcreteProductHandlerA.hpp"

#include <iostream>

ConcreteProductHandlerA::ConcreteProductHandlerA()
{

}

ConcreteProductHandlerA::~ConcreteProductHandlerA()
{

}

void ConcreteProductHandlerA::operation(enum_product_type product_type) const
{
	if(product_type == product_type_A)
	{
		std::cout << "Operation was handled by ProductHandlerA for product type: " << product_type << std::endl << std::endl;
	}

	else
	{
		std::cout << "Operation could not be handled by ProductHandlerA for product type: " << product_type << std::endl;
		AbstractProductHandler::operation(product_type);
	}
}

#include "../inc/ConcreteProductHandlerB.hpp"

#include <iostream>

ConcreteProductHandlerB::ConcreteProductHandlerB()
{

}

ConcreteProductHandlerB::~ConcreteProductHandlerB()
{

}

void ConcreteProductHandlerB::operation(enum_product_type product_type) const
{
	if(product_type == product_type_B)
	{
		std::cout << "Operation was handled by ProductHandlerB for product type: " << product_type << std::endl << std::endl;
	}

	else
	{
		std::cout << "Operation could not be handled by ProductHandlerB for product type: " << product_type << std::endl;
		AbstractProductHandler::operation(product_type);
	}
}

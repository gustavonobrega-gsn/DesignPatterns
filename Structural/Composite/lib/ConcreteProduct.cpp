#include "../inc/ConcreteProduct.hpp"

#include <iostream>

ConcreteProduct::ConcreteProduct(std::string name)
:AbstractProduct{name}
{

}

ConcreteProduct::~ConcreteProduct()
{
	std::cout << "Deleting ConcreteProduct: " << get_name() << std::endl;
}

void ConcreteProduct::operation(std::string str) const
{
	std::cout << str  << get_name() << std::endl;
}

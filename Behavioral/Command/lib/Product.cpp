#include "../inc/Product.hpp"

#include <iostream>

Product::Product()
{

}

Product::~Product()
{

}

void Product::operation() const
{
	std::cout << "Product doing operation" << std::endl;
}

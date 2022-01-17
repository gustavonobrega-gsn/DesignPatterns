#include "../inc/Product.hpp"

#include <iostream>

Product::Product()
{
	std::cout << "New Product created at: " << this << std::endl;
}

Product::~Product()
{

}

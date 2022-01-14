#include "../inc/IncompatibleProduct.hpp"

#include <iostream>
#include <ctime>

IncompatibleProduct::IncompatibleProduct()
{

}

IncompatibleProduct::~IncompatibleProduct()
{

}

int IncompatibleProduct::do_something() const
{
	std::srand(std::time(nullptr));
	return std::rand();
}

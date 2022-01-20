#include "../inc/AbstractProduct.hpp"

#include <iostream>

AbstractProduct::~AbstractProduct()
{
	std::cout << std::endl;
}

void AbstractProduct::template_method() const
{
	operation1();
	operation2();
	operation3();
}

void AbstractProduct::operation2() const
{
	std::cout << "AbstractProduct doing operation2" << std::endl;
}

void AbstractProduct::operation3() const
{
	std::cout << "AbstractProduct doing operation3" << std::endl;
}

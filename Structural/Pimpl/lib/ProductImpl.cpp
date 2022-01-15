#include "../inc/ProductImpl.hpp"

#include <iostream>

ProductImpl::ProductImpl()
{

}

ProductImpl::~ProductImpl()
{

}

void ProductImpl::operation() const
{
	std::cout << "Operation being doing by impl Class" << std::endl;
}

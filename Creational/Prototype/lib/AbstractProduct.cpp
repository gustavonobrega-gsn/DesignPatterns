#include "../inc/AbstractProduct.hpp"

#include <iostream>

AbstractProduct::~AbstractProduct()
{

}

void AbstractProduct::operation() const
{
	std::cout << "Product :" << m_name << " address:" << this << " Cloned from: " << m_cloned_from << std::endl;
}

void AbstractProduct::set_cloned_from(const AbstractProduct* cloned_from)
{
	m_cloned_from = cloned_from;
}

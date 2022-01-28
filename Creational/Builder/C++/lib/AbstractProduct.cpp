#include "../inc/AbstractProduct.hpp"

#include<iostream>

AbstractProduct::~AbstractProduct()
{

}

void AbstractProduct::operation() const
{
	for( std::set<std::string>::iterator it = m_string_set.begin() ; it != m_string_set.end() ; it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}

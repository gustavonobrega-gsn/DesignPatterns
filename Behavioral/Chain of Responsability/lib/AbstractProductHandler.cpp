#include "../inc/AbstractProductHandler.hpp"

#include <iostream>

AbstractProductHandler::AbstractProductHandler()
{
	m_next_product_handler = nullptr;
}

AbstractProductHandler::~AbstractProductHandler()
{
	delete m_next_product_handler;
}

void AbstractProductHandler::set_next_product_handler(AbstractProductHandler* const next_product_handler)
{
	m_next_product_handler = next_product_handler;
}

void AbstractProductHandler::operation(enum_product_type product_type) const
{
	if(m_next_product_handler == nullptr)
	{
		std::cout << "Operation was not handled for product type: " << product_type << std::endl << std::endl;
	}

	else
	{
		m_next_product_handler->operation(product_type);
	}
}

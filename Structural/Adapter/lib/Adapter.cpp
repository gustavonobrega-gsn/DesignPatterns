#include "../inc/Adapter.hpp"

#include <iostream>

Adapter::Adapter(IncompatibleProduct* incompatible_product)
:m_incompatible_product(incompatible_product)
{

}

Adapter::~Adapter()
{

}

void Adapter::operation() const
{
	std::cout << "Operation Adapted: " << m_incompatible_product->do_something() << std::endl;
}

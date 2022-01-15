#include "../inc/ProxyProduct.hpp"

#include <iostream>

ProxyProduct::ProxyProduct()
{
	m_concrete_product = new ConcreteProduct();
}

ProxyProduct::~ProxyProduct()
{
	delete m_concrete_product;
}

void ProxyProduct::operation() const
{
	std::cout << "Proxy doing init operation" << std::endl;

	m_concrete_product->operation();

	std::cout << "Proxy doing final operation" << std::endl;
}

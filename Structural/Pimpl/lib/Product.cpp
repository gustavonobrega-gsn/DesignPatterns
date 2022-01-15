#include "../inc/Product.hpp"

Product::Product()
:m_product_impl(new ProductImpl())
{

}

Product::~Product()
{
	delete m_product_impl;
}

Product::Product(const Product& product)
:m_product_impl(new ProductImpl(*product.m_product_impl))
{

}

Product& Product::operator=(const Product& product)
{
	delete m_product_impl;
	m_product_impl = new ProductImpl(*product.m_product_impl);

	return *this;
}

void Product::operation() const
{
	m_product_impl->operation();
}



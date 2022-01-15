#include "../inc/CompositeProduct.hpp"

#include <iostream>

CompositeProduct::CompositeProduct(const std::string name)
:AbstractProduct{name}
{

}

CompositeProduct::~CompositeProduct()
{
	for(AbstractProduct* abstract_product : m_abstract_products)
	{
		delete abstract_product;
	}

	std::cout << "Deleting CompositeProduct: " << get_name() << std::endl;
}

void CompositeProduct::operation(const std::string str) const
{
	std::cout << str << get_name() << std::endl;

	for(AbstractProduct* abstract_product : m_abstract_products)
	{
		abstract_product->operation(str + " - ");
	}
}

void CompositeProduct::add_abstract_product(AbstractProduct* const abstract_product)
{
	m_abstract_products.push_back(abstract_product);
}

#include "../inc/Product.hpp"

#include <iostream>

Product::Product(const int id, const int value)
{
	m_product_data = new ProductData(id, value);
}

Product::~Product()
{
	delete m_product_data;
}

void Product::operation() const
{
	std::cout << "Product id:" << m_product_data->get_id() << " value:" << m_product_data->get_value() << std::endl;
	std::cout << "Data Retrieved from internal class with private members only set/modifiable on construction" << std::endl;
}

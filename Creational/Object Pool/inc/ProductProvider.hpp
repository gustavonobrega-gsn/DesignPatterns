#ifndef PRODUCTPROVIDER_HPP
#define PRODUCTPROVIDER_HPP

#include <vector>
#include "Product.hpp"

class ProductProvider
{
public:
	ProductProvider();
	virtual ~ProductProvider();

	Product* get_product();
	void return_product(Product*& product);

private:
	std::vector<Product*> m_product_pool;
};

#endif

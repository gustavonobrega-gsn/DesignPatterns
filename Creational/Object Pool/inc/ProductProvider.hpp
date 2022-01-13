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

	const int get_max_product() const;

private:
	std::vector<Product*> m_product_pool;
	const int m_max_products = 4;
};

#endif

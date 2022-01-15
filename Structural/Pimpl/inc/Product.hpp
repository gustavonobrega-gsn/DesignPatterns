#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "ProductImpl.hpp"

class Product
{
public:

	Product();
	virtual ~Product();
	Product(const Product& product);
	Product& operator=(const Product& product);

	void operation() const;

private:
	ProductImpl* m_product_impl;
};

#endif

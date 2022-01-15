#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "ProductData.hpp"

class Product
{
public:

	Product(const int id, const int value);
	virtual ~Product();

	void operation() const;

private:
	ProductData* m_product_data;

};

#endif

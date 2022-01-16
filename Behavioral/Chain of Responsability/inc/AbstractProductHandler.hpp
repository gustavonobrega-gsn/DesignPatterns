#ifndef ABSTRACTPRODUCTHANDLER_HPP
#define ABSTRACTPRODUCTHANDLER_HPP

#include "ProductType.hpp"

class AbstractProductHandler
{
public:

	virtual ~AbstractProductHandler();

	void set_next_product_handler(AbstractProductHandler* const next_product_handler);

	virtual void operation(enum_product_type product_type) const;

protected:

	AbstractProductHandler();

	AbstractProductHandler* m_next_product_handler;
};

#endif

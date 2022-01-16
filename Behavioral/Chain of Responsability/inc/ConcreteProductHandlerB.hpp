#ifndef CONCRETEPRODUCTHANDLERB_HPP
#define CONCRETEPRODUCTHANDLERB_HPP

#include "AbstractProductHandler.hpp"

class ConcreteProductHandlerB : public AbstractProductHandler
{
public:

	ConcreteProductHandlerB();
	virtual ~ConcreteProductHandlerB();

	void operation(enum_product_type product_type) const override;
};

#endif

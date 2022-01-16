#ifndef CONCRETEPRODUCTHANDLERA_HPP
#define CONCRETEPRODUCTHANDLERA_HPP

#include "AbstractProductHandler.hpp"

class ConcreteProductHandlerA : public AbstractProductHandler
{
public:

	ConcreteProductHandlerA();
	virtual ~ConcreteProductHandlerA();

	void operation(enum_product_type product_type) const override;
};

#endif

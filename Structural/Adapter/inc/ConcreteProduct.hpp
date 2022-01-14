#ifndef CONCRETEPRODUCT_HPP
#define CONCRETEPRODUCT_HPP

#include "AbstractProduct.hpp"

class ConcreteProduct : public AbstractProduct
{
public:
	ConcreteProduct();
	virtual ~ConcreteProduct();

	void operation() const override;

};

#endif

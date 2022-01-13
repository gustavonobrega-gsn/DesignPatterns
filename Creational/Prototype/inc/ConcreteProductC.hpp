#ifndef CONCRETEPRODUCTC_HPP
#define CONCRETEPRODUCTC_HPP

#include "AbstractProduct.hpp"

class ConcreteProductC : public AbstractProduct
{
public:

	ConcreteProductC();
	virtual ~ConcreteProductC();

	AbstractProduct* clone() const override;
};

#endif

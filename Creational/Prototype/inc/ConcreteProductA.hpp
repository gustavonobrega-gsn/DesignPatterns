#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "AbstractProduct.hpp"

class ConcreteProductA : public AbstractProduct
{
public:

	ConcreteProductA();
	virtual ~ConcreteProductA();

	AbstractProduct* clone() const override;
};

#endif

#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "AbstractProduct.hpp"

class ConcreteProductA : public AbstractProduct
{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	virtual void operation() const override;
};

#endif

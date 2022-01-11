#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "AbstractProduct.hpp"

class ConcreteProductB : public AbstractProduct
{
public:
	ConcreteProductB();
	virtual ~ConcreteProductB();
	
	virtual void operation() const override;
};

#endif

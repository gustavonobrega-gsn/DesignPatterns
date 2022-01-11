#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "AbstractProduct.h"

class ConcreteProductB : public AbstractProduct
{
public:
	ConcreteProductB();
	virtual ~ConcreteProductB();
	
	virtual void operation() override;
};

#endif

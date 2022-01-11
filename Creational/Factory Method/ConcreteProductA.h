#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "AbstractProduct.h"

class ConcreteProductA : public AbstractProduct
{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	virtual void operation() override;
};

#endif

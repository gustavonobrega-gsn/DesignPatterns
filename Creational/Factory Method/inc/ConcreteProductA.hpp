#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "AbstractProduct.hpp"

class ConcreteProductA : public AbstractProduct
{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	
	virtual void operation() const override;
};

#endif

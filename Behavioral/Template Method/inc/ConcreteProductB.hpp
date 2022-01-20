#ifndef CONCRETEPRODUCTB_HPP
#define CONCRETEPRODUCTB_HPP

#include "AbstractProduct.hpp"

class ConcreteProductB : public AbstractProduct
{
public:

	ConcreteProductB();
	virtual ~ConcreteProductB();

private:

	virtual void operation1() const override;

};

#endif

#ifndef CONCRETEPRODUCTB_B_HPP
#define CONCRETEPRODUCTB_B_HPP

#include "AbstractProductB.hpp"

class ConcreteProductB_B : public AbstractProductB
{
public:

	ConcreteProductB_B();
	virtual ~ConcreteProductB_B();

	virtual void operationB() const override;
};

#endif

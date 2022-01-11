#ifndef CONCRETEPRODUCTB_A_HPP
#define CONCRETEPRODUCTB_A_HPP

#include "AbstractProductB.hpp"

class ConcreteProductB_A : public AbstractProductB
{
public:

	ConcreteProductB_A();
	virtual ~ConcreteProductB_A();

	virtual void operationB() const override;
};

#endif

#ifndef CONCRETEPRODUCTB_2_HPP
#define CONCRETEPRODUCTB_2_HPP

#include "AbstractProductB.hpp"

class ConcreteProductB_2 : public AbstractProductB
{
public:

	ConcreteProductB_2();
	virtual ~ConcreteProductB_2();

	virtual void operationB() const override;
};

#endif

#ifndef CONCRETEPRODUCTB_1_HPP
#define CONCRETEPRODUCTB_1_HPP

#include "AbstractProductB.hpp"

class ConcreteProductB_1 : public AbstractProductB
{
public:

	ConcreteProductB_1();
	virtual ~ConcreteProductB_1();

	virtual void operationB() const override;
};

#endif

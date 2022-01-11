#ifndef CONCRETEPRODUCTC_B_HPP
#define CONCRETEPRODUCTC_B_HPP

#include "AbstractProductC.hpp"

class ConcreteProductC_B : public AbstractProductC
{
public:

	ConcreteProductC_B();
	virtual ~ConcreteProductC_B();

	virtual void operationC() const override;
};

#endif

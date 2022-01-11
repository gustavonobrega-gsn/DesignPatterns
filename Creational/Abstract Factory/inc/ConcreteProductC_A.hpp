#ifndef CONCRETEPRODUCTC_A_HPP
#define CONCRETEPRODUCTC_A_HPP

#include "AbstractProductC.hpp"

class ConcreteProductC_A : public AbstractProductC
{
public:

	ConcreteProductC_A();
	virtual ~ConcreteProductC_A();

	virtual void operationC() const override;
};

#endif

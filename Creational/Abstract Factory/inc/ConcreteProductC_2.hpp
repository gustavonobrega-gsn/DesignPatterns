#ifndef CONCRETEPRODUCTC_2_HPP
#define CONCRETEPRODUCTC_2_HPP

#include "AbstractProductC.hpp"

class ConcreteProductC_2 : public AbstractProductC
{
public:

	ConcreteProductC_2();
	virtual ~ConcreteProductC_2();

	virtual void operationC() const override;
};

#endif

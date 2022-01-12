#ifndef CONCRETEPRODUCTC_1_HPP
#define CONCRETEPRODUCTC_1_HPP

#include "AbstractProductC.hpp"

class ConcreteProductC_1 : public AbstractProductC
{
public:

	ConcreteProductC_1();
	virtual ~ConcreteProductC_1();

	virtual void operationC() const override;
};

#endif

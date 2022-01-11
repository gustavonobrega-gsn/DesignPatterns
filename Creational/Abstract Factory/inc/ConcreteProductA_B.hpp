#ifndef CONCRETEPRODUCTA_B_HPP
#define CONCRETEPRODUCTA_B_HPP

#include "AbstractProductA.hpp"

class ConcreteProductA_B : public AbstractProductA
{
public:

	ConcreteProductA_B();
	virtual ~ConcreteProductA_B();

	virtual void operationA() const override;
};

#endif

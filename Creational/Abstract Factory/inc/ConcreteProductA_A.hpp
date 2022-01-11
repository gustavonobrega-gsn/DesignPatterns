#ifndef CONCRETEPRODUCTA_A_HPP
#define CONCRETEPRODUCTA_A_HPP

#include "AbstractProductA.hpp"

class ConcreteProductA_A : public AbstractProductA
{
public:

	ConcreteProductA_A();
	virtual ~ConcreteProductA_A();

	virtual void operationA() const override;
};

#endif

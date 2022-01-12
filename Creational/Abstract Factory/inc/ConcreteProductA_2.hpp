#ifndef CONCRETEPRODUCTA_2_HPP
#define CONCRETEPRODUCTA_2_HPP

#include "AbstractProductA.hpp"

class ConcreteProductA_2 : public AbstractProductA
{
public:

	ConcreteProductA_2();
	virtual ~ConcreteProductA_2();

	virtual void operationA() const override;
};

#endif

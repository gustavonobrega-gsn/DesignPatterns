#ifndef CONCRETEPRODUCTA_1_HPP
#define CONCRETEPRODUCTA_1_HPP

#include "AbstractProductA.hpp"

class ConcreteProductA_1 : public AbstractProductA
{
public:

	ConcreteProductA_1();
	virtual ~ConcreteProductA_1();

	virtual void operationA() const override;
};

#endif

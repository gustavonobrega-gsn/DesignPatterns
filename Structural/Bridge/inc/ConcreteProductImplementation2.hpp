#ifndef CONCRETEPRODUCTIMPLEMENTATION2_HPP
#define CONCRETEPRODUCTIMPLEMENTATION2_HPP

#include "AbstractProductImplementation.hpp"

class ConcreteProductImplementation2 : public AbstractProductImplementation
{
public:

	ConcreteProductImplementation2();
	virtual ~ConcreteProductImplementation2();

	void operation1() const override;
	void operation2() const override;
};

#endif

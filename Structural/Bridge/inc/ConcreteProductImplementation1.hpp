#ifndef CONCRETEPRODUCTIMPLEMENTATION1_HPP
#define CONCRETEPRODUCTIMPLEMENTATION1_HPP

#include "AbstractProductImplementation.hpp"

class ConcreteProductImplementation1 : public AbstractProductImplementation
{
public:

	ConcreteProductImplementation1();
	virtual ~ConcreteProductImplementation1();

	void operation1() const override;
	void operation2() const override;
};

#endif

#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "../inc/AbstractProduct.hpp"

class ConcreteProductA : public AbstractProduct
{
public:

	explicit ConcreteProductA(AbstractMediator* const abstract_mediator);
	virtual ~ConcreteProductA();

	void operation1() override;
	void operation2() override;

};

#endif

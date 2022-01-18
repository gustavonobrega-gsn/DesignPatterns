#ifndef CONCRETEPRODUCTB_HPP
#define CONCRETEPRODUCTB_HPP

#include "../inc/AbstractProduct.hpp"

class ConcreteProductB : public AbstractProduct
{
public:

	explicit ConcreteProductB(AbstractMediator* const abstract_mediator);
	virtual ~ConcreteProductB();

	void operation1() override;
	void operation2() override;

};

#endif

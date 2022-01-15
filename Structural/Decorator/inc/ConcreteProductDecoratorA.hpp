#ifndef CONCRETEPRODUCTDECORATORA_HPP
#define CONCRETEPRODUCTDECORATORA_HPP

#include "AbstractProductDecorator.hpp"

class ConcreteProductDecoratorA : public AbstractProductDecorator
{
public:

	ConcreteProductDecoratorA(AbstractProduct* const abstract_product);
	virtual ~ConcreteProductDecoratorA();

	void operation() const override;
};

#endif

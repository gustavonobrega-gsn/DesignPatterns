#ifndef CONCRETEPRODUCTDECORATORB_HPP
#define CONCRETEPRODUCTDECORATORB_HPP

#include "AbstractProductDecorator.hpp"

class ConcreteProductDecoratorB : public AbstractProductDecorator
{
public:

	ConcreteProductDecoratorB(AbstractProduct* const abstract_product);
	virtual ~ConcreteProductDecoratorB();

	void operation() const override;
};

#endif

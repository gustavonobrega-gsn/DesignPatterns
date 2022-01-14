#ifndef CONCRETEPRODUCTABSTRACTIONA_HPP
#define CONCRETEPRODUCTABSTRACTIONA_HPP

#include "AbstractProductAbstraction.hpp"

class ConcreteProductAbstractionA : public AbstractProductAbstraction
{
public:

	explicit ConcreteProductAbstractionA(AbstractProductImplementation* abstract_product_impl);
	virtual ~ConcreteProductAbstractionA();

	virtual void operation() const override;
};

#endif

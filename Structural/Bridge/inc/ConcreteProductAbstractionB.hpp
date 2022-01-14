#ifndef CONCRETEPRODUCTABSTRACTIONB_HPP
#define CONCRETEPRODUCTABSTRACTIONB_HPP

#include "AbstractProductAbstraction.hpp"

class ConcreteProductAbstractionB : public AbstractProductAbstraction
{
public:

	explicit ConcreteProductAbstractionB(AbstractProductImplementation* abstract_product_impl);
	virtual ~ConcreteProductAbstractionB();

	virtual void operation() const override;
};

#endif

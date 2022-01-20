#ifndef CONCRETEPRODUCTA_HPP
#define CONCRETEPRODUCTA_HPP

#include "AbstractProduct.hpp"

class ConcreteProductA : public AbstractProduct
{
public:

	ConcreteProductA();
	virtual ~ConcreteProductA();

private:

	virtual void operation1() const override;
	virtual void operation3() const override;

};

#endif

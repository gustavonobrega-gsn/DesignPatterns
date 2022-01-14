#ifndef ABSTRACTPRODUCTABSTRACTION_HPP
#define ABSTRACTPRODUCTABSTRACTION_HPP

#include "AbstractProductImplementation.hpp"

class AbstractProductAbstraction
{
public:

	virtual ~AbstractProductAbstraction(){}

	virtual void operation() const = 0;

protected:
	AbstractProductImplementation* m_abstract_product_impl;
};

#endif

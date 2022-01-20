#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

#include "AbstractVisitor.hpp"

class AbstractProduct
{
public:

	virtual ~AbstractProduct(){}

	virtual void operation() const = 0;

	virtual void accept(AbstractVisitor* const abstract_visitor) const = 0;

};

#endif

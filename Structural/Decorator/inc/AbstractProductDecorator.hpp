#ifndef ABSTRACTPRODUCTDECORATOR_HPP
#define ABSTRACTPRODUCTDECORATOR_HPP

#include "AbstractProduct.hpp"

class AbstractProductDecorator : public AbstractProduct
{
public:

	virtual ~AbstractProductDecorator();

	AbstractProduct* get_abstract_product() const;

protected:
	AbstractProduct* m_abstract_product;
};

#endif

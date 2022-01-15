#ifndef PROXYPRODUCT_HPP
#define PROXYPRODUCT_HPP

#include "AbstractProduct.hpp"

#include "../inc/ConcreteProduct.hpp"

class ProxyProduct : public AbstractProduct
{
public:

	ProxyProduct();
	virtual ~ProxyProduct();

	virtual void operation() const override;

private:
	ConcreteProduct* m_concrete_product;

};

#endif

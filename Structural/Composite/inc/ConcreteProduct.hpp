#ifndef CONCRETEPRODUCT_HPP
#define CONCRETEPRODUCT_HPP

#include "AbstractProduct.hpp"

class ConcreteProduct : public AbstractProduct
{
public:
	ConcreteProduct(const std::string name);
	virtual ~ConcreteProduct();

	void operation(const std::string str) const override;
};

#endif

#ifndef CONCRETEPRODUCT_HPP
#define CONCRETEPRODUCT_HPP

#include "AbstractProduct.hpp"

class ConcreteProduct : public AbstractProduct
{
public:
	ConcreteProduct(std::string name);
	virtual ~ConcreteProduct();

	void operation(std::string str) const override;
};

#endif

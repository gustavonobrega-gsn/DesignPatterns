#ifndef PROTOTYPEFACTORY_HPP
#define PROTOTYPEFACTORY_HPP

#include "AbstractProduct.hpp"
#include "ProductType.hpp"

#include <map>

class PrototypeFactory
{
public:
	PrototypeFactory();
	virtual ~PrototypeFactory();

	virtual AbstractProduct* create_product(const product_type type);

private:
	std::map<product_type,AbstractProduct*> m_product_library;
};

#endif

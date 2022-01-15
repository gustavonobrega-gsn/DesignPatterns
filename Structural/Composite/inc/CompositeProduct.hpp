#ifndef COMPOSITEPRODUCT_HPP
#define COMPOSITEPRODUCT_HPP

#include "AbstractProduct.hpp"

#include <vector>

class CompositeProduct : public AbstractProduct
{
public:
	CompositeProduct(std::string name);
	virtual ~CompositeProduct();

	void operation(std::string str) const override;

	void add_abstract_product(AbstractProduct* abstract_product);

private:
	std::vector<AbstractProduct*> m_abstract_products;
};

#endif

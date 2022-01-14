#ifndef INC_ADAPTER_HPP
#define INC_ADAPTER_HPP

#include "AbstractProduct.hpp"
#include "IncompatibleProduct.hpp"

class Adapter : public AbstractProduct
{
public:

	Adapter(IncompatibleProduct* incompatible_product);
	virtual ~Adapter();

	void operation() const override;

private:
	IncompatibleProduct* m_incompatible_product;
};

#endif

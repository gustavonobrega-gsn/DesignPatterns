#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include "IntrinsicProductPart.hpp"
#include "ExtrinsicProductPart.hpp"

class Product
{
public:

	explicit Product(IntrinsicProductPart* const intrisic_product_part, ExtrinsicProductPart* const extrinsic_product_part);
	virtual ~Product();

	void operation() const;

private:
	IntrinsicProductPart* m_intrinsic_product_part;
	ExtrinsicProductPart* m_extrinsic_product_part;
};

#endif

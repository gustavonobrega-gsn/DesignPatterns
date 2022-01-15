#include "../inc/Product.hpp"

#include <iostream>

Product::Product(IntrinsicProductPart* const intrisic_product_part, ExtrinsicProductPart* const extrinsic_product_part)
:m_intrinsic_product_part(intrisic_product_part),m_extrinsic_product_part(extrinsic_product_part)
{

}

Product::~Product()
{

}

void Product::operation() const
{
	std::cout << "Product doing operation. Intrinsic Part: " << m_intrinsic_product_part << " - Extrinsic part: " << m_extrinsic_product_part << std::endl;
}

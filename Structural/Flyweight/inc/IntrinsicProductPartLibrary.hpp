#ifndef INTRISICPRODUCTLIBRARY_HPP
#define INTRISICPRODUCTLIBRARY_HPP

#include "IntrinsicProductPart.hpp"

#include <map>

class IntrinsicProductPartLibrary
{
public:

	IntrinsicProductPartLibrary();
	virtual ~IntrinsicProductPartLibrary();

	void create_intrisic_product_part(const int id);
	IntrinsicProductPart* get_intrinsic_product_part(const int id);


private:
	std::map<int, IntrinsicProductPart*> m_intrisic_product_part_dictionary;
};

#endif

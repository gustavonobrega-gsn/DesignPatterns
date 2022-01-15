#include "../inc/IntrinsicProductPartLibrary.hpp"

#include <iostream>

IntrinsicProductPartLibrary::IntrinsicProductPartLibrary()
{

}

IntrinsicProductPartLibrary::~IntrinsicProductPartLibrary()
{
	for(std::map<int, IntrinsicProductPart*>::iterator it = m_intrisic_product_part_dictionary.begin() ; it != m_intrisic_product_part_dictionary.end() ; it++)
	{
		delete it->second;
	}
}

void IntrinsicProductPartLibrary::create_intrisic_product_part(const int id)
{
	m_intrisic_product_part_dictionary[id] = new IntrinsicProductPart(id);
}

IntrinsicProductPart* IntrinsicProductPartLibrary::get_intrinsic_product_part(const int id)
{
	if(m_intrisic_product_part_dictionary.find(id) == m_intrisic_product_part_dictionary.end())
	{
		std::cout << "Creating new Intrinsic product part id: " << id << std::endl;
		create_intrisic_product_part(id);
	}

	IntrinsicProductPart* const intrinsic_product_part = m_intrisic_product_part_dictionary[id];

	std::cout << "Collected Intrinsic product part id: " << id << " : " << intrinsic_product_part << std::endl;

	return intrinsic_product_part;
}

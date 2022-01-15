#include "../inc/IntrinsicProductPart.hpp"

IntrinsicProductPart::IntrinsicProductPart(const int id)
:m_id(id)
{

}

IntrinsicProductPart::~IntrinsicProductPart()
{

}

int IntrinsicProductPart::get_id() const
{
	return m_id;
}

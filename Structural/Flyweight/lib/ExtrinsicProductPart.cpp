#include "../inc/ExtrinsicProductPart.hpp"

ExtrinsicProductPart::ExtrinsicProductPart(const int id)
:m_id(id)
{

}

ExtrinsicProductPart::~ExtrinsicProductPart()
{

}

int ExtrinsicProductPart::get_id() const
{
	return m_id;
}

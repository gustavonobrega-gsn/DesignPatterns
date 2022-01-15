#include "../inc/ProductData.hpp"

ProductData::ProductData(const int id, const int value)
:m_id(id),m_value(value)
{

}

ProductData::~ProductData()
{

}

int ProductData::get_id() const
{
	return m_id;
}

int ProductData::get_value() const
{
	return m_value;
}

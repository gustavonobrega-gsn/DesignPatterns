#include "../inc/AbstractProduct.hpp"

AbstractProduct::AbstractProduct(const std::string name)
:m_name(name)
{

}

AbstractProduct::~AbstractProduct()
{

}

std::string AbstractProduct::get_name() const
{
	return m_name;
}

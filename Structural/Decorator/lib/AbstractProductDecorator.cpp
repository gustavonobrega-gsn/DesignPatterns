#include "../inc/AbstractProductDecorator.hpp"

AbstractProductDecorator::~AbstractProductDecorator()
{

}

AbstractProduct* AbstractProductDecorator::get_abstract_product() const
{
	return m_abstract_product;
}

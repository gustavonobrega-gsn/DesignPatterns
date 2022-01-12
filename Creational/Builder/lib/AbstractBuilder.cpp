#include "../inc/AbstractBuilder.hpp"

AbstractBuilder::~AbstractBuilder()
{

}

AbstractProduct* AbstractBuilder::get_product() const
{
	return m_product;
}

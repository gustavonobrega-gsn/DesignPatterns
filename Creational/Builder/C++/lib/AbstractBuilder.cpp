#include "../inc/AbstractBuilder.hpp"

AbstractBuilder::~AbstractBuilder()
{

}

std::shared_ptr<AbstractProduct> AbstractBuilder::get_product() const
{
	return m_product;
}

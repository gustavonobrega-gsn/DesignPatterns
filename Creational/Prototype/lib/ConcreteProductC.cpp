#include "../inc/ConcreteProductC.hpp"

ConcreteProductC::ConcreteProductC()
{
	m_name = "ProductC";
}

ConcreteProductC::~ConcreteProductC()
{

}

AbstractProduct* ConcreteProductC::clone() const
{
	AbstractProduct* abst_product = new ConcreteProductC(*this);
	abst_product->set_cloned_from(this);
	return abst_product;
}

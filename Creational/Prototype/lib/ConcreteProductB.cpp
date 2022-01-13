#include "../inc/ConcreteProductB.hpp"

ConcreteProductB::ConcreteProductB()
{
	m_name = "ProductB";
}

ConcreteProductB::~ConcreteProductB()
{

}

AbstractProduct* ConcreteProductB::clone() const
{
	AbstractProduct* abst_product = new ConcreteProductB(*this);
	abst_product->set_cloned_from(this);
	return abst_product;
}

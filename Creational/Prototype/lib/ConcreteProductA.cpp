#include "../inc/ConcreteProductA.hpp"

#include <iostream>

ConcreteProductA::ConcreteProductA()
{
	m_name = "ProductA";
}

ConcreteProductA::~ConcreteProductA()
{

}

AbstractProduct* ConcreteProductA::clone() const
{
	AbstractProduct* abst_product = new ConcreteProductA(*this);
	abst_product->set_cloned_from(this);
	return abst_product;
}

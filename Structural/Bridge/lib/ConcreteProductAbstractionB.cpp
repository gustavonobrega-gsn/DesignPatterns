#include "../inc/ConcreteProductAbstractionB.hpp"

ConcreteProductAbstractionB::ConcreteProductAbstractionB(AbstractProductImplementation* abstract_product_impl)
//:m_abstract_product_impl(abstract_product_impl)
{
	m_abstract_product_impl = abstract_product_impl;
}

ConcreteProductAbstractionB::~ConcreteProductAbstractionB()
{

}

void ConcreteProductAbstractionB::operation() const
{
	m_abstract_product_impl->operation2();
}

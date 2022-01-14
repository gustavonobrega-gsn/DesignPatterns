#include "../inc/ConcreteProductAbstractionA.hpp"

ConcreteProductAbstractionA::ConcreteProductAbstractionA(AbstractProductImplementation* abstract_product_impl)
{
	m_abstract_product_impl = abstract_product_impl;
}

ConcreteProductAbstractionA::~ConcreteProductAbstractionA()
{

}

void ConcreteProductAbstractionA::operation() const
{
	m_abstract_product_impl->operation1();
}

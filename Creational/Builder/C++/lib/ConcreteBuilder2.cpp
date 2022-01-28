#include "../inc/ConcreteBuilder2.hpp"
#include "../inc/ConcreteProduct2.hpp"

ConcreteBuilder2::ConcreteBuilder2()
{

}

ConcreteBuilder2::~ConcreteBuilder2()
{

}

void ConcreteBuilder2::reset()
{
	m_product = std::make_shared<ConcreteProduct2>();
}

void ConcreteBuilder2::build_step_a()
{
	m_product->step_a_2();
}

void ConcreteBuilder2::build_step_b()
{
	m_product->step_b_2();
}

void ConcreteBuilder2::build_step_c()
{
	m_product->step_c_2();
}

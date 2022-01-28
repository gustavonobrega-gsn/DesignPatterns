#include "../inc/ConcreteBuilder1.hpp"
#include "../inc/ConcreteProduct1.hpp"

ConcreteBuilder1::ConcreteBuilder1()
{

}

ConcreteBuilder1::~ConcreteBuilder1()
{

}

void ConcreteBuilder1::reset()
{
	m_product = std::make_shared<ConcreteProduct1>();
}

void ConcreteBuilder1::build_step_a()
{
	m_product->step_a_1();
}

void ConcreteBuilder1::build_step_b()
{
	m_product->step_b_1();
}

void ConcreteBuilder1::build_step_c()
{
	m_product->step_c_1();
}

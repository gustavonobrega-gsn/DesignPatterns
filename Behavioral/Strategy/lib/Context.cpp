#include "../inc/Context.hpp"

Context::Context(AbstractStrategy* abstract_strategy)
:m_abstract_strategy(abstract_strategy)
{

}

Context::~Context()
{
	delete m_abstract_strategy;
}

void Context::set_strategy(AbstractStrategy* abstract_strategy)
{
	delete m_abstract_strategy;
	m_abstract_strategy = abstract_strategy;
}

void Context::operation() const
{
	m_abstract_strategy->operation();
}

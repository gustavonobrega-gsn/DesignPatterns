#include "../inc/Context.hpp"
#include "../inc/ConcreteStateA.hpp"

Context::Context()
:m_abstract_state(new ConcreteStateA(this))
{

}

Context::~Context()
{
	delete m_abstract_state;
}

void Context::set_state(AbstractState* const abstract_state)
{
	delete m_abstract_state;
	m_abstract_state = abstract_state;
}

void Context::operation() const
{
	m_abstract_state->operation();
}

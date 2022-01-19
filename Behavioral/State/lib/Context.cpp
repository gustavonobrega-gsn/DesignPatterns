#include "../inc/Context.hpp"

Context::Context(AbstractState* const abstract_state)
:m_abstract_state(abstract_state)
{
	m_abstract_state->set_context(this);
}

Context::~Context()
{
	delete m_abstract_state;
}

void Context::set_state(AbstractState* const abstract_state)
{
	delete m_abstract_state;
	m_abstract_state = abstract_state;
	m_abstract_state->set_context(this);
}

void Context::operation() const
{
	m_abstract_state->operation();
}

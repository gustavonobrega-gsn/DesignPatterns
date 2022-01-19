#include "../inc/AbstractState.hpp"

AbstractState::AbstractState()
{

}

AbstractState::~AbstractState()
{

}

void AbstractState::set_context(Context* context)
{
	m_context = context;
}

#include "../inc/ConcreteStateA.hpp"
#include "../inc/Context.hpp"
#include "../inc/ConcreteStateB.hpp"

#include <iostream>

ConcreteStateA::ConcreteStateA(Context* context)
:AbstractState::AbstractState(context)
{

}

ConcreteStateA::~ConcreteStateA()
{

}

void ConcreteStateA::operation() const
{
	std::cout << "Context doing ConcreteStateA operation and changed state to ConcreteStateB" << std::endl;
	m_context->set_state(new ConcreteStateB(m_context));
}





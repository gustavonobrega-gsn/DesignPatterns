#include "../inc/ConcreteStateB.hpp"
#include "../inc/Context.hpp"
#include "../inc/ConcreteStateA.hpp"

#include <iostream>

ConcreteStateB::ConcreteStateB()
{

}

ConcreteStateB::~ConcreteStateB()
{

}

void ConcreteStateB::operation() const
{
	std::cout << "Context doing ConcreteStateB operation and changed state to ConcreteStateA" << std::endl;
	m_context->set_state(new ConcreteStateA());
}





#include "../inc/ConcreteMemento.hpp"

ConcreteMemento::ConcreteMemento(std::string state)
:m_state(state)
{

}

ConcreteMemento::~ConcreteMemento()
{

}

std::string ConcreteMemento::get_state() const
{
	return m_state;
}


#include "../inc/Originator.hpp"
#include "../inc/ConcreteMemento.hpp"

Originator::Originator()
{

}

Originator::~Originator()
{

}

std::string Originator::get_state() const
{
	return m_state;
}

void Originator::set_state(std::string state)
{
	m_state = state;
}

AbstractMemento* Originator::create_memento() const
{
	return new ConcreteMemento(m_state);
}

void Originator::restore_state(AbstractMemento* abstract_memento)
{
	m_state = abstract_memento->get_state();
}

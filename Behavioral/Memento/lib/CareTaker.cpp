#include "../inc/CareTaker.hpp"

CareTaker::CareTaker(Originator* originator)
:m_originator(originator)
{

}

CareTaker::~CareTaker()
{
	for(AbstractMemento* abstract_memento : m_mementos)
	{
		delete abstract_memento;
	}
}

void CareTaker::save_state()
{
	m_mementos.push_back(m_originator->create_memento());
}

void CareTaker::undo()
{
	if(!m_mementos.empty())
	{
		m_originator->restore_state(m_mementos.back());
		m_mementos.pop_back();
	}
}


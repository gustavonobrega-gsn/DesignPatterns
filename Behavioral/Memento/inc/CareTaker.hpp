#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include "Originator.hpp"

#include <vector>

class CareTaker
{
public:

	explicit CareTaker(Originator* originator);
	virtual ~CareTaker();

	void save_state();
	void undo();

private:

	std::vector<AbstractMemento*> m_mementos;
	Originator* m_originator;
};

#endif

#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include "AbstractMemento.hpp"

#include <string>

class Originator
{
public:

	Originator();
	virtual ~Originator();

	std::string get_state() const;
	void set_state(std::string state);

	AbstractMemento* create_memento() const;
	void restore_state(AbstractMemento* abstract_memento);

private:

	std::string m_state;
};

#endif

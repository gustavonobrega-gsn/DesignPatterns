#ifndef CONCRETEMEMENTO_HPP
#define CONCRETEMEMENTO_HPP

#include "AbstractMemento.hpp"

class ConcreteMemento : public AbstractMemento
{
public:

	explicit ConcreteMemento(std::string state);
	virtual ~ConcreteMemento();

	virtual std::string get_state() const override;

private:

	const std::string m_state;

};

#endif

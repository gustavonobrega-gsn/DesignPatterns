#ifndef CONCRETESTATEA_HPP
#define CONCRETESTATEA_HPP

#include "AbstractState.hpp"

class ConcreteStateA : public AbstractState
{
public:

	explicit ConcreteStateA();
	virtual ~ConcreteStateA();

	virtual void operation() const override;

};

#endif

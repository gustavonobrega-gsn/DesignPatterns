#ifndef CONCRETESTATEB_HPP
#define CONCRETESTATEB_HPP

#include "AbstractState.hpp"

class ConcreteStateB : public AbstractState
{
public:

	explicit ConcreteStateB(Context* context);
	virtual ~ConcreteStateB();

	virtual void operation() const override;

};

#endif

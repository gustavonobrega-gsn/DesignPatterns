#ifndef CONCRETESTRATEGYB_HPP_
#define CONCRETESTRATEGYB_HPP_

#include "AbstractStrategy.hpp"

class ConcreteStrategyB : public AbstractStrategy
{
public:

	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();

	virtual void operation() const override;

};

#endif

#ifndef CONCRETESTRATEGYA_HPP
#define CONCRETESTRATEGYA_HPP

#include "AbstractStrategy.hpp"

class ConcreteStrategyA : public AbstractStrategy
{
public:

	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();

	virtual void operation() const override;

};


#endif

#ifndef CONCRETEFACTORY2_HPP
#define CONCRETEFACTORY2_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory2 : public AbstractFactory
{
public:

	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual AbstractProductA* createProductA() const override;
	virtual AbstractProductB* createProductB() const override;
	virtual AbstractProductC* createProductC() const override;
};

#endif

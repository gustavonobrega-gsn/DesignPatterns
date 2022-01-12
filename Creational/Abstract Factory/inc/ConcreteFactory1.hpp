#ifndef CONCRETEFACTORY1_HPP
#define CONCRETEFACTORY1_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory1 : public AbstractFactory
{
public:

	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual AbstractProductA* createProductA() const override;
	virtual AbstractProductB* createProductB() const override;
	virtual AbstractProductC* createProductC() const override;
};

#endif

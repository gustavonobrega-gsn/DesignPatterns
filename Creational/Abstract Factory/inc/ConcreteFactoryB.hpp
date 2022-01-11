#ifndef CONCRETEFACTORYB_HPP
#define CONCRETEFACTORYB_HPP

#include "AbstractFactory.hpp"

class ConcreteFactoryB : public AbstractFactory
{
public:

	ConcreteFactoryB();
	virtual ~ConcreteFactoryB();

	virtual AbstractProductA* createProductA() const override;
	virtual AbstractProductB* createProductB() const override;
	virtual AbstractProductC* createProductC() const override;
};

#endif

#ifndef CONCRETEFACTORYA_HPP
#define CONCRETEFACTORYA_HPP

#include "AbstractFactory.hpp"

class ConcreteFactoryA : public AbstractFactory
{
public:

	ConcreteFactoryA();
	virtual ~ConcreteFactoryA();

	virtual AbstractProductA* createProductA() const override;
	virtual AbstractProductB* createProductB() const override;
	virtual AbstractProductC* createProductC() const override;
};

#endif

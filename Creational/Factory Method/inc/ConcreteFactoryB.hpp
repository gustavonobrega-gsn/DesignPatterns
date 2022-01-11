#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "AbstractFactory.hpp"

class ConcreteFactoryB : public AbstractFactory
{
public:
	ConcreteFactoryB();
	virtual ~ConcreteFactoryB();
	
private:
	virtual AbstractProduct* factory_method() const override;
};

#endif

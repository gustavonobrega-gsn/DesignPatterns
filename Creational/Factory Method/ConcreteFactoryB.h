#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "AbstractFactory.h"

class ConcreteFactoryB : public AbstractFactory
{
public:
	ConcreteFactoryB();
	virtual ~ConcreteFactoryB();
	
	virtual AbstractProduct* factory_method();
};

#endif
#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include "AbstractFactory.h"

class ConcreteFactoryA : public AbstractFactory
{
public:
	ConcreteFactoryA();
	virtual ~ConcreteFactoryA();
	
	virtual AbstractProduct* create_product();
};

#endif
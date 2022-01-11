#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "AbstractFactory.h"

class ConcreteFactoryB : public AbstractFactory
{
public:
	ConcreteFactoryB();
	virtual ~ConcreteFactoryB();
	
private:
	virtual AbstractProduct* factory_method() override;
};

#endif

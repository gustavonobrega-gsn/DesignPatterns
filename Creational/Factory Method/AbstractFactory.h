#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractProduct.h"

class AbstractFactory 
{
public:
	virtual ~AbstractFactory();	
	
	virtual AbstractProduct* factory_method() = 0;
	virtual void operation();
};

#endif
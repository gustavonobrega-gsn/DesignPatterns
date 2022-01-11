#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractProduct.h"

class AbstractFactory 
{
public:
	virtual ~AbstractFactory();	
	
	virtual void operation();

private:
	virtual AbstractProduct* factory_method() = 0;
};

#endif

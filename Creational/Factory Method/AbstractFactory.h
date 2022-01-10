#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractProduct.h"

class AbstractFactory 
{
public:
	virtual ~AbstractFactory(){}	
	
	virtual AbstractProduct* create_product() = 0;
};

#endif
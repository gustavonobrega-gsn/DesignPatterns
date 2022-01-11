#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "AbstractProduct.hpp"

class AbstractFactory 
{
public:
	virtual ~AbstractFactory();	
	
	virtual void operation() const;

private:
	virtual AbstractProduct* factory_method() const = 0;
};

#endif

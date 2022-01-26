#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "AbstractProduct.hpp"

#include <memory>

class AbstractFactory 
{
public:

	virtual ~AbstractFactory();	
	
	virtual void operation() const;

private:

	virtual std::unique_ptr<AbstractProduct> factory_method() const = 0;

};

#endif

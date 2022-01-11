#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"
#include "AbstractProductC.hpp"

class AbstractFactory
{
public:

	virtual ~AbstractFactory(){}

	virtual AbstractProductA* createProductA() const = 0;
	virtual AbstractProductB* createProductB() const = 0;
	virtual AbstractProductC* createProductC() const = 0;
};

#endif

#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"
#include "AbstractProductC.hpp"

#include <memory>

class AbstractFactory
{
public:

	virtual ~AbstractFactory(){}

	virtual std::unique_ptr<AbstractProductA> createProductA() const = 0;
	virtual std::unique_ptr<AbstractProductB> createProductB() const = 0;
	virtual std::unique_ptr<AbstractProductC> createProductC() const = 0;
};

#endif

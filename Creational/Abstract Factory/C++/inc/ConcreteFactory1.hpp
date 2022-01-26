#ifndef CONCRETEFACTORY1_HPP
#define CONCRETEFACTORY1_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory1 : public AbstractFactory
{
public:

	ConcreteFactory1();
	virtual ~ConcreteFactory1();

	virtual std::unique_ptr<AbstractProductA> createProductA() const override;
	virtual std::unique_ptr<AbstractProductB> createProductB() const override;
	virtual std::unique_ptr<AbstractProductC> createProductC() const override;
};

#endif

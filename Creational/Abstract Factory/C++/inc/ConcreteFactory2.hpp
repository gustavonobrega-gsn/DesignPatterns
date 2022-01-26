#ifndef CONCRETEFACTORY2_HPP
#define CONCRETEFACTORY2_HPP

#include "AbstractFactory.hpp"

class ConcreteFactory2 : public AbstractFactory
{
public:

	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual std::unique_ptr<AbstractProductA> createProductA() const override;
	virtual std::unique_ptr<AbstractProductB> createProductB() const override;
	virtual std::unique_ptr<AbstractProductC> createProductC() const override;
};

#endif

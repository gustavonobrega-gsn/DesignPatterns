#ifndef CONCRETEFACTORYB_HPP
#define CONCRETEFACTORYB_HPP

#include "AbstractFactory.hpp"

class ConcreteFactoryB : public AbstractFactory
{
public:
	ConcreteFactoryB();
	virtual ~ConcreteFactoryB();
	
private:
	virtual AbstractProduct* factory_method() const override;
};

#endif

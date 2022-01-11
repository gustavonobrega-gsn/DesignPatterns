#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include "AbstractFactory.hpp"

class ConcreteFactoryA : public AbstractFactory
{
public:
	ConcreteFactoryA();
	virtual ~ConcreteFactoryA();
	
private:
	virtual AbstractProduct* factory_method() const override;
};

#endif

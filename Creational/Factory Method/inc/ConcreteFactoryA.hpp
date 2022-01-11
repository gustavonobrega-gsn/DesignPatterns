#ifndef CONCRETEFACTORYA_HPP
#define CONCRETEFACTORYA_HPP

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

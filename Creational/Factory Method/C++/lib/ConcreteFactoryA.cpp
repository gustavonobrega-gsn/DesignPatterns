#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteProductA.hpp"

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}
	
std::unique_ptr<AbstractProduct> ConcreteFactoryA::factory_method() const
{
	return std::unique_ptr<AbstractProduct>(new ConcreteProductA());
};

#include "../inc/ConcreteFactoryB.hpp"
#include "../inc/ConcreteProductB.hpp"

ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}
	
std::unique_ptr<AbstractProduct> ConcreteFactoryB::factory_method() const
{
	return std::unique_ptr<AbstractProduct>(new ConcreteProductB());
};

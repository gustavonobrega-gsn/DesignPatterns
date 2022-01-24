#include "../inc/ConcreteFactoryB.hpp"
#include "../inc/ConcreteProductB.hpp"

ConcreteFactoryB::ConcreteFactoryB()
{

}

ConcreteFactoryB::~ConcreteFactoryB()
{

}
	
std::shared_ptr<AbstractProduct> ConcreteFactoryB::factory_method() const
{
	return std::make_shared<ConcreteProductB>();
};

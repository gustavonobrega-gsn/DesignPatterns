#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteProductA.hpp"

ConcreteFactoryA::ConcreteFactoryA()
{

}

ConcreteFactoryA::~ConcreteFactoryA()
{

}
	
std::shared_ptr<AbstractProduct> ConcreteFactoryA::factory_method() const
{
	return std::make_shared<ConcreteProductA>();
};

#include "../inc/ConcreteStrategyB.hpp"

#include <iostream>

ConcreteStrategyB::ConcreteStrategyB()
{

}

ConcreteStrategyB::~ConcreteStrategyB()
{

}

void ConcreteStrategyB::operation() const
{
	std::cout << "ConcreteStrategyB doing operation" << std::endl;
}

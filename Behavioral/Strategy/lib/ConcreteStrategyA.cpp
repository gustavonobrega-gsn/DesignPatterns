#include "../inc/ConcreteStrategyA.hpp"

#include <iostream>

ConcreteStrategyA::ConcreteStrategyA()
{

}

ConcreteStrategyA::~ConcreteStrategyA()
{

}

void ConcreteStrategyA::operation() const
{
	std::cout << "ConcreteStrategyA doing operation" << std::endl;
}

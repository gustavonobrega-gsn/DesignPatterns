#include "../inc/ConcreteCommandB.hpp"

#include <iostream>

ConcreteCommandB::ConcreteCommandB()
{

}

ConcreteCommandB::~ConcreteCommandB()
{

}

void ConcreteCommandB::operation() const
{
	std::cout << "CommandB doing operation" << std::endl;
}


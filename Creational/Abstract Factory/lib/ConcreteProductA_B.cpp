#include "../inc/ConcreteProductA_B.hpp"

#include <iostream>

ConcreteProductA_B::ConcreteProductA_B()
{

}

ConcreteProductA_B::~ConcreteProductA_B()
{

}

void ConcreteProductA_B::operationA() const
{
	std::cout << "Operation from ConcreteProductA_B" << std::endl;
}

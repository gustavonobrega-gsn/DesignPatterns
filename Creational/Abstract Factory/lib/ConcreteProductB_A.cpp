#include "../inc/ConcreteProductB_A.hpp"

#include <iostream>

ConcreteProductB_A::ConcreteProductB_A()
{

}

ConcreteProductB_A::~ConcreteProductB_A()
{

}

void ConcreteProductB_A::operationB() const
{
	std::cout << "Operation from ConcreteProductB_A" << std::endl;
}

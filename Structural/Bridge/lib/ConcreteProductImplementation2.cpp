#include "../inc/ConcreteProductImplementation2.hpp"

#include <iostream>

ConcreteProductImplementation2::ConcreteProductImplementation2()
{

}

ConcreteProductImplementation2::~ConcreteProductImplementation2()
{

}

void ConcreteProductImplementation2::operation1() const
{
	std::cout << "Operation1 made by Implementation2" << std::endl;
}

void ConcreteProductImplementation2::operation2() const
{
	std::cout << "Operation2 made by Implementation2" << std::endl;
}

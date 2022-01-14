#include "../inc/ConcreteProductImplementation1.hpp"

#include <iostream>

ConcreteProductImplementation1::ConcreteProductImplementation1()
{

}

ConcreteProductImplementation1::~ConcreteProductImplementation1()
{

}

void ConcreteProductImplementation1::operation1() const
{
	std::cout << "Operation1 made by Implementation1" << std::endl;
}

void ConcreteProductImplementation1::operation2() const
{
	std::cout << "Operation2 made by Implementation1" << std::endl;
}

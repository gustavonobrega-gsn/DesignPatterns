#include "../inc/ConcreteProductA.hpp"

#include <iostream>

ConcreteProductA::ConcreteProductA()
{

}

ConcreteProductA::~ConcreteProductA()
{

}

void ConcreteProductA::operation1() const
{
	std::cout << "ConcreteProductA doing operation1" << std::endl;
}

void ConcreteProductA::operation3() const
{
	std::cout << "ConcreteProductA doing operation3" << std::endl;
}

#include "../inc/ConcreteProductA.hpp"
#include "../inc/AbstractMediator.hpp"

#include <iostream>

ConcreteProductA::ConcreteProductA(AbstractMediator* const abstract_mediator)
:AbstractProduct::AbstractProduct(abstract_mediator)
{

}

ConcreteProductA::~ConcreteProductA()
{

}

void ConcreteProductA::operation1()
{
	std::cout << "ProductA doing operation1";
	m_abstract_mediator->notify_operation1(this);
}

void ConcreteProductA::operation2()
{
	std::cout << "ProductA doing operation2" << std::endl << std::endl;
}

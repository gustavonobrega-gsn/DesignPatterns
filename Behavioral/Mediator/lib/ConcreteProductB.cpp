#include "../inc/ConcreteProductB.hpp"
#include "../inc/AbstractMediator.hpp"

#include <iostream>

ConcreteProductB::ConcreteProductB(AbstractMediator* const abstract_mediator)
:AbstractProduct::AbstractProduct(abstract_mediator)
{

}

ConcreteProductB::~ConcreteProductB()
{

}

void ConcreteProductB::operation1()
{
	std::cout << "ProductB doing operation1";
	m_abstract_mediator->notify_operation1(this);
}

void ConcreteProductB::operation2()
{
	std::cout << "ProductB doing operation2" << std::endl << std::endl;
}

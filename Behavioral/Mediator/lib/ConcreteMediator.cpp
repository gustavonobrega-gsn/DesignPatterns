#include "../inc/ConcreteMediator.hpp"

#include <iostream>

ConcreteMediator::ConcreteMediator(AbstractProduct*& abstract_product1, AbstractProduct*& abstract_product2)
:AbstractMediator::AbstractMediator(abstract_product1,abstract_product2)
{

}

ConcreteMediator::~ConcreteMediator()
{

}

void ConcreteMediator::notify_operation1(AbstractProduct* const abstract_product_sender)
{
	if(abstract_product_sender == m_abstract_product1)
	{
		std::cout << " - Mediator reveived operation1 notification from ProductA and will call operation2 from ProductB - ";
		m_abstract_product2->operation2();
	}
	else if(abstract_product_sender == m_abstract_product2)
	{
		std::cout << " - Mediator reveived operation1 notification from ProductB and will call operation2 from ProductA - ";
		m_abstract_product1->operation2();
	}
}

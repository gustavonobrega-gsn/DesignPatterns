#include "../inc/ConcreteVisitor.hpp"
#include "../inc/ConcreteProductA.hpp"
#include "../inc/ConcreteProductB.hpp"

#include <iostream>

ConcreteVisitor::ConcreteVisitor()
{

}

ConcreteVisitor::~ConcreteVisitor()
{

}

void ConcreteVisitor::visit(const ConcreteProductA* concrete_productA) const
{
	std::cout << "ConcreteVisitor doing something with ConcreteProductA instance" << std::endl;
	concrete_productA->operation();
	std::cout << "ConcreteVisitor finished doing something with ConcreteProductA instance" << std::endl << std::endl;
}

void ConcreteVisitor::visit(const ConcreteProductB* concrete_productB) const
{
	std::cout << "ConcreteVisitor doing something with ConcreteProductB instance" << std::endl;
	concrete_productB->operation();
	std::cout << "ConcreteVisitor finished doing something with ConcreteProductB instance" << std::endl << std::endl;
}


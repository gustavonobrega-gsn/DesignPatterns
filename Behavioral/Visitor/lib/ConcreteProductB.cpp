#include "../inc/ConcreteProductB.hpp"

#include <iostream>

ConcreteProductB::ConcreteProductB()
{

}

ConcreteProductB::~ConcreteProductB()
{

}

void ConcreteProductB::operation() const
{
	std::cout << "ConcreteProductB doing operation" << std::endl;
}

void ConcreteProductB::accept(AbstractVisitor* const abstract_visitor) const
{
	abstract_visitor->visit(this);
}

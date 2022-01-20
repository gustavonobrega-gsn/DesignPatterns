#include "../inc/ConcreteProductA.hpp"

#include <iostream>

ConcreteProductA::ConcreteProductA()
{

}

ConcreteProductA::~ConcreteProductA()
{

}

void ConcreteProductA::operation() const
{
	std::cout << "ConcreteProductA doing operation" << std::endl;
}

void ConcreteProductA::accept(AbstractVisitor* const abstract_visitor) const
{
	abstract_visitor->visit(this);
}

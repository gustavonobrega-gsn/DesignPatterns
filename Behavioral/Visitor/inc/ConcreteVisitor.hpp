#ifndef CONCRETEVISITOR_HPP
#define CONCRETEVISITOR_HPP

#include "AbstractVisitor.hpp"

class ConcreteVisitor : public AbstractVisitor
{
public:

	ConcreteVisitor();
	virtual ~ConcreteVisitor();

	virtual void visit(const ConcreteProductA* concrete_productA) const override;
	virtual void visit(const ConcreteProductB* concrete_productB) const override;

};

#endif

#ifndef ABSTRACTVISITOR_HPP
#define ABSTRACTVISITOR_HPP

class ConcreteProductA;
class ConcreteProductB;

class AbstractVisitor
{
public:

	virtual ~AbstractVisitor(){}

	virtual void visit(const ConcreteProductA* concrete_productA) const = 0;
	virtual void visit(const ConcreteProductB* concrete_productB) const = 0;

};

#endif

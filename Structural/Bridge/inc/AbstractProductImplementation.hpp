#ifndef ABSTRACTPRODUCTIMPLEMENTATION_HPP
#define ABSTRACTPRODUCTIMPLEMENTATION_HPP

class AbstractProductImplementation
{
public:

	virtual ~AbstractProductImplementation(){}

	virtual void operation1() const = 0;
	virtual void operation2() const = 0;
};

#endif

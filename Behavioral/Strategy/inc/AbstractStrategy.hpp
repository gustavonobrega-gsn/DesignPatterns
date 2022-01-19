#ifndef ABSTRACTSTRATEGY_HPP
#define ABSTRACTSTRATEGY_HPP

class AbstractStrategy
{
public:

	virtual ~AbstractStrategy(){}

	virtual void operation() const = 0;

};

#endif

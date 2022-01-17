#ifndef ABSTRACTEXPRESSION_HPP
#define ABSTRACTEXPRESSION_HPP

#include <string>

class AbstractExpression
{
public:

	virtual ~AbstractExpression(){}

	virtual bool interpret() const = 0;

};

#endif

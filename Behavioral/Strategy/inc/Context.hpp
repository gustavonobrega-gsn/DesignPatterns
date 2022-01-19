#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "AbstractStrategy.hpp"

class Context
{
public:

	explicit Context(AbstractStrategy* abstract_strategy);
	virtual ~Context();

	void set_strategy(AbstractStrategy* abstract_strategy);
	void operation() const;

private:

	AbstractStrategy* m_abstract_strategy;

};

#endif

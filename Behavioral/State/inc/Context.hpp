#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "AbstractState.hpp"

class Context
{
public:

	Context(AbstractState* const abstract_state);
	virtual ~Context();

	void set_state(AbstractState* const abstract_state);
	void operation() const;

private:

	AbstractState* m_abstract_state;

};

#endif

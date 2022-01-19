#ifndef ABSTRACTSTATE_HPP
#define ABSTRACTSTATE_HPP

class Context;

class AbstractState
{
public:

	explicit AbstractState(Context* context);
	virtual ~AbstractState();

	virtual void operation() const = 0;

protected:

	Context* m_context;

};

#endif

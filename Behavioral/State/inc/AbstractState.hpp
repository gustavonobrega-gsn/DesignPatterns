#ifndef ABSTRACTSTATE_HPP
#define ABSTRACTSTATE_HPP

class Context;

class AbstractState
{
public:

	explicit AbstractState();
	virtual ~AbstractState();

	virtual void set_context(Context* context);
	virtual void operation() const = 0;

protected:

	Context* m_context;

};

#endif

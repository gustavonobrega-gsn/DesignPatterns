#ifndef CONCRETECOMMANDB_HPP
#define CONCRETECOMMANDB_HPP

#include "AbstractCommand.hpp"

class ConcreteCommandB : public AbstractCommand
{
public:

	ConcreteCommandB();
	virtual ~ConcreteCommandB();

	void operation() const override;

};

#endif

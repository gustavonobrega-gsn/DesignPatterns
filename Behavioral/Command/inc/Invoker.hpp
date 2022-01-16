#ifndef INVOKER_HPP
#define INVOKER_HPP

#include "AbstractCommand.hpp"

#include <vector>

class Invoker
{
public:

	Invoker();
	virtual ~Invoker();

	void add_command(AbstractCommand* const abstract_command);
	void execute_commands() const;

private:

	std::vector<AbstractCommand*> m_abstract_commands;

};

#endif

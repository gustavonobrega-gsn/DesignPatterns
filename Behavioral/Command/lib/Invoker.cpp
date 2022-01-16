#include "../inc/Invoker.hpp"

#include <iostream>

Invoker::Invoker()
{

}

Invoker::~Invoker()
{
	for(AbstractCommand* abstract_command : m_abstract_commands)
	{
		delete abstract_command;
	}
}

void Invoker::add_command(AbstractCommand* const abstract_command)
{
	m_abstract_commands.push_back(abstract_command);
}

void Invoker::execute_commands() const
{

	std::cout << "Invoker executing commands" << std::endl;

	for(AbstractCommand* const abstract_command : m_abstract_commands)
	{
		abstract_command->operation();
	}

	std::cout << "Invoker concluded commands execution" << std::endl << std::endl;
}

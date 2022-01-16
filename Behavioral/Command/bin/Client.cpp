#include "../inc/ConcreteCommandA.hpp"
#include "../inc/ConcreteCommandB.hpp"
#include "../inc/Invoker.hpp"


int main()
{
	Product* product = new Product();

	AbstractCommand* abstract_command1 = new ConcreteCommandA(product);
	AbstractCommand* abstract_command2 = new ConcreteCommandB();

	Invoker* invoker = new Invoker();

	invoker->add_command(abstract_command1);
	invoker->add_command(abstract_command2);

	invoker->execute_commands();

	delete invoker;

	return 0;
}

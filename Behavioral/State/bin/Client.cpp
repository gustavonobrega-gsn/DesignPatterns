#include "../inc/Context.hpp"
#include "../inc/ConcreteStateA.hpp"

int main()
{

	AbstractState* abstract_state = new ConcreteStateA();
	Context context(abstract_state);

	context.operation();
	context.operation();
	context.operation();
	context.operation();

	return 0;
}

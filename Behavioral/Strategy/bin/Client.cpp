#include "../inc/Context.hpp"
#include "../inc/ConcreteStrategyA.hpp"
#include "../inc/ConcreteStrategyB.hpp"

int main()
{
	Context context(new ConcreteStrategyA());
	context.operation();

	context.set_strategy(new ConcreteStrategyB());
	context.operation();

	context.set_strategy(new ConcreteStrategyA());
	context.operation();

	return 0;
}

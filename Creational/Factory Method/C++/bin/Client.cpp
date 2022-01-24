#include "../inc/ConcreteFactoryA.hpp"
#include "../inc/ConcreteFactoryB.hpp"

int main()
{
	std::unique_ptr<AbstractFactory> abst_factory (new ConcreteFactoryA());
	abst_factory->operation();
	
	abst_factory.reset(new ConcreteFactoryB());
	abst_factory->operation();
	
    return 0;       
}

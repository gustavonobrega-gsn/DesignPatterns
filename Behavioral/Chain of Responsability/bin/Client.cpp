#include "../inc/ConcreteProductHandlerA.hpp"
#include "../inc/ConcreteProductHandlerB.hpp"

int main()
{
	AbstractProductHandler* product_handlerA = new ConcreteProductHandlerA();
	AbstractProductHandler* product_handlerB = new ConcreteProductHandlerB();

	product_handlerA->set_next_product_handler(product_handlerB);

	product_handlerA->operation(product_type_A);
	product_handlerA->operation(product_type_B);
	product_handlerA->operation(product_type_C);

	product_handlerB->operation(product_type_A);
	product_handlerB->operation(product_type_B);
	product_handlerB->operation(product_type_C);

	delete product_handlerA;

	return 0;
}

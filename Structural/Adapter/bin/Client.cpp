#include "../inc/ConcreteProduct.hpp"
#include "../inc/Adapter.hpp"
#include "../inc/IncompatibleProduct.hpp"

int main()
{
	AbstractProduct* abst_product = new ConcreteProduct();
	abst_product->operation();

	delete abst_product;


	IncompatibleProduct incompatible_product;

	abst_product = new Adapter(&incompatible_product);
	abst_product->operation();

	delete abst_product;


	return 0;
}

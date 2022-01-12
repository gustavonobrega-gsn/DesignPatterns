#include "../inc/ConcreteBuilder1.hpp"
#include "../inc/ConcreteBuilder2.hpp"
#include "../inc/AbstractProduct.hpp"

int main()
{
	AbstractBuilder* abst_builder;
	AbstractProduct* abst_prod;

	abst_builder = new ConcreteBuilder1();
	abst_builder->reset();
	abst_builder->build_step_a();
	abst_builder->build_step_b();
	abst_builder->build_step_c();

	abst_prod = abst_builder->get_product();
	abst_prod->operation();

	delete abst_prod;
	delete abst_builder;


	abst_builder = new ConcreteBuilder2();
	abst_builder->reset();
	abst_builder->build_step_a();
	abst_builder->build_step_c();

	abst_prod = abst_builder->get_product();
	abst_prod->operation();

	delete abst_prod;
	delete abst_builder;

	return 0;
}

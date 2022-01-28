#include "../inc/ConcreteBuilder1.hpp"
#include "../inc/ConcreteBuilder2.hpp"
#include "../inc/AbstractProduct.hpp"

int main()
{
	std::unique_ptr<AbstractBuilder> abst_builder;
	std::shared_ptr<AbstractProduct> abst_prod;

	abst_builder = std::unique_ptr<AbstractBuilder>(new ConcreteBuilder1());
	abst_builder->reset();
	abst_builder->build_step_a();
	abst_builder->build_step_b();
	abst_builder->build_step_c();

	abst_prod = abst_builder->get_product();
	abst_prod->operation();



	abst_builder.reset(new ConcreteBuilder2());
	abst_builder->reset();
	abst_builder->build_step_a();
	abst_builder->build_step_c();

	abst_prod = abst_builder->get_product();
	abst_prod->operation();


	return 0;
}

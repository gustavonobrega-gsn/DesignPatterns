#include "../inc/CompositeProduct.hpp"
#include "../inc/ConcreteProduct.hpp"

int main()
{

	CompositeProduct* root = new CompositeProduct("root");

	//---------------------------------------------------------//

	CompositeProduct* composite_product1 = new CompositeProduct("composite1");
	CompositeProduct* composite_product2 = new CompositeProduct("composite2");

	root->add_abstract_product(composite_product1);
	root->add_abstract_product(composite_product2);

	//---------------------------------------------------------//

	CompositeProduct* composite_product1_1 = new CompositeProduct("composite1_1");
	CompositeProduct* composite_product1_2 = new CompositeProduct("composite1_2");
	CompositeProduct* composite_product2_1 = new CompositeProduct("composite2_1");
	CompositeProduct* composite_product2_2 = new CompositeProduct("composite2_2");

	composite_product1->add_abstract_product(composite_product1_1);
	composite_product1->add_abstract_product(composite_product1_2);

	composite_product2->add_abstract_product(composite_product2_1);
	composite_product2->add_abstract_product(composite_product2_2);

	//---------------------------------------------------------//

	AbstractProduct* concrete_product1_1_1 = new ConcreteProduct("product1_1_1");
	AbstractProduct* concrete_product1_1_2 = new ConcreteProduct("product1_1_2");
	AbstractProduct* concrete_product1_2_1 = new ConcreteProduct("product1_2_1");
	AbstractProduct* concrete_product1_2_2 = new ConcreteProduct("product1_2_2");
	AbstractProduct* concrete_product2_1_1 = new ConcreteProduct("product2_1_1");
	AbstractProduct* concrete_product2_1_2 = new ConcreteProduct("product2_1_2");
	AbstractProduct* concrete_product2_2_1 = new ConcreteProduct("product2_2_1");
	AbstractProduct* concrete_product2_2_2 = new ConcreteProduct("product2_2_2");

	composite_product1_1->add_abstract_product(concrete_product1_1_1);
	composite_product1_1->add_abstract_product(concrete_product1_1_2);

	composite_product1_2->add_abstract_product(concrete_product1_2_1);
	composite_product1_2->add_abstract_product(concrete_product1_2_2);

	composite_product2_1->add_abstract_product(concrete_product2_1_1);
	composite_product2_1->add_abstract_product(concrete_product2_1_2);

	composite_product2_2->add_abstract_product(concrete_product2_2_1);
	composite_product2_2->add_abstract_product(concrete_product2_2_2);

	//---------------------------------------------------------//

	root->operation("");

	delete root;

	return 0;
}

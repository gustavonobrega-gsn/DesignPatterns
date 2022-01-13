#include "../inc/AbstractProduct.hpp"
#include "../inc/PrototypeFactory.hpp"

int main()
{
	PrototypeFactory prototypeFactory;
	AbstractProduct* abst_product[2];

	abst_product[0] = prototypeFactory.create_product(productA);
	abst_product[1] = prototypeFactory.create_product(productA);

	abst_product[0]->operation();
	abst_product[1]->operation();

	delete abst_product[0];
	delete abst_product[1];


	abst_product[0] = prototypeFactory.create_product(productB);
	abst_product[1] = prototypeFactory.create_product(productB);

	abst_product[0]->operation();
	abst_product[1]->operation();

	delete abst_product[0];
	delete abst_product[1];


    abst_product[0] = prototypeFactory.create_product(productC);
    abst_product[1] = prototypeFactory.create_product(productC);

    abst_product[0]->operation();
    abst_product[1]->operation();

	delete abst_product[0];
	delete abst_product[1];

	return 0;
}

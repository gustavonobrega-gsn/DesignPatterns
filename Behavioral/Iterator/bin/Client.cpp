#include "../inc/ConcreteCollection.hpp"
#include "../inc/AbstractIterator.hpp"
#include "../inc/Product.hpp"

#include <iostream>

int main()
{

	AbstractCollection<int>* abstract_collection_int = new ConcreteCollection<int>();

	abstract_collection_int->add(5);
	abstract_collection_int->add(6);
	abstract_collection_int->add(7);

	AbstractIterator<int>* abstract_iterator_int =     abstract_collection_int->begin();
	AbstractIterator<int>* abstract_iterator_int_end = abstract_collection_int->end();

	for( ; *abstract_iterator_int != *abstract_iterator_int_end ; (*abstract_iterator_int)++)
	{
		std::cout << "int: " << abstract_iterator_int->get() << std::endl;
	}

	delete abstract_collection_int;
	delete abstract_iterator_int;
	delete abstract_iterator_int_end;




	AbstractCollection<Product*>* abstract_collection_product = new ConcreteCollection<Product*>();

	Product* product1 = new Product();
	Product* product2 = new Product();
	Product* product3 = new Product();

	abstract_collection_product->add(product1);
	abstract_collection_product->add(product2);
	abstract_collection_product->add(product3);

	AbstractIterator<Product*>* abstract_iterator_product =     abstract_collection_product->begin();
	AbstractIterator<Product*>* abstract_iterator_product_end = abstract_collection_product->end();

	for( ; *abstract_iterator_product != *abstract_iterator_product_end ; (*abstract_iterator_product)++)
	{
		std::cout << "Product: " << abstract_iterator_product->get() << std::endl;
	}


	for(abstract_iterator_product->reset() ; *abstract_iterator_product != *abstract_iterator_product_end ; (*abstract_iterator_product)++)
	{
		std::cout << "Deleted Product: " << abstract_iterator_product->get() << std::endl;
		delete abstract_iterator_product->get();
	}

	delete abstract_collection_product;
	delete abstract_iterator_product;
	delete abstract_iterator_product_end;


	return 0;
}

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

	AbstractIterator<int>* abstract_iterator_int = abstract_collection_int->create_Iterator();

	for(abstract_iterator_int->reset() ; !abstract_iterator_int->ended() ; abstract_iterator_int->next())
	{
		std::cout << "int: " << abstract_iterator_int->get() << std::endl;
	}


	AbstractCollection<Product*>* abstract_collection_product = new ConcreteCollection<Product*>();

	abstract_collection_product->add(new Product());
	abstract_collection_product->add(new Product());
	abstract_collection_product->add(new Product());

	AbstractIterator<Product*>* abstract_iterator_product = abstract_collection_product->create_Iterator();

	for(abstract_iterator_product->reset() ; !abstract_iterator_product->ended() ; abstract_iterator_product->next())
	{
		std::cout << "Product: " << abstract_iterator_product->get() << std::endl;
	}



	delete abstract_collection_int;
	delete abstract_iterator_int;

	for(abstract_iterator_product->reset() ; !abstract_iterator_product->ended() ; abstract_iterator_product->next())
	{
		delete abstract_iterator_product->get();
	}

	delete abstract_collection_product;
	delete abstract_iterator_product;


	return 0;
}

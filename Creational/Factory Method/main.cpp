#include <iostream>

#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

int main()
{
	AbstractFactory* abst_factory;
	AbstractProduct* abst_product;
	
	abst_factory = new ConcreteFactoryA();
	abst_product = abst_factory->create_product();
	
	abst_product->operation();
	
	delete abst_product;
	delete abst_factory;
	
	abst_factory = new ConcreteFactoryB();
	abst_product = abst_factory->create_product();
	
	abst_product->operation();
	
	delete abst_product;
	delete abst_factory;
	
    return 0;       
}
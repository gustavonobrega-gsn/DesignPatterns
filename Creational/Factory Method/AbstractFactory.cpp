#include "AbstractFactory.h"

AbstractFactory::~AbstractFactory()
{
	
}	

void AbstractFactory::operation()
{
	AbstractProduct* abst_product = factory_method();
	abst_product->operation();
	delete abst_product;
}

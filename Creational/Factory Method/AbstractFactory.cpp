#include "AbstractFactory.h"

AbstractFactory::~AbstractFactory()
{
	
}	

void AbstractFactory::operation() const
{
	AbstractProduct* abst_product = factory_method();
	abst_product->operation();
	delete abst_product;
}

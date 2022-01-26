#include "../inc/AbstractFactory.hpp"

AbstractFactory::~AbstractFactory()
{

}	

void AbstractFactory::operation() const
{
	std::unique_ptr<AbstractProduct> abst_product = factory_method();
	abst_product->operation();
}

#include "../inc/Facade.hpp"

#include "../inc/Framework1.hpp"
#include "../inc/Framework2.hpp"

Facade::Facade()
{

}

Facade::~Facade()
{

}

void Facade::operation() const
{
	Framework1 framework1;
	Framework2 framework2;

	framework1.operation();
	framework2.operation();
}

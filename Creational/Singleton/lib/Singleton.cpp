#include "../inc/Singleton.hpp"

#include <iostream>

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton::Singleton(const Singleton&)
{

}

void Singleton::operator=(const Singleton&)
{

}

Singleton& Singleton::get_instance()
{
	static Singleton instance;
	return instance;
}

void Singleton::operation() const
{
	std::cout << "Singleton address : " << this << std::endl;
}

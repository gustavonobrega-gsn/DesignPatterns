#include "../inc/PrototypeFactory.hpp"

#include "../inc/ConcreteProductA.hpp"
#include "../inc/ConcreteProductB.hpp"
#include "../inc/ConcreteProductC.hpp"

#include <iostream>

PrototypeFactory::PrototypeFactory()
{

}

PrototypeFactory::~PrototypeFactory()
{
	for( std::map<product_type,AbstractProduct*>::iterator it = m_product_library.begin() ; it != m_product_library.end() ; it++ )
	{
		delete it->second;
	}
	m_product_library.clear();
}

AbstractProduct* PrototypeFactory::create_product(const product_type type)
{
	if (m_product_library.find(type) == m_product_library.end())
	{
		switch (type)
		{
			case productA:
				m_product_library[type] = new ConcreteProductA();
				std::cout << "First ProductA address: " << m_product_library[type] << std::endl;
				break;
			case productB:
				m_product_library[type] = new ConcreteProductB();
				std::cout << "First ProductB address: " << m_product_library[type] << std::endl;
				break;
			case productC:
				m_product_library[type] = new ConcreteProductC();
				std::cout << "First ProductC address: " << m_product_library[type] << std::endl;
				break;
			default:
				break;
		}
	}

	return m_product_library.at(type)->clone();
}

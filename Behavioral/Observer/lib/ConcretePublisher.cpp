#include "../inc/ConcretePublisher.hpp"

#include <iostream>

ConcretePublisher::ConcretePublisher()
{

}

ConcretePublisher::~ConcretePublisher()
{

}

void ConcretePublisher::add_subscriber(AbstractSubscriber* const abstract_subscriber)
{
	m_subscribers.insert({abstract_subscriber->get_name(), abstract_subscriber});
}

void ConcretePublisher::remove_subscriber(AbstractSubscriber* const abstract_subscriber)
{
	m_subscribers.erase(abstract_subscriber->get_name());
}

void ConcretePublisher::publish(const std::string message)
{
	std::cout << "Publisher has a new message: " << message << std::endl;

	for(std::map<std::string, AbstractSubscriber*>::iterator it = m_subscribers.begin() ; it != m_subscribers.end() ; it++)
	{
		it->second->notify(message);
	}

	std::cout << std::endl;
}

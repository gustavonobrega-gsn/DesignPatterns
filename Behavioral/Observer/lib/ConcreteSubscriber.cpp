#include "../inc/ConcreteSubscriber.hpp"
#include "../inc/AbstractPublisher.hpp"

#include <iostream>

ConcreteSubscriber::ConcreteSubscriber(const std::string name)
:m_name(name)
{

}

ConcreteSubscriber::~ConcreteSubscriber()
{

}

std::string ConcreteSubscriber::get_name() const
{
	return m_name;
}

void ConcreteSubscriber::subscribe(AbstractPublisher* abstract_publisher)
{
	abstract_publisher->add_subscriber(this);
}

void ConcreteSubscriber::unsubscribe(AbstractPublisher* abstract_publisher)
{
	abstract_publisher->remove_subscriber(this);
}

void ConcreteSubscriber::notify(const std::string message) const
{
	std::cout << "Subscriber: " << get_name() << " notified: " << message << std::endl;
}


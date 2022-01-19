#ifndef CONCRETEPUBLISHER_HPP
#define CONCRETEPUBLISHER_HPP

#include "AbstractPublisher.hpp"

#include <string>
#include <map>

class ConcretePublisher : public AbstractPublisher
{
public:

	ConcretePublisher();
	virtual ~ConcretePublisher();

	virtual void add_subscriber(AbstractSubscriber* const abstract_subscriber);
	virtual void remove_subscriber(AbstractSubscriber* const abstract_subscriber);
	virtual void publish(const std::string message);

private:

	std::map<std::string, AbstractSubscriber*> m_subscribers;
};

#endif

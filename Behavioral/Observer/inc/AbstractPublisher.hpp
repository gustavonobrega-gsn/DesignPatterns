#ifndef ABSTRACTPUBLISHER_HPP
#define ABSTRACTPUBLISHER_HPP

#include "AbstractSubscriber.hpp"

class AbstractPublisher
{
public:

	virtual ~AbstractPublisher(){}

	virtual void add_subscriber(AbstractSubscriber* const abstract_subscriber) = 0;
	virtual void remove_subscriber(AbstractSubscriber* const abstract_subscriber) = 0;
	virtual void publish(const std::string message) = 0;
};

#endif

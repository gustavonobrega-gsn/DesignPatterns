#ifndef ABSTRACTSUBSCRIBER_HPP
#define ABSTRACTSUBSCRIBER_HPP

#include <string>

class AbstractPublisher;

class AbstractSubscriber
{
public:

	virtual ~AbstractSubscriber(){}

	virtual std::string get_name() const = 0;
	virtual void subscribe(AbstractPublisher* abstract_publisher) = 0;
	virtual void unsubscribe(AbstractPublisher* abstract_publisher) = 0;
	virtual void notify(const std::string message) const = 0;
};

#endif

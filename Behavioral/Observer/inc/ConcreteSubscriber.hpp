#ifndef CONCRETESUBSCRIBER_HPP
#define CONCRETESUBSCRIBER_HPP

#include "AbstractSubscriber.hpp"

class ConcreteSubscriber : public AbstractSubscriber
{
public:

	ConcreteSubscriber(const std::string name);
	virtual ~ConcreteSubscriber();

	virtual std::string get_name() const override;
	virtual void subscribe(AbstractPublisher* abstract_publisher) override;
	virtual void unsubscribe(AbstractPublisher* abstract_publisher) override;
	virtual void notify(const std::string message) const override;

private:

	std::string m_name;

};

#endif

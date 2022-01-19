#include "../inc/ConcretePublisher.hpp"
#include "../inc/ConcreteSubscriber.hpp"

int main()
{
	AbstractPublisher* abstract_publisher = new ConcretePublisher();

	AbstractSubscriber* abstract_subscriberA = new ConcreteSubscriber("A");
	AbstractSubscriber* abstract_subscriberB = new ConcreteSubscriber("B");
	AbstractSubscriber* abstract_subscriberC = new ConcreteSubscriber("C");


	abstract_subscriberA->subscribe(abstract_publisher);
	abstract_subscriberB->subscribe(abstract_publisher);
	abstract_subscriberC->subscribe(abstract_publisher);

	abstract_publisher->publish("New Content 1");


	abstract_subscriberB->unsubscribe(abstract_publisher);

	abstract_publisher->publish("New Content 2");


	abstract_subscriberB->subscribe(abstract_publisher);

	abstract_publisher->publish("New Content 3");


	delete abstract_publisher;
	delete abstract_subscriberA;
	delete abstract_subscriberB;
	delete abstract_subscriberC;

	return 0;
}

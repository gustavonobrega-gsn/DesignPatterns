#ifndef CONCRETEMEDIATOR_HPP_
#define CONCRETEMEDIATOR_HPP_

#include "AbstractMediator.hpp"

class ConcreteMediator : public AbstractMediator
{
public:

	explicit ConcreteMediator(AbstractProduct*& abstract_product1, AbstractProduct*& abstract_product2);
	virtual ~ConcreteMediator();

	void notify_operation1(AbstractProduct* const abstract_product_sender) override;

};

#endif

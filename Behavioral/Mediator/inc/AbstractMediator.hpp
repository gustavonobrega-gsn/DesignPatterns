#ifndef ABSTRACTMEDIATOR_HPP
#define ABSTRACTMEDIATOR_HPP

#include "AbstractProduct.hpp"

class AbstractMediator
{
public:

	explicit AbstractMediator(AbstractProduct*& abstract_product1, AbstractProduct*& abstract_product2);
	virtual ~AbstractMediator();

	virtual void notify_operation1(AbstractProduct* const abstract_product_sender) = 0;

protected:

	AbstractProduct*& m_abstract_product1;
	AbstractProduct*& m_abstract_product2;

};

#endif

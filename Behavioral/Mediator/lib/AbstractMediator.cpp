#include "../inc/AbstractMediator.hpp"

AbstractMediator::AbstractMediator(AbstractProduct*& abstract_product1, AbstractProduct*& abstract_product2)
:m_abstract_product1(abstract_product1),m_abstract_product2(abstract_product2)
{

}

AbstractMediator::~AbstractMediator()
{

}



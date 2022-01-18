#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

class AbstractMediator;

class AbstractProduct
{
public:

	explicit AbstractProduct(AbstractMediator* const abstract_mediator);
	virtual ~AbstractProduct();

	virtual void operation1() = 0;
	virtual void operation2() = 0;

protected:

	AbstractMediator* m_abstract_mediator;

};

#endif

#ifndef CONCRETECOMMANDA_HPP
#define CONCRETECOMMANDA_HPP

#include "AbstractCommand.hpp"
#include "Product.hpp"

class ConcreteCommandA : public AbstractCommand
{
public:

	explicit ConcreteCommandA(Product* const product);
	virtual ~ConcreteCommandA();

	void operation() const override;

private:
	Product* m_product;

};

#endif

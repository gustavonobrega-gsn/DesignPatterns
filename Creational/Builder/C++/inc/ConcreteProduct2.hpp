#ifndef CONCRETEPRODUCT2_HPP
#define CONCRETEPRODUCT2_HPP

#include "AbstractProduct.hpp"

class ConcreteProduct2 : public AbstractProduct
{
public:

	ConcreteProduct2();
	virtual ~ConcreteProduct2();

	void step_a_1() override;
	void step_a_2() override;
	void step_b_1() override;
	void step_b_2() override;
	void step_c_1() override;
	void step_c_2() override;

};

#endif

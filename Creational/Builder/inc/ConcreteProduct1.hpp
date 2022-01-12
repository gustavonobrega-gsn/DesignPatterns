#ifndef CONCRETEPRODUCT1_HPP
#define CONCRETEPRODUCT1_HPP

#include "AbstractProduct.hpp"

class ConcreteProduct1 : public AbstractProduct
{
public:

	ConcreteProduct1();
	virtual ~ConcreteProduct1();

	void step_a_1() override;
	void step_a_2() override;
	void step_b_1() override;
	void step_b_2() override;
	void step_c_1() override;
	void step_c_2() override;

};

#endif

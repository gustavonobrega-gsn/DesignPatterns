#ifndef CONCRETEBUILDER2_HPP
#define CONCRETEBUILDER2_HPP

#include "AbstractBuilder.hpp"

class ConcreteBuilder2 : public AbstractBuilder
{
public:

	ConcreteBuilder2();
	virtual ~ConcreteBuilder2();

	void reset() override;
	void build_step_a() override;
	void build_step_b() override;
	void build_step_c() override;
};

#endif

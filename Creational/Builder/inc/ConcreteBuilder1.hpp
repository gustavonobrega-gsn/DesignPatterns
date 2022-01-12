#ifndef CONCRETEBUILDER1_HPP
#define CONCRETEBUILDER1_HPP

#include "AbstractBuilder.hpp"

class ConcreteBuilder1 : public AbstractBuilder
{
public:

	ConcreteBuilder1();
	virtual ~ConcreteBuilder1();

	void reset() override;
	void build_step_a() override;
	void build_step_b() override;
	void build_step_c() override;
};

#endif

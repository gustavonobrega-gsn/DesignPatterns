#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

#include <set>
#include <string>

class AbstractProduct
{
public:

	virtual ~AbstractProduct();

	void operation() const;

	virtual void step_a_1() = 0;
	virtual void step_a_2() = 0;
	virtual void step_b_1() = 0;
	virtual void step_b_2() = 0;
	virtual void step_c_1() = 0;
	virtual void step_c_2() = 0;

protected:
	std::set<std::string> m_string_set;
};

#endif

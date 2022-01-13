#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

#include <string>

class AbstractProduct
{
public:

	virtual ~AbstractProduct();

	virtual AbstractProduct* clone() const = 0;
	void operation() const;
	void set_cloned_from(const AbstractProduct* cloned_from_address);

protected:
	std::string m_name;
	const AbstractProduct* m_cloned_from;
};

#endif

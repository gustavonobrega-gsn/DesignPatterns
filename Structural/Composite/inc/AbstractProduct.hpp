#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

#include <string>

class AbstractProduct
{
public:

	AbstractProduct(const std::string name);
	virtual ~AbstractProduct();

	virtual void operation(std::string str) const = 0;

	std::string get_name() const;

private:
	std::string m_name;
};

#endif

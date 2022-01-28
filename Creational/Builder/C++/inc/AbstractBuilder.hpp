#ifndef ABSTRACTBUILDER_HPP
#define ABSTRACTBUILDER_HPP

#include "AbstractProduct.hpp"

#include <memory>

class AbstractBuilder
{
public:

	virtual ~AbstractBuilder();

	virtual std::shared_ptr<AbstractProduct> get_product() const;
	virtual void reset() = 0;
	virtual void build_step_a() = 0;
	virtual void build_step_b() = 0;
	virtual void build_step_c() = 0;

protected:
	std::shared_ptr<AbstractProduct> m_product;
};

#endif

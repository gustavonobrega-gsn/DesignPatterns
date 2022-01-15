#ifndef PRODUCTIMPL_HPP
#define PRODUCTIMPL_HPP

class ProductImpl
{
public:

	virtual ~ProductImpl();

	void operation() const;

private:

	ProductImpl();

	friend class Product;
};

#endif

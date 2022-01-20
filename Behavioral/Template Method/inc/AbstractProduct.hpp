#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

class AbstractProduct
{
public:

	virtual ~AbstractProduct();

	void template_method() const;

private:

	virtual void operation1() const = 0;
	void operation2() const;
	virtual void operation3() const;

};

#endif

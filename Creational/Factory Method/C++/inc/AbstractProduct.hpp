#ifndef ABSTRACTPRODUCT_HPP
#define ABSTRACTPRODUCT_HPP

class AbstractProduct
{
public:

	virtual ~AbstractProduct(){}
	
	virtual void operation() const = 0;

};

#endif

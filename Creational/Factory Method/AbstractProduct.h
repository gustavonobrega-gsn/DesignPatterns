#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

class AbstractProduct
{
public:
	virtual ~AbstractProduct(){}
	
	virtual void operation() const = 0;
};

#endif

#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

class AbstractProduct
{
public:
	virtual ~AbstractProduct(){}
	
	virtual void operation() = 0;
};

#endif
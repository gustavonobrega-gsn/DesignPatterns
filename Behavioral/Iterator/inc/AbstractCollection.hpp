#ifndef ABSTRACTCOLLECTION_HPP
#define ABSTRACTCOLLECTION_HPP

#include "AbstractIterator.hpp"

template<class T>
class AbstractCollection
{
public:

	virtual ~AbstractCollection(){}

	virtual void add(T t) = 0;
	virtual T at(int index) const = 0;
	virtual int size() const = 0;

	virtual AbstractIterator<T>* begin() = 0;
	virtual AbstractIterator<T>* end() = 0;


};

#endif

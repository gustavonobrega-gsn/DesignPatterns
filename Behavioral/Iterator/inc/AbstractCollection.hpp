#ifndef ABSTRACTCOLLECTION_HPP
#define ABSTRACTCOLLECTION_HPP

#include "AbstractIterator.hpp"

template<class T>
class AbstractCollection
{
public:

	virtual ~AbstractCollection(){}

	virtual AbstractIterator<T>* create_Iterator() = 0;
	virtual void add(T t) = 0;
	virtual T get_at(int index) const = 0;
	virtual int get_size() const = 0;

};

#endif

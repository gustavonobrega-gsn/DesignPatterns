#ifndef ABSTRACTITERATOR_HPP
#define ABSTRACTITERATOR_HPP

template <class T>
class AbstractIterator
{
public:

	virtual ~AbstractIterator(){}

	virtual void operator++(const int value) = 0;
	virtual bool operator!=(const AbstractIterator<T>& abstract_iterator) = 0;

	virtual void reset() = 0;
	virtual T get() const = 0;

};

#endif

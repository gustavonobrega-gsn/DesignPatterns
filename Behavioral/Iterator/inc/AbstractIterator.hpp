#ifndef ABSTRACTITERATOR_HPP
#define ABSTRACTITERATOR_HPP

template <class T>
class AbstractIterator
{
public:

	virtual ~AbstractIterator(){}

	virtual void reset() = 0;
	virtual void next() = 0;
	virtual T get() const = 0;
	virtual bool ended() const = 0;

};

#endif

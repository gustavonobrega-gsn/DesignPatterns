#ifndef CONCRETEITERATOR_HPP
#define CONCRETEITERATOR_HPP

#include "AbstractIterator.hpp"
#include "AbstractCollection.hpp"

#include <iostream>

template <class T>
class ConcreteIterator : public AbstractIterator<T>
{
public:

	ConcreteIterator(AbstractCollection<T>* abstract_collection, int index)
	:m_abstract_collection(abstract_collection),m_current_index(index)
	{

	}

	virtual ~ConcreteIterator()
	{

	}

	void operator++(const int value) override
	{
		m_current_index++;
	}

	bool operator!=(const AbstractIterator<T>& abstract_iterator) override
	{
		const ConcreteIterator<T>* concrete_iterator = dynamic_cast<const ConcreteIterator<T>*>(&abstract_iterator);

		if(concrete_iterator == nullptr)
		{
			return true;
		}

		return ( (m_abstract_collection != concrete_iterator->m_abstract_collection) || (m_current_index != concrete_iterator->m_current_index) );
	}

	void reset() override
	{
		m_current_index = 0;
	}

	T get() const override
	{
		return m_abstract_collection->at(m_current_index);
	}

private:

	AbstractCollection<T>* m_abstract_collection;
	int m_current_index;
};

#endif

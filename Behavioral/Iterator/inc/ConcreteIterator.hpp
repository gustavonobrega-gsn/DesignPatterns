#ifndef CONCRETEITERATOR_HPP
#define CONCRETEITERATOR_HPP

#include "AbstractIterator.hpp"
#include "AbstractCollection.hpp"

template <class T>
class ConcreteIterator : public AbstractIterator<T>
{
public:

	ConcreteIterator(AbstractCollection<T>* abstract_collection)
	:m_abstract_collection(abstract_collection),m_current_index(0)
	{

	}

	virtual ~ConcreteIterator()
	{

	}

	void reset() override
	{
		m_current_index = 0;
	}

	void next() override
	{
		if(!ended())
		{
			m_current_index++;
		}
	}

	T get() const override
	{
		return m_abstract_collection->get_at(m_current_index);
	}

	bool ended() const override
	{
		return m_current_index >= m_abstract_collection->get_size();
	}


private:

	AbstractCollection<T>* m_abstract_collection;
	int m_current_index;
};

#endif

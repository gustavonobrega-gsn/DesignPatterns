#ifndef CONCRETECOLLECTION_HPP
#define CONCRETECOLLECTION_HPP

#include "AbstractCollection.hpp"
#include "ConcreteIterator.hpp"

#include <vector>

template<class T>
class ConcreteCollection : public AbstractCollection<T>
{
public:

	ConcreteCollection()
	{

	}

	virtual ~ConcreteCollection()
	{

	}

	void add(T t) override
	{
		m_elements.push_back(t);
	}

	T at(int index) const override
	{
		return m_elements.at(index);
	}

	int size() const override
	{
		return m_elements.size();
	}

	AbstractIterator<T>* begin() override
	{
		return new ConcreteIterator<T>(this,0);
	}

	AbstractIterator<T>* end() override
	{
		return new ConcreteIterator<T>(this,size());
	}

private:

	std::vector<T> m_elements;
};

#endif

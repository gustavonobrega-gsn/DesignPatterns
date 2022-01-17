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

	AbstractIterator<T>* create_Iterator() override
	{
		return new ConcreteIterator<T>(this);
	}

	void add(T t) override
	{
		m_elements.push_back(t);
	}

	T get_at(int index) const override
	{
		return m_elements.at(index);
	}

	int get_size() const override
	{
		return m_elements.size();
	}

private:

	std::vector<T> m_elements;
};

#endif

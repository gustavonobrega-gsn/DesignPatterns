#ifndef ABSTRACTMEMENTO_HPP
#define ABSTRACTMEMENTO_HPP

#include <string>

class AbstractMemento
{
public:

	virtual ~AbstractMemento(){}

	virtual std::string get_state() const = 0;
};

#endif

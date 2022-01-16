#ifndef ABSTRACTCOMMAND_HPP
#define ABSTRACTCOMMAND_HPP

class AbstractCommand
{
public:

	virtual ~AbstractCommand(){}

	virtual void operation() const = 0;

};

#endif

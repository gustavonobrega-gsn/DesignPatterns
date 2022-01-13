#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton
{
public:
	static Singleton& get_instance();

	void operation() const;

private:
	Singleton();
	virtual ~Singleton();
	Singleton(const Singleton&);
	void operator=(const Singleton&);
};

#endif

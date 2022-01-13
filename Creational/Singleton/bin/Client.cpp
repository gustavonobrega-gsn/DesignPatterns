#include "../inc/Singleton.hpp"

void check_singleton_on_function()
{
	Singleton::get_instance().operation();
}

int main() {

	Singleton::get_instance().operation();

	{
		Singleton::get_instance().operation();
	}

	check_singleton_on_function();

	return 0;
}

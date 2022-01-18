#include "../inc/Originator.hpp"
#include "../inc/CareTaker.hpp"

#include <iostream>

int main()
{
	Originator* originator = new Originator();
	CareTaker* caretaker = new CareTaker(originator);

	originator->set_state("1");
	caretaker->save_state();
	std::cout << "current state: " << originator->get_state() << std::endl;

	originator->set_state("2");
	caretaker->save_state();
	std::cout << "current state: " << originator->get_state() << std::endl;

	originator->set_state("3");
	std::cout << "current state: " << originator->get_state() << std::endl;

	caretaker->undo();
	std::cout << "current state: " << originator->get_state() << std::endl;

	caretaker->undo();
	std::cout << "current state: " << originator->get_state() << std::endl;

	caretaker->undo();
	std::cout << "current state: " << originator->get_state() << std::endl;

	originator->set_state("4");
	caretaker->save_state();
	std::cout << "current state: " << originator->get_state() << std::endl;

	originator->set_state("5");
	std::cout << "current state: " << originator->get_state() << std::endl;

	caretaker->undo();
	std::cout << "current state: " << originator->get_state() << std::endl;

	delete caretaker;
	delete originator;


	return 0;
}

#include "Harl.hpp"

enum levelState
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*actions[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complaints[4] = {"DEBUG", "INFO", "WARNING",  "ERROR"};
	size_t i = 0;

	for (; i < complaints->size(); i++)
	{
		if (complaints[i] == level)
			break;
	}

	switch (i)
	{
		case DEBUG:
			std::cout << "DEBUG" << std::endl;
			(this->*actions[DEBUG])();
		case INFO:
			std::cout << "INFO" << std::endl;
			(this->*actions[INFO])();
		case WARNING:
			std::cout << "WARNING" << std::endl;
			(this->*actions[WARNING])();
		case ERROR:
			std::cout << "ERROR" << std::endl;
			(this->*actions[ERROR])();
			break;
		default:
			std::cout << "Enter a valid complaint level noob!" << std::endl;
	}
}

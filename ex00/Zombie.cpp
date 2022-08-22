#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout <<"Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " - DESTROYED!!!" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

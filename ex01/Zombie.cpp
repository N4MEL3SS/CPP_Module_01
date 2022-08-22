#include "Zombie.hpp"

int Zombie::_zombieCount = 0;

Zombie::Zombie()
{
	_zombieCount++;
	std::cout <<"Zombie " << _zombieCount  << " created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << this->_orderNum << " - DESTROYED!!!" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << this->_orderNum << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name, int num)
{
	this->_name = name;
	this->_orderNum = num + 1;
}

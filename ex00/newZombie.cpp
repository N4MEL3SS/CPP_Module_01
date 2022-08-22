#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *createZombie = new Zombie(name);
	return createZombie;
}

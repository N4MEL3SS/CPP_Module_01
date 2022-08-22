#include "Zombie.hpp"

int main()
{
	Zombie *ptrZombie;

	ptrZombie = newZombie("Shon");
	std::cout << std::endl;
	std::cout << "Say you name, please" << std::endl;
	ptrZombie->announce();
	delete ptrZombie;

	std::cout << std::endl;
	randomChump("Ben");

	return 0;
}

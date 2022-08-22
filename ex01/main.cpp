#include "Zombie.hpp"

int main()
{
	int		count = 10;
	Zombie	*horde = zombieHorde(count, "Shon");

	std::cout << std::endl;
	for (int i = 0; i < count; i++)
		horde[i].announce();

	std::cout << std::endl;
	delete[] horde;

	return 0;
}

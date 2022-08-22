#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();

	void announce();
	void setName(std::string name, int num);

private:
	std::string _name;
	int _orderNum;
	static int _zombieCount;
};

Zombie* zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP
